#include "script_component.hpp"

/*
 * Author: Kingsley
 * Randomizes the environment
 * Must be called from the server
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call mars_environment_fnc_randomizeEnvironment;
 *
 * Public: Yes
 * https://github.com/marseditor/mars/blob/00167a8739dbf1f3aae00d1914a6bba70a3f5764/addons/environment/functions/fnc_randomizeEnvironment.sqf
*/

private _date = [random [1982, 2000, 2020], random [1, 6, 12], random [1, 15, 30], random [0, 16, 24], random [0, 30, 59]];
private _hour = _date select 3;
private _isFullMoon = false;

if (_hour > 18 || _hour < 6) then {
    _isFullMoon = true;
    _date = selectRandom ([_date select 0] call FUNC(getFullMoonDates));
    TRACE_1("",_date);
};

setDate _date;
0 setFog 0;

private _overcast = [random [0, 0.5, 1], 0] select _isFullMoon;

skipTime -24;
86400 setOvercast _overcast;
skipTime 24;

0 setFog [random [0, 0.033, 0.1], random [0, 0.0066, 0.015], random [0, 10, 200]];
0 setWaves random 1;
0 setRain random 1;

simulWeatherSync;
forceWeatherChange;
