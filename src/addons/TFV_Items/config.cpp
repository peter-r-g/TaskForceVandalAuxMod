class CfgPatches
{
    class TFV_Items
    {
        name = "Task Force Vandal Aux - Items";
        author = "Gooman";
        
        requiredVersion = 0.1;
        requiredAddons[] = {
            "TFV_Main",
            "ace_medical_treatment",
            "OPTRE_ACE_Compat"
        };
        
        units[]=
        {
            "TFV_IbuprofenItem",
            "TFV_Corpsman_BiofoamItem",
            "TFV_Corpsman_MediGelItem",
            "TFV_BiofoamItem",
            "TFV_MediGelItem"
        };
        weapons[]=
        {
            "TFV_Ibuprofen",
            "TFV_PlasmaIV_2500",
            "TFV_Emergency_MedKit",
            "TFV_Corpsman_Biofoam",
            "TFV_Corpsman_Medigel",
            "TFV_Biofoam",
            "TFV_Medigel"
        };
    };
};

class CfgWeapons
{
    #pragma region Base
    class ItemInfo;
    class CBA_MiscItem_ItemInfo;
    class ACE_Morphine;
    class ACE_plasmaIV;
    class OPTRE_Biofoam;
    class OPTRE_Medigel;
    #pragma endregion Base

    #pragma region Medical
    class TFV_Ibuprofen: ACE_Morphine
    {
        scope=2;
        author="ACE & Gooman";
        displayName="[TFV] Ibuprofen Bottle";
        descriptionShort="Drink some water and Rest";
        descriptionUse="Use instead of morphine";
        picture="\z\ace\addons\medical_treatment\ui\morphine_ca.paa";
        model="\z\ace\addons\medical_treatment\data\morphine.p3d";
        
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass=0.1;
        };
    };

    class TFV_PlasmaIV_2500: ACE_plasmaIV
    {
        scope=2;
        author="ACE & Gooman"
        displayName="[TFV] Plasma (2500ml)";
        descriptionShort="2500ml of Plasma";
        descriptionUse="Give Plasma (2500ml)";
        
        class ItemInfo: ItemInfo
        {
            mass=16;
        };
    };
    
    class TFV_Emergency_MedKit: OPTRE_Biofoam
    {
        scope=2;
        author="OPTRE & Gooman";
        displayName="[TFV] Emergency Medkit";
        picture="\OPTRE_weapons\items\icons\medkit.paa";
        model="\OPTRE_Weapons\items\MedKit.p3d";
        
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass=32;
        };
    };
    
    class TFV_Corpsman_Biofoam: OPTRE_Biofoam
    {
        scope=2;
        author="OPTRE & Gooman";
        displayName="[TFV] Corpsman Biofoam Canister";
        picture="\OPTRE_weapons\items\icons\biofoam.paa";
        model="\OPTRE_Weapons\items\Biofoam.p3d";
        
        class ItemInfo: ItemInfo
        {
            mass=35;
        };
    };
    
    class TFV_Corpsman_Medigel: OPTRE_Medigel
    {
        scope=2;
        author="OPTRE & Gooman";
        displayName="[TFV] Corpsman Optican Medigel";
        picture="\1st_meu_ace\_textures\misc\icons\medigel_icon.paa";
        model="\OPTRE_Weapons\items\Medigel.p3d";
        
        class ItemInfo: ItemInfo
        {
            mass=35;
        };
    };
    
    class TFV_Biofoam: OPTRE_Biofoam
    {
        scope=2;
        author="OPTRE & Gooman";
        displayName="[TFV] Biofoam Canister";
        picture="\OPTRE_weapons\items\icons\biofoam.paa";
        model="\OPTRE_Weapons\items\Biofoam.p3d";
        
        class ItemInfo: ItemInfo
        {
            mass=1;
        };
    };
    
    class TFV_Medigel: OPTRE_Medigel
    {
        scope=2;
        author="OPTRE & Gooman";
        displayName="[TFV] Optican Medigel";
        picture="\1st_meu_ace\_textures\misc\icons\medigel_icon.paa";
        model="\OPTRE_Weapons\items\Medigel.p3d";
        
        class ItemInfo: ItemInfo
        {
            mass=1;
        };
    };
    #pragma endregion Medical
};

class CfgVehicles
{
    #pragma region Base
    class ACE_morphineItem;
    class OPTRE_BiofoamItem;
    class OPTRE_MediGelItem;
    #pragma endregion Base

    #pragma region Medical
    class TFV_IbuprofenItem: ACE_morphineItem
    {
        scope=2;
        scopeCurator=2;
        scopeArsenal=2;
        displayName="Ibuprofen";
        author="ACE & Gooman";
        vehicleClass="Items";
        mass=20;
        
        class TransportItems
        {
            class _xx_TFV_Ibuprofen
            {
                name="TFV_Ibuprofen";
                count=1;
            };
        };
    };
    
    class TFV_Corpsman_BiofoamItem: OPTRE_BiofoamItem
    {
        scope=2;
        scopeCurator=2;
        scopeArsenal=2;
        displayName="Corpsman Biofoam";
        author="OPTRE & Gooman";
        vehicleClass="Items";
        mass=35;
        
        class TransportItems
        {
            class _xx_TFV_Corpsman_Biofoam
            {
                name="TFV_Corpsman_Biofoam";
                count=1;
            };
        };
    };
    
    class TFV_Corpsman_MediGelItem: OPTRE_MediGelItem
    {
        scope=2;
        scopeCurator=2;
        scopeArsenal=2;
        displayName="Corpsman Medigel";
        author="OPTRE & Gooman";
        vehicleClass="Items";
        mass=35;
        
        class TransportItems
        {
            class _xx_TFV_Corpsman_Medigel
            {
                name="TFV_Corpsman_Medigel";
                count=1;
            };
        };
    };
    
    class TFV_BiofoamItem: OPTRE_BiofoamItem
    {
        scope=2;
        scopeCurator=2;
        scopeArsenal=2;
        displayName="Biofoam";
        author="OPTRE & Gooman";
        vehicleClass="Items";
        mass=2;
        
        class TransportItems
        {
            class _xx_TFV_Biofoam
            {
                name="TFV_Biofoam";
                count=1;
            };
        };
    };
    
    class TFV_MediGelItem: OPTRE_MediGelItem
    {
        scope=2;
        scopeCurator=2;
        scopeArsenal=2;
        displayName="Medigel";
        author="OPTRE & Gooman";
        vehicleClass="Items";
        mass=2;
        
        class TransportItems
        {
            class _xx_TFV_Medigel
            {
                name="TFV_Medigel";
                count=1;
            };
        };
    };
    #pragma endregion Medical
};

class ACE_Medical_Treatment
{
    class PlasmaIV;
    class OPTRE_Biofoam;
    class OPTRE_Medigel;

    class IV
    {
        class TFV_PlasmaIV_2500: PlasmaIV
        {
            volume=2500;
        };
        class TFV_Emergency_MedKit: PlasmaIV
        {
            volume=2500;
        };
    };

