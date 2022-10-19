class CfgPatches
{
	class TFV_Vehicles
	{
		author="1st MEU Mod Team";
		requiredAddons[]=
		{
			"1st_MEU_patch_main"
		};
		requiredVersion=0.1;
		units[]=
		{
			"TFV_Speedbag"
		};
		weapons[]={};
	};
};

class CfgVehicles
{
	class Land_optre_milcrate_h3_long;
	class TFV_Speedbag: Land_optre_milcrate_h3_long
	{
		scope=2;
		scopeCurator=2;
		scopeEditor=2;
		displayName="[TFV] Speedbag";
		author="1stMEU Mark + Serin";
		editorCategory="MEU_Objects";
		editorSubcategory="Objects";
		ace_cargo_canLoad=1;
		ace_cargo_size=1;
		ace_dragging_canDrag=1;
		ace_dragging_dragPosition[]={0,1.2,0};
		ace_dragging_dragDirection=0;
		ace_dragging_canCarry=1;
		ace_dragging_carryPosition[]={0,1.2,0};
		ace_dragging_carryDirection=0;
		mass=40;
		maximumLoad=696969;
		class TransportMagazines
		{
			class _xx_OPTRE_60Rnd_762x51_Mag_APT
			{
				magazine="OPTRE_60Rnd_762x51_Mag_APT";
				count=20;
			};
			class _xx_MEU_762SLAP_32_Mag_T
			{
				magazine="MEU_762SLAP_32_Mag_T";
				count=20;
			};
			class _xx_30rnd_556x45_mag_APT
			{
				magazine="30rnd_556x45_mag_APT";
				count=20;
			};
			class _xx_30rnd_65x39_mag_APT
			{
				magazine="30rnd_65x39_mag_APT";
				count=20;
			};
			class _xx_30rnd_65x39_mag_msbs_APT
			{
				magazine="30rnd_65x39_mag_msbs_APT";
				count=20;
			};
			class _xx_1Rnd_HEDP_MEU_shell
			{
				magazine="1Rnd_HEDP_MEU_shell";
				count=10;
			};
			class _xx_3Rnd_HE_MEU_shell
			{
				magazine="3Rnd_HE_MEU_shell";
				count=10;
			};
			class _xx_3Rnd_Smoke_Grenade_shell
			{
				magazine="3Rnd_Smoke_Grenade_shell";
				count=10;
			};
			class _xx_OPTRE_36Rnd_95x40_Mag_HPSAPT
			{
				magazine="OPTRE_36Rnd_95x40_Mag_HPSAPT";
				count=20;
			};
			class _xx_OPTRE_20Rnd_86x70_Mag_JHPT
			{
				magazine="OPTRE_20Rnd_86x70_Mag_JHPT";
				count=20;
			};
			class _xx_OPTRE_20Rnd_86x70_Mag_APT
			{
				magazine="OPTRE_20Rnd_86x70_Mag_APT";
				count=20;
			};
			class _xx_OPTRE_12Rnd_8Gauge_Pellets
			{
				magazine="OPTRE_12Rnd_8Gauge_Pellets";
				count=20;
			};
			class _xx_OPTRE_12Rnd_8Gauge_Slugs
			{
				magazine="OPTRE_12Rnd_8Gauge_Slugs";
				count=20;
			};
			class _xx_OPTRE_60Rnd_5x23mm_Mag_FMJT
			{
				magazine="OPTRE_60Rnd_5x23mm_Mag_FMJT";
				count=20;
			};
			class _xx_OPTRE_15Rnd_DMR_762x51_Mag_APT
			{
				magazine="OPTRE_15Rnd_DMR_762x51_Mag_APT";
				count=20;
			};
			class _xx_OPTRE_15Rnd_DMR_762x51_Mag_JHPT
			{
				magazine="OPTRE_15Rnd_DMR_762x51_Mag_JHPT";
				count=20;
			};
			class _xx_OPTRE_4Rnd_145x114_Mag_APFSDST
			{
				magazine="OPTRE_4Rnd_145x114_Mag_APFSDST";
				count=20;
			};
			class _xx_OPTRE_4Rnd_145x114_Mag_HEDPT
			{
				magazine="OPTRE_4Rnd_145x114_Mag_HEDPT";
				count=10;
			};
			class _xx_OPTRE_4Rnd_145x114_Mag_NARQ
			{
				magazine="OPTRE_4Rnd_145x114_Mag_NARQ";
				count=2;
			};
			class _xx_OPTRE_4Rnd_145x114_Mag_HVAPT
			{
				magazine="OPTRE_4Rnd_145x114_Mag_HVAPT";
				count=10;
			};
			class _xx_OPTRE_100Rnd_127x99_TRACER_M250HMG
			{
				magazine="OPTRE_100Rnd_127x99_TRACER_M250HMG";
				count=10;
			};
			class _xx_OPTRE_100Rnd_127x99_TRACER_HE_M250HMG
			{
				magazine="OPTRE_100Rnd_127x99_TRACER_HE_M250HMG";
				count=10;
			};
			class _xx_OPTRE_200Rnd_95x40_Box_HPSAPT
			{
				magazine="OPTRE_200Rnd_95x40_Box_HPSAPT";
				count=10;
			};
			class _xx_OPTRE_200Rnd_95x40_Box_JHPT
			{
				magazine="OPTRE_200Rnd_95x40_Box_JHPT";
				count=10;
			};
			class _xx_MEU_200Rnd_556_Mag_Tracer
			{
				magazine="MEU_200Rnd_556_Mag_Tracer";
				count=10;
			};
			class _xx_OPTRE_1Rnd_50x137_PEN
			{
				magazine="OPTRE_1Rnd_50x137_PEN";
				count=1;
			};
			class _xx_OPTRE_M41_Twin_HEAT_Thermal
			{
				magazine="OPTRE_M41_Twin_HEAT_Thermal";
				count=2;
			};
			class _xx_OPTRE_M41_Twin_HEAT_SACLOS
			{
				magazine="OPTRE_M41_Twin_HEAT_SACLOS";
				count=2;
			};
			class _xx_OPTRE_M41_Twin_HEAT_SALH
			{
				magazine="OPTRE_M41_Twin_HEAT_SALH";
				count=2;
			};
			class _xx_OPTRE_M41_Twin_HEAT
			{
				magazine="OPTRE_M41_Twin_HEAT";
				count=2;
			};
			class _xx_ACE_SpareBarrel
			{
				magazine="ACE_SpareBarrel";
				count=10;
			};
			class _xx_test2_m250_100rnd_ap
			{
				magazine="test2_m250_100rnd_ap";
				count=5;
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
