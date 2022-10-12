class CfgPatches
{
    class TFV_Armor
    {
        name = "Task Force Vandal Aux - Armor";
        author = "Gooman";

        requiredVersion = 0.1;
        requiredAddons[] = {
            "TFV_Main",
            "OPTRE_UNSC_Units",
            "1st_MEU_patch_helmet_pegasus"
        };

        units[]={};
        weapons[]={
            "TFV_Recon_Helmet_Aasen",
            "TFV_M52D_Vest_Light_Aasen",

            "TFV_Recon_Helmet_Castle",
            "TFV_ODST_Helmet_Castle",
            "TFV_M52D_Vest_Light_Castle",
            "TFV_M52D_Vest_Rifleman_Castle",

            "TFV_Recon_Helmet_Reeves",
            "TFV_M52D_Vest_Demolitions_Reeves",
            "TFV_M52D_Vest_Light_Reeves",
            "TFV_M52D_Vest_Rifleman_Reeves",
            "TFV_M52D_Vest_Scout_Reeves",

            "TFV_Recon_Helmet_Roy",
            "TFV_ODST_Helmet_Roy",
            "TFV_M52D_Vest_Basic_Roy",
            "TFV_M52D_Vest_Demolitions_Roy",
            "TFV_M52D_Vest_Light_Roy",
            "TFV_M52D_Vest_Marksman_Roy",
            "TFV_M52D_Vest_Medic_Roy",
            "TFV_M52D_Vest_Rifleman_Roy",
            "TFV_M52D_Vest_Scout_Roy",
            "TFV_M52D_Vest_Sniper_Roy",
            "TFV_M52D_Vest_Roy",

            "TFV_ODST_Helmet_Autumn",
            "TFV_M52D_Vest_Light_Autumn",
            "TFV_M52D_Vest_Rifleman_Autumn",

            "TFV_ODST_Helmet_Shepard",
            "TFV_M52D_Vest_Rifleman_Shepard",

            "TFV_Pilot_Helmet_Fish",

            "TFV_ODST_Helmet_Salvador",
            "TFV_M52D_Vest_Basic_Salvador",

            "TFV_ODST_Helmet_Neek",
            "TFV_M52D_Vest_Basic_Neek",

            "TFV_ODST_Helmet_Probie",
            "TFV_M52D_Vest_Basic_Probie",

            "TFV_ODST_Helmet_Foley",
            "TFV_M52D_Vest_Basic_Foley",

            "TFV_ODST_Helmet_Cessna",
            "TFV_M52D_Vest_Basic_Cessna",
            "TFV_M52D_Vest_Demolitions_Cessna"
        };
    };
};

class CfgWeapons
{
    #pragma region Base
    #define VEST_COMMON "TFV_Armor\data\common\m52d_underarmor_co.paa", \
        "TFV_Armor\data\common\m52d_vest_co.paa", \
        "TFV_Armor\data\common\m52d_legs_co.paa", \
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",

	class OPTRE_UNSC_RECON_HELMET;
    class OPTRE_UNSC_RECON_HELMET_dp;

    class OPTRE_UNSC_CH252D_Helmet;
    class OPTRE_UNSC_CH252D_Helmet_dp;

    class VX19_1stMEU;
    class VX19_1stMEU_dp;

    class OPTRE_UNSC_M52A_Armor1_WDL;
    class OPTRE_UNSC_M52D_Armor: OPTRE_UNSC_M52A_Armor1_WDL { class ItemInfo; };
    class OPTRE_UNSC_M52D_Armor_Light: OPTRE_UNSC_M52D_Armor {};
    class OPTRE_UNSC_M52D_Armor_Marksman: OPTRE_UNSC_M52D_Armor {};
    class OPTRE_UNSC_M52D_Armor_Medic: OPTRE_UNSC_M52D_Armor {};
    class OPTRE_UNSC_M52D_Armor_Scout: OPTRE_UNSC_M52D_Armor {};
    class OPTRE_UNSC_M52D_Armor_Sniper: OPTRE_UNSC_M52D_Armor {};