    class Bandaging
	{
		class TFV_Corpsman_Biofoam: OPTRE_Biofoam
		{
			class plasma
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMinor: plasma
			{
				effectiveness=2;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMedium: plasma
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaLarge: plasma
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class Abrasion
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=240;
				reopeningMaxDelay=480;
			};
			class AbrasionMinor: Abrasion
			{
			};
			class AbrasionMedium: Abrasion
			{
				effectiveness=0.5;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness=0.5;
			};
			class Avulsions: Abrasion
			{
				effectiveness=4;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=420;
			};
			class AvulsionsMinor: Avulsions
			{
				effectiveness=3;
			};
			class AvulsionsMedium: Avulsions
			{
				effectiveness=2;
			};
			class AvulsionsLarge: Avulsions
			{
				effectiveness=1;
			};
			class Contusion: Abrasion
			{
				effectiveness=0;
				reopeningChance=1;
				reopeningMinDelay=0;
				reopeningMaxDelay=0;
			};
			class ContusionMinor: Contusion
			{
			};
			class ContusionMedium: Contusion
			{
			};
			class ContusionLarge: Contusion
			{
			};
			class Crush: Abrasion
			{
				effectiveness=2;
				reopeningChance=1;
				reopeningMinDelay=700;
				reopeningMaxDelay=1000;
			};
			class CrushMinor: Crush
			{
			};
			class CrushMedium: Crush
			{
				effectiveness=1.5;
			};
			class CrushLarge: Crush
			{
				effectiveness=1;
			};
			class Cut: Abrasion
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=480;
			};
			class CutMinor: Cut
			{
			};
			class CutMedium: Cut
			{
				effectiveness=0.5;
			};
			class CutLarge: Cut
			{
				effectiveness=0.5;
			};
			class Laceration: Abrasion
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=720;
			};
			class LacerationMinor: Laceration
			{
			};
			class LacerationMedium: Laceration
			{
				effectiveness=0.5;
			};
			class LacerationLarge: Laceration
			{
				effectiveness=0.5;
			};
			class velocityWound: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=900;
				reopeningMaxDelay=1200;
			};
			class velocityWoundMinor: velocityWound
			{
			};
			class velocityWoundMedium: velocityWound
			{
				effectiveness=2;
			};
			class velocityWoundLarge: velocityWound
			{
				effectiveness=1;
			};
			class punctureWound: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=900;
				reopeningMaxDelay=3000;
			};
			class punctureWoundMinor: punctureWound
			{
			};
			class punctureWoundMedium: punctureWound
			{
				effectiveness=2;
			};
			class punctureWoundLarge: punctureWound
			{
				effectiveness=1;
			};
		};
    	
		class TFV_Corpsman_Medigel: OPTRE_Medigel
		{
			class plasma
			{
				effectiveness=5;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMinor: plasma
			{
				effectiveness=5;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMedium: plasma
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaLarge: plasma
			{
				effectiveness=2;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class Abrasion
			{
				effectiveness=4;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class AbrasionMinor: Abrasion
			{
			};
			class AbrasionMedium: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness=2;
				reopeningChance=1;
			};
			class Avulsions: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=600;
			};
			class AvulsionsMinor: Avulsions
			{
				effectiveness=2;
			};
			class AvulsionsMedium: Avulsions
			{
				effectiveness=1.5;
			};
			class AvulsionsLarge: Avulsions
			{
				effectiveness=1;
				reopeningChance=1;
			};
			class Contusion: Abrasion
			{
				effectiveness=2.5;
				reopeningChance=1;
				reopeningMinDelay=0;
				reopeningMaxDelay=0;
			};
			class ContusionMinor: Contusion
			{
			};
			class ContusionMedium: Contusion
			{
			};
			class ContusionLarge: Contusion
			{
				effectiveness=2;
			};
			class Crush: Abrasion
			{
				effectiveness=2;
				reopeningChance=1;
				reopeningMinDelay=0;
				reopeningMaxDelay=0;
			};
			class CrushMinor: Crush
			{
				reopeningChance=1;
			};
			class CrushMedium: Crush
			{
				effectiveness=1.5;
			};
			class CrushLarge: Crush
			{
				effectiveness=1;
				reopeningChance=1;
			};
			class Cut: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=600;
			};
			class CutMinor: Cut
			{
			};
			class CutMedium: Cut
			{
				effectiveness=2;
				reopeningChance=1;
			};
			class CutLarge: Cut
			{
				effectiveness=2;
				reopeningChance=1;
			};
			class Laceration: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=900;
			};
			class LacerationMinor: Laceration
			{
			};
			class LacerationMedium: Laceration
			{
				effectiveness=3;
			};
			class LacerationLarge: Laceration
			{
				effectiveness=2;
				reopeningChance=1;
			};
			class velocityWound: Abrasion
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=120;
				reopeningMaxDelay=180;
			};
			class velocityWoundMinor: velocityWound
			{
			};
			class velocityWoundMedium: velocityWound
			{
				effectiveness=0.5;
			};
			class velocityWoundLarge: velocityWound
			{
				effectiveness=0.5;
			};
			class punctureWound: Abrasion
			{
				effectiveness=2;
				reopeningChance=1;
				reopeningMinDelay=120;
				reopeningMaxDelay=180;
			};
			class punctureWoundMinor: punctureWound
			{
			};
			class punctureWoundMedium: punctureWound
			{
				effectiveness=1;
			};
			class punctureWoundLarge: punctureWound
			{
				effectiveness=0.5;
			};
		};
    	
		class TFV_Biofoam: OPTRE_Biofoam
		{
			class plasma
			{
				effectiveness=5;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMinor: plasma
			{
				effectiveness=5;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMedium: plasma
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaLarge: plasma
			{
				effectiveness=2;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class Abrasion
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=240;
				reopeningMaxDelay=480;
			};
			class AbrasionMinor: Abrasion
			{
			};
			class AbrasionMedium: Abrasion
			{
				effectiveness=0.5;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness=0.5;
			};
			class Avulsions: Abrasion
			{
				effectiveness=4;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=420;
			};
			class AvulsionsMinor: Avulsions
			{
				effectiveness=3;
			};
			class AvulsionsMedium: Avulsions
			{
				effectiveness=2;
			};
			class AvulsionsLarge: Avulsions
			{
				effectiveness=1;
			};
			class Contusion: Abrasion
			{
				effectiveness=0;
				reopeningChance=1;
				reopeningMinDelay=0;
				reopeningMaxDelay=0;
			};
			class ContusionMinor: Contusion
			{
			};
			class ContusionMedium: Contusion
			{
			};
			class ContusionLarge: Contusion
			{
			};
			class Crush: Abrasion
			{
				effectiveness=2;
				reopeningChance=1;
				reopeningMinDelay=700;
				reopeningMaxDelay=1000;
			};
			class CrushMinor: Crush
			{
			};
			class CrushMedium: Crush
			{
				effectiveness=1.5;
			};
			class CrushLarge: Crush
			{
				effectiveness=1;
			};
			class Cut: Abrasion
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=480;
			};
			class CutMinor: Cut
			{
			};
			class CutMedium: Cut
			{
				effectiveness=0.5;
			};
			class CutLarge: Cut
			{
				effectiveness=0.5;
			};
			class Laceration: Abrasion
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=720;
			};
			class LacerationMinor: Laceration
			{
			};
			class LacerationMedium: Laceration
			{
				effectiveness=0.5;
			};
			class LacerationLarge: Laceration
			{
				effectiveness=0.5;
			};
			class velocityWound: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=900;
				reopeningMaxDelay=1200;
			};
			class velocityWoundMinor: velocityWound
			{
			};
			class velocityWoundMedium: velocityWound
			{
				effectiveness=2;
			};
			class velocityWoundLarge: velocityWound
			{
				effectiveness=1;
			};
			class punctureWound: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=900;
				reopeningMaxDelay=3000;
			};
			class punctureWoundMinor: punctureWound
			{
			};
			class punctureWoundMedium: punctureWound
			{
				effectiveness=2;
			};
			class punctureWoundLarge: punctureWound
			{
				effectiveness=1;
			};
		};
    	
		class TFV_Medigel: OPTRE_Medigel
		{
			class plasma
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMinor: plasma
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMedium: plasma
			{
				effectiveness=2;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaLarge: plasma
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class Abrasion
			{
				effectiveness=4;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class AbrasionMinor: Abrasion
			{
			};
			class AbrasionMedium: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness=2;
				reopeningChance=1;
			};
			class Avulsions: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=600;
			};
			class AvulsionsMinor: Avulsions
			{
				effectiveness=2;
			};
			class AvulsionsMedium: Avulsions
			{
				effectiveness=1.5;
			};
			class AvulsionsLarge: Avulsions
			{
				effectiveness=1;
				reopeningChance=1;
			};
			class Contusion: Abrasion
			{
				effectiveness=2.5;
				reopeningChance=1;
				reopeningMinDelay=0;
				reopeningMaxDelay=0;
			};
			class ContusionMinor: Contusion
			{
			};
			class ContusionMedium: Contusion
			{
			};
			class ContusionLarge: Contusion
			{
				effectiveness=2;
			};
			class Crush: Abrasion
			{
				effectiveness=2;
				reopeningChance=1;
				reopeningMinDelay=0;
				reopeningMaxDelay=0;
			};
			class CrushMinor: Crush
			{
				reopeningChance=1;
			};
			class CrushMedium: Crush
			{
				effectiveness=1.5;
			};
			class CrushLarge: Crush
			{
				effectiveness=1;
				reopeningChance=1;
			};
			class Cut: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=600;
			};
			class CutMinor: Cut
			{
			};
			class CutMedium: Cut
			{
				effectiveness=2;
				reopeningChance=1;
			};
			class CutLarge: Cut
			{
				effectiveness=2;
				reopeningChance=1;
			};
			class Laceration: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=900;
			};
			class LacerationMinor: Laceration
			{
			};
			class LacerationMedium: Laceration
			{
				effectiveness=3;
			};
			class LacerationLarge: Laceration
			{
				effectiveness=2;
				reopeningChance=1;
			};
			class velocityWound: Abrasion
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=120;
				reopeningMaxDelay=180;
			};
			class velocityWoundMinor: velocityWound
			{
			};
			class velocityWoundMedium: velocityWound
			{
				effectiveness=0.5;
			};
			class velocityWoundLarge: velocityWound
			{
				effectiveness=0.5;
			};
			class punctureWound: Abrasion
			{
				effectiveness=2;
				reopeningChance=1;
				reopeningMinDelay=120;
				reopeningMaxDelay=180;
			};
			class punctureWoundMinor: punctureWound
			{
			};
			class punctureWoundMedium: punctureWound
			{
				effectiveness=1;
			};
			class punctureWoundLarge: punctureWound
			{
				effectiveness=0.5;
			};
		};
    	
		class TFV_Emergency_MedKit: OPTRE_Biofoam
		{
			class plasma
			{
				effectiveness=6;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMinor: plasma
			{
				effectiveness=6;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMedium: plasma
			{
				effectiveness=6;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaLarge: plasma
			{
				effectiveness=6;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class Abrasion
			{
				effectiveness=20;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class AbrasionMinor: Abrasion
			{
			};
			class AbrasionMedium: Abrasion
			{
				effectiveness=20;
				reopeningChance=1;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness=20;
				reopeningChance=1;
			};
			class Avulsions: Abrasion
			{
				effectiveness=20;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=600;
			};
			class AvulsionsMinor: Avulsions
			{
				effectiveness=20;
			};
			class AvulsionsMedium: Avulsions
			{
				effectiveness=20;
			};
			class AvulsionsLarge: Avulsions
			{
				effectiveness=20;
				reopeningChance=1;
			};
			class Contusion: Abrasion
			{
				effectiveness=20;
				reopeningChance=1;
				reopeningMinDelay=0;
				reopeningMaxDelay=0;
			};
			class ContusionMinor: Contusion
			{
			};
			class ContusionMedium: Contusion
			{
			};
			class ContusionLarge: Contusion
			{
				effectiveness=20;
			};
			class Crush: Abrasion
			{
				effectiveness=20;
				reopeningChance=1;
				reopeningMinDelay=0;
				reopeningMaxDelay=0;
			};
			class CrushMinor: Crush
			{
				reopeningChance=1;
			};
			class CrushMedium: Crush
			{
				effectiveness=20;
			};
			class CrushLarge: Crush
			{
				effectiveness=20;
				reopeningChance=1;
			};
			class Cut: Abrasion
			{
				effectiveness=20;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=600;
			};
			class CutMinor: Cut
			{
			};
			class CutMedium: Cut
			{
				effectiveness=20;
				reopeningChance=1;
			};
			class CutLarge: Cut
			{
				effectiveness=20;
				reopeningChance=1;
			};
			class Laceration: Abrasion
			{
				effectiveness=20;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=900;
			};
			class LacerationMinor: Laceration
			{
			};
			class LacerationMedium: Laceration
			{
				effectiveness=20;
			};
			class LacerationLarge: Laceration
			{
				effectiveness=20;
				reopeningChance=1;
			};
			class velocityWound: Abrasion
			{
				effectiveness=20;
				reopeningChance=1;
				reopeningMinDelay=120;
				reopeningMaxDelay=180;
			};
			class velocityWoundMinor: velocityWound
			{
			};
			class velocityWoundMedium: velocityWound
			{
				effectiveness=20;
			};
			class velocityWoundLarge: velocityWound
			{
				effectiveness=20;
			};
			class punctureWound: Abrasion
			{
				effectiveness=20;
				reopeningChance=1;
				reopeningMinDelay=120;
				reopeningMaxDelay=180;
			};
			class punctureWoundMinor: punctureWound
			{
			};
			class punctureWoundMedium: punctureWound
			{
				effectiveness=20;
			};
			class punctureWoundLarge: punctureWound
			{
				effectiveness=20;
			};
		};
	};
};

class CfgFunctions
{
	class TFV
	{
		class ACE_compat
		{
			class biomed
			{
                file = "TFV_Items\Functions\fn_biomed.sqf";
			};
			class medkit
			{
                file = "TFV_Items\Functions\fn_medkit.sqf";
			};
		};
	};
};

class ACE_Medical_Treatment_Actions
{
	class Morphine;
	class PlasmaIV;
	class OPTRE_Medigel;
	class OPTRE_Biofoam;

	class TFV_Ibuprofen: Morphine
	{
		displayName="Take Ibuprofen";
		displayNameProgress="Popping some pills...";
		allowedSelections[]=
		{
			"Head"
		};
		items[]=
		{
			"TFV_Ibuprofen"
		};
		treatmentTime=1;
	};

	class TFV_PlasmaIV_2500: PlasmaIV
	{
		displayName="Give PlasmaIV (2500ml)";
		displayNameProgress="Transfusing Plasma...";
		items[]=
		{
			"TFV_PlasmaIV_2500"
		};
		treatmentTime=12;
	};
	
	class TFV_Corpsman_Medigel: OPTRE_Medigel
	{
		displayName="Apply Corpsman Medigel";
		displayNameProgress="Spreading lots of Medigel...";
		items[]=
		{
			"TFV_Corpsman_Medigel"
		};
		consumeItem=0;
		category="bandage";
		medicRequired=1;
		callbackSuccess="TFV_fnc_biomed";
	};
	
	class TFV_Corpsman_Biofoam: OPTRE_Biofoam
	{
		displayName="Inject Corpsman Biofoam";
		displayNameProgress="Injecting lots of Biofoam...";
		items[]=
		{
			"TFV_Corpsman_Biofoam"
		};
		consumeItem=0;
		category="bandage";
		medicRequired=1;
		callbackSuccess="TFV_fnc_biomed";
	};
	
	class TFV_Medigel: OPTRE_Medigel
	{
		displayName="Apply Medigel";
		displayNameProgress="Spreading Medigel...";
		items[]=
		{
			"TFV_Medigel"
		};
		category="bandage";
		callbackSuccess="TFV_fnc_biomed";
	};
	
	class TFV_Biofoam: OPTRE_Biofoam
	{
		displayName="Inject Biofoam";
		displayNameProgress="Injecting Biofoam...";
		items[]=
		{
			"TFV_Biofoam"
		};
		category="bandage";
		callbackSuccess="TFV_fnc_biomed";
	};
	
	class TFV_Emergency_MedKit: OPTRE_Medigel
	{
		displayName="Emergency MedKit";
		displayNameProgress="Applying MedKit...";
		icon="";
		items[]=
		{
			"TFV_Emergency_MedKit"
		};
		consumeItem=1;
		category="advanced";
		medicRequired=0;
		treatmentTime=10;
		allowSelfTreatment=0;

		callbackStart="";
		callbackSuccess="TFV_fnc_medkit";
	};
};