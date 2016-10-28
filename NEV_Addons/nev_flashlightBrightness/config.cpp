class CfgPatches
{
	class nev_flashlightBrightness
	{
		name = "Neviothr's Brighter Flashlight";
		author = "Neviothr";
		units[] = {};
		weapons[] = {"acc_flashlight"};
		requiredAddons[] = {"A3_Weapons_F"};
	};
};

class CfgWeapons {
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryFlashLightItem_Base_F: InventoryItem_Base_F {};
	class acc_flashlight: ItemCore {
		class ItemInfo: InventoryFlashLightItem_Base_F {
			class FlashLight
			{
				color[] = {7000,7500,10000}; // colour of the light
				ambient[] = {6,9,9}; // I can't remember
				intensity = 2.5; // brightness intensity
				size = 1;
				innerAngle = 20;
				outerAngle = 80;
				coneFadeCoef = 10;
				position = "flash dir";
				direction = "flash";
				useFlare = 1;
				flareSize = 1.5;
				flareMaxDistance = "600.0f";
				dayLight = 1;
				class Attenuation
				{
					start = 0.5;
					constant = 0;
					linear = 0;
					quadratic = 1;
					hardLimitStart = 200;
					hardLimitEnd = 300;
				};
				scale[] = {0};
			};
		};
	};
};