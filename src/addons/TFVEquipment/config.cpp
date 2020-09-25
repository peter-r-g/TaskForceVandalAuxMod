class CfgPatches
{
    class TFVEquipment
    {
        name = "Task Force Vandal Aux - Equipment";
        author = "[TW] gunman435";

        requiredVersion = 0.1;
        requiredAddons[] = {
            "TFVMain",
            "OPTRE_Weapons_Backpacks"
        };

        units[] = {
            "TFV_OPTRE_ILCS_Rucksack_LR"
        };
        weapons[] = {};
    };
};

class CfgVehicles
{
    class OPTRE_ILCS_Rucksack_Black;
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
};

class cfgMods
{
    author = "[TW] gunman435";
};