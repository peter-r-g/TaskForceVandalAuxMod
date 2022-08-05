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
            "TFV_M52D_Vest_Sniper_Roy"
        };
    };
};

class CfgWeapons
{
    #pragma region Base;
	class OPTRE_UNSC_RECON_HELMET;

    class OPTRE_UNSC_M52D_Armor;
    class OPTRE_UNSC_M52D_Armor_Demolitions;
    class OPTRE_UNSC_M52D_Armor_Light;
    class OPTRE_UNSC_M52D_Armor_Marksman;
    class OPTRE_UNSC_M52D_Armor_Medic;
    class OPTRE_UNSC_M52D_Armor_Rifleman;
    class OPTRE_UNSC_M52D_Armor_Scout;
    class OPTRE_UNSC_M52D_Armor_Sniper;
    #pragma endregion Bases

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

    class TFV_M52D_Vest_Light_Aasen: OPTRE_UNSC_M52D_Armor_Light
    {
        displayName = "M52D Body Armor (Aasen)";
        hiddenSelectionsTextures[]=
		{
            "TFV_Armor\data\aasen\aasen_underamour_co.paa",
            "TFV_Armor\data\aasen\aasen_vest_co.paa",
            "TFV_Armor\data\aasen\aasen_legs_co.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "TFV_Armor\data\aasen\aasen_odst_armour_co.paa",
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

    class TFV_M52D_Vest_Light_Castle: OPTRE_UNSC_M52D_Armor_Light
    {
        displayName = "M52D Body Armor (Light) (Castle)";
        hiddenSelectionsTextures[]=
		{
            "TFV_Armor\data\castle\castle_underamour_co.paa",
            "TFV_Armor\data\castle\castle_vest_co.paa",
            "TFV_Armor\data\castle\castle_legs_co.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "TFV_Armor\data\castle\castle_odst_armour_co.paa",
		};
    };

    class TFV_M52D_Vest_Rifleman_Castle: OPTRE_UNSC_M52D_Armor_Rifleman
    {
        displayName = "M52D Body Armor (Rifleman) (Castle)";
        hiddenSelectionsTextures[]=
		{
            "TFV_Armor\data\castle\castle_underamour_co.paa",
            "TFV_Armor\data\castle\castle_vest_co.paa",
            "TFV_Armor\data\castle\castle_legs_co.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "TFV_Armor\data\castle\castle_odst_armour_co.paa",
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

    class TFV_M52D_Vest_Demolitions_Reeves: OPTRE_UNSC_M52D_Armor_Demolitions
    {
        displayName = "M52D Body Armor (Demolitions) (Reeves)";
        hiddenSelectionsTextures[]=
		{
            "TFV_Armor\data\reeves\reeves_underamour_co.paa",
            "TFV_Armor\data\reeves\reeves_vest_co.paa",
            "TFV_Armor\data\reeves\reeves_legs_co.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "TFV_Armor\data\reeves\reeves_odst_armour_co.paa",
		};
    };

    class TFV_M52D_Vest_Rifleman_Reeves: OPTRE_UNSC_M52D_Armor_Rifleman
    {
        displayName = "M52D Body Armor (Rifleman) (Reeves)";
        hiddenSelectionsTextures[]=
		{
            "TFV_Armor\data\reeves\reeves_underamour_co.paa",
            "TFV_Armor\data\reeves\reeves_vest_co.paa",
            "TFV_Armor\data\reeves\reeves_legs_co.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "TFV_Armor\data\reeves\reeves_odst_armour_co.paa",
		};
    };

    class TFV_M52D_Vest_Scout_Reeves: OPTRE_UNSC_M52D_Armor_Scout
    {
        displayName = "M52D Body Armor (Scout) (Reeves)";
        hiddenSelectionsTextures[]=
		{
            "TFV_Armor\data\reeves\reeves_underamour_co.paa",
            "TFV_Armor\data\reeves\reeves_vest_co.paa",
            "TFV_Armor\data\reeves\reeves_legs_co.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "TFV_Armor\data\reeves\reeves_odst_armour_co.paa",
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

    class TFV_M52D_Vest_Basic_Roy: OPTRE_UNSC_M52D_Armor
    {
        displayName = "M52D Body Armor (Basic) (Roy)";
        hiddenSelectionsTextures[]=
		{
            "TFV_Armor\data\roy\roy_underamour_co.paa",
            "TFV_Armor\data\roy\roy_vest_co.paa",
            "TFV_Armor\data\roy\roy_legs_co.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "TFV_Armor\data\roy\roy_odst_armour_co.paa",
		};
    };

    class TFV_M52D_Vest_Demolitions_Roy: OPTRE_UNSC_M52D_Armor_Demolitions
    {
        displayName = "M52D Body Armor (Demolitions) (Roy)";
        hiddenSelectionsTextures[]=
		{
            "TFV_Armor\data\roy\roy_underamour_co.paa",
            "TFV_Armor\data\roy\roy_vest_co.paa",
            "TFV_Armor\data\roy\roy_legs_co.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "TFV_Armor\data\roy\roy_odst_armour_co.paa",
		};
    };

    class TFV_M52D_Vest_Light_Roy: OPTRE_UNSC_M52D_Armor_Light
    {
        displayName = "M52D Body Armor (Light) (Roy)";
        hiddenSelectionsTextures[]=
		{
            "TFV_Armor\data\roy\roy_underamour_co.paa",
            "TFV_Armor\data\roy\roy_vest_co.paa",
            "TFV_Armor\data\roy\roy_legs_co.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "TFV_Armor\data\roy\roy_odst_armour_co.paa",
		};
    };

    class TFV_M52D_Vest_Marksman_Roy: OPTRE_UNSC_M52D_Armor_Marksman
    {
        displayName = "M52D Body Armor (Marksman) (Roy)";
        hiddenSelectionsTextures[]=
		{
            "TFV_Armor\data\roy\roy_underamour_co.paa",
            "TFV_Armor\data\roy\roy_vest_co.paa",
            "TFV_Armor\data\roy\roy_legs_co.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "TFV_Armor\data\roy\roy_odst_armour_co.paa",
		};
    };

    class TFV_M52D_Vest_Medic_Roy: OPTRE_UNSC_M52D_Armor_Medic
    {
        displayName = "M52D Body Armor (Medic) (Roy)";
        hiddenSelectionsTextures[]=
		{
            "TFV_Armor\data\roy\roy_underamour_co.paa",
            "TFV_Armor\data\roy\roy_vest_co.paa",
            "TFV_Armor\data\roy\roy_legs_co.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "TFV_Armor\data\roy\roy_odst_armour_co.paa",
		};
    };

    class TFV_M52D_Vest_Rifleman_Roy: OPTRE_UNSC_M52D_Armor_Rifleman
    {
        displayName = "M52D Body Armor (Rifleman) (Roy)";
        hiddenSelectionsTextures[]=
		{
            "TFV_Armor\data\roy\roy_underamour_co.paa",
            "TFV_Armor\data\roy\roy_vest_co.paa",
            "TFV_Armor\data\roy\roy_legs_co.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "TFV_Armor\data\roy\roy_odst_armour_co.paa",
		};
    };

    class TFV_M52D_Vest_Scout_Roy: OPTRE_UNSC_M52D_Armor_Scout
    {
        displayName = "M52D Body Armor (Scout) (Roy)";
        hiddenSelectionsTextures[]=
		{
            "TFV_Armor\data\roy\roy_underamour_co.paa",
            "TFV_Armor\data\roy\roy_vest_co.paa",
            "TFV_Armor\data\roy\roy_legs_co.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "TFV_Armor\data\roy\roy_odst_armour_co.paa",
		};
    };

    class TFV_M52D_Vest_Sniper_Roy: OPTRE_UNSC_M52D_Armor_Sniper
    {
        displayName = "M52D Body Armor (Sniper) (Roy)";
        hiddenSelectionsTextures[]=
		{
            "TFV_Armor\data\roy\roy_underamour_co.paa",
            "TFV_Armor\data\roy\roy_vest_co.paa",
            "TFV_Armor\data\roy\roy_legs_co.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "TFV_Armor\data\roy\roy_odst_armour_co.paa",
		};
    };
    #pragma endregion Roy
};

class cfgMods
{
    author = "Gooman";
};