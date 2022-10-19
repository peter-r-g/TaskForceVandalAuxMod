class CfgPatches
{
    class TFV_Armor_Castle
    {
        name = "Task Force Vandal Aux - Armor (Castle)";
        author = "Gooman";

        addonRootClass = "TFV_Armor";
        requiredVersion = 0.1;
        requiredAddons[] = {
            "TFV_Armor",
            "OPTRE_UNSC_Units_Army"
        };

        units[] = {};
        weapons[] = {
            "TFV_Recon_Helmet_Castle",
            "TFV_ODST_Helmet_Castle",
            "TFV_M52D_Vest_Light_Castle",
            "TFV_M52D_Vest_Rifleman_Castle"
        };
    };
};

class CfgWeapons
{
    class OPTRE_UNSC_RECON_HELMET;
    class OPTRE_UNSC_CH252D_Helmet;
    class OPTRE_UNSC_RECON_HELMET_dp;
    class OPTRE_UNSC_CH252D_Helmet_dp;
    class OPTRE_UNSC_M52D_Armor;
    class OPTRE_UNSC_M52D_Armor_Light : OPTRE_UNSC_M52D_Armor { class ItemInfo; };
    class OPTRE_UNSC_M52D_Armor_Rifleman : OPTRE_UNSC_M52D_Armor { class ItemInfo; };

    class TFV_Recon_Helmet_Castle : OPTRE_UNSC_RECON_HELMET
    {
        author = "Article 2 Studios & Gooman";
        displayName = "R/B5 Helmet (Castle)";
        hiddenSelectionsTextures[] =
        {
            "TFV_Armor\Castle\data\castle_oni_helmet_co.paa",
            "TFV_Armor\Castle\data\castle_oni_visor_co.paa"
        };

        class XtdGearInfo
        {
            model = "TFV_Helmet_Castle";
            Detachment = "ONI";
        };
    };

    class TFV_ODST_Helmet_Castle : OPTRE_UNSC_CH252D_Helmet
    {
        author = "Article 2 Studios & Gooman";
        displayName = "CH252D Helmet [Castle]";
        hiddenSelectionsTextures[] =
        {
            "TFV_Armor\Castle\data\castle_odst_helmet_co.paa",
            "TFV_Armor\Castle\data\castle_odst_visor_co.paa"
        };

        class XtdGearInfo
        {
            model = "TFV_Helmet_Castle";
            Detachment = "ODST";
        };
    };

    class TFV_Recon_Helmet_Castle_dp : OPTRE_UNSC_RECON_HELMET_dp
    {
        scope = 1;
        scopeArsenal = 1;
        scopeCurator = 1;
        author = "Article 2 Studios & Gooman";
        displayName = "R/B5 Helmet (Castle)";
        hiddenSelectionsTextures[] =
        {
            "TFV_Armor\Castle\data\castle_oni_helmet_co.paa",
            "optre_unsc_units\army\data\recon_visor_ca.paa"
        };
    };

    class TFV_ODST_Helmet_Castle_dp : OPTRE_UNSC_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        scopeCurator = 1;
        author = "Article 2 Studios & Gooman";
        displayName = "CH252D Helmet [Castle]";
        hiddenSelectionsTextures[] =
        {
            "TFV_Armor\Castle\data\castle_odst_helmet_co.paa"
        };
    };

    #define VEST_CASTLE hiddenSelectionsTextures[]= \
    { \
        "TFV_Armor\Common\m52d_underarmor_co.paa", \
        "TFV_Armor\Common\m52d_vest_co.paa", \
        "TFV_Armor\Common\m52d_legs_co.paa", \
        "optre_unsc_units\army\data\ghillie_woodland_co.paa", \
        "TFV_Armor\Castle\data\castle_odst_armor_co.paa", \
    }
    class TFV_M52D_Vest_Light_Castle : OPTRE_UNSC_M52D_Armor_Light
    {
        displayName = "M52D Body Armor (Light) (Castle)";
        VEST_CASTLE;
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply200";
            VEST_CASTLE;
        };

        class XtdGearInfo
        {
            model = "TFV_Vest_Castle";
            Class = "Light";
        };
    };

    class TFV_M52D_Vest_Rifleman_Castle : OPTRE_UNSC_M52D_Armor_Rifleman
    {
        displayName = "M52D Body Armor (Rifleman) (Castle)";
        VEST_CASTLE;
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply200";
            VEST_CASTLE;
        };

        class XtdGearInfo
        {
            model = "TFV_Vest_Castle";
            Class = "Rifleman";
        };
    };
    #undef VEST_CASTLE
};

class XtdGearModels
{
    class CfgWeapons
    {
        class TFV_Vest_Castle
        {
            label = "F. Castle";
            author = "Gooman";
            options[] = { "Class" };

            class Class
            {
                label = "Class";
                values[] = { "Light", "Rifleman" };
            };
        };

        class TFV_Helmet_Castle
        {
            label = "F. Castle";
            author = "Gooman";
            options[] = { "Detachment" };

            class Detachment
            {
                label = "Detachment";
                values[] = { "ODST", "ONI" };
            };
        };
    };
};

class cfgMods
{
    author = "Gooman";
};