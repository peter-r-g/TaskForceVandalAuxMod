class CfgPatches
{
	class TFV_Weapons_M6B
	{
		addonRootClass="TFV_Weapons";
		author="Article 2 Studios";
		weapons[]=
		{
			"TFV_M6B"
		};
		requiredAddons[]=
		{
			"OPTRE_Core",
			"A3_Weapons_F"
		};
		units[]={};
	};
};
class CfgWeaponCursors
{
	class throw;
	class TFV_M6B: throw
	{
		texture="\TFV_Weapons\Optics\data\Reticles\M6C_Reticle.paa";
	};
};
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons
{
	class Pistol_Base_F;
	class hgun_Pistol_heavy_01_F: Pistol_Base_F
	{
		class Single;
	};
	class TFV_M6B: hgun_Pistol_heavy_01_F
	{
		baseWeapon="TFV_M6B";
		displayName="[TFV] $STR_TFV_CfgWeapons_M6B";
		descriptionShort="$STR_TFV_CfgWeapons_Handgun_127x40";
		description="$STR_TFV_CfgWeapons_M6B_Library";
		class Library
		{
			libTextDesc="$STR_TFV_CfgWeapons_M6B_Library";
		};
		model="\TFV_Weapons\M6B\M6B.p3d";
		cursor="OPTRE_M6B";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TFV_Weapons\M6B\data\M6B_CO.paa"
		};
		magazines[]=
		{
			"TFV_8Rnd_127x40_Mag"
		};
		magazineWell[]={};
		reloadAction="GestureReloadPistol";
		HUD_BulletInARows=1;
		HUD_TotalPosibleBullet=8;
		class WeaponSlotsInfo
		{
			mass=20;
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
					"TFV_M6G_Flashlight",
					"TFV_M6C_Laser"
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
		class Single: Single
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
				soundSetShot[]=
				{
					"50cal_Type115_Shot_SoundSet",
					"50cal_Type115_Tail_SoundSet",
					"50cal_Type115_interiorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"DMR06_silencerShot_SoundSet",
					"DMR06_silencerTail_SoundSet",
					"DMR06_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.1;
			dispersion=4.9999999e-005;
		};
	};
};