    class TFV_OPTRE_UNSC_M52D_Armor: OPTRE_UNSC_M52D_Armor
    {
        author="Article 2 Studios & Gooman";
        class ItemInfo: ItemInfo
        {
            containerClass="Supply200";
        };
    };
    // TODO: OPTRE_UNSC_M52D_Armor_Demolitions has damage protection problems?
    class TFV_OPTRE_UNSC_M52D_Armor_Demolitions: OPTRE_UNSC_M52D_Armor
    {
        dlc="OPTRE";
		author="Article 2 Studios & Gooman";
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
            containerClass="Supply200";
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

    class TFV_OPTRE_UNSC_M52D_Armor_Light: OPTRE_UNSC_M52D_Armor_Light
    {
        author="Article 2 Studios & Gooman";
        class ItemInfo: ItemInfo
        {
            containerClass="Supply200";
        };
    };
    
    class TFV_OPTRE_UNSC_M52D_Armor_Marksman: OPTRE_UNSC_M52D_Armor_Marksman
    {
        author="Article 2 Studios & Gooman";
        class ItemInfo: ItemInfo
        {
            containerClass="Supply200";
        };
    };

    class TFV_OPTRE_UNSC_M52D_Armor_Medic: OPTRE_UNSC_M52D_Armor_Medic
    {
        author="Article 2 Studios & Gooman";
        class ItemInfo: ItemInfo
        {
            containerClass="Supply200";
        };
    };

    // TODO: OPTRE_UNSC_M52D_Armor_Rifleman has damage protection problems?
    class TFV_OPTRE_UNSC_M52D_Armor_Rifleman: OPTRE_UNSC_M52D_Armor
    {
        dlc="OPTRE";
		author="Article 2 Studios & Gooman";
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
            containerClass="Supply200";
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

    class TFV_OPTRE_UNSC_M52D_Armor_Scout: OPTRE_UNSC_M52D_Armor_Scout
    {
        author="Article 2 Studios & Gooman";
        class ItemInfo: ItemInfo
        {
            containerClass="Supply200";
        };
    };

    class TFV_OPTRE_UNSC_M52D_Armor_Sniper: OPTRE_UNSC_M52D_Armor_Sniper
    {
        author="Article 2 Studios & Gooman";
        class ItemInfo: ItemInfo
        {
            containerClass="Supply200";
        };
    };
    #pragma endregion Base

    #pragma region Aasen
    class TFV_Recon_Helmet_Aasen: OPTRE_UNSC_RECON_HELMET
    {
        author="Article 2 Studios & Gooman";
        displayName="R/B5 Helmet (Aasen)";
        hiddenSelectionsTextures[]=
		{
			"TFV_Armor\data\aasen\aasen_oni_helmet_co.paa",
			"TFV_Armor\data\aasen\aasen_oni_visor_co.paa"
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
			"TFV_Armor\data\aasen\aasen_oni_helmet_co.paa",
			"optre_unsc_units\army\data\recon_visor_ca.paa"
		};
    };

    #define VEST_AASEN hiddenSelectionsTextures[]= \
    { \
        "TFV_Armor\data\common\m52d_underarmor_co.paa", \
        "TFV_Armor\data\common\m52d_vest_co.paa", \
        "TFV_Armor\data\aasen\aasen_odst_legs_co.paa", \
        "optre_unsc_units\army\data\ghillie_woodland_co.paa", \
        "TFV_Armor\data\aasen\aasen_odst_armor_co.paa", \
    }
    class TFV_M52D_Vest_Light_Aasen: TFV_OPTRE_UNSC_M52D_Armor_Light
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
			"TFV_Armor\data\castle\castle_oni_helmet_co.paa",
			"TFV_Armor\data\castle\castle_oni_visor_co.paa"
		};
    };

    class TFV_ODST_Helmet_Castle: OPTRE_UNSC_CH252D_Helmet
    {
        author="Article 2 Studios & Gooman";
        displayName="CH252D Helmet [Castle]";
        hiddenSelectionsTextures[]=
        {
            "TFV_Armor\data\castle\castle_odst_helmet_co.paa",
			"TFV_Armor\data\castle\castle_odst_visor_co.paa"
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
			"TFV_Armor\data\castle\castle_oni_helmet_co.paa",
			"optre_unsc_units\army\data\recon_visor_ca.paa"
		};
    };

