class CfgPatches
{
    class TFV_Armor_Autumn
    {
        name = "Task Force Vandal Aux - Armor (Autumn)";
        author = "Gooman";

        addonRootClass = "TFV_Armor";
        requiredVersion = 0.1;
        requiredAddons[] = {
            "TFV_Armor",
            "OPTRE_UNSC_Units_Army"
        };

        units[] = {};
        weapons[] = {
            "TFV_ODST_Helmet_Autumn",
            "TFV_Recon_Helmet_Autumn",
            "TFV_M52D_Vest_Light_Autumn",
            "TFV_M52D_Vest_Rifleman_Autumn"
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

    class TFV_ODST_Helmet_Autumn : OPTRE_UNSC_CH252D_Helmet
    {
        author = "Article 2 Studios & Gooman";
        displayName = "CH252D Helmet [Autumn]";
        hiddenSelectionsTextures[] =
        {
            "TFV_Armor\Autumn\data\autumn_odst_helmet_co.paa",
            "TFV_Armor\Autumn\data\autumn_odst_visor_co.paa"
        };
    };

    class TFV_Recon_Helmet_Autumn : OPTRE_UNSC_RECON_HELMET
    {
        author = "Article 2 Studios & Gooman";
        displayName = "R/B5 Helmet (Autumn)";
        hiddenSelectionsTextures[] =
        {
            "TFV_Armor\Autumn\data\autumn_oni_helmet_co.paa",
            "TFV_Armor\Autumn\data\autumn_oni_visor_co.paa"
        };
    };

    class TFV_ODST_Helmet_Autumn_dp : OPTRE_UNSC_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        scopeCurator = 1;
        author = "Article 2 Studios & Gooman";
        displayName = "CH252D Helmet [Autumn]";
        hiddenSelectionsTextures[] =
        {
            "TFV_Armor\Autumn\data\autumn_odst_helmet_co.paa"
        };
    };

    class TFV_Recon_Helmet_Autumn_dp : OPTRE_UNSC_RECON_HELMET_dp
    {
        scope = 1;
        scopeArsenal = 1;
        scopeCurator = 1;
        author = "Article 2 Studios & Gooman";
        displayName = "R/B5 Helmet (Autumn)";
        hiddenSelectionsTextures[] =
        {
            "TFV_Armor\Autumn\data\autumn_oni_helmet_co.paa",
            "optre_unsc_units\army\data\recon_visor_ca.paa"
        };
    };

    #define VEST_AUTUMN hiddenSelectionsTextures[]= \
    { \
        "TFV_Armor\Common\m52d_underarmor_co.paa", \
        "TFV_Armor\Common\m52d_vest_co.paa", \
        "TFV_Armor\Autumn\data\autumn_odst_legs_co.paa", \
        "optre_unsc_units\army\data\ghillie_woodland_co.paa", \
        "TFV_Armor\Autumn\data\autumn_odst_armor_co.paa", \
    }
    class TFV_M52D_Vest_Light_Autumn : OPTRE_UNSC_M52D_Armor_Light
    {
        displayName = "M52D Body Armor (Light) (Autumn)";
        VEST_AUTUMN;
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply200";
            VEST_AUTUMN;
        };
    };

    class TFV_M52D_Vest_Rifleman_Autumn : OPTRE_UNSC_M52D_Armor_Rifleman
    {
        displayName = "M52D Body Armor (Rifleman) (Autumn)";
        VEST_AUTUMN;
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply200";
            VEST_AUTUMN;
        };
    };
    #undef VEST_AUTUMN
};

class cfgMods
{
    author = "Gooman";
};