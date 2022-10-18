class CfgPatches
{
	class TFV_Armor_Aasen
	{
        name = "Task Force Vandal Aux - Armor (Aasen)";
        author = "Gooman";

        addonRootClass = "TFV_Armor";
        requiredVersion = 0.1;
        requiredAddons[] = {
            "TFV_Armor",
            "OPTRE_UNSC_Units_Army"
        };

        units[] = {};
        weapons[] = {
            "TFV_Recon_Helmet_Aasen",
            "TFV_M52D_Vest_Light_Aasen"
        };
	};
};

class CfgWeapons
{
    class OPTRE_UNSC_RECON_HELMET;
    class OPTRE_UNSC_RECON_HELMET_dp;
    class OPTRE_UNSC_M52D_Armor;
    class OPTRE_UNSC_M52D_Armor_Light : OPTRE_UNSC_M52D_Armor { class ItemInfo; };

    class TFV_Recon_Helmet_Aasen : OPTRE_UNSC_RECON_HELMET
    {
        author = "Article 2 Studios & Gooman";
        displayName = "R/B5 Helmet (Aasen)";
        hiddenSelectionsTextures[] =
        {
            "TFV_Armor\Aasen\data\aasen_oni_helmet_co.paa",
            "TFV_Armor\Aasen\data\aasen_oni_visor_co.paa"
        };
    };

    class TFV_Recon_Helmet_Aasen_dp : OPTRE_UNSC_RECON_HELMET_dp
    {
        scope = 1;
        scopeArsenal = 1;
        scopeCurator = 1;
        author = "Article 2 Studios & Gooman";
        displayName = "R/B5 Helmet (Aasen)";
        hiddenSelectionsTextures[] =
        {
            "TFV_Armor\Aasen\data\aasen_oni_helmet_co.paa",
            "optre_unsc_units\army\data\recon_visor_ca.paa"
        };
    };

    #define VEST_AASEN hiddenSelectionsTextures[] = \
    { \
        "TFV_Armor\Common\m52d_underarmor_co.paa", \
        "TFV_Armor\Common\m52d_vest_co.paa", \
        "TFV_Armor\Aasen\data\aasen_odst_legs_co.paa", \
        "optre_unsc_units\army\data\ghillie_woodland_co.paa", \
        "TFV_Armor\Aasen\data\aasen_odst_armor_co.paa" \
    }
    class TFV_M52D_Vest_Light_Aasen : OPTRE_UNSC_M52D_Armor_Light
    {
        displayName = "M52D Body Armor (Aasen)";
        VEST_AASEN;
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply200";
            VEST_AASEN;
        };
    };
    #undef VEST_AASEN
};

class cfgMods
{
    author = "Gooman";
};