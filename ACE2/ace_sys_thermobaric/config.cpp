class CfgPatches
{
	class ace_sys_thermobaric
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.62;
		requiredAddons[]=
		{
			"Extended_EventHandlers",
			"ace_main"
		};
		version="1.14.0.581";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_sys_thermobaric
	{
		clientInit="call ('\x\ace\addons\sys_thermobaric\XEH_preClientInit.sqf' call SLX_XEH_COMPILE)";
	};
};
class Extended_FiredBIS_EventHandlers
{
	class ALLVehicles
	{
		ace_sys_thermobaric="if (local (_this select 0)) then { if (getNumber(configfile>>'cfgAmmo'>>(_this select 4)>>'ace_thermobaric')==1) then {if (isdedicated) then {_this call ace_sys_thermobaric_fnc_fired} else {_this call ace_sys_thermobaric_fnc_firedPFH}}};";
	};
};
class CfgAmmo
{
	class Bulletbase;
	class ace_at_tracker: Bulletbase
	{
		timetolive=0.40000001;
		explosive=0;
		airfriction=0;
		hit=1;
		indirecthit=0;
		deflecting=179;
		caliber=0;
	};
};