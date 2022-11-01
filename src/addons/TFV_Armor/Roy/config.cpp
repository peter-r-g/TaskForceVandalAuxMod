class CfgPatches
{
    class TFV_Armor_Roy
    {
        name = "Task Force Vandal Aux - Armor (Roy)";
        author = "Gooman";

        addonRootClass = "TFV_Armor";
        requiredVersion = 0.1;
        requiredAddons[] = {
            "TFV_Armor",
            "OPTRE_UNSC_Units_Army"
        };

        units[] = {};
        weapons[] = {
            "TFV_Recon_Helmet_Roy",
            "TFV_ODST_Helmet_Roy",
            "TFV_M52D_Vest_Basic_Roy",
            "TFV_M52D_Vest_Medic_Roy"
        };
    };
};

class CfgWeapons
{
    class OPTRE_UNSC_RECON_HELMET;
    class OPTRE_UNSC_CH252D_Helmet;
    class OPTRE_UNSC_RECON_HELMET_dp;
    class OPTRE_UNSC_CH252D_Helmet_dp;
    class OPTRE_UNSC_M52A_Armor1_WDL;
    class OPTRE_UNSC_M52D_Armor : OPTRE_UNSC_M52A_Armor1_WDL { class ItemInfo; };
    class OPTRE_UNSC_M52D_Armor_Demolitions : OPTRE_UNSC_M52D_Armor { class ItemInfo; };
    class OPTRE_UNSC_M52D_Armor_Light : OPTRE_UNSC_M52D_Armor { class ItemInfo; };
    class OPTRE_UNSC_M52D_Armor_Marksman : OPTRE_UNSC_M52D_Armor { class ItemInfo; };
    class OPTRE_UNSC_M52D_Armor_Medic : OPTRE_UNSC_M52D_Armor { class ItemInfo; };
    class OPTRE_UNSC_M52D_Armor_Rifleman : OPTRE_UNSC_M52D_Armor { class ItemInfo; };
    class OPTRE_UNSC_M52D_Armor_Scout: OPTRE_UNSC_M52D_Armor { class ItemInfo; };
    class OPTRE_UNSC_M52D_Armor_Sniper : OPTRE_UNSC_M52D_Armor { class ItemInfo; };

    #pragma region Helmets
    class TFV_Recon_Helmet_Roy : OPTRE_UNSC_RECON_HELMET
    {
        author = "Article 2 Studios & Gooman";
        displayName = "R/B5 Helmet (Roy)";
        hiddenSelectionsTextures[] =
        {
            "TFV_Armor\Roy\data\roy_oni_helmet_co.paa",
            "TFV_Armor\Roy\data\roy_oni_visor_co.paa"
        };

        class XtdGearInfo
        {
            model = "TFV_Helmet_Roy";
            Detachment = "ONI";
        };
    };

    class TFV_ODST_Helmet_Roy : OPTRE_UNSC_CH252D_Helmet
    {
        author = "Article 2 Studios & Gooman";
        displayName = "CH252D Helmet [Roy]";
        hiddenSelectionsTextures[] =
        {
            "TFV_Armor\Roy\data\roy_odst_helmet_co.paa",
            "TFV_Armor\Roy\data\roy_odst_visor_co.paa"
        };

        class XtdGearInfo
        {
            model = "TFV_Helmet_Roy";
            Detachment = "ODST";
        };
    };

    class TFV_Recon_Helmet_Roy_dp : OPTRE_UNSC_RECON_HELMET_dp
    {
        scope = 1;
        scopeArsenal = 1;
        scopeCurator = 1;
        author = "Article 2 Studios & Gooman";
        displayName = "R/B5 Helmet (Roy)";
        hiddenSelectionsTextures[] =
        {
            "TFV_Armor\Roy\data\roy_oni_helmet_co.paa",
            "optre_unsc_units\army\data\recon_visor_ca.paa"
        };
    };

