class GVAR(aceVaButton): NevRscButton {
    text = "ACE VA";
    x = "SafeZoneX + (455 / 1920) * SafeZoneW";
    y = "SafeZoneY + (120 / 1080) * SafeZoneH";
    action = "closeDialog 0; [player, player, true] call ace_arsenal_fnc_openBox";
};

class GVAR(propagateKit): NevRscButton {
    text = "Propagate Kit";
    x = "SafeZoneX + (1215 / 1920) * SafeZoneW";
    y = "SafeZoneY + (470 / 1080) * SafeZoneH";
    action = QUOTE(call FUNC(propagateKit));
    colorText[] = {0.9, 0.195, 0.195, 1};
};

class GVAR(supplyDropButton): NevRscButton {
    text = "Supply Drop";
    x = "SafeZoneX + (1215 / 1920) * SafeZoneW";
    y = "SafeZoneY + (435 / 1080) * SafeZoneH";
    action = QUOTE(call FUNC(supplyDrop));
};
