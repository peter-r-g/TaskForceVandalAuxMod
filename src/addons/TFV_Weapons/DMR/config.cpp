class CfgPatches
{
	class TFV_Weapons_DMR
	{
		units[]={};
		weapons[]=
		{
			"TFV_M392_Scope",
			"TFV_M393_DMR",
			"TFV_muzzleFlash_suppressed",
			"TFV_M393_Suppressor",
			"TFV_DMR_Light",
			"TFV_M392_DMR",
			"TFV_M393S_DMR",
			"TFV_M295_BMR",
			"TFV_M295_BMR_Woodland",
			"TFV_M295_BMR_Snow",
			"TFV_M295_BMR_Desert"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Core",
			"OPTRE_Weapons",
			"A3_Weapons_F"
		};
		author="Article 2 Studios";
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
	class ItemCore;
	class muzzle_snds_H;
	class optic_Aco;
	class InventoryOpticsItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class srifle_EBR_F;
	class TFV_LongRifle_Base: srifle_EBR_F
	{
		class WeaponSlotsInfo;
	};
	class TFV_muzzleFlash_suppressed: ItemCore
	{
		scope=2;
		model="A3\Data_f\proxies\muzzle_flash\muzzle_flash_suppressor.p3d";
	};
	class TFV_M392_Scope: optic_Aco
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		displayName="EVOS-D Mk1 Scope";
		picture="\OPTRE_Weapons\br\icons\scope.paa";
		model="\OPTRE_Weapons\DMR\M392_Scope.p3d";
		descriptionShort="4x Scope for M392 Marksman Rifle";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=2;
			opticType=1;
			optics=1;
			modelOptics="\OPTRE_Weapons\DMR\M392_Scope.p3d";
			class OpticsModes
			{
				class DMR_Scope
				{
					opticsID=1;
					useModelOptics=1;
					opticsZoomMin=0.0623;
					opticsZoomMax=0.0623;
					opticsZoomInit=0.0623;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"\OPTRE_Weapons\DMR\M395_optic10.p3d"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					discreteDistance[]={100,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=1000;
					cameraDir="";
				};
			};
		};
		inertia=0.1;
	};
	class TFV_M393_Scope: optic_Aco
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		displayName="EVOS-D Mk3 Scope";
		picture="\OPTRE_Weapons\DMR\icons\M395__Scope_Icon.paa";
		model="\OPTRE_Weapons\DMR\M395Optic.p3d";
		descriptionShort="M393 Scope";
		modelOptics="\OPTRE_Weapons\DMR\M395Optic.p3d";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=10;
			opticType=1;
			optics=1;
			modelOptics="\OPTRE_Weapons\DMR\M395Optic.p3d";
			class OpticsModes
			{
				class M395_Scope_View
				{
					opticsID=1;
					useModelOptics=1;
					opticsZoomMin=0.125;
					opticsZoomMax=0.041999999;
					opticsZoomInit=0.125;
					discretefov[]={0.125,0.052499998,0.041999999};
					discreteinitIndex=0;
					discreteDistance[]={100,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=1000;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"\OPTRE_Weapons\DMR\M395_optic5.p3d",
						"\OPTRE_Weapons\DMR\M395_optic10.p3d",
						"\OPTRE_Weapons\DMR\M395_optic15.p3d"
					};
					opticsPPEffects[]=
					{
						""
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					thermalMode[]={5,6};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
			};
		};
		inertia=0;
	};
	class TFV_M393_ACOG: optic_Aco
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		displayName="M15 Combat Optical Gunsight";
		picture="\OPTRE_Weapons\DMR\icons\M395__ACOG_Icon.paa";
		model="\OPTRE_Weapons\DMR\M395ACOG.p3d";
		descriptionShort="Combat Optical Gunsight";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=10;
			opticType=1;
			optics=1;
			modelOptics="\OPTRE_Weapons\DMR\M395Optic.p3d";
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
					opticsZoomMin=0.075000003;
					opticsZoomMax=0.075000003;
					opticsZoomInit=0.075000003;
					memoryPointCamera="opticView";
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
			};
		};
		inertia=0.1;
	};
	class TFV_M393_EOTECH: optic_Aco
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		displayName="SR-10 Rapid Acquisition Sight";
		picture="\OPTRE_Weapons\DMR\icons\M395__EOTECH_Icon.paa";
		descriptionShort="CQB Sight";
		model="\OPTRE_Weapons\DMR\M395EOTECH.p3d";
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
			};
		};
	};
	class TFV_M393_Suppressor: muzzle_snds_H
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		displayName="M393 Suppressor";
		picture="\OPTRE_Weapons\DMR\icons\M395__Suppressor_Icon.paa";
		model="\OPTRE_Weapons\DMR\M395Suppressor.p3d";
		descriptionShort="M393 Suppressor";
		inertia=0.1;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=5;
			class MagazineCoef
			{
				initSpeed=1;
			};
			class AmmoCoef
			{
				hit=1;
				typicalSpeed=1;
				airFriction=1;
				visibleFire=0.5;
				audibleFire=0.30000001;
				visibleFireTime=0.5;
				audibleFireTime=0.5;
				cost=1;
			};
			muzzleEnd="zaslehPoint";
			alternativeFire="TFV_muzzleFlash_suppressed";
			soundTypeIndex=1;
			class MuzzleCoef
			{
				dispersionCoef=1;
				artilleryDispersionCoef=1;
				fireLightCoef="0.1f";
				recoilCoef="0.8f";
				recoilProneCoef="0.8f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
	};
	class TFV_BMR_Flashlight;
	class TFV_DMR_Light: TFV_BMR_Flashlight
	{
		author="Article 2 Studios";
		scope=2;
		displayName="UNSC Tactical Flashlight";
		picture="\A3\weapons_F\Data\UI\gear_accv_pointer_CA.paa";
		model="\OPTRE_Weapons\DMR\M392_Light.p3d";
	};
	class TFV_M392_DMR: TFV_LongRifle_Base
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		scopeArsenal=2;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\BR\data\anim\BR.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\Handanim_DMR_Spartan.rtm"
		};
		model="\OPTRE_Weapons\DMR\M392.p3d";
		displayName="$STR_TFV_CfgWeapons_M392_displayName";
		baseWeapon="TFV_M392_DMR";
		descriptionShort="$STR_TFV_CfgWeapons_M392_descriptionShort";
		picture="\OPTRE_Weapons\DMR\icons\M392_CA.paa";
		magazines[]=
		{
			"TFV_15Rnd_762x51_Mag",
			"TFV_15Rnd_762x51_Mag_Tracer",
			"TFV_15Rnd_762x51_Mag_Tracer_Yellow"
		};
		magazineWell[]={};
		reloadAction="GestureReloadTRG";
		recoil="recoil_ebr";
		cursor="OPTRE_M392";
		pictureWire="\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\BattleRifle\BR_SCOPE.paa";
		ODST_1="OPTRE_ODST_HUD_AmmoCount_DMR";
		Glasses="OPTRE_GLASS_HUD_AmmoCount_DMR";
		Eye="OPTRE_EYE_HUD_AmmoCount_DMR";
		HUD_BulletInARows=1;
		HUD_TotalPosibleBullet=15;
		class GunParticles
		{
			class EffectShotCloud
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=50;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_65_TI_blk_F",
					"TFV_MA5Suppressor"
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
					"TFV_BMR_Laser",
					"TFV_DMR_Light"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]=
				{
					"bipod_01_F_blk",
					"bipod_02_F_blk",
					"bipod_03_F_blk"
				};
			};
		};
		modes[]=
		{
			"Single"
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
					"\OPTRE_Weapons\DMR\Data\sounds\DMR_1.ogg",
					2.5,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",
							2.2387211,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",
							1,
							1,
							1800
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
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_01",
					0.79432821,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_02",
					0.79432821,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_03",
					0.79432821,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_trees",
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
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_meadows",
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
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.039999999;
			dispersion=4.9999999e-005;
			recoil="recoil_single_ebr";
			recoilProne="recoil_single_prone_ebr";
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.050000001;
		};
	};
	class TFV_M393_DMR: TFV_M392_DMR
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\DMR\anim\Handanim_M395.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\Handanim_M395_Spartan.rtm"
		};
		model="\OPTRE_Weapons\DMR\M395.p3d";
		displayName="[TFV] M393 DMR";
		picture="\OPTRE_Weapons\DMR\icons\M395_Icon.paa";
		baseWeapon="TFV_M393_DMR";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"TFV_BMR_Laser"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"TFV_M393_Suppressor"
				};
			};
		};
	};
	class TFV_M393S_DMR: TFV_M393_DMR
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		model="\OPTRE_Weapons\DMR\M395S.p3d";
		displayName="[TFV] M393/S DMR";
		baseWeapon="TFV_M393S_DMR";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_65_TI_blk_F",
					"TFV_MA5Suppressor"
				};
			};
		};
	};
	class TFV_M295_BMR: TFV_M393_DMR
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		model="\OPTRE_Weapons\BR\BMR";
		displayName="[TFV] M295 BMR";
		scope=2;
		scopeArsenal=2;
		magazineWell[]={};
		magazines[]=
		{
			"TFV_25Rnd_762x51_Mag",
			"TFV_25Rnd_762x51_Mag_Tracer",
			"TFV_25Rnd_762x51_Mag_Tracer_Yellow",
			"TFV_15Rnd_762x51_Mag",
			"TFV_15Rnd_762x51_Mag_Tracer",
			"TFV_15Rnd_762x51_Mag_Tracer_Yellow"
		};
		baseWeapon="TFV_M295_BMR";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\BR\data\anim\bmr_handanim.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\bmr_handanim_Spartan.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=50;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_65_TI_blk_F",
					"TFV_MA5Suppressor"
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
					"TFV_M393_Scope",
					"TFV_M393_ACOG",
					"TFV_M393_EOTECH",
					"TFV_BMR_Scope",
					"TFV_BR45_Scope"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_IR",
					"acc_flashlight",
					"TFV_BMR_Laser",
					"TFV_BMR_Flashlight"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[]={};
			};
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class Single: Single
		{
			reloadTime=0.12;
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
					"\OPTRE_Weapons\DMR\Data\sounds\DMR_1.ogg",
					2.5,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",
							2.2387211,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",
							1,
							1,
							1800
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
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_01",
					0.79432821,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_02",
					0.79432821,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_03",
					0.79432821,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_trees",
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
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_meadows",
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
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.12;
			dispersion=4.9999999e-005;
			recoil="recoil_single_ebr";
			recoilProne="recoil_single_prone_ebr";
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.050000001;
		};
	};
	class TFV_M295_BMR_Woodland: TFV_M295_BMR
	{
		displayName="[TFV] M295 BMR (Woodland)";
		scope=2;
		scopeArsenal=2;
		baseWeapon="TFV_M295_BMR_Woodland";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Weapons\br\data\BMRWood_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"OPTRE_Weapons\br\data\BMRWood.rvmat"
		};
	};
	class TFV_M295_BMR_Snow: TFV_M295_BMR
	{
		displayName="[TFV] M295 BMR (Snow)";
		scope=2;
		scopeArsenal=2;
		baseWeapon="TFV_M295_BMR_Snow";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Weapons\br\data\BMRSnow_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"OPTRE_Weapons\br\data\BMRSnow.rvmat"
		};
	};
	class TFV_M295_BMR_Desert: TFV_M295_BMR
	{
		displayName="[TFV] M295 BMR (Desert)";
		scope=2;
		scopeArsenal=2;
		baseWeapon="TFV_M295_BMR_Snow_Desert";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Weapons\br\data\BMRDesert_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"OPTRE_Weapons\br\data\BMRDesert.rvmat"
		};
	};
	class TFV_M392_DMR_ScopedRifle: TFV_M392_DMR
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=1;
		scopeArsenal=1;
		pictureWire="\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\BattleRifle\BR_SCOPE.paa";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="TFV_M392_Scope";
			};
		};
	};
	class TFV_M393_DMR_ScopedRifle: TFV_M393_DMR
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=1;
		scopeArsenal=1;
		pictureWire="\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\BattleRifle\BR_SCOPE.paa";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="TFV_M393_Scope";
			};
		};
	};
};
