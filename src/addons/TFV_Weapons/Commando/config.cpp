class CfgPatches
{
	class Commando
	{
		units[]={};
		weapons[]=
		{
			"TFV_Commando",
			"TFV_Commando_Snow",
			"TFV_Commando_Police",
			"TFV_Commando_Red",
			"TFV_Commando_Tan",
			"TFV_Commando_Black"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"TFV_Weapons"
		};
		author="Article 2 Studios";
		magazines[]={};
		ammo[]=
		{
			"TFV_65_Creedmoor",
			"TFV_65_Tracer_Y",
			"TFV_65_Tracer_R"
		};
	};
};
class CfgAmmo
{
	class B_93x64_Ball;
	class TFV_65_Creedmoor: B_93x64_Ball
	{
		cartridge="FxCartridge_65";
	};
	class TFV_65_Tracer_Y: TFV_65_Creedmoor
	{
		cartridge="FxCartridge_65";
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class TFV_65_Tracer_R: TFV_65_Creedmoor
	{
		cartridge="FxCartridge_65";
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
};
class CfgMagazines
{
	class 10Rnd_93x64_DMR_05_Mag;
	class Commando_20Rnd_65_Mag: 10Rnd_93x64_DMR_05_Mag
	{
		dlc="OPTRE";
		model="\TFV_Weapons\Commando\Commando_Mag.p3d";
		displayname="20Rnd 6.5 Creedmoor Magazine";
		displaynameshort="6.5 Creedmoor";
		ammo="TFV_65_Creedmoor";
		count=20;
		initspeed=900;
		picture="\TFV_weapons\ar\icons\magazine.paa";
		descriptionshort="20 Round Magazine<br>6.5 Creedmoor";
		mass=12;
		tracersEvery=0;
		lastRoundsTracer=0;
	};
	class Commando_20Rnd_65_TracerY_Mag: Commando_20Rnd_65_Mag
	{
		dlc="OPTRE";
		model="\TFV_Weapons\Commando\Commando_Mag.p3d";
		displayname="20Rnd 6.5 Magazine (Tracers Yellow)";
		displaynameshort="6.5 Creed Tracer";
		ammo="TFV_65_Tracer_Y";
		count=20;
		initspeed=900;
		picture="\TFV_weapons\ar\icons\magazine.paa";
		descriptionshort="20 Round Magazine<br>6.5 Tracer Yellow";
		mass=12;
		tracersEvery=1;
		lastRoundsTracer=20;
	};
	class Command_20Rnd_65_TracerR_Mag: Commando_20Rnd_65_Mag
	{
		dlc="OPTRE";
		model="\TFV_Weapons\Commando\Commando_Mag.p3d";
		displayname="20Rnd 6.5 Magazine (Tracers Red)";
		displaynameshort="6.5 Creed Tracer";
		ammo="TFV_65_Tracer_R";
		count=20;
		initspeed=900;
		picture="\TFV_weapons\ar\icons\magazine.paa";
		descriptionshort="20 Round Magazine<br>6.5 Tracer Red";
		mass=12;
		tracersEvery=1;
		lastRoundsTracer=20;
	};
	class Commando_20Rnd_65_ReloadY_Mag: Commando_20Rnd_65_Mag
	{
		dlc="OPTRE";
		model="\TFV_Weapons\Commando\Commando_Mag.p3d";
		displayname="20Rnd 6.5 Reload Tracer (Yellow)";
		displaynameshort="6.5 Creedmoor";
		ammo="TFV_65_Tracer_Y";
		count=20;
		initspeed=900;
		picture="\TFV_weapons\ar\icons\magazine.paa";
		descriptionshort="20 Round Magazine<br>6.5 Creedmoor";
		mass=12;
		tracersEvery=0;
		lastRoundsTracer=5;
	};
	class Commando_20Rnd_65_ReloadR_Mag: Commando_20Rnd_65_Mag
	{
		dlc="OPTRE";
		model="\TFV_Weapons\Commando\Commando_Mag.p3d";
		displayname="20Rnd 6.5 Reload Tracer (Red)";
		displaynameshort="6.5 Creedmoor";
		ammo="TFV_65_Tracer_R";
		count=20;
		initspeed=900;
		picture="\TFV_weapons\ar\icons\magazine.paa";
		descriptionshort="20 Round Magazine<br>6.5 Creedmoor";
		mass=12;
		tracersEvery=0;
		lastRoundsTracer=5;
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
	class DMR_05_base_F;
	class TFV_DMR_Base: DMR_05_base_F
	{
		class WeaponSlotsInfo;
	};
	class TFV_Commando: TFV_DMR_Base
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		scopeArsenal=2;
		displayName="[TFV] VK78 Commando";
		descriptionShort="Tactical Rifle (Long Range)";
		picture="\TFV_Weapons\data\Pictures\WireWeaponIcons\Prime\Commando\VK.paa";
		model="\TFV_Weapons\Commando\Commando.p3d";
		baseWeapon="TFV_Commando";
		cursor="OPTRE_M392";
		magazines[]=
		{
			"Commando_20Rnd_65_Mag",
			"Commando_20Rnd_65_TracerY_Mag",
			"Command_20Rnd_65_TracerR_Mag",
			"Commando_20Rnd_65_ReloadY_Mag",
			"Commando_20Rnd_65_ReloadR_Mag"
		};
		magazineWell[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"TFV_Weapons\Commando\data\commando_olive_co.paa",
			"TFV_Weapons\Commando\data\commando2_olive_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\TFV_Weapons\Commando\data\anims\VK78_handanim.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\Handanim_M395_Spartan.rtm"
		};
		pictureWire="\TFV_Weapons\data\Pictures\WireWeaponIcons\Prime\Commando\VK.paa";
		ODST_1="OPTRE_ODST_HUD_AmmoCount_DMR";
		Glasses="OPTRE_GLASS_HUD_AmmoCount_DMR";
		Eye="OPTRE_EYE_HUD_AmmoCount_DMR";
		HUD_BulletInARows=2;
		HUD_TotalPosibleBullet=20;
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
				compatibleItems[]=
				{
					"bipod_01_F_blk",
					"bipod_02_F_blk",
					"bipod_03_F_blk"
				};
			};
		};
	};
	class TFV_Commando_Tan: TFV_Commando
	{
		displayName="[TFV] VK78 Commando (Tan)";
		baseWeapon="TFV_Commando_Tan";
		hiddenSelectionsTextures[]=
		{
			"TFV_Weapons\Commando\data\commando_tan_co.paa",
			"TFV_Weapons\Commando\data\commando2_tan_co.paa"
		};
	};
	class TFV_Commando_Black: TFV_Commando
	{
		displayName="[TFV] VK78 Commando (Black)";
		baseWeapon="TFV_Commando_Black";
		hiddenSelectionsTextures[]=
		{
			"TFV_Weapons\Commando\data\commando_black_co.paa",
			"TFV_Weapons\Commando\data\commando2_black_co.paa"
		};
	};
	class TFV_Commando_Snow: TFV_Commando
	{
		displayName="[TFV] VK78 Commando (Snow)";
		baseWeapon="TFV_Commando_Snow";
		hiddenSelectionsTextures[]=
		{
			"TFV_Weapons\Commando\data\commando_snow_co.paa",
			"TFV_Weapons\Commando\data\commando2_snow_co.paa"
		};
	};
	class TFV_Commando_Police: TFV_Commando
	{
		displayName="[TFV] VK78 Commando (Police)";
		baseWeapon="TFV_Commando_Police";
		hiddenSelectionsTextures[]=
		{
			"TFV_Weapons\Commando\data\commando_police_co.paa",
			"TFV_Weapons\Commando\data\commando2_police_co.paa"
		};
	};
	class TFV_Commando_Red: TFV_Commando
	{
		displayName="[TFV] VK78 Commando (Red)";
		baseWeapon="TFV_Commando_Red";
		hiddenSelectionsTextures[]=
		{
			"TFV_Weapons\Commando\data\commando_red_co.paa",
			"TFV_Weapons\Commando\data\commando2_red_co.paa"
		};
	};
};
