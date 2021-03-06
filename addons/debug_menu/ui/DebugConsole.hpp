class GVAR(debugConsole): RscEdit {
    idc = IDC_debugConsole;
    x = "SafeZoneX + (360 / 1920) * SafeZoneW";
    y = "SafeZoneY + (155 / 1080) * SafeZoneH";
    w = "(281 / 1920) * SafeZoneW";
    h = "(170 / 1080) * SafeZoneH";
    type = CT_EDIT;
    style = ST_MULTI;
    tooltip = "Execute code";
    autocomplete = "scripting";
    colorBackground[] = {0.3, 0.3, 0.3, 0.5};
};

class GVAR(execLocalButton): NevRscButton {
    text = "Local";
    x = "SafeZoneX + (360 / 1920) * SafeZoneW";
    y = "SafeZoneY + (330 / 1080) * SafeZoneH";
    action = QUOTE([ARR_1(0)] call FUNC(debugConsoleExec));
    tooltip = "Execute local code";
};

class GVAR(execGlobalButton): NevRscButton {
    idc = IDC_execGlobalButton;
    text = "Global";
    x = "SafeZoneX + (455 / 1920) * SafeZoneW";
    y = "SafeZoneY + (330 / 1080) * SafeZoneH";
    action = QUOTE([ARR_1(1)] call FUNC(debugConsoleExec));
    tooltip = "Execute global code";
};

class GVAR(execServerButton): NevRscButton {
    idc = IDC_execServerButton;
    text = "Server";
    x = "SafeZoneX + (550 / 1920) * SafeZoneW";
    y = "SafeZoneY + (330 / 1080) * SafeZoneH";
    action = QUOTE([ARR_1(2)] call FUNC(debugConsoleExec));
    tooltip = "Execute server code";
};