    class TFV_ODST_Helmet_Roy_dp : OPTRE_UNSC_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        scopeCurator = 1;
        author = "Article 2 Studios & Gooman";
        displayName = "CH252D Helmet [Roy]";
        hiddenSelectionsTextures[] =
        {
            "TFV_Armor\Roy\data\roy_odst_helmet_co.paa"
        };
    };
    #pragma endregion

    #define VEST_ROY hiddenSelectionsTextures[]= \
    { \
        "TFV_Armor\Common\m52d_underarmor_co.paa", \
        "TFV_Armor\Common\m52d_vest_co.paa", \
        "TFV_Armor\Common\m52d_legs_co.paa", \
        "optre_unsc_units\army\data\ghillie_woodland_co.paa", \
        "TFV_Armor\Roy\data\roy_odst_armor_co.paa", \
    }
    class TFV_M52D_Vest_Basic_Roy : OPTRE_UNSC_M52D_Armor
    {
        displayName = "M52D Body Armor (Basic) (Roy)";
        VEST_ROY;
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply200";
            VEST_ROY;
        };

        class XtdGearInfo
        {
            model = "TFV_Vest_Roy";
            Class = "Basic";
        };
    };

    class TFV_M52D_Vest_Demolitions_Roy : OPTRE_UNSC_M52D_Armor_Demolitions
    {
        displayName = "M52D Body Armor (Demolitions) (Roy)";
        VEST_ROY;
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply200";
            VEST_ROY;
        };

        class XtdGearInfo
        {
            model = "TFV_Vest_Roy";
            Class = "Demolitions";
        };
    };

    class TFV_M52D_Vest_Light_Roy : OPTRE_UNSC_M52D_Armor_Light
    {
        displayName = "M52D Body Armor (Light) (Roy)";
        VEST_ROY;
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply200";
            VEST_ROY;
        };

        class XtdGearInfo
        {
            model = "TFV_Vest_Roy";
            Class = "Light";
        };
    };

    class TFV_M52D_Vest_Marksman_Roy : OPTRE_UNSC_M52D_Armor_Marksman
    {
        displayName = "M52D Body Armor (Marksman) (Roy)";
        VEST_ROY;
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply200";
            VEST_ROY;
        };

        class XtdGearInfo
        {
            model = "TFV_Vest_Roy";
            Class = "Marksman";
        };
    };

    class TFV_M52D_Vest_Medic_Roy : OPTRE_UNSC_M52D_Armor_Medic
    {
        displayName = "M52D Body Armor (Medic) (Roy)";
        VEST_ROY;
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply200";
            VEST_ROY;
        };

        class XtdGearInfo
        {
            model = "TFV_Vest_Roy";
            Class = "Medic";
        };
    };

    class TFV_M52D_Vest_Rifleman_Roy : OPTRE_UNSC_M52D_Armor_Rifleman
    {
        displayName = "M52D Body Armor (Rifleman) (Roy)";
        VEST_ROY;
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply200";
            VEST_ROY;
        };

        class XtdGearInfo
        {
            model = "TFV_Vest_Roy";
            Class = "Rifleman";
        };
    };

    class TFV_M52D_Vest_Scout_Roy : OPTRE_UNSC_M52D_Armor_Scout
    {
        displayName = "M52D Body Armor (Scout) (Roy)";
        VEST_ROY;
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply200";
            VEST_ROY;
        };

        class XtdGearInfo
        {
            model = "TFV_Vest_Roy";
            Class = "Scout";
        };
    };

    class TFV_M52D_Vest_Sniper_Roy : OPTRE_UNSC_M52D_Armor_Sniper
    {
        displayName = "M52D Body Armor (Sniper) (Roy)";
        VEST_ROY;
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply200";
            VEST_ROY;
        };

        class XtdGearInfo
        {
            model = "TFV_Vest_Roy";
            Class = "Sniper";
        };
    };
    #undef VEST_ROY
};

class XtdGearModels
{
    class CfgWeapons
    {
        class TFV_Vest_Roy
        {
            label = "P. Roy";
            author = "Gooman";
            options[] = { "Class" };

            class Class
            {
                label = "Class";
                values[] = { "Basic", "Demolitions", "Light", "Marksman", "Medic", "Rifleman", "Scout", "Sniper" };
            };
        };

        class TFV_Helmet_Roy
        {
            label = "P. Roy";
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