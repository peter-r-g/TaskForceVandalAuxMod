class CfgPatches
{
    class TFV_Armor_Name
    {
        name = "Task Force Vandal Aux - Armor (Name)";
        author = "Gooman";

        addonRootClass = "TFV_Armor";
        requiredVersion = 0.1;
        requiredAddons[] = {
            "TFV_Armor",
            "OPTRE_UNSC_Units_Army"
        };

        units[] = {};
        weapons[] = {
            "TFV_ODST_Helmet_Cessna",
            "TFV_M52D_Vest_Basic_Cessna",
            "TFV_M52D_Vest_Demolitions_Cessna"
        };
    };
};

class CfgWeapons
{
    class OPTRE_UNSC_CH252D_Helmet;
    class OPTRE_UNSC_CH252D_Helmet_dp;
    class OPTRE_UNSC_M52A_Armor1_WDL;
    class OPTRE_UNSC_M52D_Armor : OPTRE_UNSC_M52A_Armor1_WDL { class ItemInfo; };
    class OPTRE_UNSC_M52D_Armor_Demolitions : OPTRE_UNSC_M52D_Armor { class ItemInfo; };

    class TFV_ODST_Helmet_Cessna : OPTRE_UNSC_CH252D_Helmet
    {
        author = "Article 2 Studios & Gooman";
        displayName = "CH252D Helmet [Cessna]";
        hiddenSelectionsTextures[] =
        {
            "TFV_Armor\Cessna\data\cessna_odst_helmet_co.paa",
            "TFV_Armor\Cessna\data\cessna_odst_visor_co.paa"
        };

        class XtdGearInfo
        {
            model = "TFV_Helmet_Cessna";
            Detachment = "ODST";
        };
    };

    class TFV_ODST_Helmet_Cessna_dp : OPTRE_UNSC_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        scopeCurator = 1;
        author = "Article 2 Studios & Gooman";
        displayName = "CH252D Helmet [Cessna]";
        hiddenSelectionsTextures[] =
        {
            "TFV_Armor\Cessna\data\cessna_odst_helmet_co.paa"
        };
    };

    #define VEST_CESSNA hiddenSelectionsTextures[]= \
    { \
        "TFV_Armor\Common\m52d_underarmor_co.paa", \
        "TFV_Armor\Common\m52d_vest_co.paa", \
        "TFV_Armor\Cessna\data\cessna_odst_legs_co.paa", \
        "optre_unsc_units\army\data\ghillie_woodland_co.paa", \
        "TFV_Armor\Cessna\data\cessna_odst_armor_co.paa", \
    }
    class TFV_M52D_Vest_Basic_Cessna : OPTRE_UNSC_M52D_Armor
    {
        displayName = "M52D Body Armor (Basic) (Cessna)";
        VEST_CESSNA;
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply200";
            VEST_CESSNA;
        };

        class XtdGearInfo
        {
            model = "TFV_Vest_Cessna";
            Class = "Basic";
        };
    };

    class TFV_M52D_Vest_Demolitions_Cessna : OPTRE_UNSC_M52D_Armor_Demolitions
    {
        displayName = "M52D Body Armor (Demolitions) (Cessna)";
        VEST_CESSNA;
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply200";
            VEST_CESSNA;
        };

        class XtdGearInfo
        {
            model = "TFV_Vest_Cessna";
            Class = "Demolitions";
        };
    };
    #undef VEST_CESSNA
};

class XtdGearModels
{
    class CfgWeapons
    {
        class TFV_Vest_Cessna
        {
            label = "E. Cessna";
            author = "Gooman";
            options[] = { "Class" };

            class Class
            {
                label = "Class";
                values[] = { "Basic", "Demolitions" };
            };
        };

        class TFV_Helmet_Cessna
        {
            label = "E. Cessna";
            author = "Gooman";
            options[] = { "Detachment" };

            class Detachment
            {
                label = "Detachment";
                values[] = { "ODST" };
            };
        };
    };
};

class cfgMods
{
    author = "Gooman";
};