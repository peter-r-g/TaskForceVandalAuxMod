class CfgPatches
{
	class TFV_Weapons_MA37K
	{
		requiredAddons[]=
		{
			"OPTRE_Core",
			"OPTRE_Weapons",
			"A3_Weapons_F"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"TFV_MA37K",
			"TFV_MA37KSuppressor"
		};
	};
};
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons
{
	class mk20_base_F;
	class muzzle_snds_H;
	class optic_Aco;
	class InventoryOpticsItem_Base_F;
	class arifle_Mk20_F: mk20_base_F
	{
		class Single;
	};
	class TFV_MA37KSuppressor: muzzle_snds_H
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		scopeArsenal=2;
		displayName="MA37K Suppressor";
		model="OPTRE_Weapons\MA37K\ma37k_suppressor.p3d";
		picture="\a3\Weapons_F_Exp\Acc\Data\UI\icon_muzzle_snds_65_ti_blk_f_ca.paa";
	};
	class TFV_MA37K: arifle_Mk20_F
	{
		baseWeapon="TFV_MA37K";
		displayName="$STR_TFV_CfgWeapons_MA37K";
		descriptionShort="MA37K Carbine";
		description="MA37K Carbine";
		model="\OPTRE_Weapons\MA37K\MA37K.p3d";
		cursor="OPTRE_MA37";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Weapons\MA37K\data\MA37K_CO.paa"
		};
		magazines[]=
		{
			"TFV_32Rnd_762x51_Mag",
			"TFV_32Rnd_762x51_Mag_Tracer",
			"TFV_32Rnd_762x51_Mag_Tracer_Yellow"
		};
		magazineWell[]={};
		reloadAction="GestureReloadARX";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\MA37K\data\anim\MA37K.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\ma5k_handanim_Spartan.rtm"
		};
		HUD_BulletInARows=2;
		HUD_TotalPosibleBullet=32;
		class FlashLight
		{
			color[]={180,160,130};
			ambient[]={0.89999998,0.80000001,0.69999999};
			intensity=100;
			size=1;
			innerAngle=5;
			outerAngle=100;
			coneFadeCoef=10;
			position="flash dir";
			direction="flash";
			useFlare=1;
			flareSize=1.5;
			flareMaxDistance=100;
			dayLight=0;
			class Attenuation
			{
				start=0;
				constant=0.5;
				linear=0.1;
				quadratic=0.2;
				hardLimitStart=27;
				hardLimitEnd=34;
			};
			scale[]={0};
		};
		class WeaponSlotsInfo
		{
			mass=40;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_65_TI_blk_F",
					"TFV_MA5Suppressor",
					"TFV_MA37KSuppressor"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
					"TFV_M392_Scope",
					"TFV_BR55HB_Scope",
					"TFV_M7_Sight",
					"TFV_M12_Optic",
					"TFV_M393_Scope",
					"TFV_M393_ACOG",
					"TFV_M393_EOTECH",
					"TFV_BR45_Scope"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_IR",
					"ace_acc_pointer_green",
					"TFV_m45_flashlight_red",
					"TFV_bmr_laser"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[]={};
			};
		};
		class Single: Single
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
			reloadTime=0.041999999;
			dispersion=4.9999999e-005;
		};
	};
};
