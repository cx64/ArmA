/* ace_sys_groundmarker | (c) 2010,2011,2012 by rocko */

#include "script_component.hpp"

ADDON = false;

["player", [ace_sys_interaction_key_self], -9, [QPATHTO_F(fnc_menuDef_Self), "main"]] call CBA_ui_fnc_add;
["ACE_GroundMarker_Base", [ace_sys_interaction_key], -9, [QPATHTO_F(fnc_menuDef), "main"]] call CBA_ui_fnc_add;
ADDON = true;