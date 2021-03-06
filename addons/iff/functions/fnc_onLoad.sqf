#include "script_component.hpp"

/*
 * Author: Neviothr
 * Handle loading of IFF dialog - creation of center position to offset unit placement from,
 * create an invisible orb to point camera at, lighting and camera creation,
 * reduction of view distance and population of listboxes.
 *
 * Arguments:
 * IFF display <DISPLAY>
 *
 * Return Value:
 * None.
 *
 * Example:
 * onLoad = "call nev_iff_fnc_onLoad"
 *
 * Public: No
*/

params ["_dialog"];

TRACE_1("",_dialog);

GVAR(iffUnits) = [];

// Logic
private _logicCenterPos = [10000, 10000, 10000];

GVAR(logicCenter) = createAgent ["Logic", _logicCenterPos, [], 0, "none"];
GVAR(logicCenter) setPos _logicCenterPos;
GVAR(logicCenter) setDir 180;

private _target = createAgent ["Logic", _logicCenterPos, [], 0, "none"];
_target setPos _logicCenterPos;

// Debug orb
GVAR(orb) = "Sign_Arrow_Blue_F" createVehicleLocal getPos GVAR(logicCenter);
GVAR(orb) attachTo [GVAR(logicCenter), [0, 0, 1]];
GVAR(orb) hideObject true;

GVAR(light) = "#lightpoint" createVehicleLocal getPos GVAR(logicCenter);
GVAR(light) setLightBrightness 0.35;
GVAR(light) setLightAmbient [1, 1, 1];
GVAR(light) setLightColor [1, 1, 1];

// Camera
setViewDistance 1;
GVAR(camera) = "camera" camCreate getPos GVAR(logicCenter);
GVAR(camera) cameraEffect ["internal","back"];
GVAR(camera) camPrepareFocus [-1,-1];
GVAR(camera) camCommitPrepared 0;
GVAR(camera) camSetTarget GVAR(orb);
GVAR(camera) camSetPos [getPos GVAR(orb) select 0, (getPos GVAR(orb) select 1) - 3, (getPos GVAR(orb) select 2) + 1];
GVAR(camera) camCommit 0;
cameraEffectEnableHUD true;
showCinemaBorder false;

private _sides = call FUNC(getSides);
private _sideBox = _dialog displayCtrl IDC_iffSideCombo;

{
    _sideBox lbAdd str _x;
} forEach _sides;
