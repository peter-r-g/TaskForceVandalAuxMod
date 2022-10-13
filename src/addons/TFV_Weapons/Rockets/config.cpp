class CfgPatches
{
	class TFV_Weapons_Rockets
	{
		units[]={};
		weapons[]=
		{
			"TFV_M41_SSR",
			"TFV_M41_SSR_G"
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
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class TFV_UnguidedLauncher_Base;
	class TFV_GuidedATLauncher_Base;
	class TFV_GuidedAALauncher_Base;
	class TFV_M41_SSR: TFV_UnguidedLauncher_Base
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		scopeArsenal=2;
		displayname="[TFV] M41 SSR MAV/AW";
		descriptionshort="Surface-to-Surface Rocket Medium Anti-Vehicle/Assault Weapon";
		magazines[]=
		{
			"TFV_M41_Twin_HEAT",
			"TFV_M41_Twin_HEAP",
			"TFV_M41_Twin_HEAT_G",
			"TFV_M41_Twin_HE",
			"TFV_M41_Twin_HEAT_SALH",
			"TFV_M41_Twin_HEAT_SACLOS",
			"TFV_M41_Twin_HEAT_Thermal",
			"TFV_M41_Twin_HE_SALH_ProximityFuse",
			"TFV_M41_Twin_HE_SACLOS_ProximityFuse",
			"TFV_M41_Twin_HE_Thermal_ProximityFuse",
			"TFV_M41_Twin_Smoke_W",
			"TFV_M41_Twin_Smoke_B",
			"TFV_M41_Twin_Smoke_R",
			"TFV_M41_Twin_Smoke_G",
			"TFV_M41_Twin_Smoke_O",
			"TFV_M41_Twin_Smoke_P",
			"TFV_M41_Twin_Smoke_Y"
		};
		magazineWell[]={};
		picture="\TFV_Weapons\rockets\icons\launcher.paa";
		model="\TFV_Weapons\Rockets\M41_launcher_loaded.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\TFV_Weapons\Rockets\Data\Anim\m41_hand_anim.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\m41_hand_anim_Spartan.rtm"
		};
		modelOptics[]=
		{
			"\TFV_Weapons\Rockets\M41_Optic_2x.p3d",
			"\TFV_Weapons\Rockets\M41_Optic_4x.p3d",
			"\TFV_Weapons\Rockets\M41_Optic_10x.p3d"
		};
		baseWeapon="TFV_M41_SSR";
		cursor="OPTRE_M41R";
		pictureWire="\TFV_Weapons\data\Pictures\WireWeaponIcons\Launchers\Double.paa";
		ODST_1="OPTRE_ODST_HUD_AmmoCount_RL";
		Glasses="OPTRE_GLASS_HUD_AmmoCount_RL";
		Eye="OPTRE_EYE_HUD_AmmoCount_RL";
		HUD_BulletInARows=2;
		HUD_TotalPosibleBullet=2;
		class WeaponSlotsInfo
		{
			mass=125;
		};
		class GunParticles
		{
			class effect1
			{
				positionName="muzzleEnd2";
				directionName="muzzlePos2";
				effectName="RocketBackEffectsNLAWNT";
			};
		};
		class OpticsModes
		{
			class StepScope
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsFlare=0;
				opticsZoomMin=0.125;
				opticsZoomMax=0.041999999;
				opticsZoomInit=0.125;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				cameraDir="look";
				visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				thermalMode[]={0,1};
				opticsDisablePeripherialVision=1;
				discretefov[]={0.125,0.052499998,0.041999999};
				discreteInitIndex=0;
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
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"TFV_Weapons\Rockets\data\sounds\rocket_1.wss",
					2.5,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			recoil="recoil_single_law";
			reloadtime=1;
			aiRateOfFire=7;
			aiRateOfFireDistance=600;
			minRange=10;
			minRangeProbab=0.30000001;
			midRange=400;
			midRangeProbab=0.80000001;
			maxRange=600;
			maxRangeProbab=0.1;
		};
		canLock=2;
		weaponLockDelay=2;
		weaponLockSystem="2 + 16";
		cmImmunity=0.25;
		lockAcquire=1;
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\locking_Titan",
			0.31622776,
			1
		};
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\locked_Titan",
			0.31622776,
			2.5
		};
	};
	class TFV_M41_SSR_G: TFV_M41_SSR
	{
		scope=2;
		dlc="OPTRE";
		author="Article 2 Studios";
		displayname="[TFV] M41 SSR MAV/AW (Guided)";
		descriptionshort="Surface-to-Surface Rocket Medium Anti-Vehicle/Assault Weapon (Guided)";
	};
};
