class CfgPatches
{
    class TFV_Armor
    {
        name = "Task Force Vandal Aux - Armor";
        author = "Gooman";

        requiredVersion = 0.1;
        requiredAddons[] = {
            "TFV_Main",
            "OPTRE_UNSC_Units"
        };

        units[]={};
        weapons[]={
            "TFV_Recon_Helmet_Aasen",
            "TFV_M52D_Vest_Light_Aasen",

            "TFV_Recon_Helmet_Castle",
            "TFV_M52D_Vest_Light_Castle",
            "TFV_M52D_Vest_Rifleman_Castle",

            "TFV_Recon_Helmet_Reeves",
            "TFV_M52D_Vest_Demolitions_Reeves",
            "TFV_M52D_Vest_Light_Reeves",
            "TFV_M52D_Vest_Rifleman_Reeves",
            "TFV_M52D_Vest_Scout_Reeves",

            "TFV_Recon_Helmet_Roy",
            "TFV_M52D_Vest_Basic_Roy",
            "TFV_M52D_Vest_Demolitions_Roy",
            "TFV_M52D_Vest_Light_Roy",
            "TFV_M52D_Vest_Marksman_Roy",
            "TFV_M52D_Vest_Medic_Roy",
            "TFV_M52D_Vest_Rifleman_Roy",
            "TFV_M52D_Vest_Scout_Roy",
            "TFV_M52D_Vest_Sniper_Roy",
            "TFV_M52D_Vest_Roy"
        };
    };
};

class CfgWeapons
{
    #pragma region Base
	class OPTRE_UNSC_RECON_HELMET;
    class OPTRE_UNSC_RECON_HELMET_dp;

