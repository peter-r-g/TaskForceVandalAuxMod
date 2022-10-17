class CfgPatches
{
	class TFV_Weapons
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Core",
			"OPTRE_Weapons"
		};
		author[]=
		{
			"Article 2 Studios"
		};
		fileName="TFV_Weapons.pbo";
	};
};
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons
{
	class ItemCore;
	class mk20_base_F;
	class arifle_Mk20_F: mk20_base_F
	{
		class WeaponSlotsInfo;
	};
	class EBR_base_F;
	class srifle_EBR_F: EBR_base_F
	{
		class WeaponSlotsInfo;
	};
	class Rifle_Long_Base_F;
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class SMG_01_Base;
	class SMG_01_F: SMG_01_Base
	{
		class WeaponSlotsInfo;
	};
	class Pistol_Base_F;
	class hgun_Pistol_heavy_01_F: Pistol_Base_F
	{
		class WeaponSlotsInfo;
	};
	class Launcher_Base_F;
	class launch_Titan_short_base;
	class launch_Titan_base;
	class launch_RPG32_F: Launcher_Base_F
	{
		class WeaponSlotsInfo;
	};
	class launch_B_Titan_short_F: launch_Titan_short_base
	{
		class WeaponSlotsInfo;
	};
	class launch_B_Titan_F: launch_Titan_base
	{
		class WeaponSlotsInfo;
	};
	class TFV_Rifle_Base: arifle_Mk20_F
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		displayName="-";
		recoil="recoil_mk20";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={701,901};
			mass=1;
			class MuzzleSlot: MuzzleSlot
			{
			};
			class CowsSlot: CowsSlot
			{
			};
			class PointerSlot: PointerSlot
			{
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
			};
		};
	};
	class TFV_Shotgun_Base: arifle_Mk20_F
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		displayName="-";
		recoil="recoil_gm6";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={701,901};
			mass=1;
			class MuzzleSlot: MuzzleSlot
			{
			};
			class CowsSlot: CowsSlot
			{
			};
			class PointerSlot: PointerSlot
			{
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
			};
		};
	};
	class TFV_LongRifle_Base: srifle_EBR_F
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		displayName="-";
		recoil="recoil_ebr";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={701,901};
			mass=1;
			class MuzzleSlot: MuzzleSlot
			{
			};
			class CowsSlot: CowsSlot
			{
			};
			class PointerSlot: PointerSlot
			{
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
			};
		};
	};
	class TFV_MachineGun_Base: LMG_Mk200_F
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		displayName="-";
		recoil="recoil_mk200";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={701,901};
			mass=1;
			class MuzzleSlot: MuzzleSlot
			{
			};
			class CowsSlot: CowsSlot
			{
			};
			class PointerSlot: PointerSlot
			{
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
			};
		};
	};
	class TFV_SubMachineGun_Base: SMG_01_F
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		displayName="-";
		recoil="recoil_pdw";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={701,901};
			mass=1;
			class MuzzleSlot: MuzzleSlot
			{
			};
			class CowsSlot: CowsSlot
			{
			};
			class PointerSlot: PointerSlot
			{
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
			};
		};
	};
	class TFV_Handgun_Base: hgun_Pistol_heavy_01_F
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		displayName="-";
		recoil="recoil_pistol_zubr";
		type=2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={701,901};
			mass=1;
			class MuzzleSlot: MuzzleSlot
			{
			};
			class CowsSlot: CowsSlot
			{
			};
			class PointerSlot: PointerSlot
			{
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
			};
		};
	};
	class TFV_UnguidedLauncher_Base: launch_RPG32_F
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
		};
	};
	class TFV_GuidedATLauncher_Base: launch_B_Titan_short_F
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
		};
	};
	class TFV_GuidedAALauncher_Base: launch_B_Titan_F
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
		};
	};
};
