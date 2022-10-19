class CfgPatches
{
    class TFV_Equipment_Backpacks
    {
        name = "Task Force Vandal Aux - Equipment (Backpacks)";
        author = "Gooman";

        requiredVersion = 0.1;
        requiredAddons[] = {
            "TFV_Equipment",
            "OPTRE_Weapons_Backpacks"
        };

        units[] = {};
        weapons[] = {};
        vehicles[] = {
            "TFV_OPTRE_ILCS_Rucksack_LR",
            "TFV_OPTRE_ONI_Rucksack"
        };
    };
};

class CfgVehicles
{
    class OPTRE_ILCS_Rucksack_Black;
    class OPTRE_UNSC_Rucksack;
    class RTO_11th_ILCS_ANPRC_515;

    class TFV_OPTRE_ILCS_Rucksack_LR : OPTRE_ILCS_Rucksack_Black
    {
        author = "Article 2 Studios & Gooman";
        displayName = "ILCS Rucksack [LR]";
        descriptionShort = "ILCS Rucksack [LR]<br>ODST Long Range Radio<br>25km Effective Range";
        maximumLoad = 600;
        mass = 50;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "rt1523g_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 25000;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
    };

    class TFV_OPTRE_ONI_Rucksack : OPTRE_UNSC_Rucksack
    {
        author = "Article 2 Studios & Gooman";
        displayName = "ONI Rucksack";
        descriptionShort = "ONI Rucksack<br>ONI Long Range Radio<br>25km Effective Range";
        maximumLoad = 800;
        mass = 50;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "rt1523g_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 25000;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
    };

    class TFV_11th_ILCS_ANPRC_515 : RTO_11th_ILCS_ANPRC_515
    {
        author = "1st MEU & Gooman";
        displayName = "ONI ILCS ANPRC-515";
        maximumLoad = 800;
        mass = 50;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "rt1523g_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 25000;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
    };
};

class cfgMods
{
    author = "Gooman";
};