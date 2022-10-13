class CfgPatches
{
	class TFV_weapons_Shotgun
	{
		units[]={};
		weapons[]=
		{
			"TFV_M45_Flashlight",
			"TFV_M45_Flashlight_red",
			"TFV_M45_Flashlight_green",
			"TFV_M45_Flashlight_blue",
			"TFV_M45",
			"TFV_M45E",
			"TFV_M45A",
			"TFV_M90A",
			"TFV_M45TAC",
			"TFV_M45ATAC"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Core"
		};
	};
};
class CfgRecoils
{
	M45_Recoil[]=
	{
		0,
		0,
		0,
		0.059999999,
		"36.943*((0.003))*(1)",
		"3.587*((0.008))*(1)",
		0.059999999,
		"31.817*((0.003))*(1)",
		"1.251*((0.008))*(1)",
		0.059999999,
		"19.755*((0.003))*(1)",
		"0.764*((0.008))*(1)",
		0.059999999,
		"7.388*((0.003))*(1)",
		"0.285*((0.008))*(1)",
		0.059999999,
		"0*((0.003))*(1)",
		"0*((0.008))*(1)",
		0.059999999,
		"-2.402*((0.003))*(1)",
		"-0.096*((0.008))*(1)",
		0.059999999,
		"-3.53*((0.003))*(1)",
		"-0.141*((0.008))*(1)",
		0.059999999,
		"-3.677*((0.003))*(1)",
		"-0.147*((0.008))*(1)",
		0.059999999,
		"-3.138*((0.003))*(1)",
		"-0.125*((0.008))*(1)",
		0.059999999,
		"-2.206*((0.003))*(1)",
		"-0.088*((0.008))*(1)",
		0.059999999,
		"-1.177*((0.003))*(1)",
		"-0.047*((0.008))*(1)",
		0.059999999,
		"-0.343*((0.003))*(1)",
		"-0.014*((0.008))*(1)",
		0.059999999,
		"-0.15*((0.003))*(1)",
		"0*((0.008))*(1)",
		0.059999999,
		0,
		0
	};
	M45_Recoilprone[]=
	{
		0,
		0,
		0,
		0.059999999,
		"36.943*((0.003))*(1)",
		"3.587*(0.5)*((0.008))*(1)",
		0.059999999,
		"31.817*((0.003))*(1)",
		"1.251*(0.5)*((0.008))*(1)",
		0.059999999,
		"19.755*((0.003))*(1)",
		"0.764*(0.5)*((0.008))*(1)",
		0.059999999,
		"7.388*((0.003))*(1)",
		"0.285*(0.5)*((0.008))*(1)",
		0.059999999,
		"0*((0.003))*(1)",
		"0*((0.008))*(1)",
		0.059999999,
		"-2.402*((0.003))*(1)",
		"-0.096*(0.5)*(0.5)*((0.008))*(1)",
		0.059999999,
		"-3.53*((0.003))*(1)",
		"-0.141*(0.5)*((0.008))*(1)",
		0.059999999,
		"-3.677*((0.003))*(1)",
		"-0.147*(0.5)*((0.008))*(1)",
		0.059999999,
		"-3.138*((0.003))*(1)",
		"-0.125*(0.5)*((0.008))*(1)",
		0.059999999,
		"-2.206*((0.003))*(1)",
		"-0.088*(0.5)*((0.008))*(1)",
		0.059999999,
		"-1.177*((0.003))*(1)",
		"-0.047*(0.5)*((0.008))*(1)",
		0.059999999,
		"-0.343*((0.003))*(1)",
		"-0.014*(0.5)*((0.008))*(1)",
		0.059999999,
		"-0.15*((0.003))*(1)",
		"0*((0.008))*(1)",
		0.059999999,
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
	class arifle_Mk20_F;
	class TFV_Shotgun_Base: arifle_Mk20_F
	{
		class WeaponSlotsInfo;
	};
	class TFV_M45_Flashlight: ItemCore
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M45 Flashlight";
		picture="\a3\weapons_f\data\ui\gear_accv_flashlight_ca.paa";
		descriptionShort="Flashlight for the M45 Tactical Shotgun";
		model="\TFV_weapons\Shotgun\flashlight.p3d";
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
	class TFV_M45_Flashlight_red: TFV_M45_Flashlight
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		displayName="[TFV] M45 Flashlight [Red]";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=1;
			class FlashLight
			{
				color[]={255,0,0};
				ambient[]={255,0,0};
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
	};
	class TFV_M45_Flashlight_green: TFV_M45_Flashlight
	{
		displayName="[TFV] M45 Flashlight [Green]";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=1;
			class FlashLight
			{
				color[]={0,255,0};
				ambient[]={0,255,0};
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
	};
	class TFV_M45_Flashlight_blue: TFV_M45_Flashlight
	{
		displayName="[TFV] M45 Flashlight [blue]";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=1;
			class FlashLight
			{
				color[]={0,0,255};
				ambient[]={0,0,255};
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
	};
	class TFV_M45: TFV_Shotgun_Base
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		scopeArsenal=2;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\TFV_weapons\Shotgun\data\anim\OPTRE_M45_handanim.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\benelli_Spartan.rtm"
		};
		model="\TFV_weapons\Shotgun\shotgun.p3d";
		displayName="[TFV] M45 Tactical Shotgun";
		descriptionShort="8 Gauge Shotgun";
		picture="\TFV_weapons\shotgun\icons\shotgun_black.paa";
		reloadAction="GestureReloadSMG_01";
		reloadMagazineSound[]=
		{
			"\TFV_weapons\Shotgun\data\sounds\reload.ogg",
			1.3,
			1,
			30
		};
		fireSpreadAngle=1.5;
		dispersion=4.9999999e-005;
		discreteDistance[]={50,100,200,300};
		maxZeroing=300;
		recoil="recoil_gm6";
		baseWeapon="TFV_M45";
		cursor="OPTRE_M45";
		pictureWire="\TFV_weapons\data\Pictures\WireWeaponIcons\Prime\Shotgun\Shotgun.paa";
		magazines[]=
		{
			"TFV_6Rnd_8Gauge_Pellets",
			"TFV_6Rnd_8Gauge_Slugs",
			"TFV_6Rnd_8Gauge_HEDP"
		};
		magazineWell[]={};
		ODST_1="OPTRE_ODST_HUD_AmmoCount_Shotgun";
		Glasses="OPTRE_GLASS_HUD_AmmoCount_Shotgun";
		Eye="OPTRE_EYE_HUD_AmmoCount_Shotgun";
		HUD_BulletInARows=1;
		HUD_TotalPosibleBullet=12;
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
			mass=40;
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
					"TFV_BR45_Scope"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"TFV_M45_Flashlight",
					"TFV_M45_Flashlight_red",
					"TFV_M45_Flashlight_green",
					"TFV_M45_Flashlight_blue",
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
					"\TFV_weapons\Shotgun\data\sounds\fire1.ogg",
					1.3,
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
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_forest",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_houses",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_interior",
							1.9952624,
							1,
							2200
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_meadows",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_trees",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime=1.11;
			dispersion=4.9999999e-005;
			minRange=2;
			minRangeProbab=0.2;
			midRange=75;
			midRangeProbab=0.34999999;
			maxRange=200;
			maxRangeProbab=0.44999999;
			distanceZoomMin=60;
			distanceZoomMax=60;
			recoil="recoil_single_ksg";
			recoilProne="recoil_single_prone_ksg";
		};
	};
	class TFV_M45E: TFV_M45
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		model="\TFV_weapons\Shotgun\shotgun_e.p3d";
		displayName="[TFV] M45E Combat Shotgun";
		magazines[]=
		{
			"TFV_12Rnd_8Gauge_Pellets",
			"TFV_12Rnd_8Gauge_Slugs",
			"TFV_6Rnd_8Gauge_Pellets",
			"TFV_6Rnd_8Gauge_Slugs",
			"TFV_6Rnd_8Gauge_HEDP"
		};
		inertia=0.85000002;
		fireSpreadAngle=1;
		baseWeapon="TFV_M45E";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=50;
		};
		class Single: Single
		{
			reloadTime=1.11;
		};
	};
	class TFV_M45TAC: TFV_M45
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		model="\TFV_weapons\Shotgun\shotguntac.p3d";
		displayName="[TFV] M45 Combat Shotgun (Tactical)";
		magazines[]=
		{
			"TFV_12Rnd_8Gauge_Pellets",
			"TFV_12Rnd_8Gauge_Slugs",
			"TFV_6Rnd_8Gauge_Pellets",
			"TFV_6Rnd_8Gauge_Slugs",
			"TFV_6Rnd_8Gauge_HEDP"
		};
		fireSpreadAngle=1;
		baseWeapon="TFV_M45TAC";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=50;
		};
	};
	class TFV_M45A: TFV_M45E
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		displayName="[TFV] M45A Semi Automatic Shotgun";
		baseWeapon="TFV_M45A";
		class Single: Single
		{
			sounds[]=
			{
				"StandardSound"
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
					"\TFV_weapons\Shotgun\data\sounds\fire2.ogg",
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
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_forest",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_houses",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_interior",
							1.9952624,
							1,
							2200
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_meadows",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_trees",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime=0.25;
		};
	};
	class TFV_M45ATAC: TFV_M45A
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		model="\TFV_weapons\Shotgun\shotgun_etac.p3d";
		displayName="[TFV] M45A Semi Automatic Shotgun (Tactical)";
		magazines[]=
		{
			"TFV_12Rnd_8Gauge_Pellets",
			"TFV_12Rnd_8Gauge_Slugs",
			"TFV_6Rnd_8Gauge_Pellets",
			"TFV_6Rnd_8Gauge_Slugs",
			"TFV_6Rnd_8Gauge_HEDP"
		};
		fireSpreadAngle=1;
		baseWeapon="TFV_M45ATAC";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=50;
		};
	};
	class TFV_M90A: TFV_M45
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		model="\TFV_weapons\Shotgun\m90a.p3d";
		displayName="[TFV] M90A CAWS Shotgun";
		fireSpreadAngle=2;
		baseWeapon="TFV_M90A";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=45;
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
				compatibleitems[]=
				{
					"acc_flashlight"
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
				"StandardSound"
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
					"\TFV_weapons\Shotgun\data\sounds\M90_1.ogg",
					1.3,
					1,
					1500
				};
				begin2[]=
				{
					"\TFV_weapons\Shotgun\data\sounds\M90_2.ogg",
					1.3,
					1,
					1500
				};
				begin3[]=
				{
					"\TFV_weapons\Shotgun\data\sounds\M90_3.ogg",
					1.3,
					1,
					1500
				};
				begin4[]=
				{
					"\TFV_weapons\Shotgun\data\sounds\M90_4.ogg",
					1.3,
					1,
					1500
				};
				begin5[]=
				{
					"\TFV_weapons\Shotgun\data\sounds\M90_5.ogg",
					1.3,
					1,
					1500
				};
				begin6[]=
				{
					"\TFV_weapons\Shotgun\data\sounds\M90_6.ogg",
					1.3,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.16,
					"begin3",
					0.16,
					"begin4",
					0.16,
					"begin5",
					0.16,
					"begin6",
					0.16
				};
				class SoundTails
				{
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_forest",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_houses",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_interior",
							1.9952624,
							1,
							2200
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_meadows",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_trees",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime=1.11;
			dispersion=4.9999999e-005;
			minRange=2;
			minRangeProbab=0.2;
			midRange=75;
			midRangeProbab=0.34999999;
			maxRange=200;
			maxRangeProbab=0.44999999;
			distanceZoomMin=60;
			distanceZoomMax=60;
			recoil="recoil_single_ksg";
			recoilProne="recoil_single_prone_ksg";
		};
	};
};
