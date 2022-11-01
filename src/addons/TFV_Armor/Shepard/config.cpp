class CfgPatches
{
    class TFV_Armor_Shepard
    {
        name = "Task Force Vandal Aux - Armor (Shepard)";
        author = "Gooman";

        addonRootClass = "TFV_Armor";
        requiredVersion = 0.1;
        requiredAddons[] = {
            "TFV_Armor",
            "OPTRE_UNSC_Units_Army"
        };

        units[] = {};
        weapons[] = {
            "TFV_ODST_Helmet_Shepard",
            "TFV_M52D_Vest_Basic_Shepard",
        };
    };
};

class CfgWeapons
{
    class OPTRE_UNSC_CH252D_Helmet;
    class OPTRE_UNSC_CH252D_Helmet_dp;
    class OPTRE_UNSC_M52A_Armor1_WDL;
    class OPTRE_UNSC_M52D_Armor : OPTRE_UNSC_M52A_Armor1_WDL { class ItemInfo; };

    class TFV_ODST_Helmet_Shepard : OPTRE_UNSC_CH252D_Helmet
    {
        author = "Article 2 Studios & Gooman";
        displayName = "CH252D Helmet [Shepard]";
        hiddenSelectionsTextures[] =
        {
            "TFV_Armor\Shepard\data\shepard_odst_helmet_co.paa",
            "TFV_Armor\Shepard\data\shepard_odst_visor_co.paa"
        };

        class XtdGearInfo
        {
            model = "TFV_Helmet_Shepard";
            Detachment = "ODST";
        };
    };

    class TFV_ODST_Helmet_Shepard_dp : OPTRE_UNSC_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        scopeCurator = 1;
        author = "Article 2 Studios & Gooman";
        displayName = "CH252D Helmet [Shepard]";
        hiddenSelectionsTextures[] =
        {
            "TFV_Armor\Shepard\data\shepard_odst_helmet_co.paa"
        };
    };

    #define VEST_SHEPARD hiddenSelectionsTextures[]= \
    { \
        "TFV_Armor\Common\m52d_underarmor_co.paa", \
        "TFV_Armor\Common\m52d_vest_co.paa", \
        "TFV_Armor\Common\m52d_legs_co.paa", \
        "optre_unsc_units\army\data\ghillie_woodland_co.paa", \
		"TFV_Armor\Shepard\data\shepard_odst_armor_co.paa" \
    }
    class TFV_M52D_Vest_Basic_Shepard : OPTRE_UNSC_M52D_Armor
    {
        displayName = "M52D Body Armor (Basic) (Shepard)";
        VEST_SHEPARD;
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply200";
            VEST_SHEPARD;
        };

        class XtdGearInfo
        {
            model = "TFV_Vest_Shepard";
            Class = "Basic";
        };
    };
    #undef VEST_SHEPARD
};

class XtdGearModels
{
    class CfgWeapons
    {
        class TFV_Vest_Shepard
        {
            label = "N. Shepard";
            author = "Gooman";
            options[] = { "Class" };

            class Class
            {
                label = "Class";
                values[] = { "Basic" };
            };
        };

        class TFV_Helmet_Shepard
        {
            label = "N. Shepard";
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