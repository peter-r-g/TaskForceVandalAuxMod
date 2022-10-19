class CfgPatches
{
    class TFV_Armor_Reeves
    {
        name = "Task Force Vandal Aux - Armor (Reeves)";
        author = "Gooman";

        addonRootClass = "TFV_Armor";
        requiredVersion = 0.1;
        requiredAddons[] = {
            "TFV_Armor",
            "OPTRE_UNSC_Units_Army"
        };

        units[] = {};
        weapons[] = {
            "TFV_Recon_Helmet_Reeves",
            "TFV_Recon_Helmet_Reeves2",
            "TFV_ODST_Helmet_Reeves2",
            "TFV_M52D_Vest_Demolitions_Reeves",
            "TFV_M52D_Vest_Demolitions_Reeves2",
            "TFV_M52D_Vest_Light_Reeves",
            "TFV_M52D_Vest_Light_Reeves2",
            "TFV_M52D_Vest_Rifleman_Reeves",
            "TFV_M52D_Vest_Rifleman_Reeves2",
            "TFV_M52D_Vest_Scout_Reeves",
            "TFV_M52D_Vest_Scout_Reeves2"
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
    class OPTRE_UNSC_M52D_Armor_Demolitions : OPTRE_UNSC_M52D_Armor { class ItemInfo; };
    class OPTRE_UNSC_M52D_Armor_Light : OPTRE_UNSC_M52D_Armor { class ItemInfo; };
    class OPTRE_UNSC_M52D_Armor_Rifleman : OPTRE_UNSC_M52D_Armor { class ItemInfo; };
    class OPTRE_UNSC_M52D_Armor_Scout : OPTRE_UNSC_M52D_Armor { class ItemInfo; };

    class TFV_Recon_Helmet_Reeves : OPTRE_UNSC_RECON_HELMET
    {
        author = "Article 2 Studios & Gooman";
        displayName = "R/B5 Helmet (Reeves)";
        hiddenSelectionsTextures[] =
        {
            "TFV_Armor\Reeves\data\reeves_oni_helmet_co.paa",
            "TFV_Armor\Reeves\data\reeves_oni_visor_co.paa"
        };

        class XtdGearInfo
        {
            model = "TFV_Helmet_Reeves";
            Detachment = "ONI";
            Variant = "First";
        };
    };

    class TFV_Recon_Helmet_Reeves2 : OPTRE_UNSC_RECON_HELMET
    {
        author = "Article 2 Studios & Gooman";
        displayName = "R/B5 Helmet (Reeves VER 2)";
        hiddenSelectionsTextures[] =
        {
            "TFV_Armor\Reeves\data\reevestwo_oni_helmet_co.paa",
            "TFV_Armor\Reeves\data\reevestwo_oni_visor_co.paa"
        };

        class XtdGearInfo
        {
            model = "TFV_Helmet_Reeves";
            Detachment = "ONI";
            Variant = "Second";
        };
    };

    class TFV_ODST_Helmet_Reeves2 : OPTRE_UNSC_CH252D_Helmet
    {
        author = "Article 2 Studios & Gooman";
        displayName = "CH252D Helmet [Reeves]";
        hiddenSelectionsTextures[] =
        {
            "TFV_Armor\Reeves\data\reevestwo_odst_helmet_co.paa",
            "TFV_Armor\Reeves\data\reevestwo_odst_visor_co.paa"
        };

        class XtdGearInfo
        {
            model = "TFV_Helmet_Reeves";
            Detachment = "ODST";
            Variant = "Second";
        };
    };

    class TFV_Recon_Helmet_Reeves_dp : OPTRE_UNSC_RECON_HELMET_dp
    {
        scope = 1;
        scopeArsenal = 1;
        scopeCurator = 1;
        author = "Article 2 Studios & Gooman";
        displayName = "R/B5 Helmet (Reeves)";
        hiddenSelectionsTextures[] =
        {
            "TFV_Armor\Reeves\data\reeves_oni_helmet_co.paa",
            "optre_unsc_units\army\data\recon_visor_ca.paa"
        };
    };

    class TFV_Recon_Helmet_Reeves2_dp : OPTRE_UNSC_RECON_HELMET_dp
    {
        scope = 1;
        scopeArsenal = 1;
        scopeCurator = 1;
        author = "Article 2 Studios & Gooman";
        displayName = "R/B5 Helmet (Reeves VER 2)";
        hiddenSelectionsTextures[] =
        {
            "TFV_Armor\Reeves\data\reevestwo_oni_helmet_co.paa",
            "optre_unsc_units\army\data\recon_visor_ca.paa"
        };
    };

    class TFV_ODST_Helmet_Reeves2_dp : OPTRE_UNSC_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        scopeCurator = 1;
        author = "Article 2 Studios & Gooman";
        displayName = "CH252D Helmet [Reeves]";
        hiddenSelectionsTextures[] =
        {
            "TFV_Armor\Reeves\data\reevestwo_odst_helmet_co.paa",
            "optre_unsc_units\army\data\recon_visor_ca.paa"
        };
    };

    #define VEST_REEVES hiddenSelectionsTextures[]= \
    { \
        "TFV_Armor\Common\m52d_underarmor_co.paa", \
        "TFV_Armor\Common\m52d_vest_co.paa", \
        "TFV_Armor\Common\m52d_legs_co.paa", \
        "optre_unsc_units\army\data\ghillie_woodland_co.paa", \
        "TFV_Armor\Reeves\data\reeves_odst_armor_co.paa", \
    }
    #define VEST_REEVES2 hiddenSelectionsTextures[]= \
    { \
        "TFV_Armor\Common\m52d_underarmor_co.paa", \
        "TFV_Armor\Common\m52d_vest_co.paa", \
        "TFV_Armor\Reeves\data\reevestwo_odst_legs_co.paa", \
        "optre_unsc_units\army\data\ghillie_woodland_co.paa", \
        "TFV_Armor\Reeves\data\reevestwo_odst_armor_co.paa" \
    }
    class TFV_M52D_Vest_Demolitions_Reeves : OPTRE_UNSC_M52D_Armor_Demolitions
    {
        displayName = "M52D Body Armor (Demolitions) (Reeves)";
        hiddenSelections[] =
        {
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            "A_Ghillie",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTLeft",
            "AS_ODSTCQBRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
            "AP_AR",
            "AP_BR",
            "AP_Canteen",
            "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
            "AP_Pack",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "AP_Thigh",
            "AP_Frag",
            "AP_Smoke",
            "APO_AR",
            "APO_BR",
            "APO_Sniper",
            "CustomKit_Scorch"
        };
        VEST_REEVES;
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply200";
            hiddenSelections[] =
            {
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_KneesMarLeft",
                "A_KneesMarRight",
                "A_Ghillie",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
                "AS_ODSTLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_AR",
                "AP_BR",
                "AP_Canteen",
                "AP_Knife",
                "AP_MGThigh",
                "AP_AR",
                "AP_Pack",
                "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                "AP_Thigh",
                "AP_Frag",
                "AP_Smoke",
                "APO_AR",
                "APO_BR",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
            VEST_REEVES;
        };

        class XtdGearInfo
        {
            model = "TFV_Vest_Reeves";
            Class = "Demolitions";
            Variant = "First";
        };
    };

    class TFV_M52D_Vest_Demolitions_Reeves2 : OPTRE_UNSC_M52D_Armor_Demolitions
    {
        displayName = "M52D Body Armor (Demolitions) (Reeves VER 2)";
        hiddenSelections[] =
        {
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            "A_Ghillie",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTLeft",
            "AS_ODSTCQBRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
            "AP_AR",
            "AP_BR",
            "AP_Canteen",
            "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
            "AP_Pack",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "AP_Thigh",
            "AP_Frag",
            "AP_Smoke",
            "APO_AR",
            "APO_BR",
            "APO_Sniper",
            "CustomKit_Scorch"
        };
        VEST_REEVES2;
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply200";
            hiddenSelections[] =
            {
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_KneesMarLeft",
                "A_KneesMarRight",
                "A_Ghillie",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
                "AS_ODSTLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_AR",
                "AP_BR",
                "AP_Canteen",
                "AP_Knife",
                "AP_MGThigh",
                "AP_AR",
                "AP_Pack",
                "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                "AP_Thigh",
                "AP_Frag",
                "AP_Smoke",
                "APO_AR",
                "APO_BR",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
            VEST_REEVES2;
        };

        class XtdGearInfo
        {
            model = "TFV_Vest_Reeves";
            Class = "Demolitions";
            Variant = "Second";
        };
    };

    class TFV_M52D_Vest_Light_Reeves : OPTRE_UNSC_M52D_Armor_Light
    {
        displayName = "M52D Body Armor (Light) (Reeves)";
        VEST_REEVES;
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply200";
            VEST_REEVES;
        };

        class XtdGearInfo
        {
            model = "TFV_Vest_Reeves";
            Class = "Light";
            Variant = "First";
        };
    };

    class TFV_M52D_Vest_Light_Reeves2 : OPTRE_UNSC_M52D_Armor_Light
    {
        displayName = "M52D Body Armor (Light) (Reeves VER 2)";
        VEST_REEVES2;
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply200";
            VEST_REEVES2;
        };

        class XtdGearInfo
        {
            model = "TFV_Vest_Reeves";
            Class = "Light";
            Variant = "Second";
        };
    };

    class TFV_M52D_Vest_Rifleman_Reeves : OPTRE_UNSC_M52D_Armor_Rifleman
    {
        displayName = "M52D Body Armor (Rifleman) (Reeves)";
        hiddenSelections[] =
        {
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            "A_Ghillie",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
            "AP_AR",
            "AP_BR",
            "AP_Canteen",
            "AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
            "AP_Pack",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "AP_Thigh",
            "APO_BR",
            "APO_Knife",
            "APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
        };
        VEST_REEVES;
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply200";
            hiddenSelections[] =
            {
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_KneesMarLeft",
                "A_KneesMarRight",
                "A_Ghillie",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
                "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_AR",
                "AP_BR",
                "AP_Canteen",
                "AP_GL",
                "AP_Knife",
                "AP_MGThigh",
                "AP_AR",
                "AP_Pack",
                "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                "AP_Thigh",
                "APO_BR",
                "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
            VEST_REEVES;
        };

        class XtdGearInfo
        {
            model = "TFV_Vest_Reeves";
            Class = "Rifleman";
            Variant = "First";
        };
    };

    class TFV_M52D_Vest_Rifleman_Reeves2 : OPTRE_UNSC_M52D_Armor_Rifleman
    {
        displayName = "M52D Body Armor (Rifleman) (Reeves VER 2)";
        hiddenSelections[] =
        {
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            "A_Ghillie",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
            "AP_AR",
            "AP_BR",
            "AP_Canteen",
            "AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
            "AP_Pack",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "AP_Thigh",
            "APO_BR",
            "APO_Knife",
            "APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
        };
        VEST_REEVES2;
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply200";
            hiddenSelections[] =
            {
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_KneesMarLeft",
                "A_KneesMarRight",
                "A_Ghillie",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
                "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_AR",
                "AP_BR",
                "AP_Canteen",
                "AP_GL",
                "AP_Knife",
                "AP_MGThigh",
                "AP_AR",
                "AP_Pack",
                "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                "AP_Thigh",
                "APO_BR",
                "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
            VEST_REEVES2;
        };

        class XtdGearInfo
        {
            model = "TFV_Vest_Reeves";
            Class = "Rifleman";
            Variant = "Second";
        };
    };

    class TFV_M52D_Vest_Scout_Reeves : OPTRE_UNSC_M52D_Armor_Scout
    {
        displayName = "M52D Body Armor (Scout) (Reeves)";
        hiddenSelections[] =
        {
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            "A_Ghillie",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
            "AP_AR",
            "AP_BR",
            "AP_Canteen",
            "AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
            "AP_Pack",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "AP_Thigh",
            "AP_Frag",
            "APO_AR",
            "APO_BR",
            "APO_Sniper",
            "CustomKit_Scorch"
        };
        VEST_REEVES;
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply200";
            hiddenSelections[] =
            {
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_KneesMarLeft",
                "A_KneesMarRight",
                "A_Ghillie",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
                "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_AR",
                "AP_BR",
                "AP_Canteen",
                "AP_GL",
                "AP_Knife",
                "AP_MGThigh",
                "AP_AR",
                "AP_Pack",
                "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                "AP_Thigh",
                "AP_Frag",
                "APO_AR",
                "APO_BR",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
            VEST_REEVES;
        };

        class XtdGearInfo
        {
            model = "TFV_Vest_Reeves";
            Class = "Scout";
            Variant = "First";
        };
    };

    class TFV_M52D_Vest_Scout_Reeves2 : OPTRE_UNSC_M52D_Armor_Scout
    {
        displayName = "M52D Body Armor (Scout) (Reeves VER 2)";
        hiddenSelections[] =
        {
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            "A_Ghillie",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
            "AP_AR",
            "AP_BR",
            "AP_Canteen",
            "AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
            "AP_Pack",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "AP_Thigh",
            "AP_Frag",
            "APO_AR",
            "APO_BR",
            "APO_Sniper",
            "CustomKit_Scorch"
        };
        VEST_REEVES2;
        class ItemInfo : ItemInfo
        {
            containerClass = "Supply200";
            hiddenSelections[] =
            {
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_KneesMarLeft",
                "A_KneesMarRight",
                "A_Ghillie",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
                "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_AR",
                "AP_BR",
                "AP_Canteen",
                "AP_GL",
                "AP_Knife",
                "AP_MGThigh",
                "AP_AR",
                "AP_Pack",
                "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                "AP_Thigh",
                "AP_Frag",
                "APO_AR",
                "APO_BR",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
            VEST_REEVES2;
        };

        class XtdGearInfo
        {
            model = "TFV_Vest_Reeves";
            Class = "Scout";
            Variant = "Second";
        };
    };
    #undef VEST_REEVES
    #undef VEST_REEVES2
};

class XtdGearModels
{
    class CfgWeapons
    {
        class TFV_Vest_Reeves
        {
            label = "J. Reeves";
            author = "Gooman";
            options[] = { "Class", "Variant" };

            class Class
            {
                label = "Class";
                values[] = { "Demolitions", "Light", "Rifleman", "Scout" };
            };

            class Variant
            {
                label = "Variant";
                values[] = { "First", "Second" };
            };
        };

        class TFV_Helmet_Reeves
        {
            label = "J. Reeves";
            author = "Gooman";
            options[] = { "Detachment", "Variant" };

            class Detachment
            {
                label = "Detachment";
                values[] = { "ODST", "ONI" };
            };

            class Variant
            {
                label = "Variant";
                values[] = { "First", "Second" };
            };
        };
    };
};

class cfgMods
{
    author = "Gooman";
};