class CfgPatches
{
    class TFV_Equipment
    {
        name = "Task Force Vandal Aux - Equipment";
        author = "Gooman";

        requiredVersion = 0.1;
        requiredAddons[] = {
            "TFV_Main",
            "OPTRE_Weapons_Backpacks"
        };

        units[] = {
            "TFV_OPTRE_ILCS_Rucksack_LR",
            "TFV_OPTRE_ONI_Rucksack"
        };
        weapons[] = {};
    };
};

class CfgVehicles
{
    #pragma region Base
    class OPTRE_ILCS_Rucksack_Black;
    class OPTRE_UNSC_Rucksack;
    class RTO_11th_ILCS_ANPRC_515;
    #pragma endregion Base

    #pragma region Backpacks
    class TFV_OPTRE_ILCS_Rucksack_LR: OPTRE_ILCS_Rucksack_Black
    {
        author = "Article 2 Studios & Gooman";
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
        author = "Article 2 Studios & Gooman";
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

    class TFV_11th_ILCS_ANPRC_515: RTO_11th_ILCS_ANPRC_515
    {
        author = "1st MEU & Gooman";
        displayName = "ONI ILCS ANPRC-515";
        maximumLoad=400;
        mass=50;
        tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 25000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
    };
    #pragma endregion Backpacks
};

class cfgMods
{
    author = "Gooman";
};