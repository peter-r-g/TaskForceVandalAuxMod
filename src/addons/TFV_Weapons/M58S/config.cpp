class CfgPatches
{
	class TFV_M58S
	{
		units[]={};
		weapons[]=
		{
			"TFV_M58S"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"OPTRE_Weapons",
			"TFV_Weapons"
		};
		author="Article 2 Studios";
		magazines[]={};
	};
};
class CfgMagazines
{
	class TFV_36Rnd_95x40_Mag;
	class TFV_36Rnd_95x40_Mag_Tracer;
	class TFV_36Rnd_95x40_Mag_Tracer_Yellow;
	class TFV_42Rnd_95x40_Mag: TFV_36Rnd_95x40_Mag
	{
		displayName="[TFV] 42Rnd 9.5x40mm Magazine";
		displaynameshort="9.5x40mm";
		model="\OPTRE_Weapons\br\BMR_Magazine.p3d";
		ammo="TFV_B_95x40_Ball";
		count=42;
		initspeed=835;
		descriptionshort="42 Round Magazine<br>9.5x40mm";
		mass=8.3000002;
		tracersEvery=0;
		lastRoundsTracer=6;
	};
	class TFV_42Rnd_95x40_Mag_Tracer: TFV_36Rnd_95x40_Mag_Tracer
	{
		displayName="[TFV] 42Rnd 9.5x40mm Magazine (Tracers)";
		displaynameshort="9.5x40mm Tracer";
		model="\OPTRE_Weapons\br\BMR_Magazine.p3d";
		ammo="TFV_B_95x40_Tracer";
		count=42;
		initspeed=835;
		descriptionshort="42 Round Magazine<br>9.5x40mm<br>Tracer";
		mass=8.3000002;
		tracersEvery=1;
		lastRoundsTracer=42;
	};
	class TFV_42Rnd_95x40_Mag_Tracer_Yellow: TFV_36Rnd_95x40_Mag_Tracer_Yellow
	{
		displayName="[TFV] 42Rnd 9.5x40mm Magazine (Tracers, Yellow)";
		displaynameshort="9.5x40mm Tracer Yellow";
		model="\OPTRE_Weapons\br\BMR_Magazine.p3d";
		ammo="TFV_B_95x40_Tracer_Yellow";
		count=42;
		initspeed=835;
		descriptionshort="42 Round Magazine<br>9.5x40mm<br>Tracer";
		mass=8.3000002;
		tracersEvery=1;
		lastRoundsTracer=42;
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
	class arifle_Mk20_F;
	class TFV_Rifle_Base: arifle_Mk20_F
	{
		class WeaponSlotsInfo;
	};
	class TFV_M58S: TFV_Rifle_Base
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] M58S Special Applications Rifle";
		descriptionShort="SOCOM Rifle";
		model="\OPTRE_Weapons\M58S\M58S.p3d";
		baseWeapon="TFV_M58S";
		magazines[]=
		{
			"TFV_42Rnd_95x40_Mag",
			"TFV_42Rnd_95x40_Mag_Tracer",
			"TFV_42Rnd_95x40_Mag_Tracer_Yellow"
		};
		magazineWell[]={};
		reloadAction="GestureReloadARX";
		cursor="OPTRE_BR55";
		ODST_1="OPTRE_ODST_HUD_AmmoCount_BR";
		Glasses="OPTRE_GLASS_HUD_AmmoCount_BR";
		HUD_BulletInARows=2;
		HUD_TotalPosibleBullet=36;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\M58S\data\anims\M58_handanim.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\Handanim_M395_Spartan.rtm"
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
					"TFV_BMR_Laser",
					"acc_flashlight"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
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
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=575;
			maxRangeProbab=0.050000001;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
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
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=575;
			maxRangeProbab=0.050000001;
			soundBurst=0;
			burst=2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
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
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=575;
			maxRangeProbab=0.050000001;
			soundBurst=0;
			burst=1;
		};
	};
};
