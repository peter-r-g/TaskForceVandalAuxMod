class CfgPatches
{
    class TFV_Armor_Foley
    {
        name = "Task Force Vandal Aux - Armor (Foley)";
        author = "Gooman";

        addonRootClass = "TFV_Armor";
        requiredVersion = 0.1;
        requiredAddons[] = {
            "TFV_Armor",
            "OPTRE_UNSC_Units_Army"
        };

        units[] = {};
        weapons[] = {
            "TFV_ODST_Helmet_Foley",
            "TFV_M52D_Vest_Basic_Foley",
        };
    };
};

class CfgWeapons
{
    class OPTRE_UNSC_CH252D_Helmet;
    class OPTRE_UNSC_CH252D_Helmet_dp;
    class OPTRE_UNSC_M52A_Armor1_WDL;
    class OPTRE_UNSC_M52D_Armor : OPTRE_UNSC_M52A_Armor1_WDL { class ItemInfo; };

    class TFV_ODST_Helmet_Foley : OPTRE_UNSC_CH252D_Helmet
    {
        author = "Article 2 Studios & Gooman";
        displayName = "CH252D Helmet [Foley]";
        hiddenSelectionsTextures[] =
        {
            "TFV_Armor\Foley\data\foley_odst_helmet_co.paa",
            "TFV_Armor\Foley\data\foley_odst_visor_co.paa"
        };

        class XtdGearInfo
        {
            model = "TFV_Helmet_Foley";
            Detachment = "ODST";
        };
    };

    class TFV_ODST_Helmet_Foley_dp : OPTRE_UNSC_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        scopeCurator = 1;
        author = "Article 2 Studios & Gooman";
        displayName = "CH252D Helmet [Foley]";
        hiddenSelectionsTextures[] =
        {
            "TFV_Armor\Foley\data\foley_odst_helmet_co.paa"
        };
    };

    #define VEST_FOLEY hiddenSelectionsTextures[]= \
    { \
        "TFV_Armor\Common\m52d_underarmor_co.paa", \
        "TFV_Armor\Common\m52d_vest_co.paa", \
        "TFV_Armor\Common\m52d_legs_co.paa", \
        "optre_unsc_units\army\data\ghillie_woodland_co.paa", \
		"TFV_Armor\Foley\data\foley_odst_armor_co.paa" \
    }
    class TFV_M52D_Vest_Basic_Foley : OPTRE_UNSC_M52D_Armor
    {
        displayName = "M52D Body Armor (Basic) (Foley)";
        VEST_FOLEY;
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply200";
            VEST_FOLEY;
        };

        class XtdGearInfo
        {
            model = "TFV_Vest_Foley";
            Class = "Basic";
        };
    };
    #undef VEST_FOLEY
};

class XtdGearModels
{
    class CfgWeapons
    {
        class TFV_Vest_Foley
        {
            label = "S. Foley";
            author = "Gooman";
            options[] = { "Class" };

            class Class
            {
                label = "Class";
                values[] = { "Basic" };
            };
        };

        class TFV_Helmet_Foley
        {
            label = "S. Foley";
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