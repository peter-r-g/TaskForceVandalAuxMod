class CfgPatches
{
    class TFV_Resupply
    {
        name = "Task Force Vandal Aux - Resupply";
        author = "[TW] gunman435";

        requiredVersion = 0.1;
        requiredAddons[] = {
            "TFV_Main",
            "OPTRE_Misc_Crates"
        };

        units[] = {
            "TFV_OPTRE_SupplyPod_Medical_PL",
            "TFV_OPTRE_SupplyPod_Medical_SQ",
            "TFV_OPTRE_SupplyPod_Ammo"
        };
        weapons[] = {};
    };
};

class CfgVehicles
{
    class OPTRE_Ammo_SupplyPod_Empty;
    class TFV_OPTRE_SupplyPod_Medical_PL: OPTRE_Ammo_SupplyPod_Empty
    {
        displayName = "[UNSC] Supply Pod (PL Medical)";
        class TransportItems
        {
            class xx_OPTRE_Biofoam
            {
                name = "OPTRE_Biofoam";
                count = 50;
            };
            class xx_OPTRE_MedKit
            {
                name = "OPTRE_MedKit";
                count = 10;
            };
            class xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 150;
            };
            class xx_ACE_packingBandage
            {
                name = "ACE_packingBandage";
                count = 150;
            };
            class xx_ACE_quikclot
            {
                name = "ACE_quikclot";
                count = 150;
            };
            class xx_ACE_adenosine
            {
                name = "ACE_adenosine";
                count = 50;
            };
            class xx_ACE_epinephrine
            {
                name = "ACE_epinephrine";
                count = 50;
            };
            class xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 50;
            };
            class xx_ACE_plasmaIV
            {
                name = "ACE_plasmaIV";
                count = 30;
            };
            class xx_ACE_plasmaIV_500
            {
                name = "ACE_plasmaIV_500";
                count = 30;
            };
            class xx_ACE_plasmaIV_250
            {
                name = "ACE_plasmaIV_250";
                count = 30;
            };
            class xx_ACE_splint
            {
                name = "ACE_splint";
                count = 50;
            };
            class xx_ACE_tourniquet
            {
                name = "ACE_tourniquet";
                count = 50;
            };
            class xx_ACE_surgicalKit
            {
                name = "ACE_surgicalKit";
                count = 2;
            };
        };
    };
    class TFV_OPTRE_SupplyPod_Medical_SQ: OPTRE_Ammo_SupplyPod_Empty
    {
        displayName = "[UNSC] Supply Pod (SQ Medical)";
        class TransportItems
        {
            class xx_OPTRE_Biofoam
            {
                name = "OPTRE_Biofoam";
                count = 5;
            };
            class xx_OPTRE_MedKit
            {
                name = "OPTRE_MedKit";
                count = 1;
            };
            class xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 30;
            };
            class xx_ACE_packingBandage
            {
                name = "ACE_packingBandage";
                count = 30;
            };
            class xx_ACE_quikclot
            {
                name = "ACE_quikclot";
                count = 30;
            };
            class xx_ACE_adenosine
            {
                name = "ACE_adenosine";
                count = 5;
            };
            class xx_ACE_epinephrine
            {
                name = "ACE_epinephrine";
                count = 5;
            };
            class xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 5;
            };
            class xx_ACE_plasmaIV
            {
                name = "ACE_plasmaIV";
                count = 4;
            };
            class xx_ACE_plasmaIV_500
            {
                name = "ACE_plasmaIV_500";
                count = 4;
            };
            class xx_ACE_plasmaIV_250
            {
                name = "ACE_plasmaIV_250";
                count = 4;
            };
            class xx_ACE_splint
            {
                name = "ACE_splint";
                count = 12;
            };
            class xx_ACE_tourniquet
            {
                name = "ACE_tourniquet";
                count = 12;
            };
        };
    };
};

class cfgMods
{
    author = "[TW] gunman435";
};