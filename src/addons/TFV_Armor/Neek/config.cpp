class CfgPatches
{
    class TFV_Armor_Neek
    {
        name = "Task Force Vandal Aux - Armor (Neek)";
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
        displayName = "CH252D Helmet [Neek]";
        hiddenSelectionsTextures[] =
        {
            "TFV_Armor\Neek\data\neek_odst_helmet_co.paa",
            "TFV_Armor\Neek\data\neek_odst_visor_co.paa"
        };
    };

    class TFV_ODST_Helmet_Neek_dp : OPTRE_UNSC_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        scopeCurator = 1;
        author = "Article 2 Studios & Gooman";
        displayName = "CH252D Helmet [Neek]";
        hiddenSelectionsTextures[] =
        {
            "TFV_Armor\Neek\data\neek_odst_helmet_co.paa"
        };
    };

    #define VEST_NEEK hiddenSelectionsTextures[]= \
    { \
        "TFV_Armor\Common\m52d_underarmor_co.paa", \
        "TFV_Armor\Common\m52d_vest_co.paa", \
        "TFV_Armor\Common\m52d_legs_co.paa", \
        "optre_unsc_units\army\data\ghillie_woodland_co.paa", \
		"TFV_Armor\Neek\data\neek_odst_armor_co.paa" \
    }
    class TFV_M52D_Vest_Basic_Neek : OPTRE_UNSC_M52D_Armor
    {
        displayName = "M52D Body Armor (Basic) (Neek)";
        VEST_NEEK;
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply200";
            VEST_NEEK;
        };
    };
    #undef VEST_NEEK
};

class cfgMods
{
    author = "Gooman";
};