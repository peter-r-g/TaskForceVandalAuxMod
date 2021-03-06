class CfgPatches
{
    class TFV_Equipment
    {
        name = "Task Force Vandal Aux - Equipment";
        author = "[TW] gunman435";

        requiredVersion = 0.1;
        requiredAddons[] = {
            "TFV_Main",
            "OPTRE_Weapons_Backpacks"
        };

        units[] = {
            "TFV_OPTRE_ILCS_Rucksack_LR",
            "TFV_OPTRE_ONI_Rucksack",
            "TFV_OPTRE_ANPRC_521_Black",
            "TFV_OPTRE_ANPRC_521_Green",
            "TFV_OPTRE_ANPRC_521_Snow",
            "TFV_OPTRE_ANPRC_521_Tan",
            "TFV_OPTRE_ANPRC_521_URF"
        };
        weapons[] = {};
    };
};

class CfgVehicles
{
    class OPTRE_ILCS_Rucksack_Black;
    class OPTRE_UNSC_Rucksack;
    class OPTRE_ANPRC_521_Black;
    class OPTRE_ANPRC_521_Green;
    class OPTRE_ANPRC_521_Snow;
    class OPTRE_ANPRC_521_Tan;
    class OPTRE_ANPRC_521_URF;
    class TFV_OPTRE_ILCS_Rucksack_LR: OPTRE_ILCS_Rucksack_Black
    {
        author = "Article 2 Studios & [TW] gunman435";
        displayName = "ILCS Rucksack [LR]";
        descriptionShort = "ILCS Rucksack [LR]<br>ODST Long Range Radio<br>25km Effective Range";
        maximumLoad=300;
		mass=50;
        tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 25000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
    };

    class TFV_OPTRE_ONI_Rucksack: OPTRE_UNSC_Rucksack
    {
        author = "Article 2 Studios & [TW] gunman435";
        displayName = "ONI Rucksack";
        descriptionShort = "ONI Rucksack<br>ONI Long Range Radio<br>25km Effective Range";
        maximumLoad=400;
		mass=50;
        tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 25000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
    };

    class TFV_OPTRE_ANPRC_521_Black: OPTRE_ANPRC_521_Black
    {
        maximumLoad=250;
    };
    class TFV_OPTRE_ANPRC_521_Green: OPTRE_ANPRC_521_Green
    {
        maximumLoad=250;
    };
    class TFV_OPTRE_ANPRC_521_Snow: OPTRE_ANPRC_521_Snow
    {
        maximumLoad=250;
    };
    class TFV_OPTRE_ANPRC_521_Tan: OPTRE_ANPRC_521_Tan
    {
        maximumLoad=250;
    };
    class TFV_OPTRE_ANPRC_521_URF: OPTRE_ANPRC_521_URF
    {
        maximumLoad=250;
    };
};

class cfgMods
{
    author = "[TW] gunman435";
};