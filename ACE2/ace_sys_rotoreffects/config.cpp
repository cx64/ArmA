class CfgPatches
{
	class ace_sys_rotoreffects
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.62;
		requiredAddons[]=
		{
			"Extended_EventHandlers",
			"ace_main",
			"ace_sys_goggles",
			"ace_fx"
		};
		version="1.14.0.597";
		author[]=
		{
			"Rocko",
			"Xeno"
		};
	};
};
class CfgSounds
{
	class ACE_TailRotorShredding
	{
		name="ACE_TailRotorShredding";
		sound[]=
		{
			"\x\ace\addons\sys_rotoreffects\sound\shred.ogg",
			1,
			1
		};
		titles[]={};
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_sys_rotoreffects
	{
		init="call ('\x\ace\addons\sys_rotoreffects\XEH_preInit.sqf' call SLX_XEH_COMPILE)";
	};
};
class Extended_Engine_EventHandlers
{
	class Helicopter
	{
		class ace_sys_rotoreffects
		{
			engine="if (local (_this select 0)) then {_this call ace_sys_rotoreffects_fnc_rocko_engine}";
			exclude[]=
			{
				"Ka137_Base_PMC",
				"ParachuteBase"
			};
		};
	};
	class Plane
	{
		class ace_sys_rotoreffects
		{
			engine="if (local (_this select 0)) then {_this call ace_sys_rotoreffects_fnc_rocko_engine}";
			exclude[]=
			{
				"BIS_Steerable_Parachute"
			};
		};
	};
};
class CfgVehicles
{
	class Helicopter;
	class Ka60_Base_PMC: Helicopter
	{
		ace_sys_rotoreffects_disable_manshred=1;
	};
	class CH47_base_EP1: Helicopter
	{
		ace_sys_rotoreffects_disable_manshred=1;
	};
};