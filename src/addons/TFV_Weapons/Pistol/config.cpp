class CfgPatches
{
	class TFV_Weapons_Pistol
	{
		units[]={};
		weapons[]=
		{
			"TFV_M6G_Flashlight",
			"TFV_M6G_Scope",
			"TFV_M6_silencer",
			"TFV_M6C_compensator",
			"TFV_M6C_Laser",
			"TFV_M6G",
			"TFV_M6C",
			"TFV_M6G_SF",
			"TFV_muzzleFlash_suppressed",
			"TFV_M6C_Scope"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Core",
			"OPTRE_Weapons"
		};
	};
};
class CfgRecoils
{
	M6G_recoil[]=
	{
		0,
		0,
		0,
		0.029999999,
		"0.036943*(2)",
		"0.0134348*(4)",
		0.090000004,
		"0.019755*(2)",
		"0.003056*(4)",
		0.12,
		0,
		0,
		0.18000001,
		"-0.003138*(2)",
		"-0.0005*(4)",
		0.12,
		"-0.001177*(2)",
		"-0.000188*(4)",
		0.12,
		0,
		0
	};
	M6G_recoilProne[]=
	{
		0,
		0,
		0,
		0.029999999,
		"0.036943*(1.5)",
		"0.0134348*(2)",
		0.090000004,
		"0.019755*(1.5)",
		"0.003056*(2)",
		0.12,
		0,
		0,
		0.18000001,
		"-0.003138*(1.5)",
		"-0.0005*(2)",
		0.12,
		"-0.001177*(1.5)",
		"-0.000188*(2)",
		0.12,
		0,
		0
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
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class optic_Aco;
	class acc_pointer_IR;
	class muzzle_snds_acp;
	class hgun_Pistol_heavy_01_F;
	class TFV_Handgun_Base: hgun_Pistol_heavy_01_F
	{
		class WeaponSlotsInfo;
	};
	class TFV_muzzleFlash_suppressed: ItemCore
	{
		scope=2;
		model="A3\Data_f\proxies\muzzle_flash\muzzle_flash_suppressor.p3d";
	};
	class TFV_M6G_Flashlight: ItemCore
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M6G Flashlight";
		picture="\OPTRE_Weapons\pistol\icons\flashlight.paa";
		descriptionShort="Flashlight for the M6G Handgun";
		model="\OPTRE_Weapons\Pistol\m6g_flashlight.p3d";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=1;
			class FlashLight
			{
				color[]={180,156,120};
				ambient[]={0.89999998,0.77999997,0.60000002};
				intensity=5;
				size=1;
				innerAngle=20;
				outerAngle=80;
				coneFadeCoef=5;
				position="flash dir";
				direction="flash";
				useFlare=1;
				flareSize=1.4;
				flareMaxDistance="100.0f";
				dayLight=0;
				class Attenuation
				{
					start=0.5;
					constant=0;
					linear=0;
					quadratic=1.1;
					hardLimitStart=20;
					hardLimitEnd=30;
				};
				scale[]={0};
			};
		};
		inertia=0.1;
	};
	class TFV_M6G_Scope: optic_Aco
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M6G KFA-2 SmartLink Scope";
		picture="\OPTRE_Weapons\pistol\icons\scope.paa";
		model="\OPTRE_Weapons\Pistol\m6g_scope.p3d";
		descriptionShort="KFA-2 2x SmartLink Scope for M6G Magnum";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=1;
			opticType=1;
			optics=1;
			modelOptics="\OPTRE_Weapons\Pistol\m6g_scope.p3d";
			class OpticsModes
			{
				class TFV_M6G_BUIS
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.40000001;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="opticView2";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
				class TFV_M6G_BUISZoom: TFV_M6G_BUIS
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.125;
					opticsZoomMax=0.052499998;
					opticsZoomInit=0.125;
					discretefov[]={0.125};
					discreteInitIndex=0;
					discreteDistance[]={50,100,150};
					discreteDistanceInitIndex=0;
					modelOptics[]=
					{
						"\OPTRE_Weapons\Pistol\M6G_Optic_2x"
					};
					memoryPointCamera="opticView2";
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
			};
		};
		inertia=0.1;
	};
	class TFV_M6C_Scope: TFV_M6G_Scope
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M6C VnSLS/V 6E SmartLink Scope";
		picture="\OPTRE_Weapons\pistol\icons\scope.paa";
		model="\OPTRE_Weapons\Pistol\m6c_scope.p3d";
		descriptionShort="VnSLS/V 6E 4x SmartLink Scope for M6C Magnum";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=1;
			opticType=1;
			optics=1;
			modelOptics="\OPTRE_Weapons\Pistol\m6c_scope.p3d";
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
					opticsZoomMin=0.40000001;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					modelOptics[]=
					{
						"\OPTRE_Weapons\Pistol\M6C_Optic_2x"
					};
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
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.125;
					opticsZoomMax=0.052499998;
					opticsZoomInit=0.125;
					discretefov[]={0.125};
					discreteInitIndex=0;
					discreteDistance[]={50,100,150};
					discreteDistanceInitIndex=0;
					modelOptics[]=
					{
						"\OPTRE_Weapons\Pistol\M6C_Optic_2x"
					};
					memoryPointCamera="opticView2";
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
			};
		};
		inertia=0.1;
	};
	class TFV_M6_silencer: muzzle_snds_acp
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M6 Series Suppressor";
		model="\OPTRE_Weapons\Pistol\m6c_silencer.p3d";
		descriptionShort="M6 Series Suppressor";
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
	class TFV_M6C_compensator: muzzle_snds_acp
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M6C Compensator";
		model="\OPTRE_Weapons\Pistol\m6c_comp.p3d";
		descriptionShort="M6C Compensator";
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
				airFriction=0.80000001;
				visibleFire=0.75;
				audibleFire=0.75;
				visibleFireTime=0.5;
				audibleFireTime=0.5;
				cost=1;
			};
			muzzleEnd="zaslehPoint";
			alternativeFire="TFV_muzzleFlash_suppressed";
			soundTypeIndex=2;
			class MuzzleCoef
			{
				dispersionCoef="0.75f";
				artilleryDispersionCoef=1;
				fireLightCoef="0.1f";
				recoilCoef="0.25f";
				recoilProneCoef="0.25f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
	};
	class TFV_M6C_Laser: acc_pointer_IR
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M6C Laser Aiming Module";
		descriptionShort="IR Laser for the M6C Handgun";
		model="\OPTRE_Weapons\pistol\m6c_lam.p3d";
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
	class TFV_M6G: TFV_Handgun_Base
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		scopeArsenal=2;
		model="\OPTRE_Weapons\Pistol\m6g.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Weapons\Pistol\data\M6G_CO.paa"
		};
		displayName="[TFV] M6G Magnum";
		descriptionShort="12.7x40mm Magnum Pistol";
		picture="\OPTRE_Weapons\pistol\icons\pistol_a.paa";
		magazines[]=
		{
			"TFV_8Rnd_127x40_Mag",
			"TFV_8Rnd_127x40_Mag_Tracer",
			"TFV_8Rnd_127x40_AP_Mag"
		};
		magazineWell[]={};
		recoil="recoil_pistol_zubr";
		baseWeapon="TFV_M6G";
		cursor="OPTRE_M6G";
		pictureWire="\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Pistols\M6F_IRON.paa";
		ODST_1="OPTRE_ODST_HUD_AmmoCount_PistolSmart";
		Glasses="OPTRE_GLASS_HUD_AmmoCount_PistolSmart";
		Eye="OPTRE_EYE_HUD_AmmoCount_PistolSmart";
		HUD_BulletInARows=1;
		HUD_TotalPosibleBullet=8;
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
			mass=20;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"TFV_M6_silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"TFV_M6G_Scope"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"TFV_M6G_Flashlight"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[]={};
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
				closure1[]=
				{
					"",
					1,
					1,
					200
				};
				closure2[]=
				{
					"",
					1,
					1,
					200
				};
				soundClosure[]=
				{
					"closure1",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\OPTRE_Weapons\Pistol\data\sounds\Magnum_1.wss",
					1.3,
					1,
					200
				};
				begin2[]=
				{
					"\OPTRE_Weapons\Pistol\data\sounds\Magnum_2.wss",
					1.3,
					1,
					200
				};
				soundBegin[]=
				{
					"begin1",
					1,
					"begin1",
					1
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_interior",
							1.4125376,
							1,
							1400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_trees",
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
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_forest",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_meadows",
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
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_houses",
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
					"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_01",
					1,
					1,
					600
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_02",
					1,
					1,
					600
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_03",
					1,
					1,
					600
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin2",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_interior",
							1,
							1,
							600
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_trees",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_forest",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_meadows",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_houses",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.25;
			dispersion=4.9999999e-005;
			minRange=10;
			minRangeProbab=0.25;
			midRange=25;
			midRangeProbab=0.1;
			maxRange=100;
			maxRangeProbab=0.050000001;
			distanceZoomMin=100;
			distanceZoomMax=100;
			recoil="recoil_pistol_heavy";
			recoilProne="recoil_prone_pistol_heavy";
		};
	};
	class TFV_M6C: TFV_M6G
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		model="\OPTRE_Weapons\Pistol\m6c.p3d";
		displayName="[TFV] M6C Handgun";
		descriptionShort="12.7x40mm Handgun";
		picture="\OPTRE_Weapons\pistol\icons\pistol_a.paa";
		magazines[]=
		{
			"TFV_12Rnd_127x40_Mag",
			"TFV_12Rnd_127x40_Mag_Tracer",
			"TFV_16Rnd_127x40_Mag",
			"TFV_16Rnd_127x40_Mag_Tracer"
		};
		recoil="recoil_pistol_zubr";
		baseWeapon="TFV_M6C";
		cursor="OPTRE_M6C";
		pictureWire="\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Pistols\M6F_IRON.paa";
		ODST_1="OPTRE_ODST_HUD_AmmoCount_PistolODST";
		Glasses="OPTRE_GLASS_HUD_AmmoCount_PistolODST";
		Eye="OPTRE_EYE_HUD_AmmoCount_PistolSmart";
		HUD_BulletInARows=1;
		HUD_TotalPosibleBullet=16;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=16;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"TFV_M6C_compensator",
					"TFV_M6_silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"TFV_M6C_Scope"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"TFV_M6C_Laser"
				};
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound",
				"CompSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"",
					1,
					1,
					200
				};
				closure2[]=
				{
					"",
					1,
					1,
					200
				};
				soundClosure[]=
				{
					"closure1",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\OPTRE_Weapons\Pistol\data\sounds\Magnum_1.wss",
					1.3,
					1,
					200
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
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_interior",
							1.4125376,
							1,
							1400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_trees",
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
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_forest",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_meadows",
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
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_houses",
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
					"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_01",
					1,
					1,
					600
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_02",
					1,
					1,
					600
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_03",
					1,
					1,
					600
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin2",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_interior",
							1,
							1,
							600
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_trees",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_forest",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_meadows",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_houses",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class CompSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_01",
					1,
					1,
					600
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_02",
					1,
					1,
					600
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_03",
					1,
					1,
					600
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
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_interior",
							1,
							1,
							600
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_trees",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_forest",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_meadows",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_houses",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.025;
			minRange=10;
			minRangeProbab=0.5;
			midRange=25;
			midRangeProbab=0.1;
			maxRange=100;
			maxRangeProbab=0.050000001;
			distanceZoomMin=100;
			distanceZoomMax=100;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
		};
	};
	class TFV_M6G_SF: TFV_M6G
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=1;
		scopeArsenal=1;
		picture="\OPTRE_Weapons\pistol\icons\pistol_b.paa";
		pictureWire="\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Pistols\M6G_SMART.paa";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="TFV_M6G_Scope";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="TFV_M6G_Flashlight";
			};
		};
	};
	class TFV_M6C_SF: TFV_M6C
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
				item="TFV_M6C_Scope";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="TFV_M6C_compensator";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="TFV_M6C_Laser";
			};
		};
	};
};
