class CfgPatches
{
    class TFV_Armor_Romano
    {
        name = "Task Force Vandal Aux - Armor (Romano)";
        author = "Gooman";

        addonRootClass = "TFV_Armor";
        requiredVersion = 0.1;
        requiredAddons[] = {
            "TFV_Armor",
            "OPTRE_UNSC_Units_Army"
        };

        units[] = {};
        weapons[] = {
            "TFV_ODST_Helmet_Neek",
            "TFV_M52D_Vest_Basic_Neek"
        };
    };
};

class CfgWeapons
{
    class OPTRE_UNSC_CH252D_Helmet;
    class OPTRE_UNSC_CH252D_Helmet_dp;
    class OPTRE_UNSC_M52A_Armor1_WDL;
    class OPTRE_UNSC_M52D_Armor : OPTRE_UNSC_M52A_Armor1_WDL { class ItemInfo; };

    class TFV_ODST_Helmet_Neek : OPTRE_UNSC_CH252D_Helmet
    {
        author = "Article 2 Studios & Gooman";
        displayName = "CH252D Helmet [Romano]";
        hiddenSelectionsTextures[] =
        {
            "TFV_Armor\Romano\data\romano_odst_helmet_co.paa",
            "TFV_Armor\Romano\data\romano_odst_visor_co.paa"
        };

        class XtdGearInfo
        {
            model = "TFV_Helmet_Romano";
            Detachment = "ODST";
        };
    };

    class TFV_ODST_Helmet_Neek_dp : OPTRE_UNSC_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        scopeCurator = 1;
        author = "Article 2 Studios & Gooman";
        displayName = "CH252D Helmet [Romano]";
        hiddenSelectionsTextures[] =
        {
            "TFV_Armor\Romano\data\romano_odst_helmet_co.paa"
        };
    };

    #define VEST_NEEK hiddenSelectionsTextures[]= \
    { \
        "TFV_Armor\Common\m52d_underarmor_co.paa", \
        "TFV_Armor\Common\m52d_vest_co.paa", \
        "TFV_Armor\Common\m52d_legs_co.paa", \
        "optre_unsc_units\army\data\ghillie_woodland_co.paa", \
		"TFV_Armor\Romano\data\romano_odst_armor_co.paa" \
    }
    class TFV_M52D_Vest_Basic_Neek : OPTRE_UNSC_M52D_Armor
    {
        displayName = "M52D Body Armor (Basic) (Romano)";
        VEST_NEEK;
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply200";
            VEST_NEEK;
        };

        class XtdGearInfo
        {
            model = "TFV_Vest_Romano";
            Class = "Basic";
        };
    };
    #undef VEST_NEEK
};

class XtdGearModels
{
    class CfgWeapons
    {
        class TFV_Vest_Romano
        {
            label = "N. Romano";
            author = "Gooman";
            options[] = { "Class" };

            class Class
            {
                label = "Class";
                values[] = { "Basic" };
            };
        };

        class TFV_Helmet_Romano
        {
            label = "N. Romano";
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