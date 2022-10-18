class CfgPatches
{
	class TFV_Weapons_EX
	{
		author="Fireteam Zulu";
		name="Fireteam Zulu: Specialized Ordanance";
		url="https://discord.gg/fa7Cguk";
		units[]={};
		weapons[]=
		{
			"TFV_SRS99_Scope_v2",
			"TFV_SRS99C_Scope_v2",
			"TFV_M73_Smartlink_v2",
			"TFV_M6S_Scope",
			"TFV_M6GX_Scope",
			"TFV_M6D_Smartlink",
			"TFV_MA5_SmartLink",
			"TFV_MA5_SmartLink_v2",
			"TFV_MA5C_SmartLink_v2",
			"TFV_MA5_SmartLink_legacy",
			"TFV_MA5C_SmartLink_legacy",
			"TFV_M7_Sight_v2",
			"TFV_M392_Scope_v2",
			"TFV_BMR_Scope_v2",
			"TFV_M393_Scope_v2",
			"TFV_M393_ACOG_v2",
			"TFV_M393_EOTECH_v2",
			"TFV_BR55HB_Scope_v2",
			"TFV_M301X",
			"TFV_M319",
			"TFV_MA5B",
			"TFV_MA5BGL",
			"TFV_MA5A",
			"TFV_MA5AGL",
			"TFV_MA5C",
			"TFV_MA5CGL",
			"TFV_MA5K",
			"TFV_MA37",
			"TFV_MA37B",
			"TFV_MA37GL",
			"TFV_MA37BGL",
			"TFV_MA32",
			"TFV_MA32B",
			"TFV_MA32GL",
			"TFV_MA32BGL",
			"TFV_M6G",
			"TFV_M6C",
			"TFV_M33",
			"TFV_M33G",
			"TFV_M6D",
			"TFV_M6D_Flashlight",
			"TFV_M392_DMR",
			"TFV_M392XD_DMR",
			"TFV_M393_DMR",
			"TFV_M393S_DMR",
			"TFV_M295_BMR",
			"TFV_M28A2",
			"TFV_MRS10X",
			"TFV_CR77",
			"TFV_M14X",
			"TFV_BR55HB",
			"TFV_BR55",
			"TFV_BR55AM",
			"TFV_M7",
			"TFV_M7_Folded",
			"TFV_SRS99D",
			"TFV_SRS99C",
			"TFV_M99",
			"TFV_M48_PAW",
			"TFV_M73",
			"TFV_M73H",
			"TFV_M45",
			"TFV_M45TAC",
			"TFV_M90A"
		};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Core",
			"OPTRE_Weapons",
			"TFV_Weapons",
			"A3_Data_F",
			"TFV_Weapons_Charges",
			"TFV_Weapons_AR",
			"A3_Data_F_Mark",
			"TFV_Weapons_SMG",
			"V_SO_Weapons",
			"TFV_Weapons_Pistol"
		};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class TFV_Weapons_EX
		{
			list[]=
			{
				"TFV_Weapons_EX"
			};
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons
{
	class srifle_EBR_F;
	class TFV_LongRifle_Base: srifle_EBR_F
	{
		class Single;
		class WeaponSlotsInfo;
	};
	class arifle_Mk20_F;
	class TFV_Rifle_Base: arifle_Mk20_F
	{
		class WeaponSlotsInfo;
		class ItemInfo;
		class Single;
		class Burst;
		class FullAuto;
	};
	class NVGoggles;
	class A3_TVG_S_F: NVGoggles
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="[TFV] Mark 2 Interface";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		class ItemInfo
		{
			type=616;
			uniformModel="";
			modelOff="";
			mass=13;
		};
	};
	class A3_TVG_S_F2: A3_TVG_S_F
	{
		displayName="[TFV] Mark 3 Interface";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3: A3_TVG_S_F
	{
		displayName="[TFV] Mark 4 Interface";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45: A3_TVG_S_F
	{
		displayName="[TFV] Mark 5 Interface";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6: A3_TVG_S_F
	{
		displayName="[TFV] Mark 6 Interface";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7: A3_TVG_S_F
	{
		displayName="[TFV] Mark 7 Interface";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8: A3_TVG_S_F
	{
		displayName="[TFV] Mark 8 Interface";
		thermalMode[]={7};
	};
	class VES_NVG_CNM;
	class A3_TVG_S_F_CNM: VES_NVG_CNM
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="[TFV] Mark 2 Interface (CNM)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_CNM: A3_TVG_S_F_CNM
	{
		displayName="[TFV] Mark 3 Interface (CNM)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_CNM: A3_TVG_S_F_CNM
	{
		displayName="[TFV] Mark 4 Interface (CNM)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_CNM: A3_TVG_S_F_CNM
	{
		displayName="[TFV] Mark 5 Interface (CNM)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_CNM: A3_TVG_S_F_CNM
	{
		displayName="[TFV] Mark 6 Interface (CNM)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_CNM: A3_TVG_S_F_CNM
	{
		displayName="[TFV] Mark 7 Interface (CNM)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_CNM: A3_TVG_S_F_CNM
	{
		displayName="[TFV] Mark 8 Interface (CNM)";
		thermalMode[]={7};
	};
	class VES_NVG_HUL;
	class A3_TVG_S_F_HUL: VES_NVG_HUL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="[TFV] Mark 2 Interface (HUL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_HUL: A3_TVG_S_F_HUL
	{
		displayName="[TFV] Mark 3 Interface (HUL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_HUL: A3_TVG_S_F_HUL
	{
		displayName="[TFV] Mark 4 Interface (HUL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_HUL: A3_TVG_S_F_HUL
	{
		displayName="[TFV] Mark 5 Interface (HUL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_HUL: A3_TVG_S_F_HUL
	{
		displayName="[TFV] Mark 6 Interface (HUL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_HUL: A3_TVG_S_F_HUL
	{
		displayName="[TFV] Mark 7 Interface (HUL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_HUL: A3_TVG_S_F_HUL
	{
		displayName="[TFV] Mark 8 Interface (HUL)";
		thermalMode[]={7};
	};
	class VES_NVG_UL;
	class A3_TVG_S_F_UL: VES_NVG_UL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="[TFV] Mark 2 Interface (UL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UL: A3_TVG_S_F_UL
	{
		displayName="[TFV] Mark 3 Interface (UL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UL: A3_TVG_S_F_UL
	{
		displayName="[TFV] Mark 4 Interface (UL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UL: A3_TVG_S_F_UL
	{
		displayName="[TFV] Mark 5 Interface (UL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UL: A3_TVG_S_F_UL
	{
		displayName="[TFV] Mark 6 Interface (UL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UL: A3_TVG_S_F_UL
	{
		displayName="[TFV] Mark 7 Interface (UL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UL: A3_TVG_S_F_UL
	{
		displayName="[TFV] Mark 8 Interface (UL)";
		thermalMode[]={7};
	};
	class VES_NVG_HURS;
	class A3_TVG_S_F_HURS: VES_NVG_HURS
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="[TFV] Mark 2 Interface (HURS)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_HURS: A3_TVG_S_F_HURS
	{
		displayName="[TFV] Mark 3 Interface (HURS)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_HURS: A3_TVG_S_F_HURS
	{
		displayName="[TFV] Mark 4 Interface (HURS)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_HURS: A3_TVG_S_F_HURS
	{
		displayName="[TFV] Mark 5 Interface (HURS)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_HURS: A3_TVG_S_F_HURS
	{
		displayName="[TFV] Mark 6 Interface (HURS)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_HURS: A3_TVG_S_F_HURS
	{
		displayName="[TFV] Mark 7 Interface (HURS)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_HURS: A3_TVG_S_F_HURS
	{
		displayName="[TFV] Mark 8 Interface (HURS)";
		thermalMode[]={7};
	};
	class VES_NVG_MVI;
	class A3_TVG_S_F_MVI: VES_NVG_MVI
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="[TFV] Mark 2 Interface (MVI)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_MVI: A3_TVG_S_F_MVI
	{
		displayName="[TFV] Mark 3 Interface (MVI)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_MVI: A3_TVG_S_F_MVI
	{
		displayName="[TFV] Mark 4 Interface (MVI)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_MVI: A3_TVG_S_F_MVI
	{
		displayName="[TFV] Mark 5 Interface (MVI)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_MVI: A3_TVG_S_F_MVI
	{
		displayName="[TFV] Mark 6 Interface (MVI)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_MVI: A3_TVG_S_F_MVI
	{
		displayName="[TFV] Mark 7 Interface (MVI)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_MVI: A3_TVG_S_F_MVI
	{
		displayName="[TFV] Mark 8 Interface (MVI)";
		thermalMode[]={7};
	};
	class VES_NVG_UA;
	class A3_TVG_S_F_UA: VES_NVG_UA
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="[TFV] Mark 2 Interface (UA)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UA: A3_TVG_S_F_UA
	{
		displayName="[TFV] Mark 3 Interface (UA)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UA: A3_TVG_S_F_UA
	{
		displayName="[TFV] Mark 4 Interface (UA)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UA: A3_TVG_S_F_UA
	{
		displayName="[TFV] Mark 5 Interface (UA)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UA: A3_TVG_S_F_UA
	{
		displayName="[TFV] Mark 6 Interface (UA)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UA: A3_TVG_S_F_UA
	{
		displayName="[TFV] Mark 7 Interface (UA)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UA: A3_TVG_S_F_UA
	{
		displayName="[TFV] Mark 8 Interface (UA)";
		thermalMode[]={7};
	};
	class VES_NVG_UAB;
	class A3_TVG_S_F_UAB: VES_NVG_UAB
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="[TFV] Mark 2 Interface (UAB)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UAB: A3_TVG_S_F_UAB
	{
		displayName="[TFV] Mark 3 Interface (UAB)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UAB: A3_TVG_S_F_UAB
	{
		displayName="[TFV] Mark 4 Interface (UAB)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UAB: A3_TVG_S_F_UAB
	{
		displayName="[TFV] Mark 5 Interface (UAB)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UAB: A3_TVG_S_F_UAB
	{
		displayName="[TFV] Mark 6 Interface (UAB)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UAB: A3_TVG_S_F_UAB
	{
		displayName="[TFV] Mark 7 Interface (UAB)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UAB: A3_TVG_S_F_UAB
	{
		displayName="[TFV] Mark 8 Interface (UAB)";
		thermalMode[]={7};
	};
	class VES_NVG_HURS_CNM;
	class A3_TVG_S_F_HURS_CNM: VES_NVG_HURS_CNM
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="[TFV] Mark 2 Interface (HURS/CNM)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_HURS_CNM: A3_TVG_S_F_HURS_CNM
	{
		displayName="[TFV] Mark 3 Interface (HURS/CNM)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_HURS_CNM: A3_TVG_S_F_HURS_CNM
	{
		displayName="[TFV] Mark 4 Interface (HURS/CNM)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_HURS_CNM: A3_TVG_S_F_HURS_CNM
	{
		displayName="[TFV] Mark 5 Interface (HURS/CNM)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_HURS_CNM: A3_TVG_S_F_HURS_CNM
	{
		displayName="[TFV] Mark 6 Interface (HURS/CNM)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_HURS_CNM: A3_TVG_S_F_HURS_CNM
	{
		displayName="[TFV] Mark 7 Interface (HURS/CNM)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_HURS_CNM: A3_TVG_S_F_HURS_CNM
	{
		displayName="[TFV] Mark 8 Interface (HURS/CNM)";
		thermalMode[]={7};
	};
	class VES_NVG_HURS_HUL;
	class A3_TVG_S_F_HURS_HUL: VES_NVG_HURS_HUL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="[TFV] Mark 2 Interface (HURS/HUL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_HURS_HUL: A3_TVG_S_F_HURS_HUL
	{
		displayName="[TFV] Mark 3 Interface (HURS/HUL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_HURS_HUL: A3_TVG_S_F_HURS_HUL
	{
		displayName="[TFV] Mark 4 Interface (HURS/HUL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_HURS_HUL: A3_TVG_S_F_HURS_HUL
	{
		displayName="[TFV] Mark 5 Interface (HURS/HUL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_HURS_HUL: A3_TVG_S_F_HURS_HUL
	{
		displayName="[TFV] Mark 6 Interface (HURS/HUL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_HURS_HUL: A3_TVG_S_F_HURS_HUL
	{
		displayName="[TFV] Mark 7 Interface (HURS/HUL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_HURS_HUL: A3_TVG_S_F_HURS_HUL
	{
		displayName="[TFV] Mark 8 Interface (HURS/HUL)";
		thermalMode[]={7};
	};
	class VES_NVG_MVI_CNM;
	class A3_TVG_S_F_MVI_CNM: VES_NVG_MVI_CNM
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="[TFV] Mark 2 Interface (MVI/CNM)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_MVI_CNM: A3_TVG_S_F_MVI_CNM
	{
		displayName="[TFV] Mark 3 Interface (MVI/CNM)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_MVI_CNM: A3_TVG_S_F_MVI_CNM
	{
		displayName="[TFV] Mark 4 Interface (MVI/CNM)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_MVI_CNM: A3_TVG_S_F_MVI_CNM
	{
		displayName="[TFV] Mark 5 Interface (MVI/CNM)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_MVI_CNM: A3_TVG_S_F_MVI_CNM
	{
		displayName="[TFV] Mark 6 Interface (MVI/CNM)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_MVI_CNM: A3_TVG_S_F_MVI_CNM
	{
		displayName="[TFV] Mark 7 Interface (MVI/CNM)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_MVI_CNM: A3_TVG_S_F_MVI_CNM
	{
		displayName="[TFV] Mark 8 Interface (MVI/CNM)";
		thermalMode[]={7};
	};
	class VES_NVG_MVI_HUL;
	class A3_TVG_S_F_MVI_HUL: VES_NVG_MVI_HUL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="[TFV] Mark 2 Interface (MVI/HUL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_MVI_HUL: A3_TVG_S_F_MVI_HUL
	{
		displayName="[TFV] Mark 3 Interface (MVI/HUL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_MVI_HUL: A3_TVG_S_F_MVI_HUL
	{
		displayName="[TFV] Mark 4 Interface (MVI/HUL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_MVI_HUL: A3_TVG_S_F_MVI_HUL
	{
		displayName="[TFV] Mark 5 Interface (MVI/HUL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_MVI_HUL: A3_TVG_S_F_MVI_HUL
	{
		displayName="[TFV] Mark 6 Interface (MVI/HUL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_MVI_HUL: A3_TVG_S_F_MVI_HUL
	{
		displayName="[TFV] Mark 7 Interface (MVI/HUL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_MVI_HUL: A3_TVG_S_F_MVI_HUL
	{
		displayName="[TFV] Mark 8 Interface (MVI/HUL)";
		thermalMode[]={7};
	};
	class VES_NVG_MVI_UL_CNM;
	class A3_TVG_S_F_MVI_UL_CNM: VES_NVG_MVI_UL_CNM
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="[TFV] Mark 2 Interface (MVI/UL/CNM)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_MVI_UL_CNM: A3_TVG_S_F_MVI_UL_CNM
	{
		displayName="[TFV] Mark 3 Interface (MVI/UL/CNM)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_MVI_UL_CNM: A3_TVG_S_F_MVI_UL_CNM
	{
		displayName="[TFV] Mark 4 Interface (MVI/UL/CNM)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_MVI_UL_CNM: A3_TVG_S_F_MVI_UL_CNM
	{
		displayName="[TFV] Mark 5 Interface (MVI/UL/CNM)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_MVI_UL_CNM: A3_TVG_S_F_MVI_UL_CNM
	{
		displayName="[TFV] Mark 6 Interface (MVI/UL/CNM)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_MVI_UL_CNM: A3_TVG_S_F_MVI_UL_CNM
	{
		displayName="[TFV] Mark 7 Interface (MVI/UL/CNM)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_MVI_UL_CNM: A3_TVG_S_F_MVI_UL_CNM
	{
		displayName="[TFV] Mark 8 Interface (MVI/UL/CNM)";
		thermalMode[]={7};
	};
	class VES_NVG_MVI_UL_HUL;
	class A3_TVG_S_F_MVI_UL_HUL: VES_NVG_MVI_UL_HUL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="[TFV] Mark 2 Interface (MVI/UL/HUL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_MVI_UL_HUL: A3_TVG_S_F_MVI_UL_HUL
	{
		displayName="[TFV] Mark 3 Interface (MVI/UL/HUL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_MVI_UL_HUL: A3_TVG_S_F_MVI_UL_HUL
	{
		displayName="[TFV] Mark 4 Interface (MVI/UL/HUL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_MVI_UL_HUL: A3_TVG_S_F_MVI_UL_HUL
	{
		displayName="[TFV] Mark 5 Interface (MVI/UL/HUL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_MVI_UL_HUL: A3_TVG_S_F_MVI_UL_HUL
	{
		displayName="[TFV] Mark 6 Interface (MVI/UL/HUL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_MVI_UL_HUL: A3_TVG_S_F_MVI_UL_HUL
	{
		displayName="[TFV] Mark 7 Interface (MVI/UL/HUL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_MVI_UL_HUL: A3_TVG_S_F_MVI_UL_HUL
	{
		displayName="[TFV] Mark 8 Interface (MVI/UL/HUL)";
		thermalMode[]={7};
	};
	class VES_NVG_MVI_UL;
	class A3_TVG_S_F_MVI_UL: VES_NVG_MVI_UL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="[TFV] Mark 2 Interface (MVI/UL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_MVI_UL: A3_TVG_S_F_MVI_UL
	{
		displayName="[TFV] Mark 3 Interface (MVI/UL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_MVI_UL: A3_TVG_S_F_MVI_UL
	{
		displayName="[TFV] Mark 4 Interface (MVI/UL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_MVI_UL: A3_TVG_S_F_MVI_UL
	{
		displayName="[TFV] Mark 5 Interface (MVI/UL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_MVI_UL: A3_TVG_S_F_MVI_UL
	{
		displayName="[TFV] Mark 6 Interface (MVI/UL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_MVI_UL: A3_TVG_S_F_MVI_UL
	{
		displayName="[TFV] Mark 7 Interface (MVI/UL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_MVI_UL: A3_TVG_S_F_MVI_UL
	{
		displayName="[TFV] Mark 8 Interface (MVI/UL)";
		thermalMode[]={7};
	};
	class VES_NVG_UA_CNM;
	class A3_TVG_S_F_UA_CNM: VES_NVG_UA_CNM
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="[TFV] Mark 2 Interface (UA/CNM)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UA_CNM: A3_TVG_S_F_UA_CNM
	{
		displayName="[TFV] Mark 3 Interface (UA/CNM)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UA_CNM: A3_TVG_S_F_UA_CNM
	{
		displayName="[TFV] Mark 4 Interface (UA/CNM)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UA_CNM: A3_TVG_S_F_UA_CNM
	{
		displayName="[TFV] Mark 5 Interface (UA/CNM)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UA_CNM: A3_TVG_S_F_UA_CNM
	{
		displayName="[TFV] Mark 6 Interface (UA/CNM)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UA_CNM: A3_TVG_S_F_UA_CNM
	{
		displayName="[TFV] Mark 7 Interface (UA/CNM)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UA_CNM: A3_TVG_S_F_UA_CNM
	{
		displayName="[TFV] Mark 8 Interface (UA/CNM)";
		thermalMode[]={7};
	};
	class VES_NVG_UA_HUL;
	class A3_TVG_S_F_UA_HUL: VES_NVG_UA_HUL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="[TFV] Mark 2 Interface (UA/HUL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UA_HUL: A3_TVG_S_F_UA_HUL
	{
		displayName="[TFV] Mark 3 Interface (UA/HUL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UA_HUL: A3_TVG_S_F_UA_HUL
	{
		displayName="[TFV] Mark 4 Interface (UA/HUL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UA_HUL: A3_TVG_S_F_UA_HUL
	{
		displayName="[TFV] Mark 5 Interface (UA/HUL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UA_HUL: A3_TVG_S_F_UA_HUL
	{
		displayName="[TFV] Mark 6 Interface (UA/HUL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UA_HUL: A3_TVG_S_F_UA_HUL
	{
		displayName="[TFV] Mark 7 Interface (UA/HUL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UA_HUL: A3_TVG_S_F_UA_HUL
	{
		displayName="[TFV] Mark 8 Interface (UA/HUL)";
		thermalMode[]={7};
	};
	class VES_NVG_UA_HURS;
	class A3_TVG_S_F_UA_HURS: VES_NVG_UA_HURS
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="[TFV] Mark 2 Interface (UA/HURS)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UA_HURS: A3_TVG_S_F_UA_HURS
	{
		displayName="[TFV] Mark 3 Interface (UA/HURS)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UA_HURS: A3_TVG_S_F_UA_HURS
	{
		displayName="[TFV] Mark 4 Interface (UA/HURS)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UA_HURS: A3_TVG_S_F_UA_HURS
	{
		displayName="[TFV] Mark 5 Interface (UA/HURS)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UA_HURS: A3_TVG_S_F_UA_HURS
	{
		displayName="[TFV] Mark 6 Interface (UA/HURS)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UA_HURS: A3_TVG_S_F_UA_HURS
	{
		displayName="[TFV] Mark 7 Interface (UA/HURS)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UA_HURS: A3_TVG_S_F_UA_HURS
	{
		displayName="[TFV] Mark 8 Interface (UA/HURS)";
		thermalMode[]={7};
	};
	class VES_NVG_UA_HURS_CNM;
	class A3_TVG_S_F_UA_HURS_CNM: VES_NVG_UA_HURS_CNM
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="[TFV] Mark 2 Interface (UA/HURS/CNM)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UA_HURS_CNM: A3_TVG_S_F_UA_HURS_CNM
	{
		displayName="[TFV] Mark 3 Interface (UA/HURS/CNM)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UA_HURS_CNM: A3_TVG_S_F_UA_HURS_CNM
	{
		displayName="[TFV] Mark 4 Interface (UA/HURS/CNM)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UA_HURS_CNM: A3_TVG_S_F_UA_HURS_CNM
	{
		displayName="[TFV] Mark 5 Interface (UA/HURS/CNM)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UA_HURS_CNM: A3_TVG_S_F_UA_HURS_CNM
	{
		displayName="[TFV] Mark 6 Interface (UA/HURS/CNM)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UA_HURS_CNM: A3_TVG_S_F_UA_HURS_CNM
	{
		displayName="[TFV] Mark 7 Interface (UA/HURS/CNM)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UA_HURS_CNM: A3_TVG_S_F_UA_HURS_CNM
	{
		displayName="[TFV] Mark 8 Interface (UA/HURS/CNM)";
		thermalMode[]={7};
	};
	class VES_NVG_UA_HURS_HUL;
	class A3_TVG_S_F_UA_HURS_HUL: VES_NVG_UA_HURS_HUL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="[TFV] Mark 2 Interface (UA/HURS/HUL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UA_HURS_HUL: A3_TVG_S_F_UA_HURS_HUL
	{
		displayName="[TFV] Mark 3 Interface (UA/HURS/HUL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UA_HURS_HUL: A3_TVG_S_F_UA_HURS_HUL
	{
		displayName="[TFV] Mark 4 Interface (UA/HURS/HUL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UA_HURS_HUL: A3_TVG_S_F_UA_HURS_HUL
	{
		displayName="[TFV] Mark 5 Interface (UA/HURS/HUL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UA_HURS_HUL: A3_TVG_S_F_UA_HURS_HUL
	{
		displayName="[TFV] Mark 6 Interface (UA/HURS/HUL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UA_HURS_HUL: A3_TVG_S_F_UA_HURS_HUL
	{
		displayName="[TFV] Mark 7 Interface (UA/HURS/HUL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UA_HURS_HUL: A3_TVG_S_F_UA_HURS_HUL
	{
		displayName="[TFV] Mark 8 Interface (UA/HURS/HUL)";
		thermalMode[]={7};
	};
	class VES_NVG_UA_UL;
	class A3_TVG_S_F_UA_UL: VES_NVG_UA_UL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="[TFV] Mark 2 Interface (UA/UL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UA_UL: A3_TVG_S_F_UA_UL
	{
		displayName="[TFV] Mark 3 Interface (UA/UL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UA_UL: A3_TVG_S_F_UA_UL
	{
		displayName="[TFV] Mark 4 Interface (UA/UL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UA_UL: A3_TVG_S_F_UA_UL
	{
		displayName="[TFV] Mark 5 Interface (UA/UL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UA_UL: A3_TVG_S_F_UA_UL
	{
		displayName="[TFV] Mark 6 Interface (UA/UL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UA_UL: A3_TVG_S_F_UA_UL
	{
		displayName="[TFV] Mark 7 Interface (UA/UL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UA_UL: A3_TVG_S_F_UA_UL
	{
		displayName="[TFV] Mark 8 Interface (UA/UL)";
		thermalMode[]={7};
	};
	class VES_NVG_UA_UL_CNM;
	class A3_TVG_S_F_UA_UL_CNM: VES_NVG_UA_UL_CNM
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="[TFV] Mark 2 Interface (UA/UL/CNM)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UA_UL_CNM: A3_TVG_S_F_UA_UL_CNM
	{
		displayName="[TFV] Mark 3 Interface (UA/UL/CNM)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UA_UL_CNM: A3_TVG_S_F_UA_UL_CNM
	{
		displayName="[TFV] Mark 4 Interface (UA/UL/CNM)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UA_UL_CNM: A3_TVG_S_F_UA_UL_CNM
	{
		displayName="[TFV] Mark 5 Interface (UA/UL/CNM)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UA_UL_CNM: A3_TVG_S_F_UA_UL_CNM
	{
		displayName="[TFV] Mark 6 Interface (UA/UL/CNM)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UA_UL_CNM: A3_TVG_S_F_UA_UL_CNM
	{
		displayName="[TFV] Mark 7 Interface (UA/UL/CNM)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UA_UL_CNM: A3_TVG_S_F_UA_UL_CNM
	{
		displayName="[TFV] Mark 8 Interface (UA/UL/CNM)";
		thermalMode[]={7};
	};
	class VES_NVG_UAB_CNM;
	class A3_TVG_S_F_UAB_CNM: VES_NVG_UAB_CNM
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="[TFV] Mark 2 Interface (UAB/CNM)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UAB_CNM: A3_TVG_S_F_UAB_CNM
	{
		displayName="[TFV] Mark 3 Interface (UAB/CNM)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UAB_CNM: A3_TVG_S_F_UAB_CNM
	{
		displayName="[TFV] Mark 4 Interface (UAB/CNM)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UAB_CNM: A3_TVG_S_F_UAB_CNM
	{
		displayName="[TFV] Mark 5 Interface (UAB/CNM)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UAB_CNM: A3_TVG_S_F_UAB_CNM
	{
		displayName="[TFV] Mark 6 Interface (UAB/CNM)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UAB_CNM: A3_TVG_S_F_UAB_CNM
	{
		displayName="[TFV] Mark 7 Interface (UAB/CNM)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UAB_CNM: A3_TVG_S_F_UAB_CNM
	{
		displayName="[TFV] Mark 8 Interface (UAB/CNM)";
		thermalMode[]={7};
	};
	class VES_NVG_UAB_HUL;
	class A3_TVG_S_F_UAB_HUL: VES_NVG_UAB_HUL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="[TFV] Mark 2 Interface (UAB/HUL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UAB_HUL: A3_TVG_S_F_UAB_HUL
	{
		displayName="[TFV] Mark 3 Interface (UAB/HUL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UAB_HUL: A3_TVG_S_F_UAB_HUL
	{
		displayName="[TFV] Mark 4 Interface (UAB/HUL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UAB_HUL: A3_TVG_S_F_UAB_HUL
	{
		displayName="[TFV] Mark 5 Interface (UAB/HUL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UAB_HUL: A3_TVG_S_F_UAB_HUL
	{
		displayName="[TFV] Mark 6 Interface (UAB/HUL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UAB_HUL: A3_TVG_S_F_UAB_HUL
	{
		displayName="[TFV] Mark 7 Interface (UAB/HUL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UAB_HUL: A3_TVG_S_F_UAB_HUL
	{
		displayName="[TFV] Mark 8 Interface (UAB/HUL)";
		thermalMode[]={7};
	};
	class VES_NVG_UAB_UL;
	class A3_TVG_S_F_UAB_UL: VES_NVG_UAB_UL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="[TFV] Mark 2 Interface (UAB/UL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UAB_UL: A3_TVG_S_F_UAB_UL
	{
		displayName="[TFV] Mark 3 Interface (UAB/UL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UAB_UL: A3_TVG_S_F_UAB_UL
	{
		displayName="[TFV] Mark 4 Interface (UAB/UL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UAB_UL: A3_TVG_S_F_UAB_UL
	{
		displayName="[TFV] Mark 5 Interface (UAB/UL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UAB_UL: A3_TVG_S_F_UAB_UL
	{
		displayName="[TFV] Mark 6 Interface (UAB/UL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UAB_UL: A3_TVG_S_F_UAB_UL
	{
		displayName="[TFV] Mark 7 Interface (UAB/UL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UAB_UL: A3_TVG_S_F_UAB_UL
	{
		displayName="[TFV] Mark 8 Interface (UAB/UL)";
		thermalMode[]={7};
	};
	class VES_NVG_UAB_UL_CNM;
	class A3_TVG_S_F_UAB_UL_CNM: VES_NVG_UAB_UL_CNM
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="[TFV] Mark 2 Interface (UAB/UL/CNM)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UAB_UL_CNM: A3_TVG_S_F_UAB_UL_CNM
	{
		displayName="[TFV] Mark 3 Interface (UAB/UL/CNM)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UAB_UL_CNM: A3_TVG_S_F_UAB_UL_CNM
	{
		displayName="[TFV] Mark 4 Interface (UAB/UL/CNM)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UAB_UL_CNM: A3_TVG_S_F_UAB_UL_CNM
	{
		displayName="[TFV] Mark 5 Interface (UAB/UL/CNM)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UAB_UL_CNM: A3_TVG_S_F_UAB_UL_CNM
	{
		displayName="[TFV] Mark 6 Interface (UAB/UL/CNM)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UAB_UL_CNM: A3_TVG_S_F_UAB_UL_CNM
	{
		displayName="[TFV] Mark 7 Interface (UAB/UL/CNM)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UAB_UL_CNM: A3_TVG_S_F_UAB_UL_CNM
	{
		displayName="[TFV] Mark 8 Interface (UAB/UL/CNM)";
		thermalMode[]={7};
	};
	class VES_NVG_UAB_UL_HUL;
	class A3_TVG_S_F_UAB_UL_HUL: VES_NVG_UAB_UL_HUL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="[TFV] Mark 2 Interface (UAB/UL/HUL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UAB_UL_HUL: A3_TVG_S_F_UAB_UL_HUL
	{
		displayName="[TFV] Mark 3 Interface (UAB/UL/HUL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UAB_UL_HUL: A3_TVG_S_F_UAB_UL_HUL
	{
		displayName="[TFV] Mark 4 Interface (UAB/UL/HUL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UAB_UL_HUL: A3_TVG_S_F_UAB_UL_HUL
	{
		displayName="[TFV] Mark 5 Interface (UAB/UL/HUL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UAB_UL_HUL: A3_TVG_S_F_UAB_UL_HUL
	{
		displayName="[TFV] Mark 6 Interface (UAB/UL/HUL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UAB_UL_HUL: A3_TVG_S_F_UAB_UL_HUL
	{
		displayName="[TFV] Mark 7 Interface (UAB/UL/HUL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UAB_UL_HUL: A3_TVG_S_F_UAB_UL_HUL
	{
		displayName="[TFV] Mark 8 Interface (UAB/UL/HUL)";
		thermalMode[]={7};
	};
	class VES_NVG_UL_CNM;
	class A3_TVG_S_F_UL_CNM: VES_NVG_UL_CNM
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="[TFV] Mark 2 Interface (UL/CNM)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UL_CNM: A3_TVG_S_F_UL_CNM
	{
		displayName="[TFV] Mark 3 Interface (UL/CNM)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UL_CNM: A3_TVG_S_F_UL_CNM
	{
		displayName="[TFV] Mark 4 Interface (UL/CNM)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UL_CNM: A3_TVG_S_F_UL_CNM
	{
		displayName="[TFV] Mark 5 Interface (UL/CNM)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UL_CNM: A3_TVG_S_F_UL_CNM
	{
		displayName="[TFV] Mark 6 Interface (UL/CNM)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UL_CNM: A3_TVG_S_F_UL_CNM
	{
		displayName="[TFV] Mark 7 Interface (UL/CNM)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UL_CNM: A3_TVG_S_F_UL_CNM
	{
		displayName="[TFV] Mark 8 Interface (UL/CNM)";
		thermalMode[]={7};
	};
	class VES_NVG_UL_HUL;
	class A3_TVG_S_F_UL_HUL: VES_NVG_UL_HUL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="[TFV] Mark 2 Interface (UL/HUL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UL_HUL: A3_TVG_S_F_UL_HUL
	{
		displayName="[TFV] Mark 3 Interface (UL/HUL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UL_HUL: A3_TVG_S_F_UL_HUL
	{
		displayName="[TFV] Mark 4 Interface (UL/HUL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UL_HUL: A3_TVG_S_F_UL_HUL
	{
		displayName="[TFV] Mark 5 Interface (UL/HUL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UL_HUL: A3_TVG_S_F_UL_HUL
	{
		displayName="[TFV] Mark 6 Interface (UL/HUL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UL_HUL: A3_TVG_S_F_UL_HUL
	{
		displayName="[TFV] Mark 7 Interface (UL/HUL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UL_HUL: A3_TVG_S_F_UL_HUL
	{
		displayName="[TFV] Mark 8 Interface (UL/HUL)";
		thermalMode[]={7};
	};
	class InventoryOpticsItem_Base_F;
	class TFV_SRS99_Scope;
	class TFV_SRS99_Scope_v2: TFV_SRS99_Scope
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] Oracle N-variant SRS99D SF Scope";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=10;
			opticType=1;
			optics=1;
			inertia=0;
			modelOptics="\OPTRE_Weapons\Sniper\SRS99D_Scope";
			class OpticsModes
			{
				class SRS99_Scope_View
				{
					opticsID=1;
					useModelOptics=1;
					opticsZoomMin=0.0099999998;
					opticsZoomMax=0.25;
					opticsZoomInit=0.25;
					discretefov[]={0.25,0.050000001,0.025,0.0099999998};
					discreteinitIndex=0;
					discreteDistance[]={50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=2000;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"\OPTRE_Weapons\Sniper\Sniper_Oracle10_Optic"
					};
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
					thermalMode[]={0,1,5,6,7};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
			};
		};
	};
	class TFV_SRS99C_Scope_v2: TFV_SRS99_Scope_v2
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] Oracle N-variant SRS99C SF Scope";
		model="\OPTRE_Weapons\Sniper\SRS99C_Scope";
		picture="\OPTRE_Weapons\sniper\icons\scope2";
		class ItemInfo: ItemInfo
		{
			modelOptics="\OPTRE_Weapons\Sniper\SRS99C_Scope";
		};
	};
	class TFV_M73_Smartlink;
	class TFV_M73_Smartlink_v2: TFV_M73_Smartlink
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M73X Smart Link Scope";
		inertia=0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=5;
			opticType=1;
			optics=1;
			modelOptics="\OPTRE_Weapons\MG\M73_SmartLink";
			class OpticsModes
			{
				class M73_IS_v2
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.375;
					opticsZoomMax=0.55000001;
					opticsZoomInit=0.55000001;
					memoryPointCamera="opticView";
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
				class M73_Scope_v2: M73_IS_v2
				{
					opticsID=2;
					useModelOptics=1;
					memoryPointCamera="opticView2";
					opticsZoomMin=0.15575001;
					opticsZoomMax=0.0623;
					opticsZoomInit=0.0623;
					discreteinitIndex=0;
					discretefov[]={0.0623,0.046725001,0.03115,0.015575};
					discreteDistance[]={100,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=1000;
					modelOptics[]=
					{
						"\OPTRE_Weapons\BR\BR_Optic"
					};
					visionMode[]={};
				};
			};
		};
	};
	class TFV_M6C_Scope;
	class TFV_M6S_Scope: TFV_M6C_Scope
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M6S 6E SmartLink Scope";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=1;
			opticType=1;
			optics=1;
			modelOptics="\OPTRE_Weapons\Pistol\m6c_scope";
			inertia=0.1;
			class OpticsModes
			{
				class TFV_M6C_BUIS
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.375;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="opticView2";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
				class TFV_M6C_BUISZoom: TFV_M6C_BUIS
				{
					opticsID=2;
					useModelOptics=1;
					opticsZoomMin=0.15575001;
					opticsZoomMax=0.0623;
					opticsZoomInit=0.0623;
					discretefov[]={0.0623,0.046725001,0.03115,0.015575};
					discreteinitIndex=0;
					discreteDistance[]={25,50,75,100,150,200,250,300,350,400};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=2000;
					memoryPointCamera="opticView2";
					modelOptics[]=
					{
						"\OPTRE_Weapons\BR\BR_Optic"
					};
					visionMode[]={};
				};
			};
		};
	};
	class TFV_M6GX_Scope: TFV_M6S_Scope
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M6G 6E SmartLink Scope";
		model="\OPTRE_Weapons\Pistol\m6g_scope";
		class ItemInfo: ItemInfo
		{
			modelOptics="\OPTRE_Weapons\Pistol\m6g_scope";
		};
	};
	class TFV_M6D_Smartlink: TFV_M6GX_Scope
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M6D KFA-2 SmartLink Scope";
		model="\V_SO_Weapons\data\M6\M6D_Smartlink";
		class ItemInfo: ItemInfo
		{
			modelOptics="\V_SO_Weapons\data\M6\M6D_Smartlink";
		};
	};
	class optic_Aco;
	class TFV_MA5_SmartLink: optic_Aco
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] MA5 - Series Smart Link Optic";
		model="\OPTRE_Weapons\AR\MA5_smartlink";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=1;
			opticType=1;
			optics=1;
			modelOptics="\OPTRE_Weapons\AR\MA5_smartlink";
			inertia=0.1;
			class OpticsModes
			{
				class TFV_MA5_Smart
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.375;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=400;
					distanceZoomMax=400;
					cameraDir="";
				};
				class TFV_MA5_Scope: TFV_MA5_Smart
				{
					opticsID=2;
					useModelOptics=1;
					opticsZoomMin=0.0623;
					opticsZoomMax=0.0623;
					opticsZoomInit=0.0623;
					memoryPointCamera="eye";
					modelOptics="\A3\Weapons_F\acc\reticle_HAMR";
					visionMode[]=
					{
						"Normal"
					};
					distanceZoomMin=300;
					distanceZoomMax=300;
					cameraDir="";
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
				};
			};
		};
	};
	class TFV_MA5_SmartLink_v2: optic_Aco
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] MA5X - Series Smart Link Optic";
		model="\OPTRE_Weapons\AR\MA5_smartlink";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=1;
			opticType=1;
			optics=1;
			modelOptics="\OPTRE_Weapons\AR\MA5_smartlink";
			inertia=0.1;
			class OpticsModes
			{
				class TFV_MA5_Smart_V2
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.375;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
				class TFV_MA5_Scope_V2: TFV_MA5_Smart_V2
				{
					opticsID=2;
					useModelOptics=0;
					opticsZoomMin=0.0623;
					opticsZoomMax=0.03115;
					opticsZoomInit=0.0623;
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
					memoryPointCamera="eye";
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
				};
			};
		};
	};
	class TFV_MA5C_SmartLink_v2: optic_Aco
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] MA5X - Series Smart Link Optic (Grey)";
		model="\OPTRE_Weapons\AR\MA5C_smartlink";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=1;
			opticType=1;
			optics=1;
			modelOptics="\OPTRE_Weapons\AR\MA5C_smartlink";
			inertia=0.1;
			class OpticsModes
			{
				class TFV_MA5_Smart_V2Grey
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.375;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
				class TFV_MA5_Scope_V2Grey: TFV_MA5_Smart_V2Grey
				{
					opticsID=2;
					useModelOptics=0;
					opticsZoomMin=0.0623;
					opticsZoomMax=0.03115;
					opticsZoomInit=0.0623;
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
					memoryPointCamera="eye";
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
				};
			};
		};
	};
	class TFV_MA5_SmartLink_legacy: optic_Aco
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] MA5X - Series Smart Link Optic (HAMR)";
		model="\OPTRE_Weapons\AR\MA5_smartlink";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=1;
			opticType=1;
			optics=1;
			modelOptics="\OPTRE_Weapons\AR\MA5_smartlink";
			inertia=0.1;
			class OpticsModes
			{
				class TFV_SL_Legacy
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.375;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
				class HAMR_Zoom: TFV_SL_Legacy
				{
					opticsID=2;
					useModelOptics=1;
					opticsZoomMin=0.15575001;
					opticsZoomMax=0.1246;
					opticsZoomInit=0.1246;
					discretefov[]={0.1246,0.0623,0.046725001,0.03115};
					discreteinitIndex=0;
					discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=2000;
					memoryPointCamera="opticView2";
					modelOptics[]=
					{
						"\OPTRE_Weapons\BR\BR_Optic"
					};
					visionMode[]={};
				};
			};
		};
	};
	class TFV_MA5C_SmartLink_legacy: optic_Aco
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] MA5X - Series Smart Link Optic (Grey) (HAMR)";
		model="\OPTRE_Weapons\AR\MA5C_smartlink";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=1;
			opticType=1;
			optics=1;
			modelOptics="\OPTRE_Weapons\AR\MA5C_smartlink";
			inertia=0.1;
			class OpticsModes
			{
				class TFV_SL_Legacy
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.375;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
				class HAMR_Zoom: TFV_SL_Legacy
				{
					opticsID=2;
					useModelOptics=1;
					opticsZoomMin=0.15575001;
					opticsZoomMax=0.1246;
					opticsZoomInit=0.1246;
					discretefov[]={0.1246,0.0623,0.046725001,0.03115};
					discreteinitIndex=0;
					discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=2000;
					memoryPointCamera="opticView2";
					modelOptics[]=
					{
						"\OPTRE_Weapons\BR\BR_Optic"
					};
					visionMode[]={};
				};
			};
		};
	};
	class TFV_M7_Sight_v2: optic_Aco
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M7 SLS/V 5B Reflex with Smartlink";
		model="\OPTRE_Weapons\SMG\m7_sights";
		picture="\OPTRE_Weapons\smg\icons\scope";
		inertia=0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class M7SLRDS
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.375;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						""
					};
				};
				class M7_Zoom: M7SLRDS
				{
					opticsID=2;
					useModelOptics=1;
					opticsZoomMin=0.015575;
					opticsZoomMax=0.1246;
					opticsZoomInit=0.1246;
					discretefov[]={0.1246,0.0623,0.046725001,0.03115,0.015575};
					discreteinitIndex=0;
					discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=2000;
					memoryPointCamera="opticView2";
					modelOptics[]=
					{
						"\OPTRE_Weapons\BR\BR_Optic"
					};
					visionMode[]={};
				};
			};
		};
	};
	class ItemCore;
	class TFV_M392_Scope_v2: ItemCore
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] EVOS-D Mk1 SF Scope";
		model="\OPTRE_Weapons\DMR\scope";
		picture="\OPTRE_Weapons\br\icons\scope";
		inertia=0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=2;
			opticType=1;
			optics=1;
			modelOptics="\OPTRE_Weapons\DMR\scope";
			class OpticsModes
			{
				class DMR_Scope
				{
					opticsID=1;
					useModelOptics=1;
					opticsZoomMin=0.0099999998;
					opticsZoomMax=0.25;
					opticsZoomInit=0.25;
					discretefov[]={0.25,0.050000001,0.025,0.0099999998};
					discreteinitIndex=0;
					discreteDistance[]={50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=50;
					distanceZoomMax=2000;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"\OPTRE_Weapons\DMR\M395_optic10"
					};
					visionMode[]={};
					cameraDir="";
				};
			};
		};
	};
	class TFV_BMR_Scope_v2: TFV_M392_Scope_v2
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M295 DMR A4 SF Scope";
		model="\OPTRE_Weapons\BR\BMR_Scope";
		picture="\OPTRE_Weapons\br\icons\scope";
		class ItemInfo: ItemInfo
		{
			modelOptics="\OPTRE_Weapons\BR\BMR_Scope";
		};
	};
	class TFV_M393_Scope_v2: ItemCore
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] EVOS-D Mk3 SF Scope";
		model="\OPTRE_Weapons\DMR\M395Optic";
		picture="\OPTRE_Weapons\DMR\icons\M395__Scope_Icon";
		inertia=0;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=10;
			opticType=1;
			optics=1;
			modelOptics="\OPTRE_Weapons\DMR\M395Optic";
			class OpticsModes
			{
				class M395_Scope_View
				{
					opticsID=1;
					useModelOptics=1;
					opticsZoomMin=0.0099999998;
					opticsZoomMax=0.25;
					opticsZoomInit=0.25;
					discretefov[]={0.25,0.050000001,0.025,0.0099999998};
					discreteinitIndex=0;
					discreteDistance[]={50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=200;
					distanceZoomMax=600;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"\OPTRE_Weapons\DMR\M395_optic5",
						"\OPTRE_Weapons\DMR\M395_optic10",
						"\OPTRE_Weapons\DMR\M395_optic15"
					};
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					visionMode[]={};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
			};
		};
	};
	class optic_Arco;
	class TFV_M393_ACOG_v2: optic_Arco
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M15 SF Combat Optical Gunsight";
		model="\OPTRE_Weapons\DMR\M395ACOG";
		picture="\OPTRE_Weapons\DMR\icons\M395__ACOG_Icon";
		inertia=0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=10;
			opticType=1;
			optics=1;
			modelOptics="\OPTRE_Weapons\DMR\M395Optic";
			class OpticsModes
			{
				class ACOG_Scope
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.0099999998;
					opticsZoomMax=0.25;
					opticsZoomInit=0.25;
					distanceZoomMin=50;
					distanceZoomMax=2000;
					discretefov[]={0.25,0.050000001,0.025,0.0099999998};
					discreteinitIndex=0;
					discreteDistance[]={50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000};
					discreteDistanceInitIndex=1;
					memoryPointCamera="opticView";
					visionMode[]={};
				};
			};
		};
	};
	class TFV_M393_EOTECH_v2: optic_Aco
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] SR-10 SF Rapid Acquisition Sight";
		model="\OPTRE_Weapons\DMR\M395EOTECH";
		picture="\OPTRE_Weapons\DMR\icons\M395__EOTECH_Icon";
		inertia=0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class EOTECHSIGHT
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.0625;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					discreteDistance[]={50,100,150,200,250,300,350,400,450,500};
					discreteDistanceInitIndex=1;
					distanceZoomMin=50;
					distanceZoomMax=500;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						""
					};
				};
				class DMR_Scope
				{
					opticsID=1;
					useModelOptics=1;
					opticsZoomMin=0.0099999998;
					opticsZoomMax=0.25;
					opticsZoomInit=0.25;
					discretefov[]={0.25,0.050000001,0.025,0.0099999998};
					discreteinitIndex=0;
					discreteDistance[]={50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=2000;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"\OPTRE_Weapons\DMR\M395_optic10"
					};
					visionMode[]={};
					cameraDir="";
				};
			};
		};
	};
	class TFV_BR55HB_Scope;
	class TFV_BR55HB_Scope_v2: TFV_BR55HB_Scope
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] BR55X A2 Scope";
		inertia=0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=2;
			opticType=1;
			optics=1;
			modelOptics="\OPTRE_Weapons\BR\BR_Scope";
			class OpticsModes
			{
				class BR55HB_BUIS2
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.375;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="opticView2";
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
					cameraDir="";
				};
				class BR55HB_Scope2: BR55HB_BUIS2
				{
					opticsID=2;
					useModelOptics=1;
					opticsZoomMin=0.15575001;
					opticsZoomMax=0.0623;
					opticsZoomInit=0.0623;
					discretefov[]={0.0623,0.046725001,0.03115,0.015575};
					discreteinitIndex=0;
					discreteDistance[]={100,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=2000;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"\OPTRE_Weapons\BR\BR_Optic"
					};
					visionMode[]={};
				};
			};
		};
	};
	class UGL_F;
	class TFV_M301X: UGL_F
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M301X Grenade Launcher";
		descriptionShort="M301X GL";
		baseWeapon="TFV_M301X";
		magazines[]=
		{
			"UGL_8Gauge_Pellet",
			"UGL_8Gauge_Slug",
			"UGL_8Gauge_Beanbag",
			"UGL_FlareBlue_F",
			"3Rnd_UGL_8Gauge_Pellet",
			"3Rnd_UGL_8Gauge_Slug",
			"3Rnd_UGL_8Gauge_Beanbag",
			"3Rnd_UGL_FlareBlue_F",
			"1Rnd_HE_Grenade_shell",
			"UGL_FlareWhite_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareYellow_F",
			"UGL_FlareCIR_F",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_UGL_FlareWhite_F",
			"3Rnd_UGL_FlareGreen_F",
			"3Rnd_UGL_FlareRed_F",
			"3Rnd_UGL_FlareYellow_F",
			"3Rnd_UGL_FlareCIR_F",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell"
		};
		cameraDir="OP_look";
		discreteDistanceInitIndex=0;
		reloadAction="GestureReloadMXUGL";
		useExternalOptic=0;
		useModelOptics=0;
		discreteDistance[]={100,200,300};
		discreteDistanceCameraPoint[]=
		{
			"OP_eye",
			"OP_eye2",
			"OP_eye3"
		};
	};
	class TFV_M319: TFV_Rifle_Base
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M319X Individual Grenade Launcher";
		magazines[]=
		{
			"UGL_8Gauge_Pellet",
			"UGL_8Gauge_Slug",
			"UGL_8Gauge_Beanbag",
			"UGL_FlareBlue_F",
			"UGL_Potato",
			"3Rnd_UGL_8Gauge_Pellet",
			"3Rnd_UGL_8Gauge_Slug",
			"3Rnd_UGL_8Gauge_Beanbag",
			"3Rnd_UGL_FlareBlue_F",
			"1Rnd_HE_Grenade_shell",
			"UGL_FlareWhite_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareYellow_F",
			"UGL_FlareCIR_F",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_UGL_FlareWhite_F",
			"3Rnd_UGL_FlareGreen_F",
			"3Rnd_UGL_FlareRed_F",
			"3Rnd_UGL_FlareYellow_F",
			"3Rnd_UGL_FlareCIR_F",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell"
		};
		magazineWell[]=
		{
			"UGL_40x36",
			"CBA_40mm_M203",
			"CBA_40mm_EGLM"
		};
		class WeaponSlotsInfo
		{
			mass=88;
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"TFV_m45_flashlight",
					"TFV_m45_flashlight_red",
					"TFV_BMR_Laser"
				};
			};
		};
	};
	class TFV_MA5B: TFV_Rifle_Base
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] MA5BX ICWS Assault Rifle";
		magazines[]=
		{
			"TFV_60Rnd_762x51_Mag",
			"TFV_60Rnd_762x51_Mag_Tracer",
			"TFV_60Rnd_762x51_Mag_Tracer_Yellow",
			"TFV_60Rnd_762x51_Mag_AP",
			"TFV_60Rnd_762x51_Mag_APT",
			"TFV_60Rnd_762x51_Mag_JHP",
			"TFV_60Rnd_762x51_Mag_JHPT"
		};
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"TFV_ma5suppressor",
					"TFV_m6_silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"optic_yorris",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"TFV_srs99_scope",
					"TFV_srs99c_scope",
					"TFV_ma5_buis",
					"TFV_ma5_smartlink",
					"TFV_m393_eotech",
					"TFV_m7_sight",
					"TFV_m393_acog",
					"TFV_m392_scope",
					"TFV_br55hb_scope",
					"TFV_BMR_Scope",
					"TFV_SRS99_Scope_v2",
					"TFV_SRS99C_Scope_v2",
					"TFV_M73_Smartlink_v2",
					"TFV_M6S_Scope",
					"TFV_MA5_Smartlink",
					"TFV_MA5_SmartLink_v2",
					"TFV_MA5C_SmartLink_v2",
					"TFV_MA5_SmartLink_legacy",
					"TFV_MA5C_SmartLink_legacy",
					"TFV_M7_Sight_v2",
					"TFV_M392_Scope_v2",
					"TFV_M393_Scope_v2",
					"TFV_M393_ACOG_v2",
					"TFV_M393_EOTECH_v2",
					"TFV_BR55HB_Scope_v2",
					"TFV_BMR_Scope_v2"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"TFV_m45_flashlight",
					"TFV_m45_flashlight_red",
					"TFV_BMR_Laser"
				};
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]={};
				closure2[]={};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\AssaultRifle_1.wss",
					1,
					1,
					2000
				};
				begin2[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\AssaultRifle_2.wss",
					1,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					0.34,
					"begin2",
					0.33000001
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",
							1.5848932,
							1,
							1400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",
					1,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02",
					1,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03",
					1,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.064999998;
			dispersion=0.00075000001;
			recoil="recoil_single_trg";
			recoilProne="recoil_single_prone_trg";
			minRange=2;
			minRangeProbab=0.0099999998;
			midRange=200;
			midRangeProbab=0.0099999998;
			maxRange=400;
			maxRangeProbab=0.0099999998;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]={};
				closure2[]={};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\AssaultRifle_1.wss",
					1,
					1,
					2000
				};
				begin2[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\AssaultRifle_2.wss",
					1,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					0.34,
					"begin2",
					0.33000001
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",
							1.5848932,
							1,
							1400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",
					1,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02",
					1,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03",
					1,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.064999998;
			dispersion=0.00085000001;
			recoil="recoil_auto_trg";
			recoilProne="recoil_auto_prone_trg";
			minRange=2;
			minRangeProbab=0.0099999998;
			midRange=200;
			midRangeProbab=0.0099999998;
			maxRange=400;
			maxRangeProbab=0.0099999998;
		};
	};
	class TFV_MA5BGL: TFV_MA5B
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] MA5BX + M301 GL Assault Rifle";
		baseWeapon="TFV_MA5BXGL";
		model="\OPTRE_Weapons\AR\MA5BGL.p3d";
		muzzles[]=
		{
			"this",
			"TFV_M301X"
		};
		class TFV_M301X: TFV_M301X
		{
		};
		magazines[]=
		{
			"TFV_60Rnd_762x51_Mag",
			"TFV_60Rnd_762x51_Mag_Tracer",
			"TFV_60Rnd_762x51_Mag_Tracer_Yellow",
			"TFV_60Rnd_762x51_Mag_AP",
			"TFV_60Rnd_762x51_Mag_APT",
			"TFV_60Rnd_762x51_Mag_JHP",
			"TFV_60Rnd_762x51_Mag_JHPT"
		};
		class WeaponSlotsInfo
		{
			mass=117;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"TFV_ma5suppressor",
					"TFV_m6_silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"optic_yorris",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"TFV_srs99_scope",
					"TFV_srs99c_scope",
					"TFV_ma5_buis",
					"TFV_ma5_smartlink",
					"TFV_m393_eotech",
					"TFV_m7_sight",
					"TFV_m393_acog",
					"TFV_m392_scope",
					"TFV_br55hb_scope",
					"TFV_BMR_Scope",
					"TFV_SRS99_Scope_v2",
					"TFV_SRS99C_Scope_v2",
					"TFV_M73_Smartlink_v2",
					"TFV_M6S_Scope",
					"TFV_MA5_Smartlink",
					"TFV_MA5_SmartLink_v2",
					"TFV_MA5C_SmartLink_v2",
					"TFV_MA5_SmartLink_legacy",
					"TFV_MA5C_SmartLink_legacy",
					"TFV_M7_Sight_v2",
					"TFV_M392_Scope_v2",
					"TFV_M393_Scope_v2",
					"TFV_M393_ACOG_v2",
					"TFV_M393_EOTECH_v2",
					"TFV_BR55HB_Scope_v2",
					"TFV_BMR_Scope_v2"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"TFV_m45_flashlight",
					"TFV_m45_flashlight_red",
					"TFV_BMR_Laser"
				};
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]={};
				closure2[]={};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\AssaultRifle_1.wss",
					1,
					1,
					2000
				};
				begin2[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\AssaultRifle_2.wss",
					1,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					0.34,
					"begin2",
					0.33000001
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",
							1.5848932,
							1,
							1400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",
					1,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02",
					1,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03",
					1,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.064999998;
			dispersion=0.00075000001;
			recoil="recoil_single_trg";
			recoilProne="recoil_single_prone_trg";
			minRange=2;
			minRangeProbab=0.0099999998;
			midRange=200;
			midRangeProbab=0.0099999998;
			maxRange=400;
			maxRangeProbab=0.0099999998;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]={};
				closure2[]={};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\AssaultRifle_1.wss",
					1,
					1,
					2000
				};
				begin2[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\AssaultRifle_2.wss",
					1,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					0.34,
					"begin2",
					0.33000001
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",
							1.5848932,
							1,
							1400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",
					1,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02",
					1,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03",
					1,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.064999998;
			dispersion=0.00085000001;
			recoil="recoil_auto_trg";
			recoilProne="recoil_auto_prone_trg";
			minRange=2;
			minRangeProbab=0.0099999998;
			midRange=200;
			midRangeProbab=0.0099999998;
			maxRange=400;
			maxRangeProbab=0.0099999998;
		};
	};
	class TFV_MA5A: TFV_MA5B
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] MA3AX ICWS Assault Rifle";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=80;
		};
	};
	class TFV_MA5AGL: TFV_MA5BGL
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] MA3AX + M301 GL Assault Rifle";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=113;
		};
	};
	class TFV_MA5C: TFV_MA5B
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] MA5CX ICWS Assault Rifle";
		magazines[]=
		{
			"TFV_32Rnd_762x51_Mag",
			"TFV_32Rnd_762x51_Mag_Tracer",
			"TFV_32Rnd_762x51_Mag_Tracer_Yellow",
			"TFV_32Rnd_762x51_Mag_AP",
			"TFV_32Rnd_762x51_Mag_APT",
			"TFV_32Rnd_762x51_Mag_JHP",
			"TFV_32Rnd_762x51_Mag_JHPT",
			"TFV_32Rnd_762x51_Mag_SS",
			"TFV_32Rnd_762x51_Mag_SST"
		};
		HUD_TotalPosibleBullet=32;
		class Single: Single
		{
			reloadTime=0.094999999;
		};
		class FullAuto: FullAuto
		{
			reloadTime=0.094999999;
		};
	};
	class TFV_MA5CGL: TFV_MA5BGL
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] MA5CX + M301 GL Assault Rifle";
		magazines[]=
		{
			"TFV_32Rnd_762x51_Mag",
			"TFV_32Rnd_762x51_Mag_Tracer",
			"TFV_32Rnd_762x51_Mag_Tracer_Yellow",
			"TFV_32Rnd_762x51_Mag_AP",
			"TFV_32Rnd_762x51_Mag_APT",
			"TFV_32Rnd_762x51_Mag_JHP",
			"TFV_32Rnd_762x51_Mag_JHPT",
			"TFV_32Rnd_762x51_Mag_SS",
			"TFV_32Rnd_762x51_Mag_SST"
		};
		HUD_TotalPosibleBullet=32;
		class Single: Single
		{
			reloadTime=0.094999999;
		};
		class FullAuto: FullAuto
		{
			reloadTime=0.094999999;
		};
	};
	class TFV_MA5K: TFV_MA5C
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] MA5KX ICWS Assault Rifle";
		magazines[]=
		{
			"TFV_32Rnd_762x51_Mag",
			"TFV_32Rnd_762x51_Mag_Tracer",
			"TFV_32Rnd_762x51_Mag_AP",
			"TFV_32Rnd_762x51_Mag_APT",
			"TFV_32Rnd_762x51_Mag_JHP",
			"TFV_32Rnd_762x51_Mag_JHPT",
			"TFV_32Rnd_762x51_Mag_SS",
			"TFV_32Rnd_762x51_Mag_UW"
		};
		class Single: Single
		{
			reloadTime=0.050000001;
		};
		class FullAuto: FullAuto
		{
			reloadTime=0.050000001;
		};
	};
	class TFV_MA37: TFV_MA5C
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] MA37X ICWS Assault Rifle";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=77;
			class CowsSlot: CowsSlot
			{
				compatibleitems[]={};
			};
		};
	};
	class TFV_MA37B: TFV_MA37
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] MA37BX ICWS Assault Rifle";
		magazines[]=
		{
			"TFV_60Rnd_762x51_Mag",
			"TFV_60Rnd_762x51_Mag_Tracer",
			"TFV_60Rnd_762x51_Mag_AP",
			"TFV_60Rnd_762x51_Mag_APT",
			"TFV_60Rnd_762x51_Mag_JHP",
			"TFV_60Rnd_762x51_Mag_JHPT"
		};
	};
	class TFV_MA37GL: TFV_MA5CGL
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] MA37X + M301 GL Assault Rifle";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110;
			class CowsSlot: CowsSlot
			{
				compatibleitems[]={};
			};
		};
	};
	class TFV_MA37BGL: TFV_MA5BGL
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] MA37BX + M301 GL Assault Rifle";
		magazines[]=
		{
			"TFV_60Rnd_762x51_Mag",
			"TFV_60Rnd_762x51_Mag_Tracer",
			"TFV_60Rnd_762x51_Mag_AP",
			"TFV_60Rnd_762x51_Mag_APT",
			"TFV_60Rnd_762x51_Mag_JHP",
			"TFV_60Rnd_762x51_Mag_JHPT"
		};
	};
	class TFV_MA32: TFV_MA37
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] MA32X ICWS Assault Rifle";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=73;
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"optic_yorris",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_ico_01_black_f",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"TFV_srs99_scope",
					"TFV_srs99c_scope",
					"TFV_ma5_buis",
					"TFV_ma5_smartlink",
					"TFV_m393_eotech",
					"TFV_m7_sight",
					"TFV_m393_acog",
					"TFV_m392_scope",
					"TFV_br55hb_scope",
					"TFV_BMR_Scope",
					"TFV_SRS99_Scope_v2",
					"TFV_SRS99C_Scope_v2",
					"TFV_M73_Smartlink_v2",
					"TFV_M6S_Scope",
					"TFV_M7_Sight_v2",
					"TFV_M392_Scope_v2",
					"TFV_M393_Scope_v2",
					"TFV_M393_ACOG_v2",
					"TFV_M393_EOTECH_v2",
					"TFV_BR55HB_Scope_v2",
					"TFV_BMR_Scope_v2"
				};
			};
		};
	};
	class TFV_MA32B: TFV_MA32
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] MA32BX ICWS Assault Rifle";
		magazines[]=
		{
			"TFV_60Rnd_762x51_Mag",
			"TFV_60Rnd_762x51_Mag_Tracer",
			"TFV_60Rnd_762x51_Mag_AP",
			"TFV_60Rnd_762x51_Mag_APT",
			"TFV_60Rnd_762x51_Mag_JHP",
			"TFV_60Rnd_762x51_Mag_JHPT"
		};
	};
	class TFV_MA32GL: TFV_MA5CGL
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] MA32X + M301 GL Assault Rifle";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=99.599998;
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"optic_yorris",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_ico_01_black_f",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"TFV_srs99_scope",
					"TFV_srs99c_scope",
					"TFV_ma5_buis",
					"TFV_ma5_smartlink",
					"TFV_m393_eotech",
					"TFV_m7_sight",
					"TFV_m393_acog",
					"TFV_m392_scope",
					"TFV_br55hb_scope",
					"TFV_BMR_Scope",
					"TFV_SRS99_Scope_v2",
					"TFV_SRS99C_Scope_v2",
					"TFV_M73_Smartlink_v2",
					"TFV_M6S_Scope",
					"TFV_M7_Sight_v2",
					"TFV_M392_Scope_v2",
					"TFV_M393_Scope_v2",
					"TFV_M393_ACOG_v2",
					"TFV_M393_EOTECH_v2",
					"TFV_BR55HB_Scope_v2",
					"TFV_BMR_Scope_v2"
				};
			};
		};
	};
	class TFV_MA32BGL: TFV_MA5BGL
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] MA32BXGL + M301 GL Assault Rifle";
		magazines[]=
		{
			"TFV_60Rnd_762x51_Mag",
			"TFV_60Rnd_762x51_Mag_Tracer",
			"TFV_60Rnd_762x51_Mag_AP",
			"TFV_60Rnd_762x51_Mag_APT",
			"TFV_60Rnd_762x51_Mag_JHP",
			"TFV_60Rnd_762x51_Mag_JHPT"
		};
	};
	class hgun_Pistol_heavy_01_F;
	class TFV_Handgun_Base: hgun_Pistol_heavy_01_F
	{
		class WeaponSlotsInfo;
	};
	class TFV_M6G: TFV_Handgun_Base
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M6GX Magnum";
		magazines[]=
		{
			"TFV_8Rnd_127x40_Mag",
			"TFV_8Rnd_127x40_Mag_Tracer",
			"TFV_8Rnd_127x40_Mag_AP",
			"TFV_8Rnd_127x40_Mag_APT",
			"TFV_8Rnd_127x40_Mag_HE",
			"TFV_8Rnd_127x40_Mag_HET",
			"TFV_8Rnd_127x40_Mag_HVAP",
			"TFV_8Rnd_127x40_Mag_HVAPT",
			"TFV_8Rnd_127x40_Mag_JHP",
			"TFV_8Rnd_127x40_Mag_JHPT",
			"TFV_8Rnd_127x40_Mag_SAPHE",
			"TFV_8Rnd_127x40_Mag_SAPHET",
			"TFV_8Rnd_127x40_Mag_SS",
			"TFV_8Rnd_127x40_Mag_SST",
			"TFV_8Rnd_127x40_Mag_NARQ",
			"TFV_8Rnd_127x40_Mag_NARQT",
			"TFV_8Rnd_127x40_Mag_FR",
			"TFV_8Rnd_127x40_Mag_FG"
		};
		class WeaponSlotsInfo
		{
			mass=43;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"TFV_m6_silencer",
					"TFV_m6c_compensator"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_aco_grn",
					"optic_aco",
					"optic_holosight_blk_f",
					"optic_yorris",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"TFV_m393_eotech",
					"TFV_m7_sight",
					"TFV_m6c_scope",
					"TFV_m6g_scope",
					"TFV_M6S_Scope",
					"TFV_M6GX_Scope",
					"TFV_M7_Sight_v2",
					"TFV_M393_EOTECH_v2",
					"TFV_M6D_Smartlink"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"TFV_m6g_flashlight",
					"acc_flashlight_pistol",
					"TFV_M6D_Flashlight"
				};
			};
		};
	};
	class TFV_M6C: TFV_M6G
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M6C/SOCOM Magnum";
		magazines[]=
		{
			"TFV_12Rnd_127x40_Mag",
			"TFV_12Rnd_127x40_Mag_Tracer",
			"TFV_12Rnd_127x40_Mag_AP",
			"TFV_12Rnd_127x40_Mag_APT",
			"TFV_12Rnd_127x40_Mag_HE",
			"TFV_12Rnd_127x40_Mag_HET",
			"TFV_12Rnd_127x40_Mag_HVAP",
			"TFV_12Rnd_127x40_Mag_HVAPT",
			"TFV_12Rnd_127x40_Mag_JHP",
			"TFV_12Rnd_127x40_Mag_JHPT",
			"TFV_12Rnd_127x40_Mag_SAPHE",
			"TFV_12Rnd_127x40_Mag_SAPHET",
			"TFV_12Rnd_127x40_Mag_SS",
			"TFV_12Rnd_127x40_Mag_SST",
			"TFV_12Rnd_127x40_Mag_NARQ",
			"TFV_12Rnd_127x40_Mag_NARQT",
			"TFV_16Rnd_127x40_Mag",
			"TFV_16Rnd_127x40_Mag_Tracer",
			"TFV_16Rnd_127x40_Mag_AP",
			"TFV_16Rnd_127x40_Mag_APT",
			"TFV_16Rnd_127x40_Mag_HE",
			"TFV_16Rnd_127x40_Mag_HET",
			"TFV_16Rnd_127x40_Mag_HVAP",
			"TFV_16Rnd_127x40_Mag_HVAPT",
			"TFV_16Rnd_127x40_Mag_JHP",
			"TFV_16Rnd_127x40_Mag_JHPT",
			"TFV_16Rnd_127x40_Mag_SAPHE",
			"TFV_16Rnd_127x40_Mag_SAPHET",
			"TFV_16Rnd_127x40_Mag_SS",
			"TFV_16Rnd_127x40_Mag_SST",
			"TFV_16Rnd_127x40_Mag_NARQ",
			"TFV_16Rnd_127x40_Mag_NARQT"
		};
		class WeaponSlotsInfo
		{
			mass=39;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"TFV_m6_silencer",
					"TFV_m6c_compensator"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_aco_grn",
					"optic_aco",
					"optic_holosight_blk_f",
					"optic_yorris",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"TFV_m393_eotech",
					"TFV_m7_sight",
					"TFV_m6c_scope",
					"TFV_m6g_scope",
					"TFV_M6S_Scope",
					"TFV_M6GX_Scope",
					"TFV_M7_Sight_v2",
					"TFV_M393_EOTECH_v2"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"TFV_m6g_flashlight",
					"TFV_m6c_laser",
					"acc_flashlight_pistol",
					"TFV_M6D_Flashlight"
				};
			};
		};
	};
	class hgun_Pistol_heavy_02_F;
	class SO_M33_Base: hgun_Pistol_heavy_02_F
	{
		class Single;
	};
	class TFV_M33: SO_M33_Base
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] Model 33 'Godfather' Handgun";
		baseWeapon="TFV_M33";
		model="\A3\Weapons_F_EPA\Pistols\Pistol_heavy_02\Pistol_heavy_02_F";
		descriptionShort="12.7x40mm Revolver";
		Eye="";
		Glasses="";
		ODST_1="";
		pictureWire="\V_SO_Weapons\data\M33\V_M33_HUD_CA";
		HUD_BulletInARows=1;
		HUD_TotalPosibleBullet=6;
		hiddenSelectionsTextures[]=
		{
			"\V_SO_Weapons\data\M33\V_M33_CO",
			"\A3\Weapons_F_EPA\Pistols\Pistol_Heavy_02\data\Pistol_Heavy_02_mag_co"
		};
		class Single: Single
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"HunterShotgun_01_SawedOff_Shot_SoundSet",
					"HunterShotgun_01_Tail_SoundSet"
				};
			};
		};
		magazines[]=
		{
			"TFV_6Rnd_127x40_Cyl",
			"TFV_6Rnd_127x40_Cyl_Tracer",
			"TFV_6Rnd_127x40_Cyl_AP",
			"TFV_6Rnd_127x40_Cyl_APT",
			"TFV_6Rnd_127x40_Cyl_HE",
			"TFV_6Rnd_127x40_Cyl_HET",
			"TFV_6Rnd_127x40_Cyl_HVAP",
			"TFV_6Rnd_127x40_Cyl_HVAPT",
			"TFV_6Rnd_127x40_Cyl_JHP",
			"TFV_6Rnd_127x40_Cyl_JHPT",
			"TFV_6Rnd_127x40_Cyl_SAPHE",
			"TFV_6Rnd_127x40_Cyl_SAPHET",
			"TFV_6Rnd_127x40_Cyl_SS",
			"TFV_6Rnd_127x40_Cyl_NARQ",
			"TFV_6Rnd_127x40_Cyl_FR",
			"TFV_6Rnd_127x40_Cyl_FG"
		};
		magazineWell[]={};
		class WeaponSlotsInfo
		{
			mass=37;
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_holosight_blk_f",
					"optic_yorris",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"TFV_m393_eotech",
					"TFV_m6c_scope",
					"TFV_M6S_Scope",
					"TFV_M393_EOTECH_v2"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"TFV_m6g_flashlight",
					"acc_flashlight_pistol",
					"TFV_M6D_Flashlight"
				};
			};
		};
	};
	class TFV_M33G: TFV_M33
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] Model 33 'Godfather' Handgun (Gold)";
		baseWeapon="TFV_M33G";
		hiddenSelectionsTextures[]=
		{
			"\V_SO_Weapons\data\M33\V_M33_G_CO",
			"\A3\Weapons_F_EPA\Pistols\Pistol_Heavy_02\data\Pistol_Heavy_02_mag_co"
		};
	};
	class TFV_M6D: TFV_M6G
	{
		dlc="SO";
		author="Fireteam Zulu & Forky";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M6D PDWS Magnum";
		baseWeapon="TFV_M6D";
		model="\V_SO_Weapons\data\M6\M6D";
		magazines[]=
		{
			"TFV_12Rnd_127x40_Mag",
			"TFV_12Rnd_127x40_Mag_Tracer",
			"TFV_12Rnd_127x40_Mag_AP",
			"TFV_12Rnd_127x40_Mag_APT",
			"TFV_12Rnd_127x40_Mag_HE",
			"TFV_12Rnd_127x40_Mag_HET",
			"TFV_12Rnd_127x40_Mag_HVAP",
			"TFV_12Rnd_127x40_Mag_HVAPT",
			"TFV_12Rnd_127x40_Mag_JHP",
			"TFV_12Rnd_127x40_Mag_JHPT",
			"TFV_12Rnd_127x40_Mag_SAPHE",
			"TFV_12Rnd_127x40_Mag_SAPHET",
			"TFV_12Rnd_127x40_Mag_SS",
			"TFV_12Rnd_127x40_Mag_SST",
			"TFV_12Rnd_127x40_Mag_NARQ",
			"TFV_12Rnd_127x40_Mag_NARQY"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=47;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"TFV_m6_silencer"
				};
			};
		};
	};
	class TFV_M6G_Flashlight;
	class TFV_M6D_Flashlight: TFV_M6G_Flashlight
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M6D Flashlight";
		model="\V_SO_Weapons\data\M6\M6D_Flashlight";
	};
	class TFV_M392_DMR: TFV_LongRifle_Base
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M392X DMR";
		model="v_so_weapons\data\m392\m392";
		magazines[]=
		{
			"TFV_15Rnd_762x51_Mag",
			"TFV_15Rnd_762x51_Mag_Tracer",
			"TFV_15Rnd_762x51_Mag_Tracer_Yellow",
			"TFV_15Rnd_762x51_Mag_AP",
			"TFV_15Rnd_762x51_Mag_APT",
			"TFV_15Rnd_762x51_Mag_JHP",
			"TFV_15Rnd_762x51_Mag_JHPT",
			"TFV_15Rnd_762x51_Mag_SS",
			"TFV_15Rnd_762x51_Mag_SST",
			"TFV_15Rnd_762x51_Mag_FS",
			"TFV_15Rnd_762x51_Mag_FST"
		};
		magazineWell[]={};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class FullAuto: Single
		{
			aiDispersionCoefX=2;
			aiDispersionCoefY=3;
			burst=1;
			autoFire=1;
			dispersion=0.00050000002;
			displayName="[TFV] Full";
			maxRange=80;
			maxRangeProbab=0.039999999;
			midRange=30;
			midRangeProbab=0.57999998;
			minRange=1;
			minRangeProbab=0.2;
			recoil="recoil_auto_primary_3outof10";
			recoilProne="recoil_auto_primary_prone_3outof10";
			reloadTime=0.079999998;
			sound[]=
			{
				"",
				10,
				1
			};
			soundBurst=0;
			soundContinuous=0;
			soundEnd[]=
			{
				"sound",
				1
			};
			textureType="fullAuto";
		};
		class WeaponSlotsInfo
		{
			mass=126;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"TFV_ma5suppressor",
					"TFV_m7_silencer",
					"TFV_m6_silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"optic_yorris",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"TFV_srs99_scope",
					"TFV_srs99c_scope",
					"TFV_ma5_buis",
					"TFV_m393_eotech",
					"TFV_m7_sight",
					"TFV_m393_acog",
					"TFV_m392_scope",
					"TFV_br55hb_scope",
					"TFV_m6c_scope",
					"TFV_BMR_Scope",
					"TFV_SRS99_Scope_v2",
					"TFV_SRS99C_Scope_v2",
					"TFV_M73_Smartlink_v2",
					"TFV_M6S_Scope",
					"TFV_M7_Sight_v2",
					"TFV_M392_Scope_v2",
					"TFV_M393_ACOG_v2",
					"TFV_M393_EOTECH_v2",
					"TFV_BR55HB_Scope_v2",
					"TFV_BMR_Scope_v2"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"TFV_BMR_Laser"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[]=
				{
					"bipod_01_f_blk",
					"bipod_02_f_blk",
					"bipod_03_f_blk"
				};
			};
		};
	};
	class TFV_M392XD_DMR: TFV_M392_DMR
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] Vespade's M392XD";
		baseWeapon="TFV_M392XD_DMR";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"V_SO_Weapons\data\M392\M392\dmr_a_co"
		};
	};
	class TFV_M393_DMR: TFV_M392_DMR
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M395X DMR";
		class Single;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=134;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"TFV_ma5suppressor",
					"TFV_m7_silencer",
					"TFV_m6_silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"optic_yorris",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_ico_01_black_f",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"TFV_srs99_scope",
					"TFV_srs99c_scope",
					"TFV_ma5_buis",
					"TFV_m393_eotech",
					"TFV_m73_smartlink",
					"TFV_m7_sight",
					"TFV_m393_acog",
					"TFV_hmg38_carryhandle",
					"TFV_m393_scope",
					"TFV_m392_scope",
					"TFV_br55hb_scope",
					"TFV_m6c_scope",
					"TFV_BMR_Scope",
					"TFV_SRS99_Scope_v2",
					"TFV_SRS99C_Scope_v2",
					"TFV_M73_Smartlink_v2",
					"TFV_M6S_Scope",
					"TFV_M7_Sight_v2",
					"TFV_M392_Scope_v2",
					"TFV_M393_Scope_v2",
					"TFV_M393_ACOG_v2",
					"TFV_M393_EOTECH_v2",
					"TFV_BR55HB_Scope_v2",
					"TFV_BMR_Scope_v2"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"TFV_m45_flashlight",
					"TFV_m45_flashlight_red",
					"TFV_BMR_Laser"
				};
			};
		};
	};
	class TFV_M393S_DMR: TFV_M393_DMR
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M395X/S DMR";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=128;
		};
	};
	class TFV_M295_BMR: TFV_M393_DMR
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M295X BMR";
		magazines[]=
		{
			"TFV_15Rnd_762x51_Mag",
			"TFV_15Rnd_762x51_Mag_Tracer",
			"TFV_15Rnd_762x51_Mag_Tracer_Yellow",
			"TFV_15Rnd_762x51_Mag_AP",
			"TFV_15Rnd_762x51_Mag_APT",
			"TFV_15Rnd_762x51_Mag_JHP",
			"TFV_15Rnd_762x51_Mag_JHPT",
			"TFV_15Rnd_762x51_Mag_SS",
			"TFV_15Rnd_762x51_Mag_FS",
			"TFV_15Rnd_762x51_Mag_FST",
			"TFV_32Rnd_762x51_Mag",
			"TFV_32Rnd_762x51_Mag_Tracer",
			"TFV_32Rnd_762x51_Mag_Tracer_Yellow",
			"TFV_32Rnd_762x51_Mag_AP",
			"TFV_32Rnd_762x51_Mag_APT",
			"TFV_32Rnd_762x51_Mag_JHP",
			"TFV_32Rnd_762x51_Mag_JHPT",
			"TFV_32Rnd_762x51_Mag_SS",
			"TFV_32Rnd_762x51_Mag_SST"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=123;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"TFV_ma5suppressor",
					"TFV_m7_silencer",
					"TFV_m6_silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"optic_yorris",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"TFV_srs99_scope",
					"TFV_srs99c_scope",
					"TFV_ma5_buis",
					"TFV_m393_eotech",
					"TFV_m73_smartlink",
					"TFV_m7_sight",
					"TFV_m393_acog",
					"TFV_m393_scope",
					"TFV_m392_scope",
					"TFV_br55hb_scope",
					"TFV_m6c_scope",
					"TFV_BMR_Scope",
					"TFV_SRS99_Scope_v2",
					"TFV_SRS99C_Scope_v2",
					"TFV_M73_Smartlink_v2",
					"TFV_M6S_Scope",
					"TFV_M7_Sight_v2",
					"TFV_M392_Scope_v2",
					"TFV_M393_Scope_v2",
					"TFV_M393_ACOG_v2",
					"TFV_M393_EOTECH_v2",
					"TFV_BR55HB_Scope_v2",
					"TFV_BMR_Scope_v2",
					"TFV_BMR_Scope_v2"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"TFV_m45_flashlight",
					"TFV_m45_flashlight_red",
					"TFV_BMR_Laser",
					"TFV_BMR_Flashlight"
				};
			};
		};
	};
	class TFV_M28A2: TFV_M393_DMR
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M28A2 IMWS DMR";
		baseWeapon="TFV_M28A2";
		model="\A3\Weapons_F_Exp\Rifles\ARX\ARX_F";
		picture="\A3\Weapons_F_Exp\Rifles\ARX\Data\UI\arifle_ARX_blk_F_X_CA";
		pictureWire="\V_SO_Weapons\data\M28\V_M28_HUD_CA";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Exp\Rifles\ARX\data\anim\arx.rtm"
		};
		muzzles[]=
		{
			"this",
			"Secondary"
		};
		reloadAction="GestureReloadARX";
		magazines[]=
		{
			"TFV_15Rnd_762x51_Mag",
			"TFV_15Rnd_762x51_Mag_Tracer",
			"TFV_15Rnd_762x51_Mag_Tracer_Yellow",
			"TFV_15Rnd_762x51_Mag_AP",
			"TFV_15Rnd_762x51_Mag_APT",
			"TFV_15Rnd_762x51_Mag_JHP",
			"TFV_15Rnd_762x51_Mag_JHPT",
			"TFV_15Rnd_762x51_Mag_SS",
			"TFV_15Rnd_762x51_Mag_FS",
			"TFV_15Rnd_762x51_Mag_FST",
			"TFV_32Rnd_762x51_Mag",
			"TFV_32Rnd_762x51_Mag_Tracer",
			"TFV_32Rnd_762x51_Mag_Tracer_Yellow",
			"TFV_32Rnd_762x51_Mag_AP",
			"TFV_32Rnd_762x51_Mag_APT",
			"TFV_32Rnd_762x51_Mag_JHP",
			"TFV_32Rnd_762x51_Mag_JHPT",
			"TFV_32Rnd_762x51_Mag_SS",
			"TFV_32Rnd_762x51_Mag_SST"
		};
		hiddenSelectionsTextures[]=
		{
			"\V_SO_Weapons\Data\M28\V_M28_CO",
			"\A3\Weapons_F_Exp\Rifles\ARX\Data\arifle_ARX_blk_02_F_co"
		};
		class Single: Single
		{
			class SilencedSound
			{
				SoundSetShot[]=
				{
					"DMR03_silencerShot_SoundSet",
					"DMR03_silencerTail_SoundSet",
					"DMR03_silencerInteriorTail_SoundSet"
				};
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					"DMR03_Shot_SoundSet",
					"DMR03_tail_SoundSet",
					"DMR03_InteriorTail_SoundSet"
				};
			};
		};
		class Secondary: TFV_M6G
		{
			displayName="[TFV] M6MWS Magnum";
			recoil="recoil_ARX_secondary";
			reloadAction="GestureReloadARX2";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=163;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"TFV_ma5suppressor",
					"TFV_m7_silencer",
					"TFV_m6_silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"optic_yorris",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_ico_01_black_f",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"TFV_srs99_scope",
					"TFV_srs99c_scope",
					"TFV_ma5_buis",
					"TFV_m393_eotech",
					"TFV_m7_sight",
					"TFV_m393_acog",
					"TFV_hmg38_carryhandle",
					"TFV_m393_scope",
					"TFV_m392_scope",
					"TFV_br55hb_scope",
					"TFV_m6c_scope",
					"TFV_BMR_Scope",
					"TFV_SRS99_Scope_v2",
					"TFV_SRS99C_Scope_v2",
					"TFV_M73_Smartlink_v2",
					"TFV_M6S_Scope",
					"TFV_M7_Sight_v2",
					"TFV_M392_Scope_v2",
					"TFV_M393_Scope_v2",
					"TFV_M393_ACOG_v2",
					"TFV_M393_EOTECH_v2",
					"TFV_BR55HB_Scope_v2",
					"TFV_BMR_Scope_v2"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"TFV_m45_flashlight",
					"TFV_m45_flashlight_red",
					"TFV_BMR_Laser"
				};
			};
		};
	};
	class TFV_MRS10X: TFV_M393_DMR
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] MRS10X DMR";
		baseWeapon="TFV_MRS10X";
		model="\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\DMR_02_F";
		picture="\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\UI\gear_DMR_02_X_CA";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\data\Anim\DMR_02.rtm"
		};
		reloadAction="GestureReloadDMR02";
		recoil="recoil_dmr_02";
		Eye="";
		Glasses="";
		ODST_1="";
		magazines[]=
		{
			"TFV_10Rnd_86x70_Mag",
			"TFV_10Rnd_86x70_Mag_Tracer",
			"TFV_10Rnd_86x70_Mag_AP",
			"TFV_10Rnd_86x70_Mag_APT",
			"TFV_10Rnd_86x70_Mag_JHP",
			"TFV_10Rnd_86x70_Mag_JHPT",
			"TFV_10Rnd_86x70_Mag_SS",
			"TFV_10Rnd_86x70_Mag_FS",
			"TFV_10Rnd_86x70_Mag_FST",
			"TFV_20Rnd_86x70_Mag",
			"TFV_20Rnd_86x70_Mag_Tracer",
			"TFV_20Rnd_86x70_Mag_AP",
			"TFV_20Rnd_86x70_Mag_APT",
			"TFV_20Rnd_86x70_Mag_JHP",
			"TFV_20Rnd_86x70_Mag_JHPT",
			"TFV_20Rnd_86x70_Mag_SS"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsMaterials[]=
		{
			"\V_SO_Weapons\Data\MRS10\V_MRS10.rvmat",
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\DMR_02_02.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\V_SO_Weapons\Data\MRS10\V_MRS10_CO",
			"\V_SO_Weapons\Data\MRS10\V_MRS10_A_CO"
		};
		class Single: Single
		{
			class SilencedSound
			{
				SoundSetShot[]=
				{
					"DMR02_silencerShot_SoundSet",
					"DMR02_silencerTail_SoundSet",
					"DMR02_silencerInteriorTail_SoundSet"
				};
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					"DMR02_Shot_SoundSet",
					"DMR02_tail_SoundSet",
					"DMR02_InteriorTail_SoundSet"
				};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=143;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"TFV_ma5suppressor",
					"TFV_m7_silencer",
					"TFV_m6_silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"optic_yorris",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_ico_01_black_f",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"TFV_srs99_scope",
					"TFV_srs99c_scope",
					"TFV_ma5_buis",
					"TFV_m393_eotech",
					"TFV_m7_sight",
					"TFV_m393_acog",
					"TFV_hmg38_carryhandle",
					"TFV_m393_scope",
					"TFV_m392_scope",
					"TFV_br55hb_scope",
					"TFV_m6c_scope",
					"TFV_BMR_Scope",
					"TFV_SRS99_Scope_v2",
					"TFV_SRS99C_Scope_v2",
					"TFV_M73_Smartlink_v2",
					"TFV_M6S_Scope",
					"TFV_M7_Sight_v2",
					"TFV_M392_Scope_v2",
					"TFV_M393_Scope_v2",
					"TFV_M393_ACOG_v2",
					"TFV_M393_EOTECH_v2",
					"TFV_BR55HB_Scope_v2",
					"TFV_BMR_Scope_v2"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"TFV_m45_flashlight",
					"TFV_m45_flashlight_red",
					"TFV_BMR_Laser"
				};
			};
		};
	};
	class TFV_CR77: TFV_M393_DMR
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] CR77 Tactical Rifle";
		baseWeapon="TFV_CR77";
		model="\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\DMR_05_F";
		picture="\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\Data\UI\gear_DMR_05_X_CA";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\data\Anim\DMR_05.rtm"
		};
		reloadAction="GestureReloadDMR05";
		Eye="";
		Glasses="";
		ODST_1="";
		pictureWire="\V_SO_Weapons\data\CR77\V_CR77_HUD_CA";
		recoil="recoil_dmr_05";
		magazines[]=
		{
			"TFV_10Rnd_86x70_Mag",
			"TFV_10Rnd_86x70_Mag_Tracer",
			"TFV_10Rnd_86x70_Mag_AP",
			"TFV_10Rnd_86x70_Mag_APT",
			"TFV_10Rnd_86x70_Mag_JHP",
			"TFV_10Rnd_86x70_Mag_JHPT",
			"TFV_10Rnd_86x70_Mag_SS",
			"TFV_10Rnd_86x70_Mag_SST",
			"TFV_10Rnd_86x70_Mag_FS",
			"TFV_10Rnd_86x70_Mag_FST",
			"TFV_20Rnd_86x70_Mag",
			"TFV_20Rnd_86x70_Mag_Tracer",
			"TFV_20Rnd_86x70_Mag_AP",
			"TFV_20Rnd_86x70_Mag_APT",
			"TFV_20Rnd_86x70_Mag_JHP",
			"TFV_20Rnd_86x70_Mag_JHPT",
			"TFV_20Rnd_86x70_Mag_SS",
			"TFV_20Rnd_86x70_Mag_SST"
		};
		magazineWell[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsMaterials[]=
		{
			"\V_SO_Weapons\Data\CR77\V_CR77.rvmat",
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\Data\DMR_05_02.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\V_SO_Weapons\Data\CR77\V_CR77_CO",
			"\V_SO_Weapons\Data\CR77\V_CR77_A_CO"
		};
		class Single: Single
		{
			class SilencedSound
			{
				soundSetShot[]=
				{
					"DMR05_silencerShot_SoundSet",
					"DMR05_silencerTail_SoundSet",
					"DMR05_silencerInteriorTail_SoundSet"
				};
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					"DMR05_Shot_SoundSet",
					"DMR05_tail_SoundSet",
					"DMR05_InteriorTail_SoundSet"
				};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=206;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"TFV_ma5suppressor",
					"TFV_m7_silencer",
					"TFV_m6_silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"optic_yorris",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_ico_01_black_f",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"TFV_srs99_scope",
					"TFV_srs99c_scope",
					"TFV_ma5_buis",
					"TFV_m393_eotech",
					"TFV_m7_sight",
					"TFV_m393_acog",
					"TFV_hmg38_carryhandle",
					"TFV_m393_scope",
					"TFV_m392_scope",
					"TFV_br55hb_scope",
					"TFV_m6c_scope",
					"TFV_BMR_Scope",
					"TFV_SRS99_Scope_v2",
					"TFV_SRS99C_Scope_v2",
					"TFV_M73_Smartlink_v2",
					"TFV_M6S_Scope",
					"TFV_M7_Sight_v2",
					"TFV_M392_Scope_v2",
					"TFV_M393_Scope_v2",
					"TFV_M393_ACOG_v2",
					"TFV_M393_EOTECH_v2",
					"TFV_BR55HB_Scope_v2",
					"TFV_BMR_Scope_v2"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"TFV_m45_flashlight",
					"TFV_m45_flashlight_red",
					"TFV_BMR_Laser"
				};
			};
		};
	};
	class srifle_DMR_06_camo_F;
	class TFV_M14X: srifle_DMR_06_camo_F
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] Mk14X DMR";
		baseWeapon="TFV_M14X";
		hiddenSelectionsTextures[]=
		{
			"\V_SO_Weapons\Data\Mk14\V_M14X_CO",
			"\V_SO_Weapons\Data\Mk14\V_M14X_A_CO"
		};
		Eye="";
		Glasses="";
		ODST_1="";
		pictureWire="\V_SO_Weapons\data\Mk14\V_M14X_HUD_CA";
		picture="\V_SO_Weapons\data\Mk14\V_M14X_CA";
		magazines[]=
		{
			"TFV_15Rnd_762x51_Mag",
			"TFV_15Rnd_762x51_Mag_Tracer",
			"TFV_15Rnd_762x51_Mag_AP",
			"TFV_15Rnd_762x51_Mag_APT",
			"TFV_15Rnd_762x51_Mag_JHP",
			"TFV_15Rnd_762x51_Mag_JHPT",
			"TFV_15Rnd_762x51_Mag_SS",
			"TFV_15Rnd_762x51_Mag_FS",
			"TFV_15Rnd_762x51_Mag_FST"
		};
		magazineWell[]={};
		class WeaponSlotsInfo
		{
			mass=92;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_h_mg_blk_f",
					"muzzle_snds_l",
					"TFV_ma5suppressor",
					"TFV_m7_silencer",
					"TFV_m6_silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"TFV_srs99_scope",
					"TFV_srs99c_scope",
					"TFV_ma5_buis",
					"TFV_m393_eotech",
					"TFV_m73_smartlink",
					"TFV_m7_sight",
					"TFV_m393_acog",
					"TFV_m393_scope",
					"TFV_m392_scope",
					"TFV_br55hb_scope",
					"TFV_BMR_Scope",
					"TFV_SRS99_Scope_v2",
					"TFV_SRS99C_Scope_v2",
					"TFV_M73_Smartlink_v2",
					"TFV_M6S_Scope",
					"TFV_M7_Sight_v2",
					"TFV_M392_Scope_v2",
					"TFV_M393_Scope_v2",
					"TFV_M393_ACOG_v2",
					"TFV_M393_EOTECH_v2",
					"TFV_BR55HB_Scope_v2",
					"TFV_BMR_Scope_v2"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[]=
				{
					"bipod_01_f_blk",
					"bipod_02_f_blk",
					"bipod_03_f_blk"
				};
			};
		};
	};
	class TFV_BR55HB: TFV_Rifle_Base
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] BR55XHB Battle Rifle";
		baseWeapon="TFV_BR55XHB";
		model="\OPTRE_Weapons\BR\BRHB";
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto"
		};
		magazines[]=
		{
			"TFV_36Rnd_95x40_Mag",
			"TFV_36Rnd_95x40_Mag_Tracer",
			"TFV_36Rnd_95x40_Mag_Tracer_Yellow",
			"TFV_36Rnd_95x40_Mag_JHP",
			"TFV_36Rnd_95x40_Mag_JHPT",
			"TFV_36Rnd_95x40_Mag_HPSAP",
			"TFV_36Rnd_95x40_Mag_HPSAPT",
			"TFV_36Rnd_95x40_Mag_SAPHE",
			"TFV_36Rnd_95x40_Mag_SAPHET",
			"TFV_36Rnd_95x40_Mag_SS"
		};
		class WeaponSlotsInfo
		{
			mass=85;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_h_mg_blk_f",
					"muzzle_snds_l",
					"TFV_ma5suppressor",
					"TFV_m7_silencer",
					"TFV_m6_silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"TFV_srs99_scope",
					"TFV_srs99c_scope",
					"TFV_ma5_buis",
					"TFV_m393_eotech",
					"TFV_m73_smartlink",
					"TFV_m7_sight",
					"TFV_m393_acog",
					"TFV_m393_scope",
					"TFV_m392_scope",
					"TFV_br55hb_scope",
					"TFV_BMR_Scope",
					"TFV_SRS99_Scope_v2",
					"TFV_SRS99C_Scope_v2",
					"TFV_M73_Smartlink_v2",
					"TFV_M6S_Scope",
					"TFV_M7_Sight_v2",
					"TFV_M392_Scope_v2",
					"TFV_M393_Scope_v2",
					"TFV_M393_ACOG_v2",
					"TFV_M393_EOTECH_v2",
					"TFV_BR55HB_Scope_v2",
					"TFV_BMR_Scope_v2"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"TFV_m45_flashlight",
					"TFV_m45_flashlight_red",
					"TFV_BMR_Laser"
				};
			};
		};
		class FullAuto: Burst
		{
			aiDispersionCoefX=2;
			aiDispersionCoefY=3;
			burst=1;
			autoFire=1;
			dispersion=0.00050000002;
			displayName="[TFV] Full";
			maxRange=80;
			maxRangeProbab=0.039999999;
			midRange=30;
			midRangeProbab=0.57999998;
			minRange=1;
			minRangeProbab=0.2;
			recoil="recoil_auto_primary_3outof10";
			recoilProne="recoil_auto_primary_prone_3outof10";
			reloadTime=0.079999998;
			sound[]=
			{
				"",
				10,
				1
			};
			soundBurst=0;
			soundContinuous=0;
			soundEnd[]=
			{
				"sound",
				1
			};
			textureType="fullAuto";
		};
	};
	class TFV_BR55: TFV_BR55HB
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] BR55X Battle Rifle";
		baseWeapon="TFV_BR55X";
		model="\OPTRE_Weapons\BR\BR";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=82;
		};
	};
	class TFV_BR55AM: TFV_BR55HB
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] BR55AM 'Fafnir' Battle Rifle";
		baseWeapon="TFV_BR55AM";
		recoil="recoil_dmr_04";
		Eye="TFV_EYE_HUD_AmmoCount_PistolSmart";
		Glasses="TFV_GLASS_HUD_AmmoCount_PistolODST";
		ODST_1="TFV_ODST_HUD_AmmoCount_PistolODST";
		HUD_BulletInARows=1;
		HUD_TotalPosibleBullet=16;
		magazines[]=
		{
			"TFV_16Rnd_127x40_Mag",
			"TFV_16Rnd_127x40_Mag_AP",
			"TFV_16Rnd_127x40_Mag_APT",
			"TFV_16Rnd_127x40_Mag_HE",
			"TFV_16Rnd_127x40_Mag_HET",
			"TFV_16Rnd_127x40_Mag_HVAP",
			"TFV_16Rnd_127x40_Mag_HVAPT",
			"TFV_16Rnd_127x40_Mag_JHP",
			"TFV_16Rnd_127x40_Mag_JHPT",
			"TFV_16Rnd_127x40_Mag_SAPHE",
			"TFV_16Rnd_127x40_Mag_SAPHET",
			"TFV_16Rnd_127x40_Mag_SS",
			"TFV_16Rnd_127x40_Mag_NARQ"
		};
	};
	class SMG_01_F;
	class TFV_SubMachineGun_Base: SMG_01_F
	{
		class WeaponSlotsInfo;
	};
	class TFV_M7: TFV_SubMachineGun_Base
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M7X Caseless SMG";
		recoil="recoil_M7X";
		class Single;
		class FullAuto;
		magazines[]=
		{
			"TFV_60Rnd_5x23mm_Mag",
			"TFV_60Rnd_5x23mm_Mag_Tracer",
			"TFV_60Rnd_5x23mm_Mag_Tracer_Yellow",
			"TFV_60Rnd_5x23mm_Mag_FMJ",
			"TFV_60Rnd_5x23mm_Mag_FMJT",
			"TFV_60Rnd_5x23mm_Mag_HV",
			"TFV_60Rnd_5x23mm_Mag_HVT",
			"TFV_60Rnd_5x23mm_Mag_JHP",
			"TFV_60Rnd_5x23mm_Mag_JHPT",
			"TFV_60Rnd_5x23mm_Mag_SS",
			"TFV_60Rnd_5x23mm_Mag_SST",
			"TFV_48Rnd_5x23mm_Mag",
			"TFV_48Rnd_5x23mm_Mag_Tracer",
			"TFV_48Rnd_5x23mm_Mag_Tracer_Yellow",
			"TFV_48Rnd_5x23mm_Mag_FMJ",
			"TFV_48Rnd_5x23mm_Mag_FMJT",
			"TFV_48Rnd_5x23mm_Mag_HV",
			"TFV_48Rnd_5x23mm_Mag_HVT",
			"TFV_48Rnd_5x23mm_Mag_JHP",
			"TFV_48Rnd_5x23mm_Mag_JHPT",
			"TFV_48Rnd_5x23mm_Mag_SS",
			"TFV_48Rnd_5x23mm_Mag_SST"
		};
		magazineWell[]={};
		class WeaponSlotsInfo
		{
			mass=29;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"TFV_m7_silencer",
					"TFV_m6_silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"optic_yorris",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"TFV_ma5_buis",
					"TFV_m393_eotech",
					"TFV_m73_smartlink",
					"TFV_m7_sight",
					"TFV_m393_scope",
					"TFV_m392_scope",
					"TFV_br55hb_scope",
					"TFV_m6c_scope",
					"TFV_BMR_Scope",
					"TFV_M73_Smartlink_v2",
					"TFV_M6S_Scope",
					"TFV_M7_Sight_v2",
					"TFV_M392_Scope_v2",
					"TFV_M393_Scope_v2",
					"TFV_M393_ACOG_v2",
					"TFV_M393_EOTECH_v2",
					"TFV_BR55HB_Scope_v2",
					"TFV_BMR_Scope_v2"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"TFV_m45_flashlight",
					"TFV_m45_flashlight_red",
					"TFV_m7_laser",
					"TFV_m7_flashlight",
					"TFV_BMR_Laser"
				};
			};
		};
	};
	class TFV_M7_Folded: TFV_M7
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M7X Caseless SMG (Folded)";
		descriptionShort="UNSC M7X SMG (Folded)";
		handAnim[]=
		{
			"OFP2_ManSkeleton"
		};
		reloadAction="GestureReloadPistol";
		type=2;
		class Single: Single
		{
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
		};
		class FullAuto: FullAuto
		{
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
		};
	};
	class TFV_SRS99D: TFV_LongRifle_Base
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] SRS99DX-S2 Sniper Rifle";
		magazines[]=
		{
			"TFV_4Rnd_145x114_APFSDS_Mag",
			"TFV_4Rnd_145x114_Mag_APFSDST",
			"TFV_4Rnd_145x114_HEDP_Mag",
			"TFV_4Rnd_145x114_Mag_HEDPT",
			"TFV_4Rnd_145x114_HVAP_Mag",
			"TFV_4Rnd_145x114_Mag_HVAPT",
			"TFV_4Rnd_145x114_Mag_SS",
			"TFV_4Rnd_145x114_Mag_SST",
			"TFV_4Rnd_145x114_Mag_NARQ",
			"TFV_4Rnd_145x114_Mag_NARQT",
			"TFV_4Rnd_145x114_Mag_DOC"
		};
		class Single;
		class WeaponSlotsInfo
		{
			mass=237;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"TFV_srs99d_suppressor"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_ico_01_black_f",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"TFV_srs99_scope",
					"TFV_srs99c_scope",
					"TFV_ma5_buis",
					"TFV_m393_eotech",
					"TFV_m73_smartlink",
					"TFV_m7_sight",
					"TFV_m393_acog",
					"TFV_hmg38_carryhandle",
					"TFV_m393_scope",
					"TFV_m392_scope",
					"TFV_br55hb_scope",
					"TFV_BMR_Scope",
					"TFV_SRS99_Scope_v2",
					"TFV_SRS99C_Scope_v2",
					"TFV_M73_Smartlink_v2",
					"TFV_M6S_Scope",
					"TFV_M7_Sight_v2",
					"TFV_M392_Scope_v2",
					"TFV_M393_Scope_v2",
					"TFV_M393_ACOG_v2",
					"TFV_M393_EOTECH_v2",
					"TFV_BR55HB_Scope_v2",
					"TFV_BMR_Scope_v2"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"TFV_m45_flashlight",
					"TFV_m45_flashlight_red",
					"TFV_BMR_Laser"
				};
			};
		};
	};
	class TFV_SRS99C: TFV_SRS99D
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] SRS99CX-S2 AM Sniper Rifle";
	};
	class TFV_M99: TFV_SRS99D
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M99A2S3 Stanchion Gauss Rifle";
		baseWeapon="TFV_M99";
		magazines[]=
		{
			"TFV_3Rnd_54mm_Mag"
		};
		model="\OPTRE_Weapons\Sniper\M99";
		modelOptics="\OPTRE_Weapons\Sniper\Sniper_Oracle10_Optic";
		opticType=1;
		optics=1;
		opticsID=1;
		useModelOptics=1;
		opticsZoomMin=0.0099999998;
		opticsZoomMax=0.25;
		opticsZoomInit=0.25;
		discretefov[]={0.25,0.050000001,0.025,0.0099999998};
		discreteinitIndex=0;
		discreteDistance[]={50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000};
		discreteDistanceInitIndex=1;
		distanceZoomMin=100;
		distanceZoomMax=2000;
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0,1,5,6,7};
		opticsFlare=1;
		opticsDisablePeripherialVision=1;
		nameSound="cannon";
		class Single: Single
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"Cannon120mm_Shot_SoundSet",
					"Cannon120mm_Tail_SoundSet"
				};
			};
		};
		reloadTime=1.3;
		class LinkedItems
		{
			item="ace_muzzle_mzls_b";
			slot="MuzzleSlot";
		};
		class WeaponSlotsInfo
		{
			mass=441;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"ace_muzzle_mzls_b"
				};
			};
		};
	};
	class launch_RPG32_F;
	class TFV_M48_PAW: launch_RPG32_F
	{
		dlc="SO";
		author="Fireteam Zulu & Shadow";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M48B 'Cricket' PAW";
		baseWeapon="TFV_M48_PAW";
		model="\V_SO_Weapons\data\M48\M48B_Cricket";
		picture="\V_SO_Weapons\data\M48\M48B_Cricket";
		initSpeed=80;
		modelOptics="\OPTRE_Weapons\Rockets\M41_Optic";
		ODST_1="TFV_ODST_HUD_AmmoCount_RL";
		Glasses="TFV_GLASS_HUD_AmmoCount_RL";
		Eye="TFV_EYE_HUD_AmmoCount_RL";
		HUD_BulletInARows=1;
		HUD_TotalPosibleBullet=1;
		magazines[]=
		{
			"TFV_1Rnd_50x137_HEAT",
			"TFV_1Rnd_50x137_HE",
			"TFV_1Rnd_50x137_PEN",
			"TFV_1Rnd_50x137_THERMO",
			"TFV_1Rnd_50x137_Tekcirc"
		};
		magazineWell[]={};
		reloadAction="ReloadRPG";
		reloadmagazinesound[]=
		{
			"A3\sounds_f\weapons\rockets\titan_reload_final",
			0.56234097,
			1,
			50
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\Rockets\Data\Anim\m41_hand_anim.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_Weapons\Rockets\Data\Anim\m41_hand_anim_Spartan.rtm"
		};
		class WeaponSlotsInfo
		{
			mass=93;
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"optic_yorris",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"TFV_srs99_scope",
					"TFV_srs99c_scope",
					"TFV_m393_eotech",
					"TFV_m7_sight",
					"TFV_m393_acog",
					"TFV_m392_scope",
					"TFV_m6c_scope",
					"TFV_BMR_Scope",
					"TFV_SRS99_Scope_v2",
					"TFV_SRS99C_Scope_v2",
					"TFV_M6S_Scope",
					"TFV_M7_Sight_v2",
					"TFV_M392_Scope_v2",
					"TFV_M393_ACOG_v2",
					"TFV_M393_EOTECH_v2",
					"TFV_BMR_Scope_v2"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"TFV_BMR_Laser"
				};
			};
		};
	};
	class TFV_MachineGun_Base;
	class TFV_M73: TFV_MachineGun_Base
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M73X Light Machine Gun";
		magazines[]=
		{
			"TFV_36Rnd_95x40_Mag",
			"TFV_36Rnd_95x40_Mag_Tracer",
			"TFV_36Rnd_95x40_Mag_Tracer_Yellow",
			"TFV_36Rnd_95x40_Mag_JHP",
			"TFV_36Rnd_95x40_Mag_JHPT",
			"TFV_36Rnd_95x40_Mag_HPSAP",
			"TFV_36Rnd_95x40_Mag_HPSAPT",
			"TFV_36Rnd_95x40_Mag_SAPHE",
			"TFV_36Rnd_95x40_Mag_SAPHET",
			"TFV_36Rnd_95x40_Mag_SS",
			"TFV_100Rnd_95x40_Box",
			"TFV_100Rnd_95x40_Box_Tracer",
			"TFV_100Rnd_95x40_Box_Tracer_Yellow",
			"TFV_100Rnd_95x40_Box_JHP",
			"TFV_100Rnd_95x40_Box_JHPT",
			"TFV_100Rnd_95x40_Box_HPSAP",
			"TFV_100Rnd_95x40_Box_HPSAPT",
			"TFV_100Rnd_95x40_Box_SAPHE",
			"TFV_100Rnd_95x40_Box_SAPHET",
			"TFV_100Rnd_95x40_Box_SS",
			"TFV_200Rnd_95x40_Box",
			"TFV_200Rnd_95x40_Box_Tracer",
			"TFV_200Rnd_95x40_Box_Tracer_Yellow",
			"TFV_200Rnd_95x40_Box_JHP",
			"TFV_200Rnd_95x40_Box_JHPT",
			"TFV_200Rnd_95x40_Box_HPSAP",
			"TFV_200Rnd_95x40_Box_HPSAPT",
			"TFV_200Rnd_95x40_Box_SAPHE",
			"TFV_200Rnd_95x40_Box_SAPHET",
			"TFV_200Rnd_95x40_Box_SS"
		};
		class WeaponSlotsInfo
		{
			mass=158;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_h_mg_blk_f",
					"muzzle_snds_l",
					"TFV_ma5suppressor",
					"TFV_m7_silencer",
					"TFV_m6_silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"optic_yorris",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_ico_01_black_f",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"TFV_srs99_scope",
					"TFV_srs99c_scope",
					"TFV_ma5_buis",
					"TFV_m393_eotech",
					"TFV_m73_smartlink",
					"TFV_m7_sight",
					"TFV_m393_acog",
					"TFV_hmg38_carryhandle",
					"TFV_m393_scope",
					"TFV_m392_scope",
					"TFV_br55hb_scope",
					"TFV_m6c_scope",
					"TFV_BMR_Scope",
					"TFV_SRS99_Scope_v2",
					"TFV_SRS99C_Scope_v2",
					"TFV_M73_Smartlink_v2",
					"TFV_M6S_Scope",
					"TFV_M7_Sight_v2",
					"TFV_M392_Scope_v2",
					"TFV_M393_Scope_v2",
					"TFV_M393_ACOG_v2",
					"TFV_M393_EOTECH_v2",
					"TFV_BR55HB_Scope_v2",
					"TFV_BMR_Scope_v2"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"TFV_m45_flashlight",
					"TFV_m45_flashlight_red"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[]=
				{
					"bipod_01_f_blk",
					"bipod_02_f_blk",
					"bipod_03_f_blk"
				};
			};
		};
	};
	class TFV_M73H: TFV_M73
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M73H Heavy Machine Gun";
		baseWeapon="TFV_M73H";
		magazines[]=
		{
			"TFV_100Rnd_95x60_Box",
			"TFV_100Rnd_95x60_Box_Tracer",
			"TFV_100Rnd_95x60_Box_JHP",
			"TFV_100Rnd_95x60_Box_JHPT",
			"TFV_100Rnd_95x60_Box_HPSAP",
			"TFV_100Rnd_95x60_Box_HPSAPT",
			"TFV_100Rnd_95x60_Box_SAPHE",
			"TFV_100Rnd_95x60_Box_SAPHET",
			"TFV_100Rnd_95x60_Box_SS",
			"TFV_300Rnd_95x60_Box",
			"TFV_300Rnd_95x60_Box_Tracer",
			"TFV_300Rnd_95x60_Box_JHP",
			"TFV_300Rnd_95x60_Box_JHPT",
			"TFV_300Rnd_95x60_Box_HPSAP",
			"TFV_300Rnd_95x60_Box_HPSAPT",
			"TFV_300Rnd_95x60_Box_SAPHE",
			"TFV_300Rnd_95x60_Box_SAPHET",
			"TFV_300Rnd_95x60_Box_SS"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=168;
		};
	};
	class TFV_Shotgun_Base: arifle_Mk20_F
	{
		class Single;
	};
	class TFV_M45: TFV_Shotgun_Base
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M45X Tactical Shotgun";
		magazines[]=
		{
			"TFV_6Rnd_8Gauge_Pellet",
			"TFV_6Rnd_8Gauge_Slug",
			"TFV_6Rnd_8Gauge_HEDP",
			"TFV_6Rnd_8Gauge_Beanbag",
			"TFV_6Rnd_8Gauge_Incendiary",
			"TFV_12Rnd_8Gauge_Pellet",
			"TFV_12Rnd_8Gauge_Slug",
			"TFV_12Rnd_8Gauge_HEDP",
			"TFV_12Rnd_8Gauge_Beanbag",
			"TFV_12Rnd_8Gauge_Incendiary"
		};
		class WeaponSlotsInfo
		{
			mass=93;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"TFV_srs99d_suppressor"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"optic_yorris",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_ico_01_black_f",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"TFV_srs99_scope",
					"TFV_srs99c_scope",
					"TFV_ma5_buis",
					"TFV_m393_eotech",
					"TFV_m73_smartlink",
					"TFV_m7_sight",
					"TFV_m393_acog",
					"TFV_hmg38_carryhandle",
					"TFV_m393_scope",
					"TFV_m392_scope",
					"TFV_br55hb_scope",
					"TFV_m6c_scope",
					"TFV_BMR_Scope",
					"TFV_SRS99_Scope_v2",
					"TFV_SRS99C_Scope_v2",
					"TFV_M73_Smartlink_v2",
					"TFV_M6S_Scope",
					"TFV_MA5_Smartlink",
					"TFV_MA5_SmartLink_v2",
					"TFV_MA5C_SmartLink_v2",
					"TFV_MA5_SmartLink_legacy",
					"TFV_MA5C_SmartLink_legacy",
					"TFV_M7_Sight_v2",
					"TFV_M392_Scope_v2",
					"TFV_M393_Scope_v2",
					"TFV_M393_ACOG_v2",
					"TFV_M393_EOTECH_v2",
					"TFV_BR55HB_Scope_v2",
					"TFV_BMR_Scope_v2"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"TFV_m45_flashlight",
					"TFV_m45_flashlight_red",
					"TFV_BMR_Laser"
				};
			};
		};
		class Single: Single
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_01",
					1,
					1,
					300
				};
				begin2[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_02",
					1,
					1,
					300
				};
				begin3[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_03",
					1,
					1,
					300
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_interior",
							1,
							1,
							300
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_trees",
							1,
							1,
							300
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_forest",
							1,
							1,
							300
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_meadows",
							1,
							1,
							300
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_houses",
							1,
							1,
							300
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.25;
		};
	};
	class TFV_M45TAC: TFV_M45
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M45 Combat Shotgun (Tactical)";
	};
	class TFV_M90A: TFV_M45
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M90X CAWS Tactical Shotgun";
		magazines[]=
		{
			"TFV_6Rnd_8Gauge_Pellet",
			"TFV_6Rnd_8Gauge_Slug",
			"TFV_6Rnd_8Gauge_HEDP",
			"TFV_6Rnd_8Gauge_Beanbag",
			"TFV_6Rnd_8Gauge_Incendiary"
		};
		class WeaponSlotsInfo
		{
			mass=120;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"TFV_srs99d_suppressor"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"TFV_m45_flashlight",
					"TFV_m45_flashlight_red",
					"TFV_BMR_Laser"
				};
			};
		};
		class Single: Single
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_01",
					1,
					1,
					300
				};
				begin2[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_02",
					1,
					1,
					300
				};
				begin3[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_03",
					1,
					1,
					300
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_interior",
							1,
							1,
							300
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_trees",
							1,
							1,
							300
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_forest",
							1,
							1,
							300
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_meadows",
							1,
							1,
							300
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_houses",
							1,
							1,
							300
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
		};
	};
	class MuzzleSlot: MuzzleSlot
	{
	};
};
class CfgRecoils
{
	class recoil_M7X
	{
		muzzleOuter[]=
		{
			"0.075*0.2",
			"0.64*1",
			"0.315*1",
			"0.21*1"
		};
		kickBack[]=
		{
			"0.015*1.4",
			"0.04*1.4"
		};
		temporary="0.010*1.2";
		muzzleInner[]={0,0,0.050000001,0.050000001};
		permanent="0.05*0.4";
	};
};
