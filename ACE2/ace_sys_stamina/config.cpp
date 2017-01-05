class CfgPatches
{
	class ace_sys_stamina
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.62;
		requiredAddons[]=
		{
			"ace_main",
			"Extended_EventHandlers",
			"CAWeapons",
			"CAWeapons_AK",
			"CAWeapons_Colt1911",
			"CAweapons_ksvk",
			"CAweapons_m107",
			"CAWeapons2_RPG18",
			"CAWeapons_E",
			"CAWeapons_E_AK",
			"CAWeapons_E_fnfal",
			"CAWeapons_E_GrenadeLauncher",
			"CAWeapons_E_LeeEnfield",
			"CAWeapons_E_M110",
			"CAWeapons_E_M14",
			"CAWeapons_E_M240",
			"CAWeapons_E_M47",
			"CAWeapons_E_MAAWS",
			"CAWeapons_E_scar",
			"CAWeapons_BAF",
			"CAWeapons2",
			"CAWeapons_PMC",
			"CAWeapons_PMC_AA_12",
			"CAWeapons_PMC_XM8",
			"ace_c_weapon"
		};
		version="1.14.0.597";
		author[]=
		{
			"Rommel"
		};
	};
};
class CfgMovesBasic
{
	class Default;
	class StandBase: Default
	{
		ACE_StaminaState=-1;
	};
	class InjuredMovedBase;
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class AmovPknlMstpSlowWrflDnon;
		class AmovPknlMrunSlowWpstDf;
		class AmovPercMstpSlowWrflDnon_AmovPsitMstpSlowWrflDnon;
		class AmovPercMstpSnonWnonDnon_AmovPsitMstpSnonWnonDnon_ground;
		class SprintBaseDf: StandBase
		{
			ACE_StaminaState=1;
		};
		class AmovPercMstpSlowWrflDnon: StandBase
		{
			ACE_StaminaState=-1;
		};
		class AmovPercMstpSrasWrflDnon: AmovPercMstpSlowWrflDnon
		{
			ACE_StaminaState=-0.60000002;
		};
		class AmovPercMstpSrasWpstDnon: StandBase
		{
			ACE_StaminaState=-0.89999998;
		};
		class AmovPercMstpSnonWnonDnon: StandBase
		{
			ACE_StaminaState=-1;
		};
		class AmovPknlMstpSrasWlnrDnon: Default
		{
			ACE_StaminaState=-0.5;
		};
		class AmovPercMwlkSrasWpstDf: AmovPercMstpSrasWpstDnon
		{
			ACE_StaminaState=1;
		};
		class AmovPercMrunSrasWpstDf: AmovPercMstpSrasWpstDnon
		{
			ACE_StaminaState=1;
		};
		class AmovPercMrunSlowWpstDnon_transition;
		class AmovPknlMrunSrasWpstDf: AmovPercMrunSlowWpstDnon_transition
		{
			ACE_StaminaState=2;
		};
		class AmovPercMstpSrasWlnrDnon;
		class amovpercmwlksraswlnrdf: AmovPercMstpSrasWlnrDnon
		{
			ACE_StaminaState=1;
		};
		class AmovPknlMstpSrasWrflDnon: AmovPknlMstpSlowWrflDnon
		{
			ACE_StaminaState=1;
		};
		class AmovPpneMstpSrasWrflDnon: AmovPercMstpSrasWrflDnon
		{
			ACE_StaminaState=-2;
		};
		class AmovPknlMstpSrasWpstDnon: AmovPercMstpSrasWpstDnon
		{
			ACE_StaminaState=-2;
		};
		class AmovPpneMstpSrasWpstDnon: AmovPercMstpSrasWpstDnon
		{
			ACE_StaminaState=-2;
		};
		class AmovPpneMstpSnonWnonDnon: AmovPercMstpSnonWnonDnon
		{
			ACE_StaminaState=-2;
		};
		class AmovPercMwlkSlowWrflDf: AmovPercMstpSlowWrflDnon
		{
			ACE_StaminaState=1;
		};
		class AmovPercMrunSlowWrflDf: AmovPercMstpSlowWrflDnon
		{
			ACE_StaminaState=1;
		};
		class AmovPercMwlkSrasWrflDf: AmovPercMstpSrasWrflDnon
		{
			ACE_StaminaState=1;
		};
		class AmovPercMrunSrasWrflDf: AmovPercMstpSrasWrflDnon
		{
			ACE_StaminaState=1;
		};
		class AmovPercMwlkSnonWnonDf: AmovPercMstpSnonWnonDnon
		{
			ACE_StaminaState=1;
		};
		class AmovPercMrunSnonWnonDf: AmovPercMstpSnonWnonDnon
		{
			ACE_StaminaState=1;
		};
		class AmovPknlMrunSlowWrflDf: AmovPknlMstpSlowWrflDnon
		{
			ACE_StaminaState=1;
		};
		class AmovPknlMwlkSrasWrflDf: AmovPknlMstpSrasWrflDnon
		{
			ACE_StaminaState=2;
		};
		class AmovPknlMwlkSlowWrflDf: AmovPknlMstpSlowWrflDnon
		{
			ACE_StaminaState=2;
		};
		class amovpknlmrunsraswrfldf: AmovPknlMstpSrasWrflDnon
		{
			ACE_StaminaState=2;
		};
		class AmovPercMrunSlowWpstDf: AmovPercMrunSrasWpstDf
		{
			ACE_StaminaState=1;
		};
		class AmovPknlMwlkSrasWpstDf: AmovPknlMstpSrasWpstDnon
		{
			ACE_StaminaState=2;
		};
		class AmovPknlMrunSlowWpstDfr: AmovPknlMrunSlowWpstDf
		{
			ACE_StaminaState=1;
		};
		class AmovPercMrunSlowWlnrDf: AmovPknlMstpSrasWlnrDnon
		{
			ACE_StaminaState=1;
		};
		class AmovPknlMwlkSrasWlnrDf: AmovPknlMstpSrasWlnrDnon
		{
			ACE_StaminaState=2;
		};
		class AmovPpneMrunSlowWrflDf: AmovPpneMstpSrasWrflDnon
		{
			ACE_StaminaState=4;
		};
		class AmovPpneMsprSlowWrflDf: AmovPpneMrunSlowWrflDf
		{
			ACE_StaminaState=4;
		};
		class AmovPpneMrunSlowWpstDf: AmovPpneMstpSrasWpstDnon
		{
			ACE_StaminaState=4;
		};
		class AmovPpneMrunSnonWnonDf: AmovPpneMstpSnonWnonDnon
		{
			ACE_StaminaState=4;
		};
		class AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDl: AmovPpneMstpSrasWrflDnon
		{
			ACE_StaminaState=4;
		};
		class AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDr: AmovPpneMstpSrasWrflDnon
		{
			ACE_StaminaState=4;
		};
		class AmovPpneMstpSrasWpstDnon_AmovPpneMevaSlowWpstDl: AmovPpneMstpSrasWpstDnon
		{
			ACE_StaminaState=4;
		};
		class AmovPpneMstpSrasWpstDnon_AmovPpneMevaSlowWpstDr: AmovPpneMstpSrasWpstDnon
		{
			ACE_StaminaState=4;
		};
		class AmovPpneMstpSnonWnonDnon_AmovPpneMevaSnonWnonDl: AmovPpneMstpSnonWnonDnon
		{
			ACE_StaminaState=4;
		};
		class AmovPpneMstpSnonWnonDnon_AmovPpneMevaSnonWnonDr: AmovPpneMstpSnonWnonDnon
		{
			ACE_StaminaState=4;
		};
		class AmovPsitMstpSlowWrflDnon: AmovPercMstpSlowWrflDnon_AmovPsitMstpSlowWrflDnon
		{
			ACE_StaminaState=-2;
		};
		class AmovPsitMstpSnonWnonDnon_ground: AmovPercMstpSnonWnonDnon_AmovPsitMstpSnonWnonDnon_ground
		{
			ACE_StaminaState=-2;
		};
		class AwopPercMstpSgthWrflDnon_Start1;
		class AwopPercMstpSgthWrflDnon_Start2: AwopPercMstpSgthWrflDnon_Start1
		{
			ACE_StaminaState=0.40000001;
		};
		class AwopPercMstpSgthWrflDnon_End1;
		class AwopPercMstpSgthWrflDnon_End2: AwopPercMstpSgthWrflDnon_End1
		{
			ACE_StaminaState=0.40000001;
		};
		class AcinPercMrunSrasWrflDf: InjuredMovedBase
		{
			ACE_StaminaState=3;
		};
		class AcinPknlMstpSrasWrflDnon_AcinPercMrunSrasWrflDnon: InjuredMovedBase
		{
			ACE_StaminaState=3;
		};
		class AcinPercMstpSrasWrflDnon: AcinPknlMstpSrasWrflDnon_AcinPercMrunSrasWrflDnon
		{
			ACE_StaminaState=3;
		};
		class AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1;
		class AcinPknlMstpSrasWrflDnon: AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1
		{
			ACE_StaminaState=3;
		};
		class AcinPknlMwlkSrasWrflDb: AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1
		{
			ACE_StaminaState=3;
		};
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_sys_stamina
	{
		clientInit="call ('\x\ace\addons\sys_stamina\XEH_preClientInit.sqf' call SLX_XEH_COMPILE)";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_sys_stamina
	{
		clientInit="call ('\x\ace\addons\sys_stamina\XEH_postClientInit.sqf' call SLX_XEH_COMPILE)";
	};
};
class Extended_Killed_EventHandlers
{
	class CAManBase
	{
		class ace_sys_stamina
		{
			killedPlayer="_this call ace_sys_stamina_fnc_killed";
		};
	};
};
class CfgMagazines
{
	class Default;
	class CA_Magazine: Default
	{
		ACE_Weight=0.25;
		ACE_Size=500;
	};
	class FakeMagazine: Default
	{
	};
	class FakeWeapon: FakeMagazine
	{
	};
	class 8Rnd_9x18_Makarov: CA_Magazine
	{
		ACE_Weight=0.15000001;
	};
	class 8Rnd_9x18_MakarovSD: 8Rnd_9x18_Makarov
	{
		ACE_Weight=0.16;
	};
	class 15Rnd_9x19_M9: CA_Magazine
	{
		ACE_Weight=0.28;
	};
	class 15Rnd_9x19_M9SD: 15Rnd_9x19_M9
	{
		ACE_Weight=0.28999999;
	};
	class 17Rnd_9x19_glock17;
	class ACE_33Rnd_9x19_G18: 17Rnd_9x19_glock17
	{
		ACE_Weight=0.47999999;
	};
	class 30Rnd_9x19_MP5SD: CA_Magazine
	{
		ACE_Weight=0.52999997;
	};
	class 30Rnd_9x19_MP5: CA_Magazine
	{
		ACE_Weight=0.52999997;
	};
	class 30Rnd_9x19_UZI: CA_Magazine
	{
		ACE_Weight=0.60000002;
	};
	class 30Rnd_9x19_UZI_SD: CA_Magazine
	{
		ACE_Weight=0.60000002;
	};
	class ACE_25Rnd_1143x23_B_UMP45: 30Rnd_9x19_MP5
	{
		ACE_Weight=0.685;
	};
	class ACE_30Rnd_1143x23_B_M3: ACE_25Rnd_1143x23_B_UMP45
	{
		ACE_Weight=0.792;
	};
	class ACE_40Rnd_B_46x30_MP7: 30Rnd_9x19_MP5
	{
		ACE_WEIGHT=0.46000001;
	};
	class 7Rnd_45ACP_1911: CA_Magazine
	{
		ACE_Weight=0.2;
	};
	class 10Rnd_B_765x17_Ball: CA_Magazine
	{
		ACE_Weight=0.15000001;
	};
	class 20Rnd_B_765x17_Ball: 10Rnd_B_765x17_Ball
	{
		ACE_Weight=0.25;
	};
	class 30Rnd_545x39_AK: CA_Magazine
	{
		ACE_Weight=0.55000001;
	};
	class 30Rnd_545x39_AKSD: 30Rnd_545x39_AK
	{
		ACE_Weight=0.62;
	};
	class 75Rnd_545x39_RPK: CA_Magazine
	{
		ACE_Weight=0.81999999;
	};
	class 30Rnd_762x39_AK47: CA_Magazine
	{
		ACE_Weight=0.80000001;
	};
	class ACE_40Rnd_762x39_B_AK47: 30Rnd_762x39_AK47
	{
		ACE_Weight=1.05;
	};
	class ACE_40Rnd_762x39_T_AK47: 30Rnd_762x39_AK47
	{
		ACE_Weight=1.05;
	};
	class ACE_75Rnd_762x39_B_AK47: 30Rnd_762x39_AK47
	{
		ACE_Weight=2;
	};
	class ACE_45Rnd_545x39_B_AK: 30Rnd_545x39_AK
	{
		ACE_Weight=0.81999999;
		ACE_Size=750;
	};
	class ACE_10Rnd_762x39_B_SKS: 30Rnd_762x39_AK47
	{
		ACE_WEIGHT=0.2;
	};
	class 30Rnd_762x39_SA58: CA_Magazine
	{
		ACE_Weight=0.80000001;
	};
	class 20Rnd_556x45_Stanag: CA_Magazine
	{
		ACE_Weight=0.36000001;
	};
	class ACE_20Rnd_762x51_SB_M110: 20Rnd_556x45_Stanag
	{
		ACE_WEIGHT=0.60000002;
	};
	class 30Rnd_556x45_Stanag: 20Rnd_556x45_Stanag
	{
		ACE_Weight=0.537;
	};
	class ACE_30Rnd_556x45_T_Stanag: 30Rnd_556x45_Stanag
	{
		ACE_Weight=0.55800003;
	};
	class ACE_30Rnd_556x45_SB_Stanag: 30Rnd_556x45_Stanag
	{
		ACE_Weight=0.56699997;
	};
	class 30Rnd_556x45_StanagSD: 30Rnd_556x45_Stanag
	{
		ACE_Weight=0.53899997;
	};
	class 30Rnd_556x45_G36: 30Rnd_556x45_Stanag
	{
		ACE_Weight=0.35499999;
	};
	class 30Rnd_556x45_G36SD: 30Rnd_556x45_G36
	{
		ACE_Weight=0.35499999;
	};
	class 200Rnd_556x45_M249: CA_Magazine
	{
		ACE_Weight=3.1500001;
	};
	class 100Rnd_556x45_M249: 200Rnd_556x45_M249
	{
		ACE_Weight=1.6;
	};
	class 100Rnd_556x45_BetaCMag: CA_Magazine
	{
		ACE_Weight=2.0999999;
	};
	class 5Rnd_762x51_M24: CA_Magazine
	{
		ACE_Weight=0.12;
	};
	class 20Rnd_762x51_DMR: CA_Magazine
	{
		ACE_Weight=0.60000002;
	};
	class 20Rnd_762x51_B_SCAR: CA_Magazine
	{
		ACE_Weight=0.60000002;
	};
	class 20Rnd_762x51_SB_SCAR: CA_Magazine
	{
		ACE_Weight=0.60000002;
	};
	class 20Rnd_762x51_FNFAL: CA_Magazine
	{
		ACE_Weight=0.60000002;
	};
	class 10x_303: CA_Magazine
	{
		ACE_Weight=0.25;
	};
	class 100Rnd_762x51_M240: CA_Magazine
	{
		ACE_Weight=4.0999999;
	};
	class 10Rnd_762x54_SVD: CA_Magazine
	{
		ACE_Weight=0.31999999;
	};
	class 100Rnd_762x54_PK: CA_Magazine
	{
		ACE_Weight=4;
	};
	class 60Rnd_762x54_DT: 100Rnd_762x54_PK
	{
		ACE_Weight=2.5999999;
	};
	class 64Rnd_9x19_Bizon: CA_Magazine
	{
		ACE_Weight=0.80000001;
	};
	class 64Rnd_9x19_SD_Bizon: CA_Magazine
	{
		ACE_Weight=0.89999998;
	};
	class 10Rnd_9x39_SP5_VSS: CA_Magazine
	{
		ACE_Weight=0.34999999;
	};
	class 20Rnd_9x39_SP5_VSS: CA_Magazine
	{
		ACE_Weight=0.69999999;
	};
	class 8Rnd_B_Saiga12_74Slug: CA_Magazine
	{
		ACE_Weight=0.5;
	};
	class 8Rnd_B_Beneli_74Slug: CA_Magazine
	{
		ACE_Weight=0.5;
	};
	class 5Rnd_127x108_KSVK: CA_Magazine
	{
		ACE_Weight=1.05;
	};
	class 10Rnd_127x99_m107: CA_Magazine
	{
		ACE_Weight=1.87;
	};
	class ACE_5Rnd_25x59_HEDP_Barrett: 10Rnd_127x99_m107
	{
		ACE_Weight=0.93000001;
	};
	class ACE_5Rnd_127x99_B_TAC50: 10Rnd_127x99_m107
	{
		ACE_Weight=0.93000001;
	};
	class 5Rnd_86x70_L115A1: CA_Magazine
	{
		ACE_Weight=0.80000001;
	};
	class 5Rnd_127x99_as50: CA_Magazine
	{
		ACE_Weight=1.87;
	};
	class 20Rnd_B_AA12_Pellets: CA_Magazine
	{
		ACE_WEIGHT=1.3;
	};
	class 20Rnd_B_AA12_74Slug: CA_Magazine
	{
		ACE_WEIGHT=1.3;
	};
	class 20Rnd_B_AA12_HE: CA_Magazine
	{
		ACE_WEIGHT=1.3;
	};
	class 10Rnd_762x51_CZ750: 5Rnd_762x51_M24
	{
		ACE_Weight=0.40000001;
	};
	class 1Rnd_HE_M203: CA_Magazine
	{
		ACE_Weight=0.23;
	};
	class ACE_1Rnd_HE_M203: 1Rnd_HE_M203
	{
	};
	class ACE_1Rnd_PR_M203: 1Rnd_HE_M203
	{
		ACE_Weight=0.205;
	};
	class 6Rnd_HE_M203: 1Rnd_HE_M203
	{
		ACE_Weight=1.38;
	};
	class FlareWhite_M203: CA_Magazine
	{
		ACE_Weight=0.22;
	};
	class 6Rnd_FlareWhite_M203: FlareWhite_M203
	{
		ACE_Weight=1.3200001;
	};
	class FlareGreen_M203: FlareWhite_M203
	{
	};
	class 6Rnd_FlareGreen_M203: FlareGreen_M203
	{
		ACE_Weight=1.3200001;
	};
	class FlareRed_M203: FlareWhite_M203
	{
	};
	class 6Rnd_FlareRed_M203: FlareRed_M203
	{
		ACE_Weight=1.3200001;
	};
	class FlareYellow_M203: FlareWhite_M203
	{
	};
	class 6Rnd_FlareYellow_M203: FlareYellow_M203
	{
		ACE_Weight=1.3200001;
	};
	class 1Rnd_Smoke_M203: 1Rnd_HE_M203
	{
		ACE_Weight=0.22;
	};
	class 6Rnd_Smoke_M203: 1Rnd_Smoke_M203
	{
		ACE_Weight=1.3200001;
	};
	class 1Rnd_SmokeRed_M203: 1Rnd_Smoke_M203
	{
	};
	class 6Rnd_SmokeRed_M203: 1Rnd_SmokeRed_M203
	{
		ACE_Weight=1.3200001;
	};
	class 1Rnd_SmokeGreen_M203: 1Rnd_Smoke_M203
	{
	};
	class 6Rnd_SmokeGreen_M203: 1Rnd_SmokeGreen_M203
	{
		ACE_Weight=1.3200001;
	};
	class 1Rnd_SmokeYellow_M203: 1Rnd_Smoke_M203
	{
	};
	class 6Rnd_SmokeYellow_M203: 1Rnd_SmokeYellow_M203
	{
		ACE_Weight=1.3200001;
	};
	class 1Rnd_HE_GP25: CA_Magazine
	{
		ACE_Weight=0.23;
	};
	class FlareWhite_GP25: CA_Magazine
	{
		ACE_Weight=0.20999999;
	};
	class FlareGreen_GP25: FlareWhite_GP25
	{
	};
	class FlareRed_GP25: FlareWhite_GP25
	{
	};
	class FlareYellow_GP25: FlareWhite_GP25
	{
	};
	class 1Rnd_SMOKE_GP25: 1Rnd_HE_GP25
	{
		ACE_Weight=0.22;
	};
	class 1Rnd_SmokeRed_GP25: 1Rnd_SMOKE_GP25
	{
	};
	class 1Rnd_SmokeGreen_GP25: 1Rnd_SMOKE_GP25
	{
	};
	class 1Rnd_SmokeYellow_GP25: 1Rnd_SMOKE_GP25
	{
	};
	class CA_LauncherMagazine: CA_Magazine
	{
		ACE_Weight=2;
		ACE_Size=1500;
	};
	class M136: CA_LauncherMagazine
	{
		ACE_Weight=0;
	};
	class Javelin: CA_LauncherMagazine
	{
		ACE_Weight=14.65;
	};
	class AT13: CA_LauncherMagazine
	{
		ACE_Weight=4.5999999;
	};
	class PG7V: CA_LauncherMagazine
	{
		ACE_Weight=2.2;
	};
	class ACE_PG7VM: PG7V
	{
		ACE_Weight=2;
	};
	class PG7VL: PG7V
	{
		ACE_Weight=2.5999999;
	};
	class PG7VR: PG7V
	{
		ACE_Weight=4.5;
	};
	class ACE_TBG7V: PG7VR
	{
		ACE_Weight=4.5;
	};
	class Stinger: CA_LauncherMagazine
	{
		ACE_Weight=10.1;
	};
	class Strela: CA_LauncherMagazine
	{
		ACE_Weight=9.8000002;
	};
	class RPG18: CA_LauncherMagazine
	{
		ACE_Weight=0;
	};
	class SMAW_HEDP: CA_LauncherMagazine
	{
		ACE_Weight=5.8499999;
	};
	class ACE_SMAW_NE: SMAW_HEDP
	{
		ace_weight=8.6000004;
	};
	class SMAW_HEAA: SMAW_HEDP
	{
		ACE_Weight=6.3099999;
	};
	class MAAWS_HEDP: CA_LauncherMagazine
	{
		ACE_Weight=3.3;
	};
	class MAAWS_HEAT: MAAWS_HEDP
	{
		ACE_Weight=4;
	};
	class ACE_MAAWS_HE: MAAWS_HEDP
	{
		ACE_Weight=3.0999999;
	};
	class Igla: Strela
	{
		ACE_Weight=11.9;
	};
	class Dragon_EP1: CA_LauncherMagazine
	{
		ACE_Weight=14.6;
	};
	class HandGrenade: CA_Magazine
	{
		ACE_Weight=0.52999997;
	};
	class HandGrenade_Stone: HandGrenade
	{
	};
	class HandGrenade_West: HandGrenade
	{
		ACE_Weight=0.396;
	};
	class ACE_DM51: HandGrenade_West
	{
		ACE_WEIGHT=0.154;
	};
	class ACE_DM51A1: ACE_DM51
	{
		ACE_WEIGHT=0.44999999;
	};
	class HandGrenade_East: HandGrenade_West
	{
		ACE_Weight=0.31;
	};
	class SmokeShell: HandGrenade
	{
		ACE_Weight=0.68000001;
	};
	class SmokeShellGreen: SmokeShell
	{
		ACE_Weight=0.53799999;
	};
	class SmokeShellRed: SmokeShell
	{
		ACE_Weight=0.53799999;
	};
	class SmokeShellYellow: SmokeShell
	{
		ACE_Weight=0.53799999;
	};
	class SmokeShellPurple: SmokeShell
	{
		ACE_Weight=0.53799999;
	};
	class SmokeShellBlue: SmokeShell
	{
		ACE_Weight=0.53799999;
	};
	class SmokeShellOrange: SmokeShell
	{
		ACE_Weight=0.53799999;
	};
	class ACE_RDG2: SmokeShell
	{
		ACE_WEIGHT=0.69999999;
	};
	class ACE_DM25: SmokeShell
	{
		ACE_WEIGHT=0.80000001;
	};
	class ACE_DM32: SmokeShellOrange
	{
		ACE_WEIGHT=0.40000001;
	};
};
class CfgWeapons
{
	class Default;
	class PistolCore;
	class RifleCore;
	class LauncherCore;
	class Pistol: PistolCore
	{
		ace_weight=1;
	};
	class M9: Pistol
	{
		ace_weight=0.94999999;
		dexterity="(1 + 0.75/(0.95 + 0.001))";
	};
	class M9SD: M9
	{
		ace_weight=1.15;
		dexterity="(1 + 0.75/(0.95 + 0.2 + 0.001))";
	};
	class Makarov: Pistol
	{
		ace_weight=0.73000002;
		dexterity="(1 + 0.75/(0.73 + 0.001))";
	};
	class MakarovSD: Makarov
	{
		ace_weight=0.97000003;
		dexterity="(1 + 0.75/(0.97 + 0.001))";
	};
	class Rifle: RifleCore
	{
		ace_weight=4;
	};
	class M16_Base: Rifle
	{
		ace_weight=3.77;
	};
	class M16A2: M16_Base
	{
		ace_weight=3.77;
		dexterity="(0.5 + 3.75/(3.77 + 0.001) + 0/10)";
	};
	class M16A2GL: M16A2
	{
		ace_weight=5.0699997;
		dexterity="(0.5 + 3.75/(3.77+ 1.3 + 0.001) + 0/10)";
	};
	class M24: Rifle
	{
		ace_weight=6.3199997;
		dexterity="(0.5 + 3.75/(5.4+ 0.72+ 0.2 + 0.001) + 0/10)";
	};
	class M40A3: M24
	{
		ace_weight=7.5;
		dexterity="(0.5 + 3.75/(7.5 + 0.001) + 0/10)";
	};
	class M240: Rifle
	{
		ace_weight=11.6;
		dexterity="(0.5 + 3.75/(11.6 + 0.001) + -3/10)";
	};
	class Mk_48: M240
	{
		ace_weight=8.7639999;
		dexterity="(0.5 + 3.75/(8.4+ 0.264+ 0.1 + 0.001) + -2/10)";
	};
	class M249: Rifle
	{
		ace_weight=7.5;
		dexterity="(0.5 + 3.75/(7.5 + 0.001) + -3/10)";
	};
	class M4A1: M16_Base
	{
		ace_weight=2.9000001;
		dexterity="(0.5 + 3.75/(2.9 + 0.001) + 0/10)";
	};
	class M4A1_Aim: M4A1
	{
		ace_weight=3.164;
		dexterity="(0.5 + 3.75/(2.9+ 0.264 + 0.001) + 0/10)";
	};
	class M4A1_Aim_camo: M4A1_Aim
	{
		ace_weight=3.164;
		dexterity="(0.5 + 3.75/(2.9+ 0.264 + 0.001) + 0/10)";
	};
	class M4A1_AIM_SD_camo: M4A1_Aim
	{
		ace_weight=3.7639999;
		dexterity="(0.5 + 3.75/(2.9+ 0.264+ 0.6 + 0.001) + 0/10)";
	};
	class M4A1_RCO_GL: M4A1
	{
		ace_weight=4.8599997;
		dexterity="(0.5 + 3.75/(2.9+ 0.46+ 1.3+ 0.2 + 0.001) + 0/10)";
	};
	class M4SPR: M4A1
	{
		ace_weight=4;
		dexterity="(0.5 + 3.75/(4 + 0.001) + 0/10)";
	};
	class PK: Rifle
	{
		ace_weight=7.5;
		dexterity="(0.5 + 3.75/(7.5 + 0.001) + -3/10)";
	};
	class Pecheneg: PK
	{
		ace_weight=9.1499996;
		dexterity="(0.5 + 3.75/(8.2+ 0.95 + 0.001) + -3/10)";
	};
	class SVD: Rifle
	{
		ace_weight=4.3000002;
		dexterity="(0.5 + 3.75/(3.7+ 0.6 + 0.001) + 0/10)";
	};
	class SVD_CAMO: SVD
	{
		ace_weight=4.3000002;
		dexterity="(0.5 + 3.75/(3.7+ 0.6 + 0.001) + 0/10)";
	};
	class G36C: Rifle
	{
		ace_weight=2.8;
		dexterity="(0.5 + 3.75/(2.8 + 0.001) + 0/10)";
	};
	class G36_C_SD_eotech: G36C
	{
		ace_weight=3.75;
		dexterity="(0.5 + 3.75/(2.8+ 0.35+ 0.6 + 0.001) + 0/10)";
	};
	class G36a: Rifle
	{
		ace_weight=3.5999999;
		dexterity="(0.5 + 3.75/(3.6 + 0.001) + 0/10)";
	};
	class G36K: G36a
	{
		ace_weight=3.3;
		dexterity="(0.5 + 3.75/(3.3 + 0.001) + 0/10)";
	};
	class MG36: G36C
	{
		ace_weight=3.8499999;
		dexterity="(0.5 + 3.75/(3.3+ 0.35+ 0.2 + 0.001) + 0/10)";
	};
	class Launcher: LauncherCore
	{
		ace_weight=5;
	};
	class Stinger: Launcher
	{
		ace_weight=4.5999999;
		dexterity="(0.5 + 3.75/(2.3+ 2.3+ 10.4+ 0.9 + 0.001) + -2/10)";
	};
	class RPG7V: Launcher
	{
		ace_weight=6.6999998;
		dexterity="(0.5 + 3.75/(6.7+ 2.2 + 0.001) + 1/10)";
	};
	class Strela: Launcher
	{
		ace_weight=4.9499998;
		dexterity="(0.5 + 3.75/(1.95+ 3+ 9.8+ 0.66 + 0.001) + -2/10)";
	};
	class Igla: Strela
	{
		ace_weight=7.0999999;
		dexterity="(0.5 + 3.75/(7.1+ 10.8 + 0.001) + -2/10)";
	};
	class MetisLauncher: Launcher
	{
		ace_weight=16;
		dexterity="(0.5 + 3.75/(9.5+ 6.5+ 13.8 + 0.001) + -3/10)";
	};
	class Binocular: Default
	{
		ace_weight=1.6;
	};
	class NVGoggles: Binocular
	{
		ace_weight=0.68000001;
	};
	class AK_BASE: Rifle
	{
		ace_weight=2.9000001;
	};
	class AKS_BASE: AK_BASE
	{
		ace_weight=2.9000001;
	};
	class AKS_74_UN_kobra: AKS_BASE
	{
		ace_weight=3.5499997;
		dexterity="(0.5 + 3.75/(2.6+ 0.35+ 0.6 + 0.001) + 0/10)";
	};
	class AK_107_BASE: AK_BASE
	{
	};
	class AK_107_kobra: AK_107_BASE
	{
		ace_weight=3.8;
		dexterity="(0.5 + 3.75/(3.45+ 0.35 + 0.001) + 0/10)";
	};
	class AK_107_GL_kobra: AK_107_BASE
	{
		ace_weight=5.3000002;
		dexterity="(0.5 + 3.75/(3.45+ 0.35+ 1.5 + 0.001) + 0/10)";
	};
	class AK_107_GL_pso: AK_107_GL_kobra
	{
		ace_weight=5.5500002;
		dexterity="(0.5 + 3.75/(3.45+ 0.6+ 1.5 + 0.001) + 0/10)";
	};
	class AK_107_pso: AK_107_BASE
	{
		ace_weight=4.0500002;
		dexterity="(0.5 + 3.75/(3.45+ 0.6 + 0.001) + 0/10)";
	};
	class Colt1911: M9
	{
		ace_weight=1.1;
		dexterity="(1 + 0.75/(1.1 + 0.001))";
	};
	class ksvk: Rifle
	{
		ace_weight=12.8;
		dexterity="(0.5 + 3.75/(12+ 0.8 + 0.001) + -3/10)";
	};
	class m107: Rifle
	{
		ace_weight=12.9;
		dexterity="(0.5 + 3.75/(12.9 + 0.001) + -3/10)";
	};
	class Sa61_EP1: Pistol
	{
		ace_weight=1.3;
		dexterity="(1 + 0.75/(1.3 + 0.001))";
	};
	class UZI_EP1: Pistol
	{
		ace_weight=2;
		dexterity="(1 + 0.75/(2 + 0.001))";
	};
	class UZI_SD_EP1: UZI_EP1
	{
		ace_weight=2.3399999;
		dexterity="(1 + 0.75/(2.34 + 0.001))";
	};
	class glock17_EP1: Pistol
	{
		ace_weight=0.72000003;
		dexterity="(1 + 0.75/(0.62 + 0.1 + 0.001))";
	};
	class M60A4_EP1: Rifle
	{
		ace_weight=9.3999996;
		dexterity="(0.5 + 3.75/(9.4 + 0.001) + -2/10)";
	};
	class M249_EP1: M249
	{
		ace_weight=7.3999996;
		dexterity="(0.5 + 3.75/(7.2+ 0.2 + 0.001) + 0/10)";
	};
	class M249_TWS_EP1: M249
	{
		ace_weight=8.8000002;
		dexterity="(0.5 + 3.75/(7.2+ 0.2+ 1.3+ 0.1 + 0.001) + 1/10)";
	};
	class M249_m145_EP1: M249
	{
		ace_weight=8.1899996;
		dexterity="(0.5 + 3.75/(7.2+ 0.2+ 0.69+ 0.1 + 0.001) + 1/10)";
	};
	class SVD_NSPU_EP1: SVD
	{
		ace_weight=5.9000001;
		dexterity="(0.5 + 3.75/(3.7+ 2.2 + 0.001) + 0/10)";
	};
	class Sa58P_EP1: Rifle
	{
		ace_weight=2.9000001;
		dexterity="(0.5 + 3.75/(2.9 + 0.001) + 0/10)";
	};
	class Sa58V_EP1: Sa58P_EP1
	{
		ace_weight=3.0999999;
		dexterity="(0.5 + 3.75/(3.1 + 0.001) + 0/10)";
	};
	class Sa58V_RCO_EP1: Sa58V_EP1
	{
		ace_weight=3.8599999;
		dexterity="(0.5 + 3.75/(3.1+ 0.2+ 0.46+ 0.1 + 0.001) + 1/10)";
	};
	class Sa58V_CCO_EP1: Sa58V_EP1
	{
		ace_weight=3.6259999;
		dexterity="(0.5 + 3.75/(3.1+ 0.2+ 0.226+ 0.1 + 0.001) + 1/10)";
	};
	class M4A3_CCO_EP1: M16_Base
	{
		ace_weight=3.0639999;
		dexterity="(0.5 + 3.75/(2.5+ 0.2+ 0.264+ 0.1 + 0.001) + 1/10)";
	};
	class M4A3_RCO_GL_EP1: M4A3_CCO_EP1
	{
		ace_weight=4.46;
		dexterity="(0.5 + 3.75/(2.5+ 0.2+ 0.46+ 1.3 + 0.001) + 0/10)";
	};
	class MP5SD: Rifle
	{
		ace_weight=3.23;
		dexterity="(0.5 + 3.75/(3.23 + 0.001) + 0/10)";
	};
	class MP5A5: MP5SD
	{
		ace_weight=2.9300001;
		dexterity="(0.5 + 3.75/(2.93 + 0.001) + 0/10)";
	};
	class AK_47_M: AK_BASE
	{
		ace_weight=2.8499999;
		dexterity="(0.5 + 3.75/(2.85 + 0.001) + 0/10)";
	};
	class AK_47_S: AK_47_M
	{
		ace_weight=3.05;
		dexterity="(0.5 + 3.75/(3.05 + 0.001) + 0/10)";
	};
	class AKS_GOLD: AK_47_S
	{
		ace_weight=4.0999999;
		dexterity="(0.5 + 3.75/(4.1 + 0.001) + 0/10)";
	};
	class AK_74: AK_BASE
	{
		ace_weight=2.9000001;
		dexterity="(0.5 + 3.75/(2.9 + 0.001) + 0/10)";
	};
	class AK_74_GL: AK_BASE
	{
		ace_weight=4.4000001;
		dexterity="(0.5 + 3.75/(2.9+ 1.5 + 0.001) + 0/10)";
	};
	class AK_74_GL_kobra: AK_74_GL
	{
		ace_weight=4.75;
		dexterity="(0.5 + 3.75/(2.9+ 1.5+ 0.35 + 0.001) + 0/10)";
	};
	class AKS_74: AKS_BASE
	{
		ace_weight=2.9000001;
		dexterity="(0.5 + 3.75/(2.9 + 0.001) + 0/10)";
	};
	class AKS_74_kobra: AKS_BASE
	{
		ace_weight=3.25;
		dexterity="(0.5 + 3.75/(2.9+ 0.35 + 0.001) + 0/10)";
	};
	class AKS_74_pso: AKS_BASE
	{
		ace_weight=3.5;
		dexterity="(0.5 + 3.75/(2.9+ 0.6 + 0.001) + 0/10)";
	};
	class AKS_74_U: AKS_BASE
	{
		ace_weight=2.5999999;
		dexterity="(0.5 + 3.75/(2.6 + 0.001) + 0/10)";
	};
	class RPK_74: AK_74
	{
		ace_weight=4.6999998;
		dexterity="(0.5 + 3.75/(4.7 + 0.001) + 0/10)";
	};
	class AKS_74_NSPU: AKS_BASE
	{
		ace_weight=5.1000004;
		dexterity="(0.5 + 3.75/(2.9+ 2.2 + 0.001) + 0/10)";
	};
	class AKS_74_GOSHAWK: AKS_BASE
	{
		ace_weight=4.5;
		dexterity="(0.5 + 3.75/(2.9+ 1.6 + 0.001) + 0/10)";
	};
	class FN_FAL: M16A2
	{
		ace_weight=3.8;
		dexterity="(0.5 + 3.75/(3.8 + 0.001) + 0/10)";
	};
	class FN_FAL_ANPVS4: FN_FAL
	{
		ace_weight=5.5999999;
		dexterity="(0.5 + 3.75/(3.8+ 1.8 + 0.001) + 0/10)";
	};
	class GrenadeLauncher_EP1;
	class M32_EP1: GrenadeLauncher_EP1
	{
		ace_weight=6;
		dexterity="(0.5 + 3.75/(6 + 0.001) + -2/10)";
	};
	class M79_EP1: GrenadeLauncher_EP1
	{
		ace_weight=2.7;
		dexterity="(0.5 + 3.75/(2.7 + 0.001) + 0/10)";
	};
	class Mk13_EP1: GrenadeLauncher_EP1
	{
		ace_weight=2.7;
		dexterity="(0.5 + 3.75/(2.7 + 0.001) + 0/10)";
	};
	class LeeEnfield: Rifle
	{
		ace_weight=4;
		dexterity="(0.5 + 3.75/(4 + 0.001) + 0/10)";
	};
	class M110_TWS_EP1: Rifle
	{
		ace_weight=7.6999998;
		dexterity="(0.5 + 3.75/(6+ 1.7 + 0.001) + 0/10)";
	};
	class M110_NVG_EP1: M110_TWS_EP1
	{
		ace_weight=8.1999998;
		dexterity="(0.5 + 3.75/(6+ 2.2 + 0.001) + 0/10)";
	};
	class M14_EP1: Rifle
	{
		ace_weight=5.164;
		dexterity="(0.5 + 3.75/(4.9+ 0.264 + 0.001) + 0/10)";
	};
	class m240_scoped_EP1: M240
	{
		ace_weight=12.29;
		dexterity="(0.5 + 3.75/(11.6+ 0.69 + 0.001) + -3/10)";
	};
	class M47Launcher_EP1: Launcher
	{
		ace_weight=11.47;
		dexterity="(0.5 + 3.75/(11.47 + 0.001) + -3/10)";
	};
	class MAAWS: Launcher
	{
		ace_weight=9.5;
		dexterity="(0.5 + 3.75/(9.5+ 3.3 + 0.001) + -2/10)";
	};
	class SCAR_Base;
	class SCAR_L_Base: SCAR_Base
	{
		ace_weight=3.3;
		dexterity="(0.5 + 3.75/(3.3 + 0.001) + 0/10)";
	};
	class SCAR_L_CQC: SCAR_L_Base
	{
		ace_weight=3;
		dexterity="(0.5 + 3.75/(3 + 0.001) + 0/10)";
	};
	class SCAR_L_CQC_Holo: SCAR_L_CQC
	{
		ace_weight=3.6499999;
		dexterity="(0.5 + 3.75/(3+ 0.35+ 0.1+ 0.2 + 0.001) + 1/10)";
	};
	class SCAR_L_STD_Mk4CQT: SCAR_L_Base
	{
		ace_weight=4.1999998;
		dexterity="(0.5 + 3.75/(3.3+ 0.6+ 0.1+ 0.2 + 0.001) + 1/10)";
	};
	class SCAR_L_STD_EGLM_RCO: SCAR_L_STD_Mk4CQT
	{
		ace_weight=5.2599998;
		dexterity="(0.5 + 3.75/(3.3+ 0.46+ 1.3+ 0.2 + 0.001) + 0/10)";
	};
	class SCAR_L_CQC_EGLM_Holo: SCAR_L_CQC
	{
		ace_weight=4.8499994;
		dexterity="(0.5 + 3.75/(3+ 0.35+ 1.3+ 0.2 + 0.001) + 0/10)";
	};
	class SCAR_L_STD_EGLM_TWS: SCAR_L_STD_EGLM_RCO
	{
		ace_weight=5.6999998;
		dexterity="(0.5 + 3.75/(3.3+ 0.9+ 1.3+ 0.2 + 0.001) + 0/10)";
	};
	class SCAR_L_STD_HOLO: SCAR_L_Base
	{
		ace_weight=3.9499998;
		dexterity="(0.5 + 3.75/(3.3+ 0.35+ 0.1+ 0.2 + 0.001) + 1/10)";
	};
	class SCAR_L_CQC_CCO_SD: SCAR_L_CQC
	{
		ace_weight=4.1499996;
		dexterity="(0.5 + 3.75/(3+ 0.35+ 0.1+ 0.2+ 0.5 + 0.001) + 1/10)";
	};
	class SCAR_H_Base: SCAR_Base
	{
		ace_weight=3.5999999;
		dexterity="(0.5 + 3.75/(3.6 + 0.001) + 0/10)";
	};
	class SCAR_H_CQC_CCO: SCAR_H_Base
	{
		ace_weight=4.1499996;
		dexterity="(0.5 + 3.75/(3.5+ 0.35+ 0.1+ 0.2 + 0.001) + 1/10)";
	};
	class SCAR_H_CQC_CCO_SD: SCAR_H_CQC_CCO
	{
		ace_weight=4.8499994;
		dexterity="(0.5 + 3.75/(3.5+ 0.35+ 0.1+ 0.2+ 0.7 + 0.001) + 1/10)";
	};
	class SCAR_H_STD_EGLM_Spect: SCAR_H_CQC_CCO
	{
		ace_weight=5.7399998;
		dexterity="(0.5 + 3.75/(3.6+ 0.64+ 1.3+ 0.2 + 0.001) + 0/10)";
	};
	class SCAR_H_LNG_Sniper: SCAR_H_Base
	{
		ace_weight=4.4400001;
		dexterity="(0.5 + 3.75/(3.7+ 0.54+ 0.2 + 0.001) + 0/10)";
	};
	class SCAR_H_LNG_Sniper_SD: SCAR_H_Base
	{
		ace_weight=5.4199996;
		dexterity="(0.5 + 3.75/(3.7+ 0.72+ 0.2+ 0.1+ 0.7 + 0.001) + 1/10)";
	};
	class SCAR_H_STD_TWS_SD: SCAR_H_LNG_Sniper_SD
	{
		ace_weight=5.4999995;
		dexterity="(0.5 + 3.75/(3.6+ 0.9+ 0.1+ 0.2+ 0.7 + 0.001) + 1/10)";
	};
	class BAF_AS50_scoped: Rifle
	{
		ace_weight=15.02;
		dexterity="(0.5 + 3.75/(13.8+ 1.02+ 0.2 + 0.001) + -3/10)";
	};
	class BAF_AS50_TWS: BAF_AS50_scoped
	{
		ace_weight=15.7;
		dexterity="(0.5 + 3.75/(13.8+ 1.7+ 0.2 + 0.001) + -3/10)";
	};
	class BAF_LRR_scoped: Rifle
	{
		ace_weight=7.8200002;
		dexterity="(0.5 + 3.75/(6.8+ 1.02 + 0.001) + 0/10)";
	};
	class L85A2_base_BAF: Rifle
	{
		ace_weight=3.8;
	};
	class BAF_L85A2_RIS_Holo: L85A2_base_BAF
	{
		ace_weight=4.4499998;
		dexterity="(0.5 + 3.75/(3.8+ 0.35+ 0.1+ 0.2 + 0.001) + 2/10)";
	};
	class BAF_L85A2_UGL_Holo: BAF_L85A2_RIS_Holo
	{
		ace_weight=5.8499999;
		dexterity="(0.5 + 3.75/(3.8+ 0.35+ 1.5+ 0.2 + 0.001) + 1/10)";
	};
	class BAF_L85A2_RIS_SUSAT: L85A2_base_BAF
	{
		ace_weight=4.5199995;
		dexterity="(0.5 + 3.75/(3.8+ 0.42+ 0.1+ 0.2 + 0.001) + 2/10)";
	};
	class BAF_L85A2_UGL_SUSAT: BAF_L85A2_RIS_SUSAT
	{
		ace_weight=5.9199996;
		dexterity="(0.5 + 3.75/(3.8+ 0.42+ 1.5+ 0.2 + 0.001) + 1/10)";
	};
	class BAF_L85A2_RIS_ACOG: L85A2_base_BAF
	{
		ace_weight=4.5599995;
		dexterity="(0.5 + 3.75/(3.8+ 0.46+ 0.1+ 0.2 + 0.001) + 2/10)";
	};
	class BAF_L85A2_UGL_ACOG: BAF_L85A2_RIS_ACOG
	{
		ace_weight=5.9599996;
		dexterity="(0.5 + 3.75/(3.8+ 0.46+ 1.5+ 0.2 + 0.001) + 1/10)";
	};
	class BAF_L85A2_RIS_CWS: L85A2_base_BAF
	{
		ace_weight=5.2999997;
		dexterity="(0.5 + 3.75/(3.8+ 1.2+ 0.1+ 0.2 + 0.001) + 2/10)";
	};
	class BAF_L86A2_ACOG: Rifle
	{
		ace_weight=5.8600001;
		dexterity="(0.5 + 3.75/(5.4+ 0.46 + 0.001) + 1/10)";
	};
	class BAF_L110A1_Aim: Rifle
	{
		ace_weight=7.7499995;
		dexterity="(0.5 + 3.75/(7.2+ 0.35+ 0.2 + 0.001) + -3/10)";
	};
	class M1014: Rifle
	{
		ace_weight=3.8;
		dexterity="(0.5 + 3.75/(3.8 + 0.001) + 0/10)";
	};
	class Saiga12K: Rifle
	{
		ace_weight=3.5;
		dexterity="(0.5 + 3.75/(3.5 + 0.001) + 0/10)";
	};
	class AA12_PMC: Rifle
	{
		ace_weight=4.7600002;
		dexterity="(0.5 + 3.75/(4.76 + 0.001) + -3/10)";
	};
	class m8_base: Rifle
	{
		ace_weight=3.4000001;
		dexterity="(0.5 + 3.75/(3.4 + 0.001) + 0/10)";
	};
	class m8_carbine: m8_base
	{
		ace_weight=3.4000001;
		dexterity="(0.5 + 3.75/(3.4 + 0.001) + 0/10)";
	};
	class m8_carbine_pmc: m8_base
	{
		ace_weight=3.5;
		dexterity="(0.5 + 3.75/(3.4+ 0.1 + 0.001) + 1/10)";
	};
	class m8_carbineGL: m8_base
	{
		ace_weight=4.9000001;
		dexterity="(0.5 + 3.75/(3.4+ 1.5 + 0.001) + 0/10)";
	};
	class m8_compact: m8_base
	{
		ace_weight=3.2;
		dexterity="(0.5 + 3.75/(3.2 + 0.001) + 0/10)";
	};
	class m8_compact_pmc: m8_compact
	{
		ace_weight=3.4000001;
		dexterity="(0.5 + 3.75/(3.2+ 0.2 + 0.001) + 0/10)";
	};
	class m8_sharpshooter: m8_base
	{
		ace_weight=4.5999999;
		dexterity="(0.5 + 3.75/(4.6 + 0.001) + 0/10)";
	};
	class m8_SAW: m8_sharpshooter
	{
		ace_weight=4.5999999;
		dexterity="(0.5 + 3.75/(4.6 + 0.001) + 0/10)";
	};
	class m8_holo_sd: m8_base
	{
		ace_weight=4.3000002;
		dexterity="(0.5 + 3.75/(3.4+ 0.1+ 0.2+ 0.6 + 0.001) + 1/10)";
	};
	class m8_tws_sd: m8_base
	{
		ace_weight=5;
		dexterity="(0.5 + 3.75/(4.4+ 0.6 + 0.001) + 0/10)";
	};
	class m8_tws: m8_base
	{
		ace_weight=4.5999999;
		dexterity="(0.5 + 3.75/(4.4+ 0.2 + 0.001) + 0/10)";
	};
	class ACE_RPG7V_PGO7: RPG7V
	{
		ace_weight=7.27;
		dexterity="(0.5 + 3.75/(6.7+ 0.57+ 2.2 + 0.001) + 1/10)";
	};
	class bizon: Rifle
	{
		ace_weight=2.0999999;
		dexterity="(0.5 + 3.75/(2.1 + 0.001) + 0/10)";
	};
	class bizon_silenced: bizon
	{
		ace_weight=2.6999998;
		dexterity="(0.5 + 3.75/(2.1+ 0.6 + 0.001) + 0/10)";
	};
	class VSS_vintorez: Rifle
	{
		ace_weight=3.1999998;
		dexterity="(0.5 + 3.75/(2.6+ 0.6 + 0.001) + 0/10)";
	};
	class DMR: Rifle
	{
		ace_weight=5.8199997;
		dexterity="(0.5 + 3.75/(4.9+ 0.72+ 0.2 + 0.001) + 0/10)";
	};
	class huntingrifle: M24
	{
		ace_weight=3.9000001;
		dexterity="(0.5 + 3.75/(3.3+ 0.6 + 0.001) + 0/10)";
	};
	class SMAW: Launcher
	{
		ace_weight=7.54;
		dexterity="(0.5 + 3.75/(7.54 + 0.001) + -3/10)";
	};
	class CZ_750_S1_ACR: M40A3
	{
		ace_weight=6.3199997;
		dexterity="(0.5 + 3.75/(5.4+ 0.72+ 0.2 + 0.001) + 0/10)";
	};
	class Evo_ACR: MP5A5
	{
		ace_weight=2.72;
		dexterity="(0.5 + 3.75/(2.72 + 0.001) + 0/10)";
	};
	class Evo_mrad_ACR: Evo_ACR
	{
		ace_weight=2.9449999;
		dexterity="(0.5 + 3.75/(2.72+ 0.1+ 0.125 + 0.001) + 0/10)";
	};
	class evo_sd_ACR: MP5SD
	{
		ace_weight=3.22;
		dexterity="(0.5 + 3.75/(2.72+ 0.1+ 0.125+ 0.275 + 0.001) + 0/10)";
	};
	class CZ_75_P_07_DUTY: M9
	{
		ace_weight=0.89499998;
		dexterity="(1 + 0.75/(0.77 + 0.125 + 0.001))";
	};
	class CZ_75_D_COMPACT: M9
	{
		ace_weight=0.80000001;
		dexterity="(1 + 0.75/(0.8 + 0.001))";
	};
	class CZ_75_SP_01_PHANTOM: M9
	{
		ace_weight=0.92500001;
		dexterity="(1 + 0.75/(0.8 + 0.125 + 0.001))";
	};
	class CZ_75_SP_01_PHANTOM_SD: M9SD
	{
		ace_weight=1.2;
		dexterity="(1 + 0.75/(0.8 + 0.125+ 0.275 + 0.001))";
	};
	class CZ805_A1_ACR: Rifle
	{
		ace_weight=4.2699995;
		dexterity="(0.5 + 3.75/(3.58+ 0.39+ 0.2+ 0.1 + 0.001) + 1/10)";
	};
	class CZ805_A1_GL_ACR: CZ805_A1_ACR
	{
		ace_weight=5.4699993;
		dexterity="(0.5 + 3.75/(3.58+ 0.39+ 0.2+ 1.3 + 0.001) + 0/10)";
	};
	class CZ805_A2_ACR: CZ805_A1_ACR
	{
		ace_weight=3.3900001;
		dexterity="(0.5 + 3.75/(3.39 + 0.001) + 0/10)";
	};
	class CZ805_A2_SD_ACR: CZ805_A2_ACR
	{
		ace_weight=4.6800003;
		dexterity="(0.5 + 3.75/(3.39+ 0.39+ 0.2+ 0.1+ 0.6 + 0.001) + 1/10)";
	};
	class CZ805_B_GL_ACR: CZ805_A1_ACR
	{
		ace_weight=5.54;
		dexterity="(0.5 + 3.75/(3.58+ 0.46+ 0.2+ 1.3 + 0.001) + 0/10)";
	};
	class UK59_ACR: Rifle
	{
		ace_weight=9.2799997;
		dexterity="(0.5 + 3.75/(9.28 + 0.001) + -3/10)";
	};
	class ItemCore: Default
	{
		ACE_Weight=0.1;
	};
	class ACE_Item;
	class ItemRadio: ItemCore
	{
		ACE_Weight=0.80000001;
	};
	class ACE_KeyCuffs: ACE_Item
	{
		ACE_Weight=0.1;
		ACE_Size=0.1;
	};
};
class CfgSounds
{
	class ACE_Heartbeat1
	{
		name="ACE Heartbeat 1";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\heartbeat.ogg",
			"db-25",
			1
		};
		titles[]={};
	};
	class ACE_Heartbeat2
	{
		name="ACE Heartbeat 2";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\heartbeat.ogg",
			"db-20",
			1
		};
		titles[]={};
	};
	class ACE_Heartbeat3
	{
		name="ACE Heartbeat 3";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\heartbeat.ogg",
			"db-15",
			1
		};
		titles[]={};
	};
	class ACE_Heartbeat4
	{
		name="ACE Heartbeat 4";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\heartbeat.ogg",
			"db-10",
			1
		};
		titles[]={};
	};
	class ACE_Heartbeat5
	{
		name="ACE Heartbeat 5";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\heartbeat.ogg",
			"db-5",
			1
		};
		titles[]={};
	};
	class ACE_Heartbeat6
	{
		name="ACE Heartbeat 6";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\heartbeat.ogg",
			"db+0",
			1
		};
		titles[]={};
	};
	class ACE_Heartbeat7
	{
		name="ACE Heartbeat 7";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\heartbeat.ogg",
			"db+5",
			1
		};
		titles[]={};
	};
	class ACE_Heartbeat8
	{
		name="ACE Heartbeat 8";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\heartbeat.ogg",
			"db+10",
			1
		};
		titles[]={};
	};
	class ACE_Heartbeat9
	{
		name="ACE Heartbeat 9";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\heartbeat.ogg",
			"db+15",
			1
		};
		titles[]={};
	};
	class ACE_Breathing1_1
	{
		name="ACE Breathing 11";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\breathing01.ogg",
			"db-30",
			1
		};
		titles[]={};
		length=2.98;
	};
	class ACE_Breathing1_2: ACE_Breathing1_1
	{
		name="ACE Breathing 12";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\breathing01.ogg",
			"db-25",
			1
		};
	};
	class ACE_Breathing1_3: ACE_Breathing1_1
	{
		name="ACE Breathing 13";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\breathing01.ogg",
			"db-20",
			1
		};
	};
	class ACE_Breathing1_4: ACE_Breathing1_1
	{
		name="ACE Breathing 14";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\breathing01.ogg",
			"db-10",
			1
		};
	};
	class ACE_Breathing1_5: ACE_Breathing1_1
	{
		name="ACE Breathing 15";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\breathing01.ogg",
			"db-5",
			1
		};
	};
	class ACE_Breathing2_1
	{
		name="ACE Breathing 21";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\breathing02.ogg",
			"db-30",
			1
		};
		titles[]={};
		length=3.5899999;
	};
	class ACE_Breathing2_2: ACE_Breathing2_1
	{
		name="ACE Breathing 22";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\breathing02.ogg",
			"db-25",
			1
		};
	};
	class ACE_Breathing2_3: ACE_Breathing2_1
	{
		name="ACE Breathing 23";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\breathing02.ogg",
			"db-15",
			1
		};
	};
	class ACE_Breathing2_4: ACE_Breathing2_1
	{
		name="ACE Breathing 24";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\breathing02.ogg",
			"db-10",
			1
		};
	};
	class ACE_Breathing2_5: ACE_Breathing2_1
	{
		name="ACE Breathing 25";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\breathing02.ogg",
			"db-5",
			1
		};
	};
	class ACE_Breathing3_1
	{
		name="ACE Breathing 31";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\breathing03.ogg",
			"db-30",
			1
		};
		titles[]={};
		length=2.1099999;
	};
	class ACE_Breathing3_2: ACE_Breathing3_1
	{
		name="ACE Breathing 32";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\breathing03.ogg",
			"db-25",
			1
		};
	};
	class ACE_Breathing3_3: ACE_Breathing3_1
	{
		name="ACE Breathing 33";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\breathing03.ogg",
			"db-20",
			1
		};
	};
	class ACE_Breathing3_4: ACE_Breathing3_1
	{
		name="ACE Breathing 34";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\breathing03.ogg",
			"db-10",
			1
		};
	};
	class ACE_Breathing3_5: ACE_Breathing3_1
	{
		name="ACE Breathing 35";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\breathing03.ogg",
			"db-5",
			1
		};
	};
	class ACE_Breathing4_1
	{
		name="ACE Breathing 41";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\breathing04.ogg",
			"db-30",
			1
		};
		titles[]={};
		length=2.47;
	};
	class ACE_Breathing4_2: ACE_Breathing4_1
	{
		name="ACE Breathing 42";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\breathing04.ogg",
			"db-25",
			1
		};
	};
	class ACE_Breathing4_3: ACE_Breathing4_1
	{
		name="ACE Breathing 43";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\breathing04.ogg",
			"db-15",
			1
		};
	};
	class ACE_Breathing4_4: ACE_Breathing4_1
	{
		name="ACE Breathing 44";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\breathing04.ogg",
			"db-10",
			1
		};
	};
	class ACE_Breathing4_5: ACE_Breathing4_1
	{
		name="ACE Breathing 45";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\breathing04.ogg",
			"db-5",
			1
		};
	};
	class ACE_Breathing5_1
	{
		name="ACE Breathing 51";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\breathing04.ogg",
			"db-25",
			1
		};
		titles[]={};
		length=2.47;
	};
	class ACE_Breathing5_2: ACE_Breathing4_1
	{
		name="ACE Breathing 52";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\breathing04.ogg",
			"db-25",
			1
		};
	};
	class ACE_Breathing5_3: ACE_Breathing4_1
	{
		name="ACE Breathing 53";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\breathing04.ogg",
			"db-15",
			1
		};
	};
	class ACE_Breathing5_4: ACE_Breathing4_1
	{
		name="ACE Breathing 54";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\breathing04.ogg",
			"db-10",
			1
		};
	};
	class ACE_Breathing5_5: ACE_Breathing4_1
	{
		name="ACE Breathing 55";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\breathing04.ogg",
			"db-5",
			1
		};
	};
	class ACE_Breathing_Mask1_1
	{
		name="ACE Breathing 11";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\ATEMMASKE1.ogg",
			"db+0",
			1
		};
		titles[]={};
		length=2.45;
	};
	class ACE_Breathing_Mask1_2: ACE_Breathing_Mask1_1
	{
		name="ACE Breathing 12";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\ATEMMASKE1.ogg",
			"db+0",
			1
		};
	};
	class ACE_Breathing_Mask1_3: ACE_Breathing_Mask1_1
	{
		name="ACE Breathing 13";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\ATEMMASKE1.ogg",
			"db+0",
			1
		};
	};
	class ACE_Breathing_Mask1_4: ACE_Breathing_Mask1_1
	{
		name="ACE Breathing 14";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\ATEMMASKE1.ogg",
			"db+0",
			1
		};
	};
	class ACE_Breathing_Mask1_5: ACE_Breathing_Mask1_1
	{
		name="ACE Breathing 15";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\ATEMMASKE1.ogg",
			"db+5",
			1
		};
	};
	class ACE_Breathing_Mask2_1
	{
		name="ACE Breathing 21";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\ATEMMASKE2.ogg",
			"db+0",
			1
		};
		titles[]={};
		length=2.23;
	};
	class ACE_Breathing_Mask2_2: ACE_Breathing_Mask2_1
	{
		name="ACE Breathing 22";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\ATEMMASKE2.ogg",
			"db+0",
			1
		};
	};
	class ACE_Breathing_Mask2_3: ACE_Breathing_Mask2_1
	{
		name="ACE Breathing 23";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\ATEMMASKE2.ogg",
			"db+0",
			1
		};
	};
	class ACE_Breathing_Mask2_4: ACE_Breathing_Mask2_1
	{
		name="ACE Breathing 24";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\ATEMMASKE2.ogg",
			"db+0",
			1
		};
	};
	class ACE_Breathing_Mask2_5: ACE_Breathing_Mask2_1
	{
		name="ACE Breathing 25";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\ATEMMASKE2.ogg",
			"db+5",
			1
		};
	};
	class ACE_Breathing_Mask3_1
	{
		name="ACE Breathing 31";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\ATEMMASKE3.ogg",
			"db+0",
			1
		};
		titles[]={};
		length=1.73;
	};
	class ACE_Breathing_Mask3_2: ACE_Breathing_Mask3_1
	{
		name="ACE Breathing 32";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\ATEMMASKE3.ogg",
			"db+0",
			1
		};
	};
	class ACE_Breathing_Mask3_3: ACE_Breathing_Mask3_1
	{
		name="ACE Breathing 33";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\ATEMMASKE3.ogg",
			"db+0",
			1
		};
	};
	class ACE_Breathing_Mask3_4: ACE_Breathing_Mask3_1
	{
		name="ACE Breathing 34";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\ATEMMASKE3.ogg",
			"db+0",
			1
		};
	};
	class ACE_Breathing_Mask3_5: ACE_Breathing_Mask3_1
	{
		name="ACE Breathing 35";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\ATEMMASKE3.ogg",
			"db+0",
			1
		};
	};
	class ACE_Breathing_Mask4_1
	{
		name="ACE Breathing 41";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\ATEMMASKE4.ogg",
			"db+0",
			1
		};
		titles[]={};
		length=1.4;
	};
	class ACE_Breathing_Mask4_2: ACE_Breathing_Mask4_1
	{
		name="ACE Breathing 42";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\ATEMMASKE4.ogg",
			"db+0",
			1
		};
	};
	class ACE_Breathing_Mask4_3: ACE_Breathing_Mask4_1
	{
		name="ACE Breathing 43";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\ATEMMASKE4.ogg",
			"db+0",
			1
		};
	};
	class ACE_Breathing_Mask4_4: ACE_Breathing_Mask4_1
	{
		name="ACE Breathing 44";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\ATEMMASKE4.ogg",
			"db+0",
			1
		};
	};
	class ACE_Breathing_Mask4_5: ACE_Breathing_Mask4_1
	{
		name="ACE Breathing 45";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\ATEMMASKE4.ogg",
			"db+5",
			1
		};
	};
	class ACE_Breathing_Mask5_1
	{
		name="ACE Breathing 51";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\ATEMMASKE4.ogg",
			"db+0",
			1
		};
		titles[]={};
		length=1.4;
	};
	class ACE_Breathing_Mask5_2: ACE_Breathing_Mask4_1
	{
		name="ACE Breathing 52";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\ATEMMASKE4.ogg",
			"db+0",
			1
		};
	};
	class ACE_Breathing_Mask5_3: ACE_Breathing_Mask4_1
	{
		name="ACE Breathing 53";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\ATEMMASKE4.ogg",
			"db+0",
			1
		};
	};
	class ACE_Breathing_Mask5_4: ACE_Breathing_Mask4_1
	{
		name="ACE Breathing 54";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\ATEMMASKE4.ogg",
			"db+0",
			1
		};
	};
	class ACE_Breathing_Mask5_5: ACE_Breathing_Mask4_1
	{
		name="ACE Breathing 55";
		sound[]=
		{
			"\x\ace\addons\sys_stamina\sound\ATEMMASKE4.ogg",
			"db+5",
			1
		};
	};
};
class CfgVehicles
{
	class ACE_Logic;
	class ACE_NoStamina: ACE_Logic
	{
		displayName="$STR_ACE_STAMINA";
		icon="\x\ace\addons\sys_stamina\data\icon\icon_ace_stamina_ca.paa";
		picture="\x\ace\addons\sys_stamina\data\icon\icon_ace_stamina_ca.paa";
		vehicleClass="Modules";
		class Eventhandlers
		{
			init="ACE_NoStaminaEffects = true; publicVariable ""ACE_NoStaminaEffects"";";
		};
	};
	class Man;
	class CAManBase: Man
	{
		ACE_Stamina=1.2;
		ACE_DefaultWeight=12;
	};
	class Civilian: CAManBase
	{
		ACE_Stamina=1.3;
		ACE_DefaultWeight=6;
	};
	class SoldierWB: CAManBase
	{
		ACE_Stamina=1;
	};
	class SoldierEB: CAManBase
	{
		ACE_Stamina=1;
	};
	class SoldierGB: CAManBase
	{
		ACE_Stamina=1;
	};
	class Animal: Man
	{
		ACE_Stamina=0.0099999998;
	};
};