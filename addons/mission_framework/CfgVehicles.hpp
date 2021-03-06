// https://github.com/TMF3/TMF/blob/master/addons/ai/CfgModules.hpp
class CfgVehicles {
    class Logic;
    class Module_F: Logic {
        class AttributesBase;
        class ArgumentsBaseUnits {
            class Units;
        };
        class ModuleDescription {
            class AnyBrain;
        };
    };
    #include "\x\nev\addons\mission_framework\modules\waveSpawner.hpp"
    #include "\x\nev\addons\mission_framework\modules\endMission.hpp"
    #include "\x\nev\addons\mission_framework\modules\zoneSpawner.hpp"
    #include "\x\nev\addons\mission_framework\modules\ambientAA.hpp"
};
