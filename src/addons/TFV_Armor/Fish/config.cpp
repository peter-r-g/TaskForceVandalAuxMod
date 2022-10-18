class CfgPatches
{
    class TFV_Armor_Fish
    {
        name = "Task Force Vandal Aux - Armor (Fish)";
        author = "Gooman";

        addonRootClass = "TFV_Armor";
        requiredVersion = 0.1;
        requiredAddons[] = {
            "TFV_Armor",
            "1st_MEU_patch_helmet_pegasus"
        };

        units[] = {};
        weapons[] = {
            "TFV_Pilot_Helmet_Fish"
        };
    };
};

class CfgWeapons
{
    class VX19_1stMEU;
    class VX19_1stMEU_dp;

    class TFV_Pilot_Helmet_Fish : VX19_1stMEU
    {
        author = "1st MEU Chaotic & Gooman";
        displayName = "Pegasus (Fish)";
        hiddenSelectionsTextures[] =
        {
            "TFV_Armor\Fish\data\fish_pilot_helmet_co.paa",
            "TFV_Armor\Fish\data\fish_pilot_visor_co.paa"
        };
    };

    class TFV_Pilot_Helmet_Fish_dp : VX19_1stMEU_dp
    {
        scope = 1;
        scopeArsenal = 1;
        scopeCurator = 1;
        author = "1st MEU Chaotic & Gooman";
        displayName = "Pegasus (Fish)";
        hiddenSelectionsTextures[] =
        {
            "TFV_Armor\Fish\data\fish_pilot_helmet_co.paa"
        };
    };
};

class cfgMods
{
    author = "Gooman";
};