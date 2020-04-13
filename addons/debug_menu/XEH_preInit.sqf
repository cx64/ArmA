#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

// Weather commands are inconsistant after save load.
// Detect this using EH, and define a variable.
// When defined - weather control sliders will be disabled when the debug menu loads.
addMissionEventHandler ["Loaded", {
    LOG("Loaded EH fired, disabling weather control sliders.");
    GVAR(disableWeatherSliders) = true;
}];

ADDON = true;
