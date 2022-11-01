class CfgPatches
{
    class TFV_Equipment_Jetpacks
    {
        name = "Task Force Vandal Aux - Equipment (Jetpacks)";
        author = "Gooman";

        requiredVersion = 0.1;
        requiredAddons[] = {
            "TFV_Main",
            "NSM_patch_end"
        };

        units[] = {};
        weapons[] = {};
        vehicles[] = {
            "TFV_Raider_Jetpack"
        };
    };
};

class CfgVehicles
{
    class NSM_neutral_XD_1_backpack;
    class NSM_neutral_XD_1_LTU_backpack;

    class TFV_Marauder_Jetpack : NSM_neutral_XD_1_LTU_backpack
    {
        author = "NSM & Gooman";
        displayName = "Marauder Jetpack";
        model = "\OPTRE_weapons\backpacks\jetpack.p3d";
        maximumload = 600;
        mass = 100;
        hiddenSelections[] =
        {
            "camo1"
        };
        hiddenSelectionsTextures[] =
        {
            "NSM_Objects\Data\XD_1_JumpPack_CO.paa"
        };
        picture = "\NSM_Objects\icon.paa";

        NSM_jumppack_is_jumppack = 1;
        NSM_jumppack_spam_delay = 1;
        NSM_jumppack_energy_capacity = 100;
        NSM_jumppack_recharge = 0;
        NSM_jumppack_jump_types[] = {
            {
                "Forward Jump", // Name of jump
                {
                    12,         // forward velo(0)
                    20,         // verticle velo(1)
                    50,         // cost(2)
                    0,          // angle(3)
                    0,          // directional(4)(no=0,yes=1)
                    0           // can prone jump(5)(no=0,yes=1)
                }
            },
            {
                "Short Jump",
                {
                    12,
                    5,
                    30,
                    0,
                    1,
                    0
                }
            }
        };

        NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
        NSM_jumppack_effect_points[] = { { "spine3", { 0, -0.3, -0.1 } } };
        NSM_jumppack_sound_ignite[] = { "NSM_Main\sounds\cdv21Start.ogg" };
        NSM_jumppack_sound_land[] = { "NSM_Main\sounds\cdv21End.ogg" };
        NSM_jumppack_sound_idle[] = { "NSM_Main\sounds\cdv21Idle.ogg" };
    };

    class TFV_Raider_Jetpack : NSM_neutral_XD_1_backpack
    {
        author = "NSM & Gooman";
        displayName = "Raider Jetpack";
        model = "\OPTRE_weapons\backpacks\jetpack.p3d";
        maximumload = 600;
        mass = 100;
        hiddenSelections[] =
        {
            "camo1"
        };
        hiddenSelectionsTextures[] =
        {
            "NSM_Objects\Data\XD_1_JumpPack_CO.paa"
        };
        picture = "\NSM_Objects\icon.paa";

        NSM_jumppack_is_jumppack = 1;
        NSM_jumppack_spam_delay = 1;
        NSM_jumppack_energy_capacity = 100;
        NSM_jumppack_recharge = 5;
        NSM_jumppack_jump_types[] = {
            {
                "Forward Jump", // Name of jump
                {
                    12,         // forward velo(0)
                    20,         // verticle velo(1)
                    50,         // cost(2)
                    0,          // angle(3)
                    0,          // directional(4)(no=0,yes=1)
                    0           // can prone jump(5)(no=0,yes=1)
                }
            },
            {
                "Short Jump",
                {
                    12,
                    5,
                    30,
                    0,
                    1,
                    0
                }
            }
        };

        NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
        NSM_jumppack_effect_points[] = { { "spine3", { 0, -0.3, -0.1 } } };
        NSM_jumppack_sound_ignite[] = { "NSM_Main\sounds\cdv21Start.ogg" };
        NSM_jumppack_sound_land[] = { "NSM_Main\sounds\cdv21End.ogg" };
        NSM_jumppack_sound_idle[] = { "NSM_Main\sounds\cdv21Idle.ogg" };
    };

    class TFV_Vandal_Jetpack : NSM_neutral_XD_1_backpack
    {
        author = "NSM & Gooman";
        displayName = "Vandal Jetpack";
        model = "\OPTRE_weapons\backpacks\jetpack.p3d";
        maximumload = 600;
        mass = 100;
        hiddenSelections[] =
        {
            "camo1"
        };
        hiddenSelectionsTextures[] =
        {
            "NSM_Objects\Data\XD_1_JumpPack_CO.paa"
        };
        picture = "\NSM_Objects\icon.paa";

        NSM_jumppack_is_jumppack = 1;
        NSM_jumppack_spam_delay = 1;
        NSM_jumppack_energy_capacity = 100;
        NSM_jumppack_recharge = 5;
        NSM_jumppack_jump_types[] = {
            {
                "Forward Jump", // Name of jump
                {
                    12,         // forward velo(0)
                    20,         // verticle velo(1)
                    50,         // cost(2)
                    0,          // angle(3)
                    0,          // directional(4)(no=0,yes=1)
                    0           // can prone jump(5)(no=0,yes=1)
                }
            },
            {
                "Short Jump",
                {
                    12,
                    5,
                    30,
                    0,
                    1,
                    0
                }
            }
        };

        NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
        NSM_jumppack_effect_points[] = { { "spine3", { 0, -0.3, -0.1 } } };
        NSM_jumppack_sound_ignite[] = { "NSM_Main\sounds\cdv21Start.ogg" };
        NSM_jumppack_sound_land[] = { "NSM_Main\sounds\cdv21End.ogg" };
        NSM_jumppack_sound_idle[] = { "NSM_Main\sounds\cdv21Idle.ogg" };

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