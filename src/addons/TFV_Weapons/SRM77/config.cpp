class CfgPatches
{
	class TFV_Weapons_SRM77
	{
		units[]={};
		weapons[]=
		{
			"TFV_SRM77_S1",
			"TFV_SRM77_S2"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Core",
			"OPTRE_Weapons",
			"A3_Weapons_F"
		};
		magazines[]={};
	};
};
class CfgNonAIVehicles
{
	class ProxyWeapon;
	class ProxyMagazine: ProxyWeapon
	{
		model="\OPTRE_Weapons\SRM77\SRM77_10rnd_Mag.p3d";
		simulation="magazine";
	};
};
class CfgMagazines
{
	class TFV_8Rnd_127x40_Mag;
	class TFV_10Rnd_127x99: TFV_8Rnd_127x40_Mag
	{
		dlc="OPTRE";
		modelSpecial="\OPTRE_Weapons\SRM77\SRM77_10rnd_Mag.p3d";
		modelSpecialIsProxy=1;
		model="\OPTRE_Weapons\SRM77\SRM77_10rnd_Mag.p3d";
		displayName="[TFV] 10Rnd SRM77 Magazine";
		displayNameShort="12.7x99";
		picture="\OPTRE_Weapons\br\icons\magazine.paa";
		ammo="TFV_B_127x99_Ball";
		initSpeed=900;
		count=10;
		tracersEvery=0;
		lastRoundsTracer=8;
	};
	class TFV_5Rnd_127x99: TFV_10Rnd_127x99
	{
		modelSpecial="\OPTRE_Weapons\SRM77\SRM77_5rnd_Mag.p3d";
		modelSpecialIsProxy=1;
		model="\OPTRE_Weapons\SRM77\SRM77_5rnd_Mag.p3d";
		displayName="[TFV] 5Rnd SRM77 Magazine";
		count=5;
	};
};
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class optic_Aco;
	class InventoryOpticsItem_Base_F;
	class srifle_EBR_F;
	class TFV_LongRifle_Base: srifle_EBR_F
	{
		class WeaponSlotsInfo;
	};
	class TFV_SRM77_S1: TFV_LongRifle_Base
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		displayName="[TFV] SRM77 S1";
		descriptionShort="Insurrection Marksman Rifle";
		scope=2;
		scopeArsenal=2;
		model="\OPTRE_Weapons\SRM77\SRM77_S1";
		baseWeapon="TFV_SRM77_S1";
		magazines[]=
		{
			"TFV_10Rnd_127x99",
			"TFV_5Rnd_127x99"
		};
		magazineWell[]={};
		cursor="OPTRE_M392";
		HUD_BulletInARows=1;
		HUD_TotalPosibleBullet=10;
		Eye="eye";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\BR\data\anim\BR.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\Handanim_DMR_Spartan.rtm"
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					"GM6Lynx_Shot_SoundSet",
					"GM6Lynx_Tail_SoundSet",
					"GM6Lynx_InteriorTail_SoundSet"
				};
			};
			aiDispersionCoefX=1.4;
			aiDispersionCoefY=1.7;
			aiRateOfFire=3;
			aiRateOfFireDispersion=1;
			aiRateOfFireDistance=500;
			artilleryCharge=1;
			artilleryDispersion=1;
			autoFire=0;
			burst=1;
			burstRangeMax=-1;
			canShootInWater=0;
			dispersion=0.00034999999;
			displayName="[TFV] Semi";
			ffCount=1;
			ffFrequency=11;
			ffMagnitude=0.5;
			flash="gunfire";
			flashSize=0.1;
			maxRange=450;
			maxRangeProbab=0.30000001;
			midRange=150;
			midRangeProbab=0.69999999;
			minRange=2;
			minRangeProbab=0.5;
			multiplier=1;
			recoil="recoil_single_gm6";
			recoilProne="recoil_single_prone_gm6";
			reloadTime=0.93000001;
			requiredOpticType=-1;
			showToPlayer=1;
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
			mass=80;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]={};
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
					"TFV_BR45_Scope",
					"TFV_SRM_Sight"
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
				compatibleitems[]=
				{
					"bipod_01_F_blk",
					"bipod_02_F_blk",
					"bipod_03_F_blk"
				};
			};
		};
		hiddenSelections[]=
		{
			"Camo_1"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Weapons\SRM77\data\srm_black_co.paa"
		};
	};
	class TFV_SRM77_S2: TFV_SRM77_S1
	{
		displayName="[TFV] SRM77 S2";
		baseWeapon="TFV_SRM77_S2";
		model="\OPTRE_Weapons\SRM77\SRM77_S2";
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
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
			aiDispersionCoefX=1.4;
			aiDispersionCoefY=1.7;
			aiRateOfFire=3;
			aiRateOfFireDispersion=1;
			aiRateOfFireDistance=500;
			artilleryCharge=1;
			artilleryDispersion=1;
			autoFire=0;
			burst=1;
			burstRangeMax=-1;
			canShootInWater=0;
			dispersion=0.00034999999;
			displayName="[TFV] Semi";
			ffCount=1;
			ffFrequency=11;
			ffMagnitude=0.5;
			flash="gunfire";
			flashSize=0.1;
			maxRange=450;
			maxRangeProbab=0.30000001;
			midRange=150;
			midRangeProbab=0.69999999;
			minRange=2;
			minRangeProbab=0.5;
			multiplier=1;
			recoil="recoil_single_gm6";
			recoilProne="recoil_single_prone_gm6";
			reloadTime=0.93000001;
			requiredOpticType=-1;
			showToPlayer=1;
		};
	};
	class TFV_SRM_Sight: optic_Aco
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		displayName="[TFV] SRM77 Scope";
		picture="\OPTRE_Weapons\sniper\icons\scope.paa";
		model="\OPTRE_Weapons\SRM77\SRM77_Scope.p3d";
		descriptionShort="SRM77 Scope";
		weaponInfoType="RscOptics_nightstalker";
		modelOptics="\OPTRE_Weapons\SRM77\SRM77_Scope.p3d";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=1;
			opticType=1;
			optics=1;
			modelOptics="\OPTRE_Weapons\SRM77\SRM77_Scope.p3d";
			class OpticsModes
			{
				class SRM77_Scope_View
				{
					opticsID=1;
					useModelOptics=1;
					opticsZoomMin=0.5;
					opticsZoomMax=0.12;
					opticsZoomInit=0.12;
					discretefov[]=
					{
						0.050000001,
						0.025,
						"0.25 / 12"
					};
					discreteinitIndex=0;
					discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=2000;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"\OPTRE_Weapons\SRM77\SRM_77_Optic_5.p3d",
						"\OPTRE_Weapons\SRM77\SRM_77_Optic_10.p3d",
						"\OPTRE_Weapons\SRM77\SRM_77_Optic_12.p3d"
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
					thermalMode[]={0,1};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
			};
		};
		inertia=0;
	};
};
