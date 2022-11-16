class CfgPatches
{
	class TFV_Vehicles
	{
		units[]=
		{
			"TFV_Ammo_Rack_Weapons",
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Core",
			"TFV_Weapons",
			"TFV_Weapons_EX",
			"TFV_Weapons_EX_Magazines",
			"OPTRE_UNSC_Units",
			"OPTRE_Ins_Units"
		};
	};
};
class CfgVehicles
{
	class NATO_Box_Base;
	class TFV_Ammo_Box_Base: NATO_Box_Base
	{
		dlc="OPTRE";
		scope=1;
		vehicleClass="OPTRE_UNSC_Ammo_class";
		displayName="-";
		model="\A3\weapons_F\AmmoBoxes\Supplydrop";
		author="Article 2 Studios";
		icon="iconCrateWpns";
		transportMaxWeapons=1000;
		transportMaxMagazines=5000;
		maximumLoad=50000;
		transportMaxBackpacks=100;
		transportAmmo=1;
		transportRepair=1;
		transportFuel=1;
		supplyRadius=2.5;
		armor=1000;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class TFV_Ammo_Rack_Weapons: TFV_Ammo_Box_Base
	{
		dlc="OPTRE";
		scope=2;
		displayName="[TFV] Weapons Rack";
		hiddenSelections[]=
		{
			"attach_Cover"
		};
		model="\OPTRE_Buildings\Containers\optre_milcrate_reachgreencrate";
		author="Article 2 Studios";
		transportMaxWeapons=50;
		transportMaxMagazines=1000;
		maximumLoad=500000;
		transportMaxBackpacks=10;
		transportAmmo=1;
		transportRepair=0;
		transportFuel=0;
		supplyRadius=2.5;
		armor=500;
		class TransportMagazines
		{
			class xx_TFV_60Rnd_762x51_Mag
			{
				magazine="TFV_60Rnd_762x51_Mag";
				count=100;
			};
			class xx_TFV_60Rnd_762x51_Mag_Tracer
			{
				magazine="TFV_60Rnd_762x51_Mag_Tracer";
				count=25;
			};
			class xx_TFV_32Rnd_762x51_Mag
			{
				magazine="TFV_32Rnd_762x51_Mag";
				count=50;
			};
			class xx_TFV_32Rnd_762x51_Mag_Tracer
			{
				magazine="TFV_32Rnd_762x51_Mag_Tracer";
				count=25;
			};
			class xx_TFV_36Rnd_95x40_Mag
			{
				magazine="TFV_36Rnd_95x40_Mag";
				count=30;
			};
			class xx_TFV_36Rnd_95x40_Mag_Tracer
			{
				magazine="TFV_36Rnd_95x40_Mag_Tracer";
				count=15;
			};
			class xx_TFV_15Rnd_762x51_Mag
			{
				magazine="TFV_15Rnd_762x51_Mag";
				count=40;
			};
			class xx_TFV_100Rnd_95x40_Box
			{
				magazine="TFV_100Rnd_95x40_Box";
				count=10;
			};
			class xx_TFV_100Rnd_95x40_Box_Tracer
			{
				magazine="TFV_100Rnd_95x40_Box_Tracer";
				count=5;
			};
			class xx_TFV_200Rnd_95x40_Box
			{
				magazine="TFV_200Rnd_95x40_Box";
				count=10;
			};
			class xx_TFV_200Rnd_95x40_Box_Tracer
			{
				magazine="TFV_200Rnd_95x40_Box_Tracer";
				count=5;
			};
			class xx_TFV_8Rnd_127x40_Mag
			{
				magazine="TFV_8Rnd_127x40_Mag";
				count=25;
			};
			class xx_TFV_8Rnd_127x40_AP_Mag
			{
				magazine="TFV_8Rnd_127x40_AP_Mag";
				count=5;
			};
			class xx_TFV_8Rnd_127x40_Mag_Tracer
			{
				magazine="TFV_8Rnd_127x40_Mag_Tracer";
				count=10;
			};
			class xx_TFV_6Rnd_8Gauge_Pellets
			{
				magazine="TFV_6Rnd_8Gauge_Pellets";
				count=25;
			};
			class xx_TFV_6Rnd_8Gauge_Slugs
			{
				magazine="TFV_6Rnd_8Gauge_Slugs";
				count=25;
			};
			class xx_TFV_60Rnd_5x23mm_Mag
			{
				magazine="TFV_60Rnd_5x23mm_Mag";
				count=30;
			};
			class xx_TFV_60Rnd_5x23mm_Mag_tracer
			{
				magazine="TFV_60Rnd_5x23mm_Mag_tracer";
				count=15;
			};
			class xx_TFV_4Rnd_145x114_APFSDS_Mag
			{
				magazine="TFV_4Rnd_145x114_APFSDS_Mag";
				count=8;
			};
			class xx_TFV_M41_Twin_HEAT
			{
				magazine="TFV_M41_Twin_HEAT";
				count=6;
			};
			class xx_TFV_M41_Twin_HEAT_G
			{
				magazine="TFV_M41_Twin_HEAT_G";
				count=2;
			};
			class xx_TFV_M41_Twin_HEAP
			{
				magazine="TFV_M41_Twin_HEAP";
				count=6;
			};
			// speedbag contents
			class _xx_TFV_60Rnd_762x51_Mag_APT
			{
				magazine="TFV_60Rnd_762x51_Mag_APT";
				count=20;
			};
			class _xx_3Rnd_Smoke_Grenade_shell
			{
				magazine="3Rnd_Smoke_Grenade_shell";
				count=10;
			};
			class _xx_TFV_36Rnd_95x40_Mag_HPSAPT
			{
				magazine="TFV_36Rnd_95x40_Mag_HPSAPT";
				count=20;
			};
			class _xx_TFV_20Rnd_86x70_Mag_JHPT
			{
				magazine="TFV_20Rnd_86x70_Mag_JHPT";
				count=20;
			};
			class _xx_TFV_20Rnd_86x70_Mag_APT
			{
				magazine="TFV_20Rnd_86x70_Mag_APT";
				count=20;
			};
			class _xx_TFV_12Rnd_8Gauge_Pellets
			{
				magazine="TFV_12Rnd_8Gauge_Pellets";
				count=20;
			};
			class _xx_TFV_12Rnd_8Gauge_Slugs
			{
				magazine="TFV_12Rnd_8Gauge_Slugs";
				count=20;
			};
			class _xx_TFV_60Rnd_5x23mm_Mag_FMJT
			{
				magazine="TFV_60Rnd_5x23mm_Mag_FMJT";
				count=20;
			};
			class _xx_TFV_15Rnd_762x51_Mag_APT
			{
				magazine="TFV_15Rnd_762x51_Mag_APT";
				count=20;
			};
			class _xx_TFV_15Rnd_762x51_Mag_JHPT
			{
				magazine="TFV_15Rnd_762x51_Mag_JHPT";
				count=20;
			};
			class _xx_TFV_4Rnd_145x114_Mag_APFSDST
			{
				magazine="TFV_4Rnd_145x114_Mag_APFSDST";
				count=20;
			};
			class _xx_TFV_4Rnd_145x114_Mag_HEDPT
			{
				magazine="TFV_4Rnd_145x114_Mag_HEDPT";
				count=10;
			};
			class _xx_TFV_4Rnd_145x114_Mag_NARQ
			{
				magazine="TFV_4Rnd_145x114_Mag_NARQ";
				count=2;
			};
			class _xx_TFV_4Rnd_145x114_Mag_HVAPT
			{
				magazine="TFV_4Rnd_145x114_Mag_HVAPT";
				count=10;
			};
			class _xx_TFV_200Rnd_95x40_Box_HPSAPT
			{
				magazine="TFV_200Rnd_95x40_Box_HPSAPT";
				count=10;
			};
			class _xx_TFV_200Rnd_95x40_Box_JHPT
			{
				magazine="TFV_200Rnd_95x40_Box_JHPT";
				count=10;
			};
			class _xx_TFV_1Rnd_50x137_PEN
			{
				magazine="TFV_1Rnd_50x137_PEN";
				count=1;
			};
			class _xx_TFV_M41_Twin_HEAT_Thermal
			{
				magazine="TFV_M41_Twin_HEAT_Thermal";
				count=2;
			};
			class _xx_TFV_M41_Twin_HEAT_SACLOS
			{
				magazine="TFV_M41_Twin_HEAT_SACLOS";
				count=2;
			};
			class _xx_TFV_M41_Twin_HEAT_SALH
			{
				magazine="TFV_M41_Twin_HEAT_SALH";
				count=2;
			};
			class _xx_TFV_M41_Twin_HEAT
			{
				magazine="TFV_M41_Twin_HEAT";
				count=2;
			};
			class xx_OPTRE_M9_Frag
			{
				magazine="OPTRE_M9_Frag";
				count=25;
			};
			class xx_OPTRE_M2_Smoke
			{
				magazine="OPTRE_M2_Smoke";
				count=25;
			};
			class xx_OPTRE_M2_Smoke_Blue
			{
				magazine="OPTRE_M2_Smoke_Blue";
				count=10;
			};
			class xx_OPTRE_M2_Smoke_Yellow
			{
				magazine="OPTRE_M2_Smoke_Yellow";
				count=10;
			};
			class xx_OPTRE_M2_Smoke_Red
			{
				magazine="OPTRE_M2_Smoke_Red";
				count=10;
			};
			class xx_OPTRE_M2_Smoke_Green
			{
				magazine="OPTRE_M2_Smoke_Green";
				count=10;
			};
			class xx_OPTRE_M2_Smoke_Orange
			{
				magazine="OPTRE_M2_Smoke_Orange";
				count=10;
			};
			class xx_OPTRE_M2_Smoke_Purple
			{
				magazine="OPTRE_M2_Smoke_Purple";
				count=10;
			};
		};
		class TransportItems
		{
			class _xx_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=60;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=60;
			};
			class _xx_ACE_plasmaIV_500
			{
				name="ACE_plasmaIV_500";
				count=10;
			};
			class _xx_MEU_Biofoam_Light
			{
				name="MEU_Biofoam_Light";
				count=40;
			};
			class _xx_MEU_Medigel_Light
			{
				name="MEU_Medigel_Light";
				count=40;
			};
			class _xx_MEU_PlasmaIV
			{
				name="MEU_PlasmaIV";
				count=10;
			};
			class _xx_MEU_compat_Ibuprofen
			{
				name="MEU_compat_Ibuprofen";
				count=40;
			};
			class _xx_MEU_Emergency_MedKit
			{
				name="MEU_Emergency_MedKit";
				count=2;
			};
			class _xx_ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=16;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=40;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=10;
			};
			class _xx_ACE_plasmaIV
			{
				name="ACE_plasmaIV";
				count=10;
			};
			class _xx_ACE_Banana
			{
				name="ACE_Banana";
				count=5;
			};
			class _xx_ACE_splint
			{
				name="ACE_splint";
				count=10;
			};
		};
	};
};