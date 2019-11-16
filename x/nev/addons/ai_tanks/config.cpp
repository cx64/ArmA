#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "NEV Component - AI Tanks";
        author = "Neviothr";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"nev_main"};
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgEventhandlers.hpp"
#include "CfgWeapons.hpp"