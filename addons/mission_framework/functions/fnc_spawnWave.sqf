#include "script_component.hpp"

/*
 * Name: TMF_ai_fnc_spawnWave
 * Author: Head, Snippers
 *
 * Arguments:
 * 0: TMF WaveSpawner logic
 *
 * Return:
 * N/A
 *
 * Description:
 * Handles spawning units
 * https://github.com/TMF3/TMF/blob/master/addons/ai/functions/fn_spawnWave.sqf
*/

params ["_logic"];

TRACE_1("",_logic);

private _spawnedVehicles = [];
private _spawnedGroups = [];
private _data = _logic getVariable [QGVAR(waveData), []];

_data params ["_groups", "_vehicles"];

{
    _x params ["_type", "_pos", "_dir", "_custom", "_pylons"];
    private _formationType = "NONE";

    if ((_pos select 2) > 3) then {
        _formationType = "FLY";
    };

    private _vehicle = createVehicle [_type, [0,0,0], [], 0, _formationType];

    _vehicle setPosATL _pos;
    _vehicle setDir _dir;
    [_vehicle, _custom select 0, _custom select 1] spawn BIS_fnc_initVehicle;

    if (count _pylons > 0) then {
        private _pylonPaths = (configProperties [configFile >> "CfgVehicles" >> typeOf _vehicle >> "Components" >> "TransportPylonsComponent" >> "Pylons", "isClass _x"]) apply {getArray (_x >> "turret")};

        {
            _vehicle removeWeaponGlobal getText (configFile >> "CfgMagazines" >> _x >> "pylonWeapon")
        } forEach getPylonMagazines _vehicle;

        {
            _vehicle setPylonLoadout [_forEachIndex + 1, _x, true, _pylonPaths select _forEachIndex]
        } forEach _pylons;
    };

    _spawnedVehicles pushBack _vehicle;
} forEach _vehicles;

{
    _x params ["_side", "_units", "_waypoints"];

    private _grp = createGroup [_side, true]; // Delete group when empty

    {
        _x params ["_type", "_pos", "_dir", "_gear", "_vehicleIndex", "_vehicleRole"];
        private _unit = _grp createUnit [_type, [0, 0, 0],[] , 0, "NONE"];

        _unit setPosATL _pos;
        _unit setUnitLoadout [_gear, false];
        _unit setDir _dir;

        if (_vehicleIndex >= 0) then {
            private _vehicle = _spawnedVehicles # _vehicleIndex;

            _vehicleRole params ["_role", "_path"];
            _role = toLower _role;

            switch (_role) do {
                case "driver": {
                    _unit assignAsDriver _vehicle;
                    _unit moveInDriver _vehicle;
                };

                case "cargo": {
                    if (isNil "_path") then {
                        _unit assignAsCargo _vehicle;
                        _unit moveInCargo _vehicle;
                    } else {
                        if (_path isEqualType []) then {
                            _unit assignAsTurret [_vehicle, _path];
                            _unit moveInTurret [_vehicle, _path];
                        } else {
                            _unit assignAsCargoIndex [_vehicle, _path];
                            _unit moveInCargo [_vehicle, _path];
                        };
                    };
                };

                case "turret": {
                    _unit assignAsTurret [_vehicle, _path];
                    _unit moveInTurret [_vehicle, _path];
                };
            };
        };

    } forEach _units;

    (units _grp) join _grp;
    _lastIndex = (count waypoints _grp) - 1;
    [_grp] call CBA_fnc_clearWaypoints;

    {
        [_grp, _forEachIndex + 1, _x] call FUNC(deserializeWaypoint);
    } forEach _waypoints;

    if ((count waypoints _grp) > 1) then {
        _grp setCurrentWaypoint [_grp, 1]; // skip the next one okeyyo..
    };

    _spawnedGroups pushBack _grp;
} forEach _groups;

_wave = _logic getVariable [QGVAR(waves), 1];
_logic setVariable [QGVAR(waves), (_wave - 1)];
_handlers = _logic getVariable [QGVAR(handlers), []];

{
    if (_x isEqualType {}) then {
        [_wave, _spawnedGroups] call _x;
    };
} forEach _handlers;

// Issue a rush task to all spawned groups if Lambs Danger.fsm is loaded.
if (isClass (configFile >> "CfgPatches" >> "lambs_main")) then {
    {
        [_x, sqrt ((worldSize ^ 2) + (worldSize ^ 2))] spawn lambs_wp_fnc_taskRush;
    } forEach _spawnedGroups;
};

// Check if there is another wave
if (_logic getVariable [QGVAR(waves), 1] > 0) then {

    // Check if we need to wait for them to die
    if (_logic getVariable [QGVAR(whenDead), false]) then {
        [
            {{{alive _x} count (units _x) > 0 } count (_this select 1) <= 0},
            FUNC(spawnWave),
            [_logic, _spawnedGroups]
        ] call CBA_fnc_waitUntilAndExecute;
    } else { // Otherwise spawn the wave after sleeping for some time
        [
            FUNC(spawnWave),
            [_logic],
            _logic getvariable [QGVAR(time), 10]
        ] call CBA_fnc_waitAndExecute;
    };
};
