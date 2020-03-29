#include "script_component.hpp"

// Randomize wind
[] remoteExec ["3 setWindDir random 359; 3 setWindStr random 1", 2];

private _position = player getPos [100 * sqrt random 1, random 360];
_position set [2, 75];
TRACE_1("",_position);

private _parachute = createVehicle ["NonSteerable_Parachute_F", _position, [], 0, "FLY"];
private _ammoBox = createVehicle ["Box_Syndicate_Ammo_F", [0, 0, 0], [], 0, "NONE"];

clearItemCargoGlobal _ammoBox;
clearMagazineCargoGlobal _ammoBox;
clearWeaponCargoGlobal _ammoBox;
clearBackpackCargoGlobal _ammoBox;

_ammoBox allowDamage false;
_ammoBox attachTo [_parachute, [0, 0, -1.3]];

private _primaryWpn = primaryWeapon player;
TRACE_1("",_primaryWpn);

if (_primaryWpn != "") then {
    private _primaryMags = [_primaryWpn, false] call CBA_fnc_compatibleMagazines;
    TRACE_1("",_primaryMags);

    for "_i" from 0 to 5 do {
        private _selectedPrimaryMag = _primaryMags select (floor (random ((count _primaryMags) - 1)));
        TRACE_1("",_selectedPrimaryMag);

        _ammoBox addItemCargoGlobal [_selectedPrimaryMag, 10];
    };
};

private _secondaryWpn = secondaryWeapon player;
private _blackSecondaries = ["", "CUP_launch_M136", "CUP_launch_NLAW", "CUP_launch_RPG18", "CUP_launch_M72A6", "CUP_launch_M72A6_Special", "CUP_launch_M72A6_Used", "rhs_weap_rpg26", "rhs_weap_rshg2", "rhs_weap_M136", "rhs_weap_M136_hedp", "rhs_weap_M136_hp", "rhs_weap_m72a7", "rhs_weap_panzerfaust60", "rhs_weap_rpg75", "rhs_weap_m80"];
TRACE_1("",_secondaryWpn);

if !(_secondaryWpn in _blackSecondaries) then {
    private _secondaryMags = [_secondaryWpn, false] call CBA_fnc_compatibleMagazines;
    TRACE_1("",_secondaryMags);

    for "_i" from 0 to 5 do {
        private _selectedSecondaryMag = _secondaryMags select (floor (random ((count _secondaryMags) - 1)));
        TRACE_1("",_selectedSecondaryMag);

        _ammoBox addItemCargoGlobal [_selectedSecondaryMag, 10];
    };
} else {
    if (_secondaryWpn != "") then {
        _ammoBox addItemCargoGlobal [_secondaryWpn, 5];
    };
};

private _handgunWeapon = handgunWeapon player;
private _blacklistedHandguns = ["", "rhs_weap_rsp30_white", "rhs_weap_rsp30_green", "rhs_weap_rsp30_red", "rhs_weap_tr8"];
TRACE_1("",_handgunWeapon);

if !(_handgunWeapon in _blacklistedHandguns) then {
    private _handgunMagazines = [_handgunWeapon, false] call CBA_fnc_compatibleMagazines;
    TRACE_1("",_handgunMagazines);

    for "_i" from 0 to 5 do {
        private _selectedhandgunMag = _handgunMagazines select (floor (random ((count _handgunMagazines) - 1)));
        TRACE_1("",_selectedhandgunMag);

        _ammoBox addItemCargoGlobal [_selectedhandgunMag, 5];
    };
} else {
    if (_handgunWeapon != "") then {
        _ammoBox addItemCargoGlobal [_handgunWeapon, 5];
    };
};

private _miscItems = ["FirstAidKit", "HandGrenade", "rhs_weap_M136", "Chemlight_blue", "SmokeShell", "DemoCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "ACE_Clacker", "UGL_FlareWhite_F"];
{
    _ammoBox addItemCargoGlobal [_x, 30];
} forEach _miscItems;

private _smokeShell = selectRandom ["SmokeShellYellow", "SmokeShellRed", "SmokeShellBlue", "SmokeShellGreen", "SmokeShellOrange"];
private _smoke = createVehicle [_smokeShell, [0, 0, 0], [], 0, "NONE"];

_smoke attachTo [_parachute, [0, 0, 0]];

[
    {getPos (_this #0) #2 < 1.5},
    {[(_this #0),(_this #1)] call FUNC(detachCrate);},
    [_ammoBox, _parachute],
    45,
    {[(_this #0),(_this #1)] call FUNC(detachCrate);}
] call CBA_fnc_waitUntilAndExecute;

[["\a3\ui_f_orange\data\cfgtasktypes\airdrop_ca.paa"], ["Supply drop incoming."]] call CBA_fnc_notify;
