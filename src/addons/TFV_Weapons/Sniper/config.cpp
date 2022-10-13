class CfgPatches
{
	class TFV_Weapons_Sniper
	{
		units[]={};
		weapons[]=
		{
			"TFV_SRS99D_Suppressor",
			"TFV_SRS99_Scope",
			"TFV_SRS99C_Scope",
			"TFV_SRS99D",
			"TFV_SRS99C",
			"TFV_SRS99D_SC_LS",
			"TFV_SRS99C_SC_LS",
			"TFV_M99A2S3"
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
	class StandBase;
	class DefaultDie;
	class ManActions
	{
		OPTRE_GestureReloadSRS99C="OPTRE_GestureReloadSRS99C";
	};
	class Actions
	{
		class RifleBaseStandActions;
		class RifleAdjustProneBaseActions;
		class NoActions: ManActions
		{
			OPTRE_GestureReloadSRS99C[]=
			{
				"OPTRE_GestureReloadSRS99C",
				"Gesture"
			};
		};
		class RifleProneActions: RifleBaseStandActions
		{
			OPTRE_GestureReloadSRS99C[]=
			{
				"OPTRE_AnimReloadProne_SRS99C",
				"Gesture"
			};
		};
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			OPTRE_GestureReloadSRS99C[]=
			{
				"OPTRE_GestureReloadSRS99C_ContextAnimDrive",
				"Gesture"
			};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			OPTRE_GestureReloadSRS99C[]=
			{
				"OPTRE_GestureReloadSRS99C_Context",
				"Gesture"
			};
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			OPTRE_GestureReloadSRS99C[]=
			{
				"OPTRE_GestureReloadSRS99C",
				"Gesture"
			};
		};
		class DeployedProneActions: RifleProneActions
		{
			OPTRE_GestureReloadSRS99C[]=
			{
				"OPTRE_GestureReloadSRS99C",
				"Gesture"
			};
		};
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class RifleReloadProneBase;
		class OPTRE_AnimReloadProne_SRS99C: RifleReloadProneBase
		{
			file="\TFV_Weapons\sniper\data\anim\srs99c_reload.rtm";
			speed=1;
			rightHandIKCurve[]={1};
			leftHandIKCurve[]={0,1,0.050000001,0,0.94999999,0,1,1};
			weaponIK=1;
			InterpolateFrom[]=
			{
				"AmovPpneMstpSrasWrflDnon",
				0.02
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
		class OPTRE_GestureReloadSRS99C: GestureReloadBase
		{
			file="\TFV_Weapons\sniper\data\anim\srs99c_reload.rtm";
			speed=1;
			rightHandIKCurve[]={1};
			leftHandIKCurve[]={0,1,0.050000001,0,0.94999999,0,1,1};
			weaponIK=1;
		};
		class OPTRE_GestureReloadSRS99C_Context: OPTRE_GestureReloadSRS99C
		{
			mask="handsWeapon_context";
		};
		class OPTRE_GestureReloadSRS99C_ContextAnimDrive: OPTRE_GestureReloadSRS99C_Context
		{
			mask="handsWeapon_context";
		};
		class OPTRE_GestureReloadSRS99C_prone: OPTRE_GestureReloadSRS99C
		{
			file="\TFV_Weapons\sniper\data\anim\srs99c_reload.rtm";
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
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class srifle_EBR_F;
	class TFV_LongRifle_Base: srifle_EBR_F
	{
		class WeaponSlotsInfo;
	};
	class TFV_SRS99D_Suppressor: muzzle_snds_acp
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		displayName="[TFV] SRS99D Suppressor";
		picture="\TFV_Weapons\smg\icons\silencer.paa";
		model="\TFV_Weapons\Sniper\SRS99D_Sup.p3d";
		descriptionShort="SRS99D Suppressor";
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
	class TFV_SRS99_Scope: optic_Aco
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		displayName="[TFV] Oracle N-variant SRS99D Scope";
		picture="\TFV_Weapons\sniper\icons\scope.paa";
		model="\TFV_Weapons\Sniper\SRS99D_Scope.p3d";
		descriptionShort="Oracle N-variant SRS99D Sniper Rifle 5-10x56 Scope";
		weaponInfoType="RscOptics_nightstalker";
		modelOptics="\TFV_Weapons\Sniper\SRS99D_Scope.p3d";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=1;
			opticType=1;
			optics=1;
			modelOptics="\TFV_Weapons\Sniper\SRS99D_Scope.p3d";
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
					discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=2000;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"\TFV_Weapons\Sniper\Sniper_Oracle10_Optic"
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
	class TFV_SRS99C_Scope: TFV_SRS99_Scope
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		displayName="[TFV] Oracle N-variant SRS99C Scope";
		picture="\TFV_Weapons\sniper\icons\scope2.paa";
		model="\TFV_Weapons\Sniper\SRS99C_Scope.p3d";
		descriptionShort="Oracle N-variant SRS99C Sniper Rifle 5-10x56 Scope";
		modelOptics="\TFV_Weapons\Sniper\SRS99C_Scope.p3d";
		class ItemInfo: ItemInfo
		{
			modelOptics="\TFV_Weapons\Sniper\SRS99C_Scope.p3d";
		};
	};
	class TFV_M99A2S3: TFV_LongRifle_Base
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		scopeArsenal=2;
		_generalMacro="TFV_M99A2S3";
		baseWeapon="TFV_M99A2S3";
		displayName="[TFV] M99A2S3 Stanchion";
		description="UNSC M99A2S3 stanchion gauss rifle";
		descriptionShort="UNSC M99A2S3 stanchion gauss rifle";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		model="\TFV_Weapons\Sniper\M99";
		HUD_BulletInARows=7;
		HUD_TotalPosibleBullet=7;
		modelOptics="\TFV_Weapons\Sniper\Sniper_Oracle10_Optic";
		opticType=1;
		optics=1;
		opticsID=1;
		useModelOptics=1;
		opticsZoomMin=0.0099999998;
		opticsZoomMax=0.25;
		opticsZoomInit=0.25;
		opticsFlare=1;
		opticsDisablePeripherialVision=1;
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
		discretefov[]={0.25,0.050000001,0.025,0.0099999998};
		discreteinitIndex=0;
		discreteDistance[]={50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000};
		discreteDistanceInitIndex=1;
		distanceZoomMin=100;
		distanceZoomMax=2000;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=220;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]={};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[]={};
			};
		};
		magazines[]=
		{
			"TFV_7Rnd_20mm_APFSDS_Mag",
			"TFV_7Rnd_20mm_HEDP_Mag"
		};
		magazineWell[]=
		{
			"TFV_M99A2S3_Magwell"
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
					"\TFV_Weapons\Sniper\data\sounds\SRS99-01.ogg",
					2,
					1,
					3000
				};
				begin2[]=
				{
					"\TFV_Weapons\Sniper\data\sounds\SRS99-02.ogg",
					2,
					1,
					3000
				};
				begin3[]=
				{
					"\TFV_Weapons\Sniper\data\sounds\SRS99-03.ogg",
					2,
					1,
					3000
				};
				soundBegin[]=
				{
					"begin1",
					0.40000001,
					"begin2",
					0.30000001,
					"begin3",
					0.30000001
				};
			};
			reloadTime=1;
			dispersion=0;
			recoil="recoil_single_gm6";
			recoilProne="recoil_single_gm6";
			minRange=2;
			minRangeProbab=0.25;
			midRange=800;
			midRangeProbab=0.75;
			maxRange=2000;
			maxRangeProbab=0.25;
		};
	};
	class TFV_SRS99D: TFV_LongRifle_Base
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		scopeArsenal=2;
		model="\TFV_Weapons\Sniper\SRS99D.p3d";
		displayName="[TFV] SRS99D-S2 Sniper Rifle";
		descriptionShort="UNSC Sniper Rifle";
		picture="\TFV_Weapons\sniper\icons\sniper.paa";
		magazines[]=
		{
			"TFV_4Rnd_145x114_APFSDS_Mag",
			"TFV_4Rnd_145x114_HVAP_Mag",
			"TFV_4Rnd_145x114_HEDP_Mag"
		};
		magazineWell[]={};
		maxZeroing=2000;
		discreteDistance[]={1};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\TFV_Weapons\Sniper\data\anim\srs99D_handpos.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\srs99D_Spartan_handpos.rtm"
		};
		reloadAction="GestureReloadLRR";
		hasBipod=1;
		reloadMagazineSound[]=
		{
			"\TFV_Weapons\Sniper\data\anim\srs99c_reload.wss",
			1,
			1,
			10
		};
		recoil="recoil_gm6";
		baseWeapon="TFV_SRS99D";
		selectionFireAnim="zasleh";
		cursor="OPTRE_SRS99";
		pictureWire="\TFV_Weapons\data\Pictures\WireWeaponIcons\Prime\Sniper\SNIPER.paa";
		ODST_1="OPTRE_ODST_HUD_AmmoCount_Snipor";
		Glasses="OPTRE_GLASS_HUD_AmmoCount_Snipor";
		Eye="OPTRE_ODST_EYE_AmmoCount_Snipor";
		HUD_BulletInARows=4;
		HUD_TotalPosibleBullet=4;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"TFV_Weapons\Sniper\data\SRS99D_CO.paa"
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName="SniperCloud";
				positionName="Usti hlavne";
				directionName="Konec hlavne";
			};
			class EffectShotCloud
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"TFV_SRS99D_Suppressor"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
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
					"optic_DMS_ghex_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"TFV_SRS99_Scope"
				};
			};
			class PointerSlot
			{
				compatibleitems[]={};
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
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"TFV_SRS99_Soundset_Shots"
				};
			};
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
			reloadTime=0.34999999;
			dispersion=0.00015000001;
			recoil="recoil_single_gm6";
			recoilProne="recoil_single_gm6";
			minRange=2;
			minRangeProbab=0.25;
			midRange=800;
			midRangeProbab=0.75;
			maxRange=2000;
			maxRangeProbab=0.25;
		};
	};
	class TFV_SRS99C: TFV_SRS99D
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		model="\TFV_Weapons\Sniper\SRS99C.p3d";
		displayName="[TFV] SRS99C-S2 AM Sniper Rifle";
		picture="\TFV_Weapons\sniper\icons\sniper2.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\TFV_Weapons\Sniper\data\anim\srs99c_handpos.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\srs99C_Spartan_handpos.rtm"
		};
		reloadAction="GestureReloadLRR";
		baseWeapon="TFV_SRS99C";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"TFV_Weapons\Sniper\data\mainbody_co.paa",
			"TFV_Weapons\Sniper\data\mag_co.paa"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]={};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
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
					"optic_DMS_ghex_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"TFV_SRS99C_Scope"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[]={};
			};
		};
	};
	class TFV_SRS99D_SC_LS: TFV_SRS99D
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
				item="TFV_SRS99_Scope";
			};
		};
	};
	class TFV_SRS99C_SC_LS: TFV_SRS99C
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
				item="TFV_SRS99C_Scope";
			};
		};
	};
};
class cfgSoundShaders
{
	class TFV_SRS99_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"TFV_Weapons\Sniper\data\sounds\SRS99-01_C.wav",
				1
			}
		};
		volume=0.44668359;
		range=5;
	};
	class TFV_SRS99_CloseShot_SoundShader
	{
		samples[]=
		{
			
			{
				"TFV_Weapons\Sniper\data\sounds\SRS99-02_C.wav",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class TFV_SRS99_CloseShot2_SoundShader
	{
		samples[]=
		{
			
			{
				"TFV_Weapons\Sniper\data\sounds\SRS99-03_C.wav",
				1
			}
		};
		volume=1;
		range=100;
		rangeCurve="closeShotCurve";
	};
	class TFV_SRS99_MidShot_SoundShader
	{
		samples[]=
		{
			
			{
				"TFV_Weapons\Sniper\data\sounds\SRS99_T_Med.wav",
				1
			}
		};
		volume=0.79432821;
		range=1800;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1800,0}
		};
	};
	class TFV_SRS99_FarShot_SoundShader
	{
		samples[]=
		{
			
			{
				"TFV_Weapons\Sniper\data\sounds\SRS99_T_Far.wav",
				1
			}
		};
		volume=1;
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{1800,1}
		};
	};
};
class cfgSoundSets
{
	class TFV_SRS99_Soundset_Shots
	{
		soundShaders[]=
		{
			"TFV_SRS99_Closure_SoundShader",
			"TFV_SRS99_CloseShot_SoundShader",
			"TFV_SRS99_CloseShot2_SoundShader",
			"TFV_SRS99_MidShot_SoundShader",
			"TFV_SRS99_FarShot_SoundShader"
		};
		volumeFactor=1.6;
		volumeCurve="InverseSquare2Curve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="weaponShotDistanceFreqAttenuationFilter";
		spatial=1;
		doppler=0;
		loop=0;
	};
};
class cfgMagazinewells
{
	class TFV_M99A2S3_Magwell
	{
		TFVMags[]=
		{
			"TFV_7Rnd_20mm_APFSDS_Mag",
			"TFV_7Rnd_20mm_HEDP_Mag"
		};
	};
};