    class TFV_ODST_Helmet_Castle_dp: OPTRE_UNSC_CH252D_Helmet_dp
    {
        scope=1;
		scopeArsenal=1;
		scopeCurator=1;
        author="Article 2 Studios & Gooman";
        displayName="CH252D Helmet [Castle]";
        hiddenSelectionsTextures[]=
		{
            "TFV_Armor\data\castle\castle_odst_helmet_co.paa"
		};
    };

    #define VEST_CASTLE hiddenSelectionsTextures[]= \
    { \
        VEST_COMMON \
        "TFV_Armor\data\castle\castle_odst_armor_co.paa", \
    }
    class TFV_M52D_Vest_Light_Castle: TFV_OPTRE_UNSC_M52D_Armor_Light
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
			"TFV_Armor\data\reeves\reeves_oni_helmet_co.paa",
			"TFV_Armor\data\reeves\reeves_oni_visor_co.paa"
		};
    };

    class TFV_Recon_Helmet_Reeves2: OPTRE_UNSC_RECON_HELMET
    {
        author="Article 2 Studios & Gooman";
        displayName="R/B5 Helmet (Reeves VER 2)";
        hiddenSelectionsTextures[]=
		{
			"TFV_Armor\data\reeves\reevestwo_oni_helmet_co.paa",
			"TFV_Armor\data\reeves\reevestwo_oni_visor_co.paa"
		};
    };

    class TFV_ODST_Helmet_Reeves2: OPTRE_UNSC_CH252D_Helmet
    {
        author="Article 2 Studios & Gooman";
        displayName="CH252D Helmet [Reeves]";
        hiddenSelectionsTextures[]=
		{
			"TFV_Armor\data\reeves\reevestwo_odst_helmet_co.paa",
			"TFV_Armor\data\reeves\reevestwo_odst_visor_co.paa"
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
			"TFV_Armor\data\reeves\reeves_oni_helmet_co.paa",
			"optre_unsc_units\army\data\recon_visor_ca.paa"
		};
    };

    class TFV_Recon_Helmet_Reeves2_dp: OPTRE_UNSC_RECON_HELMET_dp
    {
        scope=1;
		scopeArsenal=1;
		scopeCurator=1;
        author="Article 2 Studios & Gooman";
        displayName="R/B5 Helmet (Reeves VER 2)";
        hiddenSelectionsTextures[]=
		{
			"TFV_Armor\data\reeves\reevestwo_oni_helmet_co.paa",
			"optre_unsc_units\army\data\recon_visor_ca.paa"
		};
    };

    class TFV_ODST_Helmet_Reeves2_dp: OPTRE_UNSC_CH252D_Helmet_dp
    {
        scope=1;
		scopeArsenal=1;
		scopeCurator=1;
        author="Article 2 Studios & Gooman";
        displayName="CH252D Helmet [Reeves]";
        hiddenSelectionsTextures[]=
		{
			"TFV_Armor\data\reeves\reevestwo_odst_helmet_co.paa",
			"optre_unsc_units\army\data\recon_visor_ca.paa"
		};
    };  

    #define VEST_REEVES hiddenSelectionsTextures[]= \
    { \
        VEST_COMMON \
        "TFV_Armor\data\reeves\reeves_odst_armor_co.paa", \
    }
    #define VEST_REEVES2 hiddenSelectionsTextures[]= \
    { \
        "TFV_Armor\data\common\m52d_underarmor_co.paa", \
        "TFV_Armor\data\common\m52d_vest_co.paa", \
        "TFV_Armor\data\reeves\reevestwo_odst_legs_co.paa", \
        "optre_unsc_units\army\data\ghillie_woodland_co.paa", \
        "TFV_Armor\data\reeves\reevestwo_odst_armor_co.paa" \
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

    class TFV_M52D_Vest_Demolitions_Reeves2: TFV_OPTRE_UNSC_M52D_Armor_Demolitions
    {
        displayName = "M52D Body Armor (Demolitions) (Reeves VER 2)";
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
        VEST_REEVES2;
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
            VEST_REEVES2;
        };
    };

    class TFV_M52D_Vest_Light_Reeves: TFV_OPTRE_UNSC_M52D_Armor_Light
    {
        displayName = "M52D Body Armor (Light) (Reeves)";
        VEST_REEVES;
        class ItemInfo: ItemInfo
        {
            VEST_REEVES;
        };
    };

    class TFV_M52D_Vest_Light_Reeves2: TFV_OPTRE_UNSC_M52D_Armor_Light
    {
        displayName = "M52D Body Armor (Light) (Reeves VER 2)";
        VEST_REEVES2;
        class ItemInfo: ItemInfo
        {
            VEST_REEVES2;
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

    class TFV_M52D_Vest_Rifleman_Reeves2: TFV_OPTRE_UNSC_M52D_Armor_Rifleman
    {
        displayName = "M52D Body Armor (Rifleman) (Reeves VER 2)";
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
        VEST_REEVES2;
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
            VEST_REEVES2;
        };
    };

    class TFV_M52D_Vest_Scout_Reeves: TFV_OPTRE_UNSC_M52D_Armor_Scout
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

    class TFV_M52D_Vest_Scout_Reeves2: TFV_OPTRE_UNSC_M52D_Armor_Scout
    {
        displayName = "M52D Body Armor (Scout) (Reeves VER 2)";
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
        VEST_REEVES2;
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
            VEST_REEVES2;
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
			"TFV_Armor\data\roy\roy_oni_helmet_co.paa",
			"TFV_Armor\data\roy\roy_oni_visor_co.paa"
		};
    };

    class TFV_ODST_Helmet_Roy: OPTRE_UNSC_CH252D_Helmet
    {
        author="Article 2 Studios & Gooman";
        displayName="CH252D Helmet [Roy]";
        hiddenSelectionsTextures[]=
        {
            "TFV_Armor\data\roy\roy_odst_helmet_co.paa",
			"TFV_Armor\data\roy\roy_odst_visor_co.paa"
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
			"TFV_Armor\data\roy\roy_oni_helmet_co.paa",
			"optre_unsc_units\army\data\recon_visor_ca.paa"
		};
    };

    class TFV_ODST_Helmet_Roy_dp: OPTRE_UNSC_CH252D_Helmet_dp
    {
        scope=1;
		scopeArsenal=1;
		scopeCurator=1;
        author="Article 2 Studios & Gooman";
        displayName="CH252D Helmet [Roy]";
        hiddenSelectionsTextures[]=
		{
            "TFV_Armor\data\roy\roy_odst_helmet_co.paa"
		};
    };

    #define VEST_ROY hiddenSelectionsTextures[]= \
    { \
        VEST_COMMON \
        "TFV_Armor\data\roy\roy_odst_armor_co.paa", \
    }
    class TFV_M52D_Vest_Basic_Roy: TFV_OPTRE_UNSC_M52D_Armor
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

    class TFV_M52D_Vest_Light_Roy: TFV_OPTRE_UNSC_M52D_Armor_Light
    {
        displayName = "M52D Body Armor (Light) (Roy)";
        VEST_ROY;
        class ItemInfo: ItemInfo
        {
            VEST_ROY;
        };
    };

    class TFV_M52D_Vest_Marksman_Roy: TFV_OPTRE_UNSC_M52D_Armor_Marksman
    {
        displayName = "M52D Body Armor (Marksman) (Roy)";
        VEST_ROY;
        class ItemInfo: ItemInfo
        {
            VEST_ROY;
        };
    };

    class TFV_M52D_Vest_Medic_Roy: TFV_OPTRE_UNSC_M52D_Armor_Medic
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

    class TFV_M52D_Vest_Scout_Roy: TFV_OPTRE_UNSC_M52D_Armor_Scout
    {
        displayName = "M52D Body Armor (Scout) (Roy)";
        VEST_ROY;
        class ItemInfo: ItemInfo
        {
            VEST_ROY;
        };
    };

    class TFV_M52D_Vest_Sniper_Roy: TFV_OPTRE_UNSC_M52D_Armor_Sniper
    {
        displayName = "M52D Body Armor (Sniper) (Roy)";
        VEST_ROY;
        class ItemInfo: ItemInfo
        {
            VEST_ROY;
        };
    };

    class TFV_M52D_Vest_Roy: TFV_OPTRE_UNSC_M52D_Armor
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

    #pragma region Autumn
    class TFV_ODST_Helmet_Autumn: OPTRE_UNSC_CH252D_Helmet
    {
        author="Article 2 Studios & Gooman";
        displayName="CH252D Helmet [Autumn]";
        hiddenSelectionsTextures[]=
        {
            "TFV_Armor\data\autumn\autumn_odst_helmet_co.paa",
			"TFV_Armor\data\autumn\autumn_odst_visor_co.paa"
        };
    };

    class TFV_Recon_Helmet_Autumn: OPTRE_UNSC_RECON_HELMET
    {
        author="Article 2 Studios & Gooman";
        displayName="R/B5 Helmet (Autumn)";
        hiddenSelectionsTextures[]=
		{
			"TFV_Armor\data\autumn\autumn_oni_helmet_co.paa",
			"TFV_Armor\data\autumn\autumn_oni_visor_co.paa"
		};
    };

    class TFV_ODST_Helmet_Autumn_dp: OPTRE_UNSC_CH252D_Helmet_dp
    {
        scope=1;
		scopeArsenal=1;
		scopeCurator=1;
        author="Article 2 Studios & Gooman";
        displayName="CH252D Helmet [Autumn]";
        hiddenSelectionsTextures[]=
		{
            "TFV_Armor\data\autumn\autumn_odst_helmet_co.paa"
		};
    };

    class TFV_Recon_Helmet_Autumn_dp: OPTRE_UNSC_RECON_HELMET_dp
    {
        scope=1;
		scopeArsenal=1;
		scopeCurator=1;
        author="Article 2 Studios & Gooman";
        displayName="R/B5 Helmet (Autumn)";
        hiddenSelectionsTextures[]=
		{
			"TFV_Armor\data\autumn\autumn_oni_helmet_co.paa",
			"optre_unsc_units\army\data\recon_visor_ca.paa"
		};
    };

    #define VEST_AUTUMN hiddenSelectionsTextures[]= \
    { \
        "TFV_Armor\data\common\m52d_underarmor_co.paa", \
        "TFV_Armor\data\common\m52d_vest_co.paa", \
        "TFV_Armor\data\autumn\autumn_odst_legs_co.paa", \
        "optre_unsc_units\army\data\ghillie_woodland_co.paa", \
        "TFV_Armor\data\autumn\autumn_odst_armor_co.paa", \
    }

    class TFV_M52D_Vest_Light_Autumn: TFV_OPTRE_UNSC_M52D_Armor_Light
    {
        displayName = "M52D Body Armor (Light) (Autumn)";
        VEST_AUTUMN;
        class ItemInfo: ItemInfo
        {
            VEST_AUTUMN;
        };
    };

    class TFV_M52D_Vest_Rifleman_Autumn: TFV_OPTRE_UNSC_M52D_Armor_Rifleman
    {
        displayName = "M52D Body Armor (Rifleman) (Autumn)";
        VEST_AUTUMN;
        class ItemInfo: ItemInfo
        {
            VEST_AUTUMN;
        };
    };
    #pragma endregion Autumn

    #pragma region Shepard
    class TFV_ODST_Helmet_Shepard: OPTRE_UNSC_CH252D_Helmet
    {
        author="Article 2 Studios & Gooman";
        displayName="CH252D Helmet [Shepard]";
        hiddenSelectionsTextures[]=
        {
            "TFV_Armor\data\shepard\shepard_odst_helmet_co.paa",
			"TFV_Armor\data\shepard\shepard_odst_visor_co.paa"
        };
    };

    class TFV_ODST_Helmet_Shepard_dp: OPTRE_UNSC_CH252D_Helmet_dp
    {
        scope=1;
		scopeArsenal=1;
		scopeCurator=1;
        author="Article 2 Studios & Gooman";
        displayName="CH252D Helmet [Shepard]";
        hiddenSelectionsTextures[]=
		{
            "TFV_Armor\data\shepard\shepard_odst_helmet_co.paa"
		};
    };

    #define VEST_SHEPARD hiddenSelectionsTextures[]= \
    { \
        VEST_COMMON \
		"TFV_Armor\data\shepard\shepard_odst_armor_co.paa" \
    }

    class TFV_M52D_Vest_Basic_Shepard: TFV_OPTRE_UNSC_M52D_Armor
    {
        displayName = "M52D Body Armor (Basic) (Shepard)";
        VEST_SHEPARD;
        class ItemInfo: ItemInfo
        {
            VEST_SHEPARD;
        };
    };
    #pragma endregion Shepard

    #pragma region Fish
    class TFV_Pilot_Helmet_Fish: VX19_1stMEU
    {
        author="1st MEU Chaotic & Gooman";
        displayName="Pegasus (Fish)";
        hiddenSelectionsTextures[]=
		{
			"TFV_Armor\data\fish\fish_pilot_helmet_co.paa",
			"TFV_Armor\data\fish\fish_pilot_visor_co.paa"
		};
    };

    class TFV_Pilot_Helmet_Fish_dp: VX19_1stMEU_dp
    {
        scope=1;
		scopeArsenal=1;
		scopeCurator=1;
        author="1st MEU Chaotic & Gooman";
        displayName="Pegasus (Fish)";
        hiddenSelectionsTextures[]=
		{
			"TFV_Armor\data\fish\fish_pilot_helmet_co.paa"
		};
    };
    #pragma endregion Fish

    #pragma region Salvador
    class TFV_ODST_Helmet_Salvador: OPTRE_UNSC_CH252D_Helmet
    {
        author="Article 2 Studios & Gooman";
        displayName="CH252D Helmet [Salvador]";
        hiddenSelectionsTextures[]=
        {
            "TFV_Armor\data\salvador\salvador_odst_helmet_co.paa",
			"TFV_Armor\data\salvador\salvador_odst_visor_co.paa"
        };
    };

    class TFV_ODST_Helmet_Salvador_dp: OPTRE_UNSC_CH252D_Helmet_dp
    {
        scope=1;
		scopeArsenal=1;
		scopeCurator=1;
        author="Article 2 Studios & Gooman";
        displayName="CH252D Helmet [Salvador]";
        hiddenSelectionsTextures[]=
		{
            "TFV_Armor\data\salvador\salvador_odst_helmet_co.paa"
		};
    };

    #define VEST_SALVADOR hiddenSelectionsTextures[]= \
    { \
        VEST_COMMON \
		"TFV_Armor\data\salvador\salvador_odst_armor_co.paa" \
    }

    class TFV_M52D_Vest_Basic_Salvador: TFV_OPTRE_UNSC_M52D_Armor
    {
        displayName = "M52D Body Armor (Basic) (Salvador)";
        VEST_SALVADOR;
        class ItemInfo: ItemInfo
        {
            VEST_SALVADOR;
        };
    };
    #pragma endregion Salvador

    #pragma region Neek
    class TFV_ODST_Helmet_Neek: OPTRE_UNSC_CH252D_Helmet
    {
        author="Article 2 Studios & Gooman";
        displayName="CH252D Helmet [Neek]";
        hiddenSelectionsTextures[]=
        {
            "TFV_Armor\data\neek\neek_odst_helmet_co.paa",
			"TFV_Armor\data\neek\neek_odst_visor_co.paa"
        };
    };

    class TFV_ODST_Helmet_Neek_dp: OPTRE_UNSC_CH252D_Helmet_dp
    {
        scope=1;
		scopeArsenal=1;
		scopeCurator=1;
        author="Article 2 Studios & Gooman";
        displayName="CH252D Helmet [Neek]";
        hiddenSelectionsTextures[]=
		{
            "TFV_Armor\data\neek\neek_odst_helmet_co.paa"
		};
    };

    #define VEST_NEEK hiddenSelectionsTextures[]= \
    { \
        VEST_COMMON \
		"TFV_Armor\data\neek\neek_odst_armor_co.paa" \
    }

    class TFV_M52D_Vest_Basic_Neek: TFV_OPTRE_UNSC_M52D_Armor
    {
        displayName = "M52D Body Armor (Basic) (Neek)";
        VEST_NEEK;
        class ItemInfo: ItemInfo
        {
            VEST_NEEK;
        };
    };
    #pragma endregion Neek

    #pragma region Probie
    class TFV_ODST_Helmet_Probie: OPTRE_UNSC_CH252D_Helmet
    {
        author="Article 2 Studios & Gooman";
        displayName="CH252D Helmet [Probie]";
        hiddenSelectionsTextures[]=
        {
            "TFV_Armor\data\probie\probie_odst_helmet_co.paa",
			"TFV_Armor\data\probie\probie_odst_visor_co.paa"
        };
    };

    class TFV_ODST_Helmet_Probie_dp: OPTRE_UNSC_CH252D_Helmet_dp
    {
        scope=1;
		scopeArsenal=1;
		scopeCurator=1;
        author="Article 2 Studios & Gooman";
        displayName="CH252D Helmet [Probie]";
        hiddenSelectionsTextures[]=
		{
            "TFV_Armor\data\probie\probie_odst_helmet_co.paa"
		};
    };

    #define VEST_PROBIE hiddenSelectionsTextures[]= \
    { \
        VEST_COMMON \
		"TFV_Armor\data\probie\probie_odst_armor_co.paa" \
    }

    class TFV_M52D_Vest_Basic_Probie: TFV_OPTRE_UNSC_M52D_Armor
    {
        displayName = "M52D Body Armor (Basic) (Probie)";
        VEST_PROBIE;
        class ItemInfo: ItemInfo
        {
            VEST_PROBIE;
        };
    };
    #pragma endregion Probie

    #pragma region Foley
    class TFV_ODST_Helmet_Foley: OPTRE_UNSC_CH252D_Helmet
    {
        author="Article 2 Studios & Gooman";
        displayName="CH252D Helmet [Foley]";
        hiddenSelectionsTextures[]=
        {
            "TFV_Armor\data\foley\foley_odst_helmet_co.paa",
			"TFV_Armor\data\foley\foley_odst_visor_co.paa"
        };
    };

    class TFV_ODST_Helmet_Foley_dp: OPTRE_UNSC_CH252D_Helmet_dp
    {
        scope=1;
		scopeArsenal=1;
		scopeCurator=1;
        author="Article 2 Studios & Gooman";
        displayName="CH252D Helmet [Foley]";
        hiddenSelectionsTextures[]=
		{
            "TFV_Armor\data\foley\foley_odst_helmet_co.paa"
		};
    };

    #define VEST_FOLEY hiddenSelectionsTextures[]= \
    { \
        VEST_COMMON \
		"TFV_Armor\data\foley\foley_odst_armor_co.paa" \
    }

    class TFV_M52D_Vest_Basic_Foley: TFV_OPTRE_UNSC_M52D_Armor
    {
        displayName = "M52D Body Armor (Basic) (Foley)";
        VEST_FOLEY;
        class ItemInfo: ItemInfo
        {
            VEST_FOLEY;
        };
    };
    #pragma endregion Foley

    #pragma region Cessna
    class TFV_ODST_Helmet_Cessna: OPTRE_UNSC_CH252D_Helmet
    {
        author="Article 2 Studios & Gooman";
        displayName="CH252D Helmet [Cessna]";
        hiddenSelectionsTextures[]=
        {
            "TFV_Armor\data\cessna\cessna_odst_helmet_co.paa",
			"TFV_Armor\data\cessna\cessna_odst_visor_co.paa"
        };
    };

    class TFV_ODST_Helmet_Cessna_dp: OPTRE_UNSC_CH252D_Helmet_dp
    {
        scope=1;
		scopeArsenal=1;
		scopeCurator=1;
        author="Article 2 Studios & Gooman";
        displayName="CH252D Helmet [Cessna]";
        hiddenSelectionsTextures[]=
		{
            "TFV_Armor\data\cessna\cessna_odst_helmet_co.paa"
		};
    };

    #define VEST_CESSNA hiddenSelectionsTextures[]= \
    { \
        "TFV_Armor\data\common\m52d_underarmor_co.paa", \
        "TFV_Armor\data\common\m52d_vest_co.paa", \
        "TFV_Armor\data\cessna\cessna_odst_legs_co.paa", \
        "optre_unsc_units\army\data\ghillie_woodland_co.paa", \
        "TFV_Armor\data\cessna\cessna_odst_armor_co.paa", \
    }

    class TFV_M52D_Vest_Basic_Cessna: TFV_OPTRE_UNSC_M52D_Armor
    {
        displayName = "M52D Body Armor (Basic) (Cessna)";
        VEST_CESSNA;
        class ItemInfo: ItemInfo
        {
            VEST_CESSNA;
        };
    };

    class TFV_M52D_Vest_Demolitions_Cessna: TFV_OPTRE_UNSC_M52D_Armor_Demolitions
    {
        displayName = "M52D Body Armor (Demolitions) (Cessna)";
        VEST_CESSNA;
        class ItemInfo: ItemInfo
        {
            VEST_CESSNA;
        };
    };

    #undef VEST_CESSNA
    #pragma endregion Cessna
};

class cfgMods
{
    author = "Gooman";
};