#include "script_component.hpp"

/*
 * Author: Cyruz143
 * Adds a magazine of the same kind a unit has loaded to its inventroy, AI only.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Weapon <STRING>
 * 2: Muzzle <STRING>
 * 3: New magazine <ARRAY OF STRINGS>
 *
 * Return Value:
 * None
 *
 * Example:
 * aiUnit addEventHandler ["Reloaded", {_this call nev_ai_reloads_fnc_manReloadedEH}];
 *
 * Public: No
 * https://github.com/Cyruz143/ark_inhouse/blob/master/addons/ark_ai_reloads/server_postinit.sqf
*/

params ["_unit", "_weapon", "_muzzle", "_newMagazine"];

if (isPlayer _unit) exitWith {};
if (_muzzle != _weapon) exitWith {};
if (_weapon in ["throw", "put"]) exitWith {};

if (currentWeapon _unit isEqualTo primaryWeapon _unit) then {
    _unit addMagazine (_newMagazine #0);
};
