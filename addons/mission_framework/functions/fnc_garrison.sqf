#include "script_component.hpp"
/*
 * Author: R3vo, Neviothr
 * Garrison one or multiple buildings and bunkers in the area.
 *
 * Arguments:
 * None.
 * At least 1 unit must be selected in 3den.
 *
 * Return Value:
 * None.
 *
 * Example:
 * call nev_mission_framework_fnc_garrison
 *
 * Public: No
 * Based on:
 * https://github.com/R3voA3/3den-Enhanced/blob/4935419b4f20054ff4325f64db143b32606ecd7f/3denEnhanced/functions/GUI/garrison/fn_garrison_garrison.sqf
*/

_fnc_all3DENSelected = {
    params [["_whiteList", ["Object", "Logic", "Trigger", "Marker"], [[]]]];
    private _return = [];

    {
        _return = _return + get3DENSelected _x;
    } forEach _whiteList;

    _return
};

private _selectedObjects = [["Object", "Logic", "Trigger", "Marker"]] call _fnc_all3DENSelected;
private _center = (uiNamespace getVariable "bis_fnc_3DENEntityMenu_data") select 0;
_center set [2, 0];

// TODO - find a better way to find all occupiable buildings.
private _buildings = _center nearObjects ["House", 200];
_buildings = _buildings + (_center nearObjects ["Strategic", 200]);

private _positions = [];

#define BUILDINGPOS (_x buildingPos -1)
{
    for "_i" from 0 to (count BUILDINGPOS - 1) step 2 do {
        _positions pushBack (_x buildingPos _i);
    };

    false;
} count _buildings;

collect3DENHistory {
    {
        private _randomPosition = selectRandom _positions;
        _positions = _positions - [_randomPosition];

        if (count _positions == 0) exitWith {[localize "Not enough empty building positions.", 1] call BIS_fnc_3DENNotification};

        if (surfaceIsWater _randomPosition) then {
            _x set3DENAttribute ["position", ASLToATL _randomPosition];
        } else {
            _x set3DENAttribute ["position", _randomPosition];
        };

        _x set3DENAttribute ["unitPos", 3];
        _x set3DENAttribute ["rotation", [0, 0, random 360]];
        _x set3DENAttribute ["init", "this disableAI 'PATH'"];
    } forEach _selectedObjects;
};
