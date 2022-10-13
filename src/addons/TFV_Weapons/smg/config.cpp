class CfgPatches
{
	class TFV_Weapons_SMG
	{
		units[]={};
		weapons[]=
		{
			"TFV_M7_silencer",
			"TFV_M7_Sight",
			"TFV_M7_Laser",
			"TFV_M7",
			"TFV_M7_Folded",
			"TFV_M7S",
			"TFV_muzzleFlash_suppressed",
			"TFV_M7_Flashlight",
			"TFV_M12_Suppressor",
			"TFV_M12_Laser",
			"TFV_M12_Optic",
			"TFV_M12_SOC"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Core",
			"A3_Weapons_F"
		};
		author="Article 2 Studios";
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		OPTRE_GestureReloadM7="OPTRE_GestureReloadM7";
	};
	class Actions
	{
		class RifleBaseStandActions;
		class RifleAdjustProneBaseActions;
		class NoActions: ManActions
		{
			OPTRE_GestureReloadM7[]=
			{
				"OPTRE_GestureReloadM7",
				"Gesture"
			};
		};
		class RifleProneActions: RifleBaseStandActions
		{
			OPTRE_GestureReloadM7[]=
			{
				"OPTRE_GestureReloadM7_Prone",
				"Gesture"
			};
		};
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			OPTRE_GestureReloadM7[]=
			{
				"OPTRE_GestureReloadM7_Context",
				"Gesture"
			};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			OPTRE_GestureReloadM7[]=
			{
				"OPTRE_GestureReloadM7_Context",
				"Gesture"
			};
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			OPTRE_GestureReloadM7[]=
			{
				"OPTRE_GestureReloadM7",
				"Gesture"
			};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class GestureReloadBase;
	class States
	{
		class OPTRE_GestureReloadM7: Default
		{
			file="\TFV_Weapons\smg\data\anim\m7_reload.rtm";
			looped=0;
			speed=-3;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[]={0,1};
			leftHandIKCurve[]={0,1,0.02,0,0.95999998,0,0.99000001,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
		};
		class OPTRE_GestureReloadM7_prone: OPTRE_GestureReloadM7
		{
			file="\TFV_Weapons\smg\data\anim\m7_reload_prone.rtm";
		};
		class OPTRE_GestureReloadM7_Context: OPTRE_GestureReloadM7
		{
			mask="handsWeapon_context";
		};
	};
};
class CfgMovesBasicSevenFoot
{
	class DefaultDie;
	class ManActions
	{
		OPTRE_GestureReloadM7="OPTRE_GestureReloadM7";
	};
	class Actions
	{
		class RifleBaseStandActions;
		class RifleAdjustProneBaseActions;
		class NoActions: ManActions
		{
			OPTRE_GestureReloadM7[]=
			{
				"OPTRE_GestureReloadM7",
				"Gesture"
			};
		};
		class RifleProneActions: RifleBaseStandActions
		{
			OPTRE_GestureReloadM7[]=
			{
				"OPTRE_GestureReloadM7_Prone",
				"Gesture"
			};
		};
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			OPTRE_GestureReloadM7[]=
			{
				"OPTRE_GestureReloadM7_Context",
				"Gesture"
			};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			OPTRE_GestureReloadM7[]=
			{
				"OPTRE_GestureReloadM7_Context",
				"Gesture"
			};
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			OPTRE_GestureReloadM7[]=
			{
				"OPTRE_GestureReloadM7",
				"Gesture"
			};
		};
	};
};
class CfgGesturesSevenFoot
{
	class Default;
	class GestureReloadBase;
	class States
	{
		class OPTRE_GestureReloadM7: Default
		{
			file="\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\m7_reload_Spartan.rtm";
			looped=0;
			speed=-3;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[]={0.631944,1,0.65792203,0,0.84027803,0,0.875,1};
			leftHandIKCurve[]={0,1,0.03125,0,0.868056,0,0.95999998,1};
			leftHandIKBeg=0;
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
		};
		class OPTRE_GestureReloadM7_prone: OPTRE_GestureReloadM7
		{
			file="\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\m7_reload_Spartan.rtm";
		};
		class OPTRE_GestureReloadM7_Context: OPTRE_GestureReloadM7
		{
			mask="handsWeapon_context";
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
	class ItemCore;
	class muzzle_snds_acp;
	class optic_Aco;
	class acc_pointer_IR;
	class InventoryOpticsItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class SMG_01_F;
	class TFV_SubMachineGun_Base: SMG_01_F
	{
		class WeaponSlotsInfo;
	};
	class TFV_muzzleFlash_suppressed: ItemCore
	{
		scope=2;
		model="A3\weapons_f\data\zaslehsdl_proxy.p3d";
	};
	class TFV_M7_silencer: muzzle_snds_acp
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M7 SS-M 49 Suppressor";
		picture="\TFV_Weapons\smg\icons\silencer.paa";
		model="\TFV_Weapons\SMG\m7_silencer.p3d";
		descriptionShort="M7 Silencer";
		inertia=0.1;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=1;
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
	class TFV_M7_Flashlight: ItemCore
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M7 Flashlight";
		picture="\a3\weapons_f\data\ui\gear_accv_flashlight_ca.paa";
		descriptionShort="Flashlight for the M7 SMG";
		model="\TFV_Weapons\SMG\m7_flashlight.p3d";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=1;
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
		};
		inertia=0.1;
	};
	class TFV_M7_Sight: optic_Aco
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M7 SLS/V 5B Reflex";
		picture="\TFV_Weapons\smg\icons\scope.paa";
		descriptionShort="Smart Link Scope Reflex Sight for the M7 SMG";
		model="\TFV_Weapons\SMG\m7_sights.p3d";
		inertia=0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=1;
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class RDS
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
				class TFV_M7_BUISZOOM: RDS
				{
					opticsID=2;
					useModelOptics=1;
					opticsZoomMin=0.125;
					opticsZoomMax=0.052499998;
					opticsZoomInit=0.125;
					discretefov[]={0.125,0.052499998};
					discreteinitIndex=0;
					discreteDistance[]={100,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=1000;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\TFV_Weapons\smg\M7_Optic_2x.p3d",
						"\TFV_Weapons\smg\M7_Optic_4x.p3d"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
			};
		};
	};
	class TFV_M7_Laser: acc_pointer_IR
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M7 Laser Aiming Module";
		picture="\TFV_Weapons\smg\icons\laser.paa";
		descriptionShort="IR Laser for the M7 SMG";
		model="\TFV_Weapons\SMG\m7_laser.p3d";
		inertia=0.1;
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=1;
			class Pointer
			{
				irLaserPos="laser dir";
				irLaserEnd="laser";
				irDistance=25;
			};
		};
	};
	class TFV_M12_Suppressor: TFV_M7_silencer
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M12 SS-M 47 Suppressor";
		descriptionShort="M12 Silencer";
		model="\TFV_Weapons\smg\m12_suppressor.p3d";
	};
	class TFV_M12_Laser: TFV_M7_Laser
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M12 Laser Aiming Module";
		descriptionShort="IR Laser for the M12 SOC";
		picture="\TFV_Weapons\smg\icons\m12_laser.paa";
		model="\TFV_Weapons\smg\m12_laser.p3d";
	};
	class TFV_M12_Optic: TFV_M7_Sight
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M12 SLS/V 3B Holographic Sight";
		descriptionShort="Smart Link Scope Holographic Sight for the M12 SOC";
		picture="\TFV_Weapons\smg\icons\m12_scope.paa";
		model="\TFV_Weapons\smg\m12_holo.p3d";
	};
	class TFV_M7: TFV_SubMachineGun_Base
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		scopeArsenal=2;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\TFV_Weapons\smg\data\anim\m7_handpos.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\smg_handanim_Spartan.rtm"
		};
		reloadAction="OPTRE_GestureReloadM7";
		model="\TFV_Weapons\SMG\SMG.p3d";
		displayName="[TFV] M7/Caseless SMG";
		descriptionShort="UNSC M7 SMG";
		picture="\TFV_Weapons\smg\icons\smg.paa";
		magazines[]=
		{
			"TFV_60Rnd_5x23mm_Mag",
			"TFV_60Rnd_5x23mm_Mag_tracer",
			"TFV_60Rnd_5x23mm_Mag_tracer_yellow",
			"TFV_48Rnd_5x23mm_Mag",
			"TFV_48Rnd_5x23mm_Mag_tracer",
			"TFV_48Rnd_5x23mm_Mag_tracer_yellow",
			"TFV_48Rnd_5x23mm_JHP_Mag",
			"TFV_48Rnd_5x23mm_FMJ_Mag"
		};
		magazineWell[]={};
		recoil="recoil_pdw";
		baseWeapon="TFV_M7";
		cursor="OPTRE_M7";
		pictureWire="\TFV_Weapons\data\Pictures\WireWeaponIcons\Prime\SMG\SMG_IRON.paa";
		ODST_1="OPTRE_ODST_HUD_AmmoCount_SMG";
		Glasses="OPTRE_GLASS_HUD_AmmoCount_SMG";
		Eye="OPTRE_EYE_HUD_AmmoCount_SMG";
		HUD_BulletInARows=3;
		HUD_TotalPosibleBullet=60;
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"TFV_Weapons\smg\data\m7_m7_co.paa",
			"TFV_Weapons\smg\data\m7_magazine_co.paa"
		};
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
			mass=30;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"TFV_M7_Silencer"
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
					"TFV_M7_Laser",
					"TFV_M7_Flashlight"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[]={};
			};
		};
		modes[]=
		{
			"FullAuto",
			"Single",
			"close",
			"short",
			"medium",
			"far"
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
					"\TFV_Weapons\SMG\Data\sounds\SMG_1.ogg",
					1.5,
					1,
					2000
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
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_interior",
							1.5848932,
							1,
							1200
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_trees",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_forest",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_meadows",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_houses",
							1,
							1,
							1200
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
					"\TFV_Weapons\SMG\Data\sounds\Silenced_1.wss",
					1,
					1,
					600
				};
				begin2[]=
				{
					"\TFV_Weapons\SMG\Data\sounds\Silenced_1.wss",
					1,
					1,
					600
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_tail_interior",
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
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_trees",
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
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\silencer_Vermin_tail_forest",
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
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_meadows",
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
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.066;
			dispersion=0.0013;
			recoil="recoil_single_pdw";
			recoilProne="recoil_single_prone_pdw";
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.050000001;
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
					"\TFV_Weapons\SMG\Data\sounds\SMG_1.ogg",
					1,
					1,
					2000
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
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_interior",
							1.5848932,
							1,
							1200
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_trees",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_forest",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_meadows",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_houses",
							1,
							1,
							1200
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
					"\TFV_Weapons\SMG\Data\sounds\Silenced_1.wss",
					1,
					1,
					600
				};
				begin2[]=
				{
					"\TFV_Weapons\SMG\Data\sounds\Silenced_1.wss",
					1,
					1,
					600
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_tail_interior",
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
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_trees",
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
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\silencer_Vermin_tail_forest",
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
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_meadows",
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
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.050000001;
			dispersion=0.0013;
			recoil="recoil_auto_pdw";
			recoilProne="recoil_auto_prone_pdw";
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.050000001;
		};
		class close: FullAuto
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=30;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=5;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=400;
			midRangeProbab=0.60000002;
			maxRange=600;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			burst=3;
			aiRateOfFire=6;
			aiRateOfFireDistance=700;
			minRange=350;
			minRangeProbab=0.039999999;
			midRange=550;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
		};
		aiDispersionCoefY=10;
		aiDispersionCoefX=10;
	};
	class TFV_M7_Folded: TFV_M7
	{
		dlc="OPTRE";
		handAnim[]=
		{
			"OFP2_ManSkeleton"
		};
		reloadAction="GestureReloadPistol";
		model="\TFV_Weapons\SMG\SMG_folded.p3d";
		displayName="[TFV] M7/Caseless SMG (Folded)";
		descriptionShort="UNSC M7 SMG (Folded)";
		type=2;
		recoil="recoil_mk200";
		baseWeapon="TFV_M7_Folded";
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
	class TFV_M7S: TFV_M7
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=1;
		scopeArsenal=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="TFV_M7_Sight";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="TFV_M7_Laser";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="TFV_M7_Silencer";
			};
		};
	};
	class TFV_M12_SOC: TFV_M7
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		scopeArsenal=2;
		model="\TFV_Weapons\smg\m12.p3d";
		displayName="[TFV] M12 SOC";
		descriptionShort="UNSC M12 SOC";
		picture="\TFV_Weapons\smg\icons\m12.paa";
		baseWeapon="TFV_M12";
		cursor="OPTRE_M12";
		selectionFireAnim="zasleh";
		magazines[]=
		{
			"TFV_64Rnd_57x31_Mag",
			"TFV_64Rnd_57x31_Mag_Tracer",
			"TFV_64Rnd_57x31_Mag_Tracer_Yellow"
		};
		pictureWire="\TFV_Weapons\data\Pictures\WireWeaponIcons\Prime\SMG\SMG_IRON.paa";
		ODST_1="OPTRE_ODST_HUD_AmmoCount_SMG";
		Glasses="OPTRE_GLASS_HUD_AmmoCount_SMG";
		Eye="OPTRE_EYE_HUD_AmmoCount_SMG";
		HUD_BulletInARows=3;
		HUD_TotalPosibleBullet=64;
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\TFV_Weapons\smg\data\rifle_CO.paa",
			"\TFV_Weapons\smg\data\accessories_CO.paa",
			"\TFV_Weapons\smg\data\logos_CA.paa"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=42;
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
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"TFV_M12_Suppressor"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"acc_flashlight",
					"TFV_M12_Laser"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[]={};
			};
		};
	};
};
