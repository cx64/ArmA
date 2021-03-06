#include "script_component.hpp"

// Commit 95c213f
class CfgPatches {
    class ADDON {
        name = "NEV Component - Custom ACE RHS GREF Compat";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "nev_main",
            "rhsgref_c_weapons"
        };
        author = "ACE Team";
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
