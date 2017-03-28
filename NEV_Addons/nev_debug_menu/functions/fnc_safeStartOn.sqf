#include "script_component.hpp"

if (hasInterface) then {
	isSafeStart = true;
	private _safeStartLoop = 1;

	ssDelManProj = player addEventHandler ["Fired", {deleteVehicle (_this select 6);}];
	if (vehicle player != player && {player in [gunner vehicle player, driver vehicle player, commander vehicle player]}) then {
		ssDelVehProj = [(vehicle player), (vehicle player) addEventHandler ["Fired", {deleteVehicle (_this select 6);}]];
	};
	player allowDamage false;

	while {isSafeStart} do {
		uiSleep 60;
		if !(isSafeStart) exitWith {};

		hint format ["Weapons are cold, wait for admin to trigger start. (%1 minute(s) since briefing stage started)", _safeStartLoop];
		systemChat format ["[SafeStart] Weapons are cold, wait for admin to trigger start. (%1 minute(s) since briefing stage started)", _safeStartLoop];

		_safeStartLoop = _safeStartLoop + 1;
	};
};