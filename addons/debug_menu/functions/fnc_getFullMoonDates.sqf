#include "script_component.hpp"

params [["_year", 2016, [0]]];
TRACE_1("",_year);

private _fullMoonPhase = 1;
private _day = 0.00273972602; // 1 / 365
private _waxing = false;
private _fullMoonDates = [];

for "_i" from -_day to dateToNumber [_year, 12, 31, 23, 59] step _day do {
    private _date = numberToDate [_year, _i];
    private _phase = moonPhase _date;
    TRACE_2("",_date,_phase);

    if (_phase > _fullMoonPhase) then {
        _waxing = true;
    };

    if (_waxing) then {
        _waxing = false;
        _fullMoonDates pushBack _date;
    };

    _fullMoonPhase = _phase;
};

TRACE_1("",_fullMoonDates);
_fullMoonDates
