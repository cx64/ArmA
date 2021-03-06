class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};

// HandleDamage XEH is not supported by CBA
class Extended_InitPost_EventHandlers {
    class CAManBase {
        init = QUOTE(ARR_1([_this select 0])call FUNC(addHandleDamage));
    };
};

class Extended_HandleHeal_EventHandlers {
    class CAManBase {
        handleHeal = QUOTE(ARR_1([_this select 0]) call FUNC(handleHeal));
    };
};
