class CfgPatches
{
	class TFV_sas10
	{
		units[]={};
		weapons[]=
		{
			"TFV_hgun_sas10_F",
			"TFV_hgun_sas10_M7_F"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Weapons",
			"TFV_Weapons"
		};
		magazines[]=
		{
			"16Rnd_10mm_Ball",
			"32Rnd_10mm_Ball",
			"16Rnd_10mm_AP",
			"8Rnd_10mm_EXP"
		};
		ammo[]=
		{
			"TFV_B_10mm_ball",
			"TFV_B_10mm_ap",
			"TFV_B_10mm_exp"
		};
	};
};
class Mode_FullAuto;
class Mode_SemiAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class MuzzleSlot;
class CfgAmmo
{
	class B_9x21_Ball;
	class TFV_B_10mm_ball: B_9x21_Ball
	{
		caliber=1.8;
		hit=7;
		typicalSpeed=490;
	};
	class TFV_B_10mm_ap: TFV_B_10mm_ball
	{
		caliber=3.5999999;
		hit=9;
	};
	class TFV_B_10mm_exp: TFV_B_10mm_ball
	{
		hit=5;
		indirectHit=2;
		indirectHitRange=0.1;
		airFriction=-0.0037499999;
		explosive=0.5;
		explosionEffects="ExploAmmoExplosion";
		CraterEffects="ExploAmmoCrater";
		fuseDistance=5;
		tracerStartTime=0.050000001;
		tracerEndTime=1;
		nvgOnly=0;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale=0.5;
	};
};
class CfgMagazines
{
	class Default;
	class CA_Magazine;
	class 16Rnd_10mm_Ball: CA_Magazine
	{
		scope=2;
		displayName="[TFV] 16Rnd SAS-10 Mag (Ball)";
		picture="\OPTRE_Weapons\Pistol\icons\magazine.paa";
		ammo="TFV_B_10mm_ball";
		count=16;
		initSpeed=490;
		tracersEvery=0;
		lastRoundsTracer=3;
		descriptionShort="16Rnd 10mm Mag (Ball)";
		mass=8;
	};
	class 32Rnd_10mm_Ball: 16Rnd_10mm_Ball
	{
		scope=2;
		displayName="[TFV] 32Rnd SAS-10 Mag (Ball)";
		count=32;
		lastRoundsTracer=8;
		descriptionShort="32Rnd 10mm Mag (Ball)";
		mass=15;
	};
	class 16Rnd_10mm_AP: 16Rnd_10mm_Ball
	{
		scope=2;
		displayName="[TFV] 16Rnd SAS-10 Mag (AP)";
		descriptionShort="16Rnd 10mm Mag (AP)";
		ammo="TFV_B_10mm_ap";
	};
	class 8Rnd_10mm_EXP: 16Rnd_10mm_Ball
	{
		scope=2;
		displayName="[TFV] 8Rnd SAS-10 Mag (EXP)";
		descriptionShort="8Rnd 10mm Mag (EXP)";
		ammo="TFV_B_10mm_exp";
		count=8;
		tracersEvery=1;
		lastRoundsTracer=9;
		mass=12;
	};
};
class CfgRecoils
{
	class recoil_default;
	class recoil_pistol_sas10: recoil_default
	{
		muzzleOuter[]={0.1,0.75,0.1,0.15000001};
		kickBack[]={0.059999999,0.12};
		permanent=0.12;
		temporary=0.059999999;
	};
};
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class TFV_hgun_sas10_F: Pistol_Base_F
	{
		author="Article 2 Studios";
		_generalMacro="TFV_hgun_sas10_F";
		baseWeapon="TFV_hgun_sas10_F";
		picture="\OPTRE_Weapons\sas10\data\SAS10_icon_ca.paa";
		scope=2;
		model="\OPTRE_Weapons\sas10\optre_sas10";
		magazines[]=
		{
			"16Rnd_10mm_Ball"
		};
		magazineWell[]=
		{
			"TFV_sas10_mag"
		};
		displayName="[TFV] Sevine Arms SAS-10";
		descriptionShort="10mm Auto Machine Pistol";
		recoil="recoil_pistol_sas10";
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		hiddenSelections[]={};
		hiddenSelectionTextures[]=
		{
			"OPTRE_Weapons\sas10\data\optre_sas10_main_co.paa",
			"OPTRE_Weapons\sas10\data\optre_sas10_detail_co.paa"
		};
		reloadAction="GestureReloadPistol";
		cursor="OPTRE_M6G";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			holsterScale=0.85000002;
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"optic_aco_grn",
					"optic_aco",
					"optic_holosight_blk_f",
					"optic_yorris",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"TFV_m393_eotech",
					"TFV_m7_sight",
					"TFV_m6c_scope"
				};
				iconPosition[]={0.40000001,0.60000002};
				iconScale=0.15000001;
			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"TFV_M6C_compensator",
					"TFV_M6_silencer"
				};
				iconPosition[]={0.34999999,0.60000002};
				iconScale=0.30000001;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"TFV_m6g_flashlight",
					"acc_flashlight_pistol"
				};
				iconPosition[]={0.34999999,0.60000002};
				iconScale=0.30000001;
			};
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
					"\OPTRE_Weapons\SMG\Data\sounds\SMG_1.ogg",
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
					"\OPTRE_Weapons\SMG\Data\sounds\Silenced_1.wss",
					1,
					1,
					600
				};
				begin2[]=
				{
					"\OPTRE_Weapons\SMG\Data\sounds\Silenced_1.wss",
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
					"\OPTRE_Weapons\SMG\Data\sounds\SMG_1.ogg",
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
					"\OPTRE_Weapons\SMG\Data\sounds\Silenced_1.wss",
					1,
					1,
					600
				};
				begin2[]=
				{
					"\OPTRE_Weapons\SMG\Data\sounds\Silenced_1.wss",
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
			dispersion=0.0020000001;
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
		inertia=0.1;
		aimTransitionSpeed=1.5;
		dexterity=1.7;
		initSpeed=490;
		maxZeroing=50;
	};
	class TFV_hgun_sas10_M7_F: TFV_hgun_sas10_F
	{
		author="Article 2 Studios";
		_generalMacro="TFV_hgun_sas10_M7_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="TFV_m7_sight";
			};
		};
	};
};
class CfgMagazineWells
{
	class TFV_sas10_mag
	{
		TFV_Magazines[]=
		{
			"8Rnd_10mm_EXP",
			"16Rnd_10mm_Ball",
			"16Rnd_10mm_AP",
			"32Rnd_10mm_Ball"
		};
	};
};