    class OPTRE_UNSC_M52A_Armor1_WDL;
    class OPTRE_UNSC_M52D_Armor: OPTRE_UNSC_M52A_Armor1_WDL { class ItemInfo; };
    // TODO: OPTRE_UNSC_M52D_Armor_Demolitions has damage protection problems?
    class TFV_OPTRE_UNSC_M52D_Armor_Demolitions: OPTRE_UNSC_M52D_Armor
    {
        dlc="OPTRE";
		author="Article 2 Studios";
		displayName="M52D Body Armor (Demolitions)";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
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
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
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
		};
    };
    class OPTRE_UNSC_M52D_Armor_Light: OPTRE_UNSC_M52D_Armor { class ItemInfo; };
    class OPTRE_UNSC_M52D_Armor_Marksman: OPTRE_UNSC_M52D_Armor { class ItemInfo; };
    class OPTRE_UNSC_M52D_Armor_Medic: OPTRE_UNSC_M52D_Armor { class ItemInfo; };
    // TODO: OPTRE_UNSC_M52D_Armor_Rifleman has damage protection problems?
    class TFV_OPTRE_UNSC_M52D_Armor_Rifleman: OPTRE_UNSC_M52D_Armor
    {
        dlc="OPTRE";
		author="Article 2 Studios";
		displayName="M52D Body Armor (Rifleman)";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
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
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
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
		};
    };
    class OPTRE_UNSC_M52D_Armor_Scout: OPTRE_UNSC_M52D_Armor { class ItemInfo; };
    class OPTRE_UNSC_M52D_Armor_Sniper: OPTRE_UNSC_M52D_Armor { class ItemInfo; };
    #pragma endregion Base

    #pragma region Aasen
    class TFV_Recon_Helmet_Aasen: OPTRE_UNSC_RECON_HELMET
    {
        author="Article 2 Studios & Gooman";
        displayName="R/B5 Helmet (Aasen)";
        hiddenSelectionsTextures[]=
		{
			"TFV_Armor\data\aasen\aasen_helmet_co.paa",
			"TFV_Armor\data\aasen\aasen_visor_co.paa"
		};
    };

    class TFV_Recon_Helmet_Aasen_dp: OPTRE_UNSC_RECON_HELMET_dp
    {
        scope=1;
		scopeArsenal=1;
		scopeCurator=1;
        author="Article 2 Studios & Gooman";
        displayName="R/B5 Helmet (Aasen)";
        hiddenSelectionsTextures[]=
		{
			"TFV_Armor\data\aasen\aasen_helmet_co.paa",
			"optre_unsc_units\army\data\recon_visor_ca.paa"
		};
    };

    #define VEST_AASEN hiddenSelectionsTextures[]= \
    { \
        "TFV_Armor\data\aasen\aasen_underamour_co.paa", \
        "TFV_Armor\data\aasen\aasen_vest_co.paa", \
        "TFV_Armor\data\aasen\aasen_legs_co.paa", \
        "optre_unsc_units\army\data\ghillie_woodland_co.paa", \
        "TFV_Armor\data\aasen\aasen_odst_armour_co.paa", \
    }
    class TFV_M52D_Vest_Light_Aasen: OPTRE_UNSC_M52D_Armor_Light
    {
        displayName = "M52D Body Armor (Aasen)";
        VEST_AASEN;
        class ItemInfo: ItemInfo
        {
            VEST_AASEN;
        };
    };
    #pragma endregion Aasen

    #pragma region Castle
    class TFV_Recon_Helmet_Castle: OPTRE_UNSC_RECON_HELMET
    {
        author="Article 2 Studios & Gooman";
        displayName="R/B5 Helmet (Castle)";
        hiddenSelectionsTextures[]=
		{
			"TFV_Armor\data\castle\castle_helmet_co.paa",
			"TFV_Armor\data\castle\castle_visor_co.paa"
		};
    };

    class TFV_Recon_Helmet_Castle_dp: OPTRE_UNSC_RECON_HELMET_dp
    {
        scope=1;
		scopeArsenal=1;
		scopeCurator=1;
        author="Article 2 Studios & Gooman";
        displayName="R/B5 Helmet (Castle)";
        hiddenSelectionsTextures[]=
		{
			"TFV_Armor\data\castle\castle_helmet_co.paa",
			"optre_unsc_units\army\data\recon_visor_ca.paa"
		};
    };

    #define VEST_CASTLE hiddenSelectionsTextures[]= \
    { \
        "TFV_Armor\data\castle\castle_underamour_co.paa", \
        "TFV_Armor\data\castle\castle_vest_co.paa", \
        "TFV_Armor\data\castle\castle_legs_co.paa", \
        "optre_unsc_units\army\data\ghillie_woodland_co.paa", \
        "TFV_Armor\data\castle\castle_odst_armour_co.paa", \
    }
    class TFV_M52D_Vest_Light_Castle: OPTRE_UNSC_M52D_Armor_Light
    {
        displayName = "M52D Body Armor (Light) (Castle)";
        VEST_CASTLE;
        class ItemInfo: ItemInfo
        {
            VEST_CASTLE;
        };
    };

    class TFV_M52D_Vest_Rifleman_Castle: TFV_OPTRE_UNSC_M52D_Armor_Rifleman
    {
        displayName = "M52D Body Armor (Rifleman) (Castle)";
        VEST_CASTLE;
        class ItemInfo: ItemInfo
        {
            VEST_CASTLE;
        };
    };
    #pragma endregion Castle

    #pragma region Reeves
    class TFV_Recon_Helmet_Reeves: OPTRE_UNSC_RECON_HELMET
    {
        author="Article 2 Studios & Gooman";
        displayName="R/B5 Helmet (Reeves)";
        hiddenSelectionsTextures[]=
		{
			"TFV_Armor\data\reeves\reeves_helmet_co.paa",
			"TFV_Armor\data\reeves\reeves_visor_co.paa"
		};
    };

    class TFV_Recon_Helmet_Reeves_dp: OPTRE_UNSC_RECON_HELMET_dp
    {
        scope=1;
		scopeArsenal=1;
		scopeCurator=1;
        author="Article 2 Studios & Gooman";
        displayName="R/B5 Helmet (Reeves)";
        hiddenSelectionsTextures[]=
		{
			"TFV_Armor\data\reeves\reeves_helmet_co.paa",
			"optre_unsc_units\army\data\recon_visor_ca.paa"
		};
    };

    #define VEST_REEVES hiddenSelectionsTextures[]= \
    { \
        "TFV_Armor\data\reeves\reeves_underamour_co.paa", \
        "TFV_Armor\data\reeves\reeves_vest_co.paa", \
        "TFV_Armor\data\reeves\reeves_legs_co.paa", \
        "optre_unsc_units\army\data\ghillie_woodland_co.paa", \
        "TFV_Armor\data\reeves\reeves_odst_armour_co.paa", \
    }
    class TFV_M52D_Vest_Demolitions_Reeves: TFV_OPTRE_UNSC_M52D_Armor_Demolitions
    {
        displayName = "M52D Body Armor (Demolitions) (Reeves)";
        hiddenSelections[]=
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
        class ItemInfo: ItemInfo
        {
            hiddenSelections[]=
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
    };

    class TFV_M52D_Vest_Light_Reeves: OPTRE_UNSC_M52D_Armor_Light
    {
        displayName = "M52D Body Armor (Light) (Reeves)";
        VEST_REEVES;
        class ItemInfo: ItemInfo
        {
            VEST_REEVES;
        };
    };

    class TFV_M52D_Vest_Rifleman_Reeves: TFV_OPTRE_UNSC_M52D_Armor_Rifleman
    {
        displayName = "M52D Body Armor (Rifleman) (Reeves)";
        hiddenSelections[]=
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
        class ItemInfo: ItemInfo
        {
            hiddenSelections[]=
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
    };

    class TFV_M52D_Vest_Scout_Reeves: OPTRE_UNSC_M52D_Armor_Scout
    {
        displayName = "M52D Body Armor (Scout) (Reeves)";
        hiddenSelections[]=
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
        class ItemInfo: ItemInfo
        {
            hiddenSelections[]=
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
    };
    #pragma endregion Reeves

    #pragma region Roy
    class TFV_Recon_Helmet_Roy: OPTRE_UNSC_RECON_HELMET
    {
        author="Article 2 Studios & Gooman";
        displayName="R/B5 Helmet (Roy)";
        hiddenSelectionsTextures[]=
		{
			"TFV_Armor\data\roy\roy_helmet_co.paa",
			"TFV_Armor\data\roy\roy_visor_co.paa"
		};
    };

    class TFV_Recon_Helmet_Roy_dp: OPTRE_UNSC_RECON_HELMET_dp
    {
        scope=1;
		scopeArsenal=1;
		scopeCurator=1;
        author="Article 2 Studios & Gooman";
        displayName="R/B5 Helmet (Roy)";
        hiddenSelectionsTextures[]=
		{
			"TFV_Armor\data\roy\roy_helmet_co.paa",
			"optre_unsc_units\army\data\recon_visor_ca.paa"
		};
    };

    #define VEST_ROY hiddenSelectionsTextures[]= \
    { \
        "TFV_Armor\data\roy\roy_underamour_co.paa", \
        "TFV_Armor\data\roy\roy_vest_co.paa", \
        "TFV_Armor\data\roy\roy_legs_co.paa", \
        "optre_unsc_units\army\data\ghillie_woodland_co.paa", \
        "TFV_Armor\data\roy\roy_odst_armour_co.paa", \
    }
    class TFV_M52D_Vest_Basic_Roy: OPTRE_UNSC_M52D_Armor
    {
        displayName = "M52D Body Armor (Basic) (Roy)";
        VEST_ROY;
        class ItemInfo: ItemInfo
        {
            VEST_ROY;
        };
    };

    class TFV_M52D_Vest_Demolitions_Roy: TFV_OPTRE_UNSC_M52D_Armor_Demolitions
    {
        displayName = "M52D Body Armor (Demolitions) (Roy)";
        VEST_ROY;
        class ItemInfo: ItemInfo
        {
            VEST_ROY;
        };
    };

    class TFV_M52D_Vest_Light_Roy: OPTRE_UNSC_M52D_Armor_Light
    {
        displayName = "M52D Body Armor (Light) (Roy)";
        VEST_ROY;
        class ItemInfo: ItemInfo
        {
            VEST_ROY;
        };
    };

    class TFV_M52D_Vest_Marksman_Roy: OPTRE_UNSC_M52D_Armor_Marksman
    {
        displayName = "M52D Body Armor (Marksman) (Roy)";
        VEST_ROY;
        class ItemInfo: ItemInfo
        {
            VEST_ROY;
        };
    };

    class TFV_M52D_Vest_Medic_Roy: OPTRE_UNSC_M52D_Armor_Medic
    {
        displayName = "M52D Body Armor (Medic) (Roy)";
        VEST_ROY;
        class ItemInfo: ItemInfo
        {
            VEST_ROY;
        };
    };

    class TFV_M52D_Vest_Rifleman_Roy: TFV_OPTRE_UNSC_M52D_Armor_Rifleman
    {
        displayName = "M52D Body Armor (Rifleman) (Roy)";
        VEST_ROY;
        class ItemInfo: ItemInfo
        {
            VEST_ROY;
        };
    };

    class TFV_M52D_Vest_Scout_Roy: OPTRE_UNSC_M52D_Armor_Scout
    {
        displayName = "M52D Body Armor (Scout) (Roy)";
        VEST_ROY;
        class ItemInfo: ItemInfo
        {
            VEST_ROY;
        };
    };

    class TFV_M52D_Vest_Sniper_Roy: OPTRE_UNSC_M52D_Armor_Sniper
    {
        displayName = "M52D Body Armor (Sniper) (Roy)";
        VEST_ROY;
        class ItemInfo: ItemInfo
        {
            VEST_ROY;
        };
    };

    class TFV_M52D_Vest_Roy: OPTRE_UNSC_M52D_Armor
    {
        displayName = "M52D Body Armor (Roy)";
        hiddenSelections[]=
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
			"AS_ODSTRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
            "AP_AR",
            "AP_BR",
            "AP_GL",
            "AP_MGThigh",
            "AP_AR",
            "AP_Pack",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "APO_AR",
            "APO_Knife",
            "APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
        };
        VEST_ROY;
        class ItemInfo: ItemInfo
        {
            hiddenSelections[]=
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
                "AS_ODSTRight",
                "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_AR",
                "AP_BR",
                "AP_GL",
                "AP_MGThigh",
                "AP_AR",
                "AP_Pack",
                "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                "APO_AR",
                "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
            VEST_ROY;
        };
    };
    #pragma endregion Roy
};

class cfgMods
{
    author = "Gooman";
};