class CfgPatches
{
	class TFV_Weapons_BR
	{
		units[]={};
		weapons[]=
		{
			"TFV_BR55HB_Scope",
			"TFV_BR55HB",
			"TFV_BR55HB_ScopedRifle",
			"TFV_BMR_Scope",
			"TFV_BR37",
			"TFV_BMR_Laser",
			"TFV_BMR_Flashlight",
			"TFV_BR45_Scope",
			"TFV_BR55",
			"TFV_BR45",
			"TFV_BR45Grip"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Core",
			"OPTRE_Weapons"
		};
		author="Article 2 Studios";
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		GestureReloadBR55="GestureReloadBR55";
	};
	class Actions
	{
		class RifleBaseStandActions;
		class RifleAdjustProneBaseActions;
		class NoActions: ManActions
		{
			GestureReloadBR55[]=
			{
				"GestureReloadBR55",
				"Gesture"
			};
		};
		class RifleProneActions: RifleBaseStandActions
		{
			GestureReloadBR55[]=
			{
				"GestureReloadBR55_Prone",
				"gesture"
			};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class States
	{
		class GestureReloadBR55: Default
		{
			file="\OPTRE_Weapons\br\Data\anim\BR55ReloadGesture.rtm";
			looped=0;
			speed=0.27000001;
			mask="handsWeapon";
			headBobStrength=0.1;
			headBobMode=2;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.050000001,0,0.94999999,0,1,1};
		};
		class GestureReloadBR55_Prone: Default
		{
			file="\OPTRE_Weapons\br\Data\anim\BR55ReloadGesture_Prone.rtm";
			looped=0;
			speed=0.27000001;
			mask="handsWeapon";
			headBobStrength=0.1;
			headBobMode=2;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.050000001,0,0.94999999,0,1,1};
		};
	};
};
class CfgMovesBasicSevenFoot
{
	class DefaultDie;
	class ManActions
	{
		GestureReloadBR55="GestureReloadBR55";
	};
	class Actions
	{
		class RifleBaseStandActions;
		class RifleAdjustProneBaseActions;
		class NoActions: ManActions
		{
			GestureReloadBR55[]=
			{
				"GestureReloadBR55",
				"Gesture"
			};
		};
		class RifleProneActions: RifleBaseStandActions
		{
			GestureReloadBR55[]=
			{
				"GestureReloadBR55_Prone",
				"gesture"
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
		class GestureReloadBR55: Default
		{
			file="\OPTRE_Weapons\br\Data\anim\BR55ReloadGesture_Spartan.rtm";
			looped=0;
			speed=0.27000001;
			mask="handsWeapon";
			headBobStrength=0.1;
			headBobMode=2;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.050000001,0,0.94999999,0,1,1};
		};
		class GestureReloadBR55_Prone: Default
		{
			file="\OPTRE_Weapons\br\Data\anim\BR55ReloadGesture_Spartan.rtm";
			looped=0;
			speed=0.27000001;
			mask="handsWeapon";
			headBobStrength=0.1;
			headBobMode=2;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.050000001,0,0.94999999,0,1,1};
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
class bipod_01_F_blk;
class CfgWeapons
{
	class optic_Aco;
	class InventoryOpticsItem_Base_F;
	class arifle_Mk20_F;
	class acc_pointer_IR;
	class InventoryFlashLightItem_Base_F;
	class acc_flashlight;
	class TFV_Rifle_Base: arifle_Mk20_F
	{
		class WeaponSlotsInfo;
	};
	class TFV_rifle_gripod_slot: UnderBarrelSlot
	{
		displayName="[TFV] Gripod slot";
		class compatibleItems
		{
			TFV_BR45Grip=1;
		};
	};
	class TFV_BR_gripod_slot: TFV_rifle_gripod_slot
	{
		linkProxy="OPTRE_Weapons\BR\OPTREGripProxy";
	};
	class TFV_BMR_Scope: optic_Aco
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		displayName="[TFV] M295 Designated Marksman Rifle A4 Scope";
		picture="\OPTRE_Weapons\br\icons\scope.paa";
		model="\OPTRE_Weapons\BR\BMR_Scope.p3d";
		descriptionShort="2-4x Scope for BMR Service Rifle";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=2;
			opticType=1;
			optics=1;
			modelOptics="\OPTRE_Weapons\BR\BMR_Scope.p3d";
			class OpticsModes
			{
				class BMR_Scope
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.0623;
					opticsZoomMax=0.0623;
					opticsZoomInit=0.0623;
					memoryPointCamera="opticView";
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
					modelOptics[]=
					{
						"\OPTRE_Weapons\DMR\M395_optic10"
					};
				};
			};
		};
		inertia=0.1;
	};
	class TFV_BMR_Laser: acc_pointer_IR
	{
		author="Article 2 Studios";
		scope=2;
		displayName="[TFV] UNSC MEQ-7 Infrared Target Pointer";
		descriptionUse="$STR_A3_cfgWeapons_use_pointer_IR0";
		picture="\A3\weapons_F\Data\UI\gear_accv_pointer_CA.paa";
		model="\OPTRE_Weapons\br\BMR_Laser.p3d";
		descriptionShort="MEQ-7";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=6;
			class Pointer
			{
				irLaserPos="laser";
				irLaserEnd="laser_dir";
				irDistance=5;
			};
			class FlashLight
			{
			};
		};
		inertia=0.1;
	};
	class TFV_BMR_Flashlight: acc_flashlight
	{
		author="Article 2 Studios";
		scope=2;
		displayName="[TFV] UNSC Tactical Flashlight";
		descriptionUse="$STR_A3_cfgWeapons_use_pointer_IR0";
		picture="\A3\weapons_F\Data\UI\gear_accv_pointer_CA.paa";
		model="\OPTRE_Weapons\br\BMR_Flashlight.p3d";
		descriptionShort="Flashlight";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=4;
			class FlashLight
			{
				color[]={180,160,130};
				ambient[]={0.89999998,0.81,0.69999999};
				intensity=100;
				size=1;
				innerAngle=5;
				outerAngle=100;
				coneFadeCoef=8;
				position="flash_dir";
				direction="flash";
				useFlare=1;
				flareSize=1.4;
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
	class TFV_BR55HB_Scope: optic_Aco
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		displayName="[TFV] BR55 A2 Scope";
		picture="\OPTRE_Weapons\br\icons\scope.paa";
		model="\OPTRE_Weapons\BR\BR_Scope.p3d";
		descriptionShort="2-4x Scope for BR55HB Service Rifle";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=2;
			opticType=1;
			optics=1;
			modelOptics="\OPTRE_Weapons\BR\BR_Scope.p3d";
			class OpticsModes
			{
				class BR55HB_BUIS
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
				class BR55HB_Scope: BR55HB_BUIS
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
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"\OPTRE_Weapons\BR\BR55_Optic_2x.p3d",
						"\OPTRE_Weapons\BR\BR55_Optic_4x.p3d"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
			};
		};
		inertia=0.1;
	};
	class TFV_BR45_Scope: TFV_BR55HB_Scope
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		displayName="[TFV] BR45 A3 Scope";
		picture="\OPTRE_Weapons\br\icons\scope.paa";
		model="\OPTRE_Weapons\BR\BR_Scope_V2.p3d";
		descriptionShort="2-4x Scope for Short to Medium Engagements";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=2;
			opticType=1;
			optics=1;
			modelOptics="\OPTRE_Weapons\BR\BR_Scope_V2.p3d";
			class OpticsModes
			{
				class BR55HB_BUIS
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.27500001;
					opticsZoomMax=0.99000001;
					opticsZoomInit=0.75;
					memoryPointCamera="opticView2";
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					discreteDistance[]={50,100,150,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=1000;
					cameraDir="";
				};
				class BR55HB_Scope: BR55HB_BUIS
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
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"\OPTRE_Weapons\BR\BR45_Optic_2x.p3d",
						"\OPTRE_Weapons\BR\BR45_Optic_4x.p3d"
					};
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
				};
			};
		};
		inertia=0.1;
	};
	class TFV_BR55HB: TFV_Rifle_Base
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		scopeArsenal=2;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\BR\data\anim\br55_handpos.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\Handanim_M395_Spartan.rtm"
		};
		reloadAction="GestureReloadBR55";
		model="\OPTRE_Weapons\BR\BRHB";
		displayName="[TFV] BR55HB Battle Rifle";
		magazines[]=
		{
			"TFV_36Rnd_95x40_Mag",
			"TFV_36Rnd_95x40_Mag_Tracer",
			"TFV_36Rnd_95x40_Mag_Tracer_Yellow"
		};
		magazineWell[]={};
		descriptionShort="UNSC Battle Rifle";
		picture="\OPTRE_Weapons\br\icons\br.paa";
		recoil="recoil_mx";
		baseWeapon="TFV_BR55HB";
		cursor="OPTRE_BR55";
		pictureWire="\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\BattleRifle\BR_SCOPE.paa";
		ODST_1="OPTRE_ODST_HUD_AmmoCount_BR";
		Glasses="OPTRE_GLASS_HUD_AmmoCount_BR";
		Eye="OPTRE_EYE_HUD_AmmoCount_BR";
		HUD_BulletInARows=2;
		HUD_TotalPosibleBullet=36;
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
					"acc_pointer_IR",
					"acc_flashlight"
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
			"Burst"
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
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-01.ogg",
					1,
					1,
					2000
				};
				begin2[]=
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-02.ogg",
					1,
					1,
					2000
				};
				begin3[]=
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-03.ogg",
					1,
					1,
					2000
				};
				begin4[]=
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-04.ogg",
					1,
					1,
					2000
				};
				begin5[]=
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-05.ogg",
					1,
					1,
					2000
				};
				begin6[]=
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-06.ogg",
					1,
					1,
					2000
				};
				begin7[]=
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-07.ogg",
					1,
					1,
					2000
				};
				begin8[]=
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-08.ogg",
					1,
					1,
					2000
				};
				begin9[]=
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-09.ogg",
					1,
					1,
					2000
				};
				begin10[]=
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-10.ogg",
					1,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					0.1,
					"begin2",
					0.1,
					"begin3",
					0.1,
					"begin4",
					0.1,
					"begin5",
					0.1,
					"begin6",
					0.1,
					"begin7",
					0.1,
					"begin8",
					0.1,
					"begin9",
					0.1,
					"begin10",
					0.1
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
			reloadTime=0.075000003;
			dispersion=0.00075000001;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.050000001;
		};
		class Burst: Mode_Burst
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
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-01.ogg",
					1,
					1,
					2000
				};
				begin2[]=
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-02.ogg",
					1,
					1,
					2000
				};
				begin3[]=
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-03.ogg",
					1,
					1,
					2000
				};
				begin4[]=
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-04.ogg",
					1,
					1,
					2000
				};
				begin5[]=
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-05.ogg",
					1,
					1,
					2000
				};
				begin6[]=
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-06.ogg",
					1,
					1,
					2000
				};
				begin7[]=
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-07.ogg",
					1,
					1,
					2000
				};
				begin8[]=
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-08.ogg",
					1,
					1,
					2000
				};
				begin9[]=
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-09.ogg",
					1,
					1,
					2000
				};
				begin10[]=
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-10.ogg",
					1,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					0.1,
					"begin2",
					0.1,
					"begin3",
					0.1,
					"begin4",
					0.1,
					"begin5",
					0.1,
					"begin6",
					0.1,
					"begin7",
					0.1,
					"begin8",
					0.1,
					"begin9",
					0.1,
					"begin10",
					0.1
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
			reloadTime=0.075000003;
			dispersion=0.00085000001;
			recoil="recoil_auto_trg";
			recoilProne="recoil_auto_prone_trg";
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.050000001;
			soundBurst=0;
			burst=3;
		};
	};
	class TFV_BR55: TFV_BR55HB
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		model="\OPTRE_Weapons\BR\BR";
		displayName="[TFV] BR55 Battle Rifle";
		baseWeapon="TFV_BR55";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=45;
		};
		class Single: Single
		{
			reloadTime=0.064999998;
		};
		class Burst: Burst
		{
			reloadTime=0.064999998;
		};
	};
	class TFV_BR45: TFV_BR55
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		model="\OPTRE_Weapons\BR\BR45";
		displayName="[TFV] BR45B Battle Rifle";
		baseWeapon="TFV_BR45";
		cursor="OPTRE_BR45";
		TFV_grip1="br_anim";
		modes[]=
		{
			"FullAuto",
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
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle_1.wss",
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
			reloadTime=0.075000003;
			dispersion=0.00075000001;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=600;
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
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle_1.wss",
					1,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					0.5
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
			reloadTime=0.075000003;
			dispersion=0.00085000001;
			recoil="recoil_auto_trg";
			recoilProne="recoil_auto_prone_trg";
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.050000001;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=45;
			allowedSlots[]={901};
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
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]=
				{
					"bipod_01_F_blk",
					"bipod_02_F_blk",
					"bipod_03_F_blk"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_IR",
					"acc_flashlight",
					"TFV_BMR_Laser"
				};
			};
			class GripodSlot: TFV_BR_gripod_slot
			{
			};
		};
	};
	class TFV_BR37: TFV_BR55HB
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		scopeArsenal=2;
		baseWeapon="TFV_BR37";
		displayName="[TFV] BR37 Battle Rifle";
		descriptionShort="BR37 Battle Rifle";
		model="OPTRE_Weapons\BR\BR37.p3d";
		picture="\OPTRE_Weapons\br\icons\br.paa";
		magazines[]=
		{
			"TFV_10RND_338_SP",
			"TFV_10RND_338_VLD",
			"TFV_10RND_338_AP"
		};
		ODST_1="OPTRE_ODST_HUD_AmmoCount_BR";
		Glasses="OPTRE_GLASS_HUD_AmmoCount_BR";
		Eye="OPTRE_EYE_HUD_AmmoCount_BR";
		HUD_BulletInARows=1;
		HUD_TotalPosibleBullet=10;
		modes[]=
		{
			"single"
		};
		cursor="OPTRE_M392";
		dispersion=9.9999997e-006;
		maxZeroing=1500;
		magazineWell[]={};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\BR\data\anim\br55_handpos.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\Handanim_M395_Spartan.rtm"
		};
		class single: Mode_SemiAuto
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
		};
	};
	class TFV_BR45Grip: bipod_01_F_blk
	{
		scope=2;
		model="OPTRE_Weapons\br\BR45Grip";
		displayName="[TFV] Grip Pod";
		descriptionShort="BR45 Rail Grip System";
		class ItemInfo
		{
			deployedPivot="bipod";
			hasBipod=0;
			mass=10;
			type=302;
		};
		inertia=-0.40000001;
		type=131072;
		grip_type="TFV_grip1";
	};
	class TFV_BR55HB_ScopedRifle: TFV_BR55HB
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
				item="TFV_BR55HB_Scope";
			};
		};
	};
};
