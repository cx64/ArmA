#include "script_component.hpp"

#define __sideangle 60	//60 -> 120 deg sector
#define __rightmin 90 - __sideangle
#define __rightmax 90 + __sideangle
#define __leftmin 270 - __sideangle
#define __leftmax 270 + __sideangle

PARAMS_2(_trigger,_list);
_mine = [_trigger] call FUNC(get_mine);
if (isNull _mine) exitwith { false };

private "_vehicle";
_vehicle = _list select 0;

"ACE_ClaymoreExplosion" createVehicle [(position _mine) select 0,(position _mine) select 1, (0.8 + ([_mine] call CBA_fnc_realHeight))];

_pos_center_x = getPos _mine;
_px = _pos_center_x select 0;
_py = _pos_center_x select 1;
_pz = _pos_center_x select 2;
_xoff = (getPos _vehicle select 0) - _px;
_yoff = (getPos _vehicle select 1) - _py;
_zoff = - _pz;
_mag = sqrt(_xoff*_xoff + _yoff*_yoff + _zoff*_zoff);
_dir = [_xoff/_mag, _yoff/_mag, _zoff/_mag];

//finding the side of the vehicle that's going to be hit - for the vehicledamage sys
_vdir = getdir _vehicle;
//dir to the mine
_a = 180 + ((_dir select 0) atan2 (_dir select 1));
if (_a < 0) then {_a = _a + 360};
_vdir = _a - _vdir;
if (_vdir < 0) then {_vdir = _vdir + 360};
_a = "ACE_SLAMSideEFP";
if (true) then {
	if (_vdir >= __leftmax || {_vdir <= __rightmin}) exitwith {_a = "ACE_SLAMSideEFP_0"};	//a=[front,left,right,back,top]
	if (_vdir > __rightmin && {_vdir < __rightmax}) exitwith {_a = "ACE_SLAMSideEFP_2"};
	if (_vdir >= __rightmax && {_vdir <= __leftmin}) exitwith {_a = "ACE_SLAMSideEFP_3"};
	if (_vdir > __leftmin && {_vdir < __leftmax}) exitwith {_a = "ACE_SLAMSideEFP_1"};
};
	
_dx = _dir select 0;
_dy = _dir select 1;
_dz = _dir select 2;
_hmag = sqrt(_dx*_dx + _dy*_dy);
_zcomp = -_dz/_hmag;
_ux = _zcomp*_dx;
_uy = _zcomp*_dy;
_uz = _hmag;
_p = _a createVehicle [_px, _py, _pz];
_p setPos [_px, _py, _pz + 0.8];
_p setVectorDir _dir;
_p setVectorUp [_ux,_uy,_uz];
_p setVelocity [(_dir select 0) * 300, (_dir select 1) * 300, (_dir select 2) * 300];
[_mine] call FUNC(removeMine);