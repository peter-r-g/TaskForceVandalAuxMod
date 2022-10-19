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
    class OPTRE_UNSC_M52D_Armor_Medic: OPTRE_UNSC_M52D_Armor { class ItemInfo; };

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
                values[] = { "Basic", "Medic" };
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