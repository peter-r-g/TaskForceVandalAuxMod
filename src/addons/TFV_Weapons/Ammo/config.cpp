class CfgPatches
{
	class TFV_Weapons_Ammo
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Core",
			"OPTRE_Weapons",
			"A3_Weapons_F"
		};
		author="Article 2 Studios";
		magazines[]=
		{
			"TFV_6Rnd_8Gauge_Pellets",
			"TFV_6Rnd_8Gauge_Slugs",
			"TFV_12Rnd_8Gauge_Pellets",
			"TFV_12Rnd_8Gauge_Slugs",
			"TFV_6Rnd_8Gauge_HEDP",
			"TFV_3Rnd_ALIM_Gauss_Slugs",
			"TFV_15Rnd_ALIM_Gauss_Slugs",
			"TFV_SpLaser_Battery",
			"TFV_1Rnd_MAC_Rounds",
			"TFV_1000Rnd_127x99_M41",
			"TFV_1000Rnd_127x99_M41_HE",
			"TFV_200Rnd_127x99_M247H",
			"TFV_3Rnd_102mm_rockets",
			"TFV_2Rnd_GAT_missiles",
			"TFV_1Rnd_Anvil1_missiles",
			"TFV_16Rnd_Anvil1_missiles",
			"TFV_32Rnd_Anvil1_missiles",
			"TFV_16Rnd_Anvil2_missiles",
			"TFV_32Rnd_Anvil2_missiles",
			"TFV_16Rnd_Anvil3_missiles",
			"TFV_32Rnd_Anvil3_missiles",
			"TFV_16Rnd_AnvilSMK_W_missiles",
			"TFV_16Rnd_AnvilSMK_B_missiles",
			"TFV_16Rnd_AnvilSMK_R_missiles",
			"TFV_16Rnd_AnvilSMK_G_missiles",
			"TFV_16Rnd_AnvilSMK_O_missiles",
			"TFV_16Rnd_AnvilSMK_P_missiles",
			"TFV_16Rnd_AnvilSMK_Y_missiles",
			"TFV_6Rnd_ASGM2_rockets",
			"TFV_12Rnd_ASGM2_rockets",
			"TFV_48Rnd_ASGM2_rockets",
			"TFV_8Rnd_ASGM4_rockets",
			"TFV_4Rnd_ASGM10_missiles",
			"TFV_8Rnd_ASGM10_missiles",
			"TFV_12Rnd_ASGM10_missiles",
			"TFV_1Rnd_C2GMLS_missiles",
			"TFV_12Rnd_C2GMLS_missiles",
			"TFV_8Rnd_C2GMLS_missiles",
			"TFV_6Rnd_C2GMLS_missiles",
			"TFV_1Rnd_Scorpion_missiles",
			"TFV_4Rnd_Scorpion_missiles",
			"TFV_8Rnd_Scorpion_missiles",
			"TFV_Jackknife_missile",
			"TFV_1Rnd_Jackknife_missile",
			"TFV_2Rnd_Jackknife_missile",
			"TFV_3Rnd_Jackknife_missile",
			"TFV_4Rnd_Jackknife_missile",
			"TFV_12Rnd_500lb_bomb",
			"TFV_24Rnd_500lb_bomb",
			"TFV_36Rnd_500lb_bomb",
			"TFV_48Rnd_500lb_bomb",
			"TFV_12Rnd_1000lb_bomb",
			"TFV_24Rnd_1000lb_bomb",
			"TFV_36Rnd_1000lb_bomb",
			"TFV_8Rnd_2000lb_bomb",
			"TFV_16Rnd_2000lb_bomb",
			"TFV_4Rnd_GBU_bomb",
			"TFV_8Rnd_GBU_bomb",
			"TFV_12Rnd_Cluster_bomb",
			"TFV_60Rnd_105mm_SAPHE",
			"TFV_60Rnd_105mm_HEAT",
			"TFV_60Rnd_105mm_APBC",
			"TFV_40Rnd_120mm_HE",
			"TFV_40Rnd_120mm_HEAT",
			"TFV_40Rnd_120mm_AP",
			"TFV_40Rnd_120mm_HE_2",
			"TFV_40Rnd_120mm_HEAT_2",
			"TFV_40Rnd_120mm_AP_2",
			"TFV_1Rnd_Shiva_nuke_missile",
			"M319_Buckshot"
		};
		ammo[]=
		{
			"TFV_B_57x31_Ball",
			"TFV_B_57x31_Tracer",
			"TFV_B_57x31_Tracer_Yellow",
			"TFV_B_762x51_Ball",
			"TFV_B_762x51_Tracer",
			"TFV_B_762x51_Tracer_Yellow",
			"TFV_B_762x51_UW",
			"TFV_B_95x40_Ball",
			"TFV_B_95x40_Tracer",
			"TFV_B_95x40_Tracer_Yellow",
			"TFV_B_30x06_Ball",
			"TFV_B_30x06_Ball_Tracer",
			"TFV_B_338_SP",
			"TFV_B_338_VLD",
			"TFV_B_338_AP",
			"TFV_B_145x114_APFSDS",
			"TFV_B_145x114_HVAP",
			"TFV_B_145x114_HEDP",
			"TFV_B_20mm_APFSDS",
			"TFV_B_20mm_HEDP",
			"TFV_B_127x40_Ball",
			"TFV_B_127x40_AP",
			"TFV_B_127x40_Tracer",
			"TFV_8Gauge_Pellets",
			"TFV_8Gauge_Slugs",
			"TFV_8Gauge_HEDP",
			"TFV_B_5x23_Caseless",
			"TFV_B_5x23_Caseless_Tracer",
			"TFV_B_5x23_Caseless_Tracer_Yellow",
			"TFV_B_5x23_Caseless_JHP",
			"TFV_B_5x23_Caseless_FMJ",
			"TFV_M41_Rocket_HEAT",
			"TFV_M41_Rocket_HEAP",
			"TFV_M41_Rocket_HEAT_Guided",
			"TFV_M41_Rocket_HEAT_SACLOS",
			"TFV_M41_Rocket_HE_Base",
			"TFV_M41_SMK_W",
			"TFV_M41_SMK_B",
			"TFV_M41_SMK_R",
			"TFV_M41_SMK_G",
			"TFV_M41_SMK_O",
			"TFV_M41_SMK_P",
			"TFV_M41_SMK_Y",
			"TFV_M41_Rocket_HE_SACLOS_ProximityFuse",
			"TFV_M41_Rocket_HE",
			"TFV_M41_Rocket_HEAT_Laser",
			"TFV_M41_Rocket_HEAT_Thermal",
			"TFV_M41_Rocket_HE_Laser_ProximityFuse",
			"TFV_M41_Rocket_HE_Thermal_ProximityFuse",
			"TFV_G_M9_Frag",
			"TFV_G_M2_Smoke",
			"TFV_G_M2_RSmoke",
			"TFV_G_M2_GSmoke",
			"TFV_G_M2_BSmoke",
			"TFV_G_M2_OSmoke",
			"TFV_G_M2_YSmoke",
			"TFV_G_M2_PSmoke",
			"TFV_G_M8_Flare",
			"TFV_G_M8_Flare_Green",
			"TFV_G_M8_Flare_Blue",
			"TFV_G_M8_Flare_Yellow",
			"TFV_G_M8_Flare_White",
			"TFV_G_ELB47_Strobe",
			"TFV_25x130mm_Slug",
			"TFV_SpLaserAmmo",
			"TFV_30mm_Rail_Slug",
			"TFV_105mm_Rail_Slug",
			"TFV_MAC_Round",
			"TFV_B_127x99_Ball",
			"TFV_B_127x99_HE",
			"TFV_B_20mm_HE",
			"TFV_B_20mm_HEIAP",
			"TFV_B_30mm_HE",
			"TFV_B_30mm_AP",
			"TFV_B_30mm_HE2",
			"TFV_B_30mm_AP2",
			"TFV_B_40mm_HE",
			"TFV_B_40mm_AP",
			"TFV_B_40mm_APHE",
			"TFV_B_50mm_HE",
			"TFV_B_50mm_APFSDS",
			"TFV_B_50mm",
			"TFV_B_70mm_HE",
			"TFV_Sh_75mm_AP",
			"TFV_Sh_75mm_HE",
			"TFV_Sh_90mm_SAPHE",
			"TFV_Sh_90mm_APBC",
			"TFV_Sh_90mm_S1",
			"TFV_Sh_105mm_APBC",
			"TFV_Sh_105mm_SAPHE",
			"TFV_Sh_105mm_HEAT",
			"TFV_Sh_120mm_AP",
			"TFV_Sh_120mm_HE",
			"TFV_Sh_120mm_HEAT",
			"TFV_Sh_110mm_HEAT",
			"TFV_Sh_120mm_SAPHE",
			"TFV_Sh_175mm_HE",
			"TFV_Sh_175mm_HE_guided",
			"TFV_Sh_175mm_HE_LG",
			"TFV_M41_Rocket_ATGM",
			"TFV_M41_Rocket_ATGM2",
			"TFV_M_ASGM2_AA",
			"TFV_M_ASGM4_AA",
			"TFV_M_C2GMLS_AA",
			"TFV_M_ASGM10_AA",
			"TFV_M_Scorpion_AT",
			"TFV_M_Jackknife_LGM",
			"TFV_M_ANVIL_1_Rocket",
			"TFV_M_ANVIL_2_IR",
			"TFV_M_ANVIL_3_LGM",
			"TFV_M_ANVIL_4_ARTY",
			"TFV_M_ANVILSMK_W_Rocket",
			"TFV_M_ANVILSMK_B_Rocket",
			"TFV_M_ANVILSMK_R_Rocket",
			"TFV_M_ANVILSMK_G_Rocket",
			"TFV_M_ANVILSMK_O_Rocket",
			"TFV_M_ANVILSMK_P_Rocket",
			"TFV_M_ANVILSMK_Y_Rocket",
			"TFV_Bo_500lb",
			"TFV_Bo_1000lb",
			"TFV_Bo_2000lb",
			"TFV_Bo_GBU1071_LGB",
			"TFV_Bo_cluster_AP",
			"TFV_M_Shiva_Nuke",
			"TFV_Exp_Hydrogen_Small",
			"TFV_Exp_Fusion_Coil",
			"M319_HE",
			"M319_HEDP",
			"M319_Smoke",
			"M319_Smoke_Green",
			"M319_Smoke_Orange",
			"M319_Smoke_Red",
			"M319_Buckshot",
			"TFV_40mm_Smoke",
			"TFV_40mm_SmokeRed",
			"TFV_40mm_SmokeGreen",
			"TFV_40mm_SmokeYellow",
			"TFV_40mm_SmokePurple",
			"TFV_40mm_SmokeBlue",
			"TFV_40mm_SmokeOrange"
		};
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class CfgAmmo
{
	class ShotgunBase;
	class BulletBase;
	class ShotDeployBase;
	class B_762x51_Ball;
	class B_93x64_Ball;
	class B_9x21_Ball;
	class B_127x99_Ball;
	class B_338_Ball;
	class B_556x45_Ball;
	class B_20mm;
	class B_30mm_HE;
	class B_30mm_MP;
	class B_30mm_APFSDS;
	class B_35mm_AA;
	class B_35mm_AA_Tracer_Red;
	class B_40mm_GPR;
	class B_40mm_APFSDS;
	class B_40mm_APFSDS_Tracer_Green;
	class B_coil_20g_spike;
	class GrenadeHand;
	class SmokeShell;
	class B_IRStrobe;
	class R_PG32V_F;
	class R_TBG32V_F;
	class R_230mm_HE;
	class M_Scalpel_AT;
	class M_70mm_SAAMI;
	class M_Air_AA;
	class M_Zephyr;
	class M_PG_AT;
	class M_AT;
	class M_Titan_AT;
	class M_Titan_AT_static;
	class M_Titan_AA;
	class M_NLAW_AT_F;
	class Sh_105mm_HEAT_MP;
	class Sh_105mm_APFSDS_T_Green;
	class Sh_105mm_HEAT_MP_T_Green;
	class Sh_120mm_HE;
	class Sh_120mm_HE_Tracer_Yellow;
	class Sh_120mm_APFSDS;
	class Sh_125mm_APFSDS;
	class Sh_125mm_HE;
	class Sh_125mm_HEAT;
	class Sh_155mm_AMOS;
	class Sh_155mm_AMOS_guided;
	class Sh_155mm_AMOS_LG;
	class Cannon_30mm_HE_Plane_CAS_02_F;
	class Bo_Mk82;
	class Bo_GBU12_LGB;
	class BombCluster_02_Ammo_F;
	class Cluster_155mm_AMOS;
	class Mine_155mm_AMOS_Range;
	class F_20mm_White;
	class B_12Gauge_Pellets;
	class B_12Gauge_Pellets_Submunition;
	class B_12Gauge_Slug_NoCartridge;
	class B_12Gauge_Slug;
	class B_570x28_Ball;
	class G_40mm_HE;
	class G_40mm_Smoke;
	class G_40mm_HEDP;
	class G_40mm_SmokeRed;
	class G_40mm_SmokeGreen;
	class G_40mm_SmokeYellow;
	class G_40mm_SmokePurple;
	class G_40mm_SmokeBlue;
	class G_40mm_SmokeOrange;
	class TFV_B_57x31_Ball: B_570x28_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class TFV_B_57x31_Tracer: TFV_B_57x31_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly=0;
	};
	class TFV_B_57x31_Tracer_Yellow: TFV_B_57x31_Tracer
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class TFV_B_762x51_Ball: B_762x51_Ball
	{
		hit=12;
		typicalSpeed=750;
		caliber=2.0999999;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class TFV_B_762x51_Tracer: TFV_B_762x51_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class TFV_B_762x51_Tracer_Yellow: TFV_B_762x51_Tracer
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class TFV_B_762x51_UW: TFV_B_762x51_Tracer
	{
		typicalSpeed=400;
		airFriction=-0.02;
		waterFriction=-0.0099999998;
		effectFly="AmmoUnderwater";
		nvgOnly=1;
		aiAmmoUsageFlags="64 + 32";
	};
	class TFV_B_95x40_Ball: B_762x51_Ball
	{
		hit=13;
		typicalSpeed=600;
		caliber=4;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class TFV_B_95x40_Tracer: TFV_B_95x40_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class TFV_B_95x40_Tracer_Yellow: TFV_B_95x40_Tracer
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class TFV_B_30x06_Ball: B_762x51_Ball
	{
		hit=14;
		typicalSpeed=500;
		caliber=6;
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class TFV_B_30x06_Ball_Tracer: TFV_B_30x06_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class TFV_B_338_SP: TFV_B_762x51_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		hit=22;
		cartridge="FxCartridge_127";
		caliber=2;
		typicalSpeed=1023;
	};
	class TFV_B_338_VLD: TFV_B_338_SP
	{
		caliber=3;
		hit=18;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		typicalSpeed=1000;
		sideAirFriction=0.5;
		coefGravity=0.69999999;
		airFriction=-0.00036000001;
	};
	class TFV_B_338_AP: TFV_B_338_SP
	{
		caliber=3.5;
		hit=16;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		typicalSpeed=1040;
	};
	class TFV_B_145x114_APFSDS: B_127x99_Ball
	{
		hit=60;
		cartridge="FxCartridge_127";
		caliber=4;
		typicalSpeed=1200;
		airFriction=-0.00058678997;
		sideairFriction=1;
		coefGravity=0.2;
		timeToLive=15;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale=1.5;
		tracerStartTime=0;
		tracerEndTime=15;
		class CamShakeExplode
		{
			power="(20^0.5)";
			duration="((round (20^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((20^0.5)*3)";
		};
		class CamShakeHit
		{
			power=20;
			duration="((round (20^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
	};
	class TFV_B_145x114_HVAP: TFV_B_145x114_APFSDS
	{
		hit=80;
		caliber=3.2;
		typicalSpeed=850;
	};
	class TFV_B_145x114_HEDP: TFV_B_145x114_APFSDS
	{
		hit=50;
		indirectHit=20;
		explosive=0.75;
		indirectHitRange=1;
		caliber=0.1;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale=2;
		explosionEffects="ExploAmmoExplosion";
		craterEffects="ExploAmmoCrater";
		explosionSoundEffect="DefaultExplosion";
		typicalSpeed=850;
	};
	class TFV_B_20mm_APFSDS: TFV_B_145x114_APFSDS
	{
		hit=70;
		cartridge="FxCartridge_127";
		caliber=20;
		typicalSpeed=5000;
		airFriction=0;
		sideairFriction=0;
		coefGravity=0;
	};
	class TFV_B_20mm_HEDP: TFV_B_145x114_HEDP
	{
		hit=60;
		indirectHit=20;
		explosive=0.75;
		indirectHitRange=1;
		caliber=0.1;
	};
	class TFV_B_127x40_Ball: B_762x51_Ball
	{
		hit=10;
		cartridge="FxCartridge_small";
		caliber=2;
		typicalSpeed=400;
	};
	class TFV_B_127x40_AP: TFV_B_127x40_Ball
	{
		caliber=4;
	};
	class TFV_B_127x40_Tracer: TFV_B_127x40_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class TFV_8Gauge_Pellets: B_12Gauge_Pellets_Submunition
	{
		cartridge="FxCartridge_slug";
		caliber=2.5;
		hit=30;
	};
	class TFV_8Gauge_Slugs: B_12Gauge_Slug_NoCartridge
	{
		cartridge="FxCartridge_slug";
		caliber=4.5;
		hit=55;
	};
	class TFV_8Gauge_HEDP: B_12Gauge_Slug_NoCartridge
	{
		hit=30;
		indirectHit=20;
		indirectHitRange=0.69999999;
		explosionEffects="ExploAmmoExplosion";
		craterEffects="ExploAmmoCrater";
		explosionSoundEffect="DefaultExplosion";
		explosive=0.5;
	};
	class TFV_B_5x23_Caseless: B_762x51_Ball
	{
		hit=9;
		typicalSpeed=450;
		caliber=0.75;
		cartridge="FxCartridge_65_caseless";
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class TFV_B_5x23_Caseless_Tracer: TFV_B_5x23_Caseless
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class TFV_B_5x23_Caseless_Tracer_Yellow: TFV_B_5x23_Caseless_Tracer
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class TFV_B_5x23_Caseless_JHP: TFV_B_5x23_Caseless
	{
		hit=10;
		caliber=0.25;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class TFV_B_5x23_Caseless_FMJ: TFV_B_5x23_Caseless
	{
		caliber=1.5;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class TFV_M41_Rocket_HEAT: M_NLAW_AT_F
	{
		model="OPTRE_Weapons\rockets\M41_rocket.p3d";
		warheadName="TandemHEAT";
		hit=125;
		indirectHit=25;
		indirectHitRange=3.5;
		explosive=0.80000001;
		cost=300;
		airFriction=0;
		sideairFriction=0;
		coefGravity=0;
		maxSpeed=150;
		typicalSpeed=150;
		initTime=0.2;
		thrustTime=0.80000001;
		thrust=100;
		fuseDistance=20;
		simulationStep=0.02;
		timeToLive=30;
		effectsMissile="missile3";
		whistleDist=20;
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		submunitionAmmo="ammo_Penetrator_Titan_AT";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		flightProfiles[]=
		{
			"Direct"
		};
		proximityExplosionDistance=0;
		class Direct
		{
		};
	};
	class TFV_M41_Rocket_HEAP: TFV_M41_Rocket_HEAT
	{
		model="OPTRE_Weapons\rockets\M41_rocket.p3d";
		warheadName="HE";
		hit=220;
		indirectHit=50;
		indirectHitRange=6;
		explosive=1;
		allowAgainstInfantry=1;
		cost=30;
		submunitionAmmo="";
		submunitionDirectionType="";
	};
	class TFV_M41_Rocket_HEAT_Guided: M_Titan_AT
	{
		model="OPTRE_Weapons\rockets\M41_rocket.p3d";
		warheadName="TandemHEAT";
		submunitionAmmo="ammo_Penetrator_Titan_AT";
		effectsMissile="missile3";
		hit=125;
		indirectHit=40;
		proximityExplosionDistance=0;
		indirectHitRange=4;
		explosive=0.80000001;
		irLock=1;
		airLock=1;
		laserLock=0;
		nvLock=0;
		cmImmunity=0.75;
		simulationStep=0.0020000001;
		airFriction=0.064999998;
		sideAirFriction=0.30000001;
		manualControl=1;
		maneuvrability=24;
		maxControlRange=10000;
		missileKeepLockedCone=360;
		missileLockCone=180;
		missileLockMaxDistance=5000;
		missileLockMinDistance=50;
		missileLockMaxSpeed=111;
		trackOversteer=0.89999998;
		trackLead=0.80000001;
		weaponLockSystem=2;
		initTime=0;
		thrustTime=6;
		thrust=40;
		maxSpeed=210;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=100;
						angleRangeHorizontal=7;
						angleRangeVertical=4.5;
						maxTrackableATL=500;
					};
				};
			};
		};
		class ace_missileguidance
		{
			enabled=0;
			minDeflection=0.00025000001;
			maxDeflection=0.001;
			incDeflection=0.00050000002;
			canVanillaLock=1;
			defaultSeekerType="SACLOS";
			seekerTypes[]=
			{
				"SALH",
				"SACLOS"
			};
			defaultSeekerLockMode="LOAL";
			seekerLockModes[]=
			{
				"LOAL",
				"LOBL"
			};
			seekerAngle=90;
			seekerAccuracy=1;
			seekerMinRange=1;
			seekerMaxRange=2500;
			defaultAttackProfile="LIN";
			attackProfiles[]=
			{
				"LIN",
				"DIR"
			};
		};
	};
	class TFV_M41_Rocket_HEAT_SACLOS: M_Titan_AT
	{
		model="OPTRE_Weapons\rockets\M41_rocket.p3d";
		warheadName="TandemHEAT";
		submunitionAmmo="ammo_Penetrator_Titan_AT";
		effectsMissile="missile3";
		timeToLive=30;
		cost=500;
		aiAmmoUsageFlags="128 + 512 + 256";
		allowAgainstInfantry=0;
		hit=125;
		indirectHit=40;
		indirectHitRange=4;
		explosive=0.80000001;
		fuseDistance=10;
		irLock=0;
		airLock=2;
		lockType=0;
		laserLock=0;
		nvLock=0;
		cmImmunity=0.40000001;
		manualControl=1;
		missileManualControlCone=360;
		maxControlRange=5000;
		weaponLockSystem="2 + 16";
		simulationStep=0.0020000001;
		airFriction=0.145;
		sideAirFriction=0.30000001;
		maneuvrability=24;
		coefGravity=1;
		missileKeepLockedCone=360;
		missileLockCone=270;
		missileLockMaxDistance=5000;
		missileLockMinDistance=20;
		missileLockMaxSpeed=270;
		trackOversteer=0.89999998;
		trackLead=0.80000001;
		initTime=0.1;
		thrustTime=10;
		thrust=100;
		maxSpeed=270;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=0;
							maxRange=3000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=3000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=340;
						angleRangeHorizontal=60;
						angleRangeVertical=60;
						maxTrackableATL=4000;
					};
				};
			};
		};
		class ace_missileguidance
		{
			enabled=1;
			canVanillaLock=0;
			onFired="ace_hot_fnc_onFired";
			minDeflection=0.00025000001;
			maxDeflection=0.0070000002;
			incDeflection=0.00050000002;
			defaultSeekerType="SACLOS";
			seekerTypes[]=
			{
				"SACLOS"
			};
			defaultSeekerLockMode="LOAL";
			seekerLockModes[]=
			{
				"LOAL",
				"LOBL"
			};
			seekerAngle=30;
			seekerAccuracy=1;
			seekerMinRange=75;
			seekerMaxRange=2500;
			seekLastTargetPos=0;
			correctionDistance=15;
			offsetFromCrosshair[]={0,0,0.5};
			defaultAttackProfile="WIRE";
			attackProfiles[]=
			{
				"WIRE"
			};
		};
	};
	class TFV_M41_Rocket_HE_Base: TFV_M41_Rocket_HEAT_SACLOS
	{
		allowAgainstInfantry=1;
		aiAmmoUsageFlags="64 + 128";
		warheadName="HE";
		hit=125;
		indirectHit=125;
		indirectHitRange=10;
		explosive=1;
		submunitionAmmo="";
		irLock=0;
		airLock=0;
		manualControl=0;
		weaponLockSystem=16;
	};
	class TFV_M41_SMK_W: TFV_M41_Rocket_HE_Base
	{
		hit=0;
		indirectHit=0;
		explosive=1;
		warheadName="Smoke";
		ace_frag_enabled=0;
		displayName="[TFV] M41 White Smoke Rockets";
		explosionEffects="TFV_ComplexSmokeRocketEffect_White";
		class ace_missileguidance
		{
			enabled=0;
		};
	};
	class TFV_M41_SMK_B: TFV_M41_SMK_W
	{
		displayName="[TFV] M41 Blue Smoke Rockets";
		explosionEffects="TFV_ComplexSmokeRocketEffect_Blue";
	};
	class TFV_M41_SMK_R: TFV_M41_SMK_W
	{
		displayName="[TFV] M41 Red Smoke Rockets";
		explosionEffects="TFV_ComplexSmokeRocketEffect_Red";
	};
	class TFV_M41_SMK_G: TFV_M41_SMK_W
	{
		displayName="[TFV] M41 Green Smoke Rockets";
		explosionEffects="TFV_ComplexSmokeRocketEffect_Green";
	};
	class TFV_M41_SMK_O: TFV_M41_SMK_W
	{
		displayName="[TFV] M41 Orange Smoke Rockets";
		explosionEffects="TFV_ComplexSmokeRocketEffect_Orange";
	};
	class TFV_M41_SMK_P: TFV_M41_SMK_W
	{
		displayName="[TFV] M41 Purple Smoke Rockets";
		explosionEffects="TFV_ComplexSmokeRocketEffect_Purple";
	};
	class TFV_M41_SMK_Y: TFV_M41_SMK_W
	{
		displayName="[TFV] M41 Yellow Smoke Rockets";
		explosionEffects="TFV_ComplexSmokeRocketEffect_Yellow";
	};
	class TFV_M41_Rocket_HE_SACLOS_ProximityFuse: TFV_M41_Rocket_HE_Base
	{
		proximityExplosionDistance=10;
	};
	class TFV_M41_Rocket_HE: TFV_M41_Rocket_HE_Base
	{
		simulation="shotRocket";
		cmImmunity=1;
		class ace_missileguidance
		{
			enabled=0;
		};
	};
	class TFV_M41_Rocket_HEAT_Laser: TFV_M41_Rocket_HEAT_SACLOS
	{
		irLock=0;
		airLock=0;
		laserLock=1;
		nvLock=0;
		cmImmunity=0.30000001;
		manualControl=0;
		maxControlRange=10000;
		weaponLockSystem="4 + 16";
		airFriction=0.145;
		sideAirFriction=0.1;
		maneuvrability=24;
		coefGravity=1;
		missileKeepLockedCone=360;
		missileLockCone=300;
		trackOversteer=1;
		trackLead=0.5;
		initTime=0.1;
		thrustTime=10;
		thrust=10;
		maxSpeed=200;
		typicalSpeed=200;
		class ace_missileguidance
		{
			enabled=1;
			minDeflection=0.00025000001;
			maxDeflection=0.0070000002;
			incDeflection=0.00050000002;
			canVanillaLock=0;
			defaultSeekerType="SALH";
			seekerTypes[]=
			{
				"SALH"
			};
			defaultSeekerLockMode="LOAL";
			seekerLockModes[]=
			{
				"LOAL"
			};
			seekerAngle=300;
			seekerAccuracy=1;
			seekerMinRange=5;
			seekerMaxRange=2500;
			defaultAttackProfile="DIR";
			attackProfiles[]=
			{
				"DIR"
			};
		};
	};
	class TFV_M41_Rocket_HEAT_Thermal: TFV_M41_Rocket_HEAT_SACLOS
	{
		missileKeepLockedCone=90;
		missileLockCone=90;
		missileLockMaxDistance=5000;
		missileLockMinDistance=10;
		missileLockMaxSpeed=270;
		trackOversteer=0.33000001;
		trackLead=0.33000001;
		irLock=1;
		airLock=1;
		lockType=0;
		laserLock=0;
		nvLock=0;
		cmImmunity=0.33000001;
		manualControl=0;
		missileManualControlCone=360;
		maxControlRange=5000;
		weaponLockSystem="2 + 16";
		aiAmmoUsageFlags="128 + 512 + 256";
		allowAgainstInfantry=0;
		class ace_missileguidance
		{
			enabled=1;
			minDeflection=4.9999999e-005;
			maxDeflection=0.0070000002;
			incDeflection="5E-005";
			canVanillaLock=1;
			defaultSeekerType="Optic";
			seekerTypes[]=
			{
				"Optic",
				"Thermal"
			};
			defaultSeekerLockMode="LOAL";
			seekerLockModes[]=
			{
				"LOAL",
				"LOBL"
			};
			seekerAngle=90;
			seekerAccuracy=1;
			seekerMinRange=1;
			seekerMaxRange=2500;
			seekLastTargetPos=1;
			showHintOnCycle=1;
			defaultAttackProfile="DIR";
			attackProfiles[]=
			{
				"DIR"
			};
		};
	};
	class TFV_M41_Rocket_HE_Laser_ProximityFuse: TFV_M41_Rocket_HE_Base
	{
		irLock=0;
		airLock=0;
		laserLock=1;
		nvLock=0;
		cmImmunity=0.30000001;
		manualControl=0;
		maxControlRange=10000;
		weaponLockSystem="4 + 16";
		airFriction=0.145;
		sideAirFriction=0.1;
		maneuvrability=24;
		coefGravity=1;
		missileKeepLockedCone=360;
		missileLockCone=300;
		trackOversteer=1;
		trackLead=0.5;
		initTime=0.1;
		thrustTime=10;
		thrust=10;
		maxSpeed=200;
		typicalSpeed=200;
		class ace_missileguidance
		{
			enabled=1;
			minDeflection=0.00025000001;
			maxDeflection=0.0070000002;
			incDeflection=0.00050000002;
			canVanillaLock=0;
			defaultSeekerType="SALH";
			seekerTypes[]=
			{
				"SALH"
			};
			defaultSeekerLockMode="LOAL";
			seekerLockModes[]=
			{
				"LOAL"
			};
			seekerAngle=300;
			seekerAccuracy=1;
			seekerMinRange=5;
			seekerMaxRange=2500;
			defaultAttackProfile="DIR";
			attackProfiles[]=
			{
				"DIR"
			};
		};
		proximityExplosionDistance=10;
	};
	class TFV_M41_Rocket_HE_Thermal_ProximityFuse: TFV_M41_Rocket_HE_Base
	{
		missileKeepLockedCone=90;
		missileLockCone=90;
		missileLockMaxDistance=5000;
		missileLockMinDistance=10;
		missileLockMaxSpeed=270;
		trackOversteer=0.33000001;
		trackLead=0.33000001;
		irLock=1;
		airLock=1;
		lockType=0;
		laserLock=0;
		nvLock=0;
		cmImmunity=0.33000001;
		manualControl=0;
		missileManualControlCone=360;
		maxControlRange=5000;
		weaponLockSystem="2 + 16";
		aiAmmoUsageFlags="128 + 512 + 256";
		allowAgainstInfantry=0;
		class ace_missileguidance
		{
			enabled=1;
			minDeflection=4.9999999e-005;
			maxDeflection=0.0070000002;
			incDeflection="5E-005";
			canVanillaLock=1;
			defaultSeekerType="Optic";
			seekerTypes[]=
			{
				"Optic",
				"Thermal"
			};
			defaultSeekerLockMode="LOAL";
			seekerLockModes[]=
			{
				"LOAL",
				"LOBL"
			};
			seekerAngle=90;
			seekerAccuracy=1;
			seekerMinRange=1;
			seekerMaxRange=2500;
			seekLastTargetPos=1;
			showHintOnCycle=1;
			defaultAttackProfile="DIR";
			attackProfiles[]=
			{
				"DIR"
			};
		};
		proximityExplosionDistance=10;
	};
	class TFV_G_M9_Frag: GrenadeHand
	{
		model="\OPTRE_Weapons\explosives\m9_grenade.p3d";
		hit=10;
		indirectHit=10;
		indirectHitRange=8;
		visibleFire=0.5;
		audibleFire=0.050000001;
		visibleFireTime=1;
		fuseDistance=0;
	};
	class TFV_G_M2_Smoke: SmokeShell
	{
		model="\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
		smokeColor[]={1,1,1,1};
	};
	class TFV_G_M2_RSmoke: TFV_G_M2_Smoke
	{
		smokeColor[]={0.84380001,0.1383,0.1353,1};
	};
	class TFV_G_M2_GSmoke: TFV_G_M2_Smoke
	{
		smokeColor[]={0.21250001,0.62580001,0.48910001,1};
	};
	class TFV_G_M2_BSmoke: TFV_G_M2_Smoke
	{
		smokeColor[]={0.1183,0.1867,1,1};
	};
	class TFV_G_M2_OSmoke: TFV_G_M2_Smoke
	{
		smokeColor[]={0.66970003,0.22750001,0.10053,1};
	};
	class TFV_G_M2_YSmoke: TFV_G_M2_Smoke
	{
		smokeColor[]={0.98830003,0.86059999,0.071900003,1};
	};
	class TFV_G_M2_PSmoke: TFV_G_M2_Smoke
	{
		smokeColor[]={0.4341,0.1388,0.41440001,1};
	};
	class TFV_G_M8_Flare: F_20mm_White
	{
		flare=1;
		lightColor[]={1,0.25,0.25,1};
		pullPinSound[]=
		{
			"A3\sounds_f\weapons\smokeshell\smoke_1.wss",
			0.40000001,
			1,
			10
		};
		model="\OPTRE_Weapons\explosives\m8_flare.p3d";
		dangerRadiusHit=-1;
		suppressionRadiusHit=-1;
		typicalSpeed=22;
		cost=100;
		deflecting=30;
		explosionTime=3;
		timeToLive=300;
		grenadeFireSound[]={};
		grenadeBurningSound[]={};
		aiAmmoUsageFlags="1 + 2";
		smokeColor[]={0,0,0,0};
		effectsSmoke="TFV_EmptyEffect";
		whistleDist=0;
		brightness=10;
		size=1;
		intensity=10000;
		flareSize=5;
	};
	class TFV_G_M8_Flare_Green: TFV_G_M8_Flare
	{
		lightColor[]={0.25,1,0.25,1};
	};
	class TFV_G_M8_Flare_Blue: TFV_G_M8_Flare
	{
		lightColor[]={0.25,0.25,1,1};
	};
	class TFV_G_M8_Flare_Yellow: TFV_G_M8_Flare
	{
		lightColor[]={1,1,0.25,1};
	};
	class TFV_G_M8_Flare_White: TFV_G_M8_Flare
	{
		lightColor[]={1,1,1,1};
	};
	class TFV_G_ELB47_Strobe: B_IRStrobe
	{
		model="\OPTRE_Weapons\items\beacon.p3d";
		class NVGMarkers
		{
			class Blinking1
			{
			};
		};
	};
	class TFV_25x130mm_Slug: B_40mm_APFSDS_Tracer_Green
	{
		scope=2;
		caliber=100;
		cost=1000;
		explosive=0;
		hit=325;
		whistleOnFire=1;
		whistleDist=14;
		timeToLive=1.5;
		tracerScale=3;
		tracerStartTime=0.050000001;
		tracerEndTime=1;
		tracersEvery=1;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
		indirectHit=50;
		indirectHitRange=0.25;
		aiAmmoUsageFlags="128 + 256 + 512";
		airLock=1;
		CraterEffects="HEShellCrater";
		CraterWaterEffects="ImpactEffectsWaterHE";
		ExplosionEffects="HEShellExplosion";
		allowAgainstInfantry=1;
		soundHit1[]=
		{
			"A3\Sounds_F\weapons\Explosion\expl_shell_1",
			3.1622777,
			1,
			2000
		};
		soundHit2[]=
		{
			"A3\Sounds_F\weapons\Explosion\expl_shell_2",
			3.1622777,
			1,
			2000
		};
		soundHit3[]=
		{
			"A3\Sounds_F\weapons\Explosion\expl_shell_3",
			3.1622777,
			1,
			2000
		};
		soundHit4[]=
		{
			"A3\Sounds_F\weapons\Explosion\expl_shell_4",
			3.1622777,
			1,
			2000
		};
		soundHit5[]=
		{
			"A3\Sounds_F\weapons\Explosion\expl_shell_5",
			3.1622777,
			1,
			2000
		};
		soundHit6[]=
		{
			"A3\Sounds_F\weapons\Explosion\expl_shell_6",
			3.1622777,
			1,
			2000
		};
		soundHit7[]=
		{
			"A3\Sounds_F\weapons\Explosion\expl_shell_7",
			3.1622777,
			1,
			2000
		};
		soundHit8[]=
		{
			"A3\Sounds_F\weapons\Explosion\expl_shell_8",
			3.1622777,
			1,
			2000
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.13,
			"soundHit2",
			0.13,
			"soundHit3",
			0.13,
			"soundHit4",
			0.13,
			"soundHit5",
			0.12,
			"soundHit6",
			0.12,
			"soundHit7",
			0.12,
			"soundHit8",
			0.12
		};
		class HitEffects
		{
			hitMetal="ImpactMetalSabotBig";
			hitMetalPlate="ImpactMetalSabotBig";
			hitBuilding="ImpactConcreteSabot";
			hitConcrete="ImpactConcreteSabot";
			hitGroundSoft="ImpactEffectsGroundSabot";
			hitGroundHard="ImpactEffectsGroundSabot";
			default_mat="ImpactEffectsGroundSabot";
		};
		class CamShakeExplode
		{
			power="(180^0.5)";
			duration="((round (180^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((180^0.5)*3)";
		};
		class CamShakeHit
		{
			power=180;
			duration="((round (180^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power="(120^0.25)";
			duration="((round (120^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((120^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power=0.02;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class TFV_SpLaserAmmo: TFV_25x130mm_Slug
	{
		scope=2;
		caliber=100;
		hit=250;
		indirectHit=25;
		indirectHitRange=1;
	};
	class TFV_30mm_Rail_Slug: TFV_25x130mm_Slug
	{
		caliber=115;
		cost=1000;
		explosive=0;
		hit=350;
		indirectHit=60;
		indirectHitRange=0.30000001;
	};
	class TFV_105mm_Rail_Slug: TFV_30mm_Rail_Slug
	{
		caliber=200;
		cost=1000;
		explosive=0.1;
		hit=600;
		indirectHit=125;
		indirectHitRange=2;
	};
	class TFV_MAC_Round: TFV_25x130mm_Slug
	{
		caliber=1000;
		hit=10000;
		airFriction=0;
		allowAgainstInfantry=1;
		audibleFire=100;
		canLock=0;
		cost=10000;
		deflecting=0;
		explosive=0.5;
		fuseDistance=1;
		indirectHit=1000;
		indirectHitRange=100;
		maxSpeed=1000;
		typicalSpeed=1000;
		sideAirFriction=0;
		simulation="shotSubmunitions";
		suppressionRadiusBulletClose=100;
		suppressionRadiusHit=100;
		timeToLive=60;
		tracerStartTime=0;
		supersonicCrackNear[]=
		{
			"A3\sounds_f\weapons\hits\sscrack1",
			1,
			1,
			40
		};
		supersonicCrackFar[]=
		{
			"A3\sounds_f\weapons\hits\sscrack2",
			1,
			1,
			100
		};
		visibleFire=100;
		visibleFireTime=300;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
		CraterEffects="HEShellCrater";
		CraterWaterEffects="ImpactEffectsWaterHE";
		ExplosionEffects="HEShellExplosion";
	};
	class TFV_B_127x99_Ball: B_127x99_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerStartTime=0;
		tracerEndTime=10;
		caliber=3;
		aiAmmoUsageFlags="64 + 128 + 256";
	};
	class TFV_B_127x99_HE: TFV_B_127x99_Ball
	{
		indirectHitRange=0.5;
		indirectHit=10;
		caliber=2;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		aiAmmoUsageFlags="64 + 128 + 256";
	};
	class TFV_B_20mm_HE: B_20mm
	{
		hit=70;
		indirectHit=7;
		caliber=3.5;
		explosive=0.5;
		tracerScale=1.25;
		tracerStartTime=0.0049999999;
		tracerEndTime=10;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		allowAgainstInfantry=1;
		airLock=1;
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
	};
	class TFV_B_20mm_HEIAP: B_35mm_AA_Tracer_Red
	{
		airlock=1;
		hit=75;
		indirectHit=11;
		indirectHitRange=1.5;
		caliber=3.5;
		explosive=0.75;
		tracerScale=1.25;
		tracerStartTime=0.0049999999;
		tracerEndTime=10;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		allowAgainstInfantry=1;
	};
	class TFV_B_30mm_HE: B_30mm_MP
	{
		hit=95;
		airLock=1;
		indirectHit=8;
		indirectHitRange=2.5;
		caliber=4.5;
		explosive=0.69999999;
		tracerScale=2.5;
		tracerStartTime=0.0049999999;
		tracerEndTime=10;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		allowAgainstInfantry=1;
	};
	class TFV_B_30mm_AP: B_30mm_APFSDS
	{
		hit=125;
		indirectHit=10;
		tracerScale=2.5;
		tracerStartTime=0.0049999999;
		tracerEndTime=10;
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		aiAmmoUsageFlags="128 + 512";
	};
	class TFV_B_30mm_HE2: B_40mm_GPR
	{
		hit=95;
		airLock=1;
		indirectHit=15;
		indirectHitRange=3;
		caliber=5;
		explosive=0.80000001;
		tracerScale=2.5;
		tracerStartTime=0.0049999999;
		tracerEndTime=10;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		allowAgainstInfantry=1;
	};
	class TFV_B_30mm_AP2: B_40mm_APFSDS
	{
		hit=145;
		indirectHit=10;
		tracerScale=2.5;
		tracerStartTime=0.0049999999;
		tracerEndTime=10;
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		aiAmmoUsageFlags="128 + 512";
	};
	class TFV_B_40mm_HE: B_40mm_GPR
	{
		hit=85;
		indirectHit=18;
		indirectHitRange=3.5;
		caliber=5;
		explosive=0.80000001;
		tracerScale=2.5;
		tracerStartTime=0.0049999999;
		tracerEndTime=10;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		airLock=1;
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		allowAgainstInfantry=1;
	};
	class TFV_B_40mm_AP: B_40mm_APFSDS
	{
		hit=155;
		indirectHit=10;
		tracerScale=2.5;
		tracerStartTime=0.0049999999;
		tracerEndTime=10;
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		aiAmmoUsageFlags="128 + 512";
	};
	class TFV_B_40mm_APHE: B_35mm_AA_Tracer_Red
	{
		airlock=1;
		hit=85;
		indirectHit=25;
		indirectHitRange=5;
		caliber=4;
		explosive=0.60000002;
		tracerScale=2.5;
		tracerStartTime=0.0049999999;
		tracerEndTime=10;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		allowAgainstInfantry=1;
	};
	class TFV_B_50mm_HE: B_40mm_GPR
	{
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_red.p3d";
		hit=120;
		indirectHit=35;
		indirectHitRange=4;
		caliber=6;
		explosive=0.64999998;
		tracerScale=3;
		tracerStartTime=0.0049999999;
		tracerEndTime=10;
		allowAgainstInfantry=1;
		airLock=1;
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
	};
	class TFV_B_50mm_APFSDS: B_40mm_APFSDS
	{
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
		hit=210;
		indirectHit=10;
		indirectHitRange=0.2;
		caliber=10;
		explosive=0;
		tracerScale=3;
		tracerStartTime=0.0049999999;
		tracerEndTime=10;
		aiAmmoUsageFlags="128 + 512";
	};
	class TFV_B_50mm: B_35mm_AA_Tracer_Red
	{
		airlock=1;
		hit=120;
		indirectHit=40;
		indirectHitRange=6;
		caliber=4;
		explosive=0.80000001;
		tracerScale=3;
		tracerStartTime=0.0049999999;
		tracerEndTime=10;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_red.p3d";
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		allowAgainstInfantry=1;
	};
	class TFV_B_70mm_HE: TFV_B_50mm_HE
	{
		hit=175;
		indirectHit=50;
		indirectHitRange=5;
		caliber=4;
		explosive=0.80000001;
		tracerScale=4;
		typicalSpeed=960;
		thrust=210;
		suppressionRadiusHit=24;
		suppressionRadiusBulletClose=12;
		cost=20;
		artilleryCharge=1;
		artilleryDispersion=1;
		submunitionAmmo="";
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_red.p3d";
		warheadName="HE";
		weaponType="cannon";
		cartridge="FxCartridge_556";
		explosionType="explosive";
		explosionSoundEffect="DefaultExplosion";
		explosionEffects="ExploAmmoExplosion";
		effectsSmoke="SmokeShellWhite";
		effectsMissile="ExplosionEffects";
		effectsMissileInit="";
		effectsFire="CannonFire";
		effectFly="AmmoClassic";
		effectFlare="FlareShell";
		craterWaterEffects="ImpactEffectsWater";
		craterShape="";
		craterEffects="ExploAmmoCrater";
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		airLock=1;
		allowAgainstInfantry=1;
		audibleFire=200;
		multiSoundHit[]=
		{
			"soundHit1",
			0.25,
			"soundHit2",
			0.25,
			"soundHit3",
			0.25,
			"soundHit4",
			0.25
		};
		SoundSetExplosion[]=
		{
			"Shell30mm40mm_Exp_SoundSet",
			"Shell30mm40mm_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		soundHit[]=
		{
			"",
			1,
			1
		};
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01",
			1.77828,
			1,
			1600
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02",
			1.77828,
			1,
			1600
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03",
			1.77828,
			1,
			1600
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04",
			1.77828,
			1,
			1600
		};
		ACE_damageType="explosive";
		ace_rearm_caliber=30;
		ace_vehicle_damage_incendiary=0.1;
	};
	class TFV_Sh_75mm_AP: Sh_105mm_APFSDS_T_Green
	{
		caliber=18;
		hit=350;
		allowAgainstInfantry=0;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
	};
	class TFV_Sh_75mm_HE: Sh_120mm_HE
	{
		caliber=6;
		indirectHit=40;
		indirectHitRange=4;
		hit=150;
		explosive=0.89999998;
		allowAgainstInfantry=1;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_red.p3d";
	};
	class TFV_Sh_90mm_SAPHE: Sh_120mm_HE
	{
		hit=220;
		indirectHit=60;
		indirectHitRange=4;
		caliber=8;
		explosive=0.69999999;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_red.p3d";
	};
	class TFV_Sh_90mm_APBC: Sh_105mm_APFSDS_T_Green
	{
		caliber=24;
		hit=460;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
	};
	class TFV_Sh_90mm_S1: TFV_Sh_90mm_SAPHE
	{
		hit=150;
		indirectHit=80;
		indirectHitRange=8;
		caliber=1;
		explosive=1;
		simulation="shotSpread";
		typicalspeed=750;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_red.p3d";
	};
	class TFV_Sh_105mm_APBC: Sh_105mm_APFSDS_T_Green
	{
		hit=480;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
	};
	class TFV_Sh_105mm_SAPHE: Sh_120mm_HE
	{
		hit=260;
		indirectHit=70;
		indirectHitRange=5;
		caliber=9;
		explosive=0.89999998;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_red.p3d";
	};
	class TFV_Sh_105mm_HEAT: Sh_105mm_HEAT_MP
	{
		hit=160;
		indirectHit=33;
		indirectHitRange=3.75;
		caliber=11;
		explosive=0.75;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
	};
	class TFV_Sh_120mm_AP: Sh_125mm_APFSDS
	{
		hit=560;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
	};
	class TFV_Sh_120mm_HE: Sh_125mm_HE
	{
		hit=310;
		indirectHit=100;
		indirectHitRange=6;
		caliber=10;
		explosive=1;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_red.p3d";
	};
	class TFV_Sh_120mm_HEAT: Sh_125mm_HEAT
	{
		hit=170;
		indirectHit=40;
		caliber=15;
		explosive=0.75;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
	};
	class TFV_Sh_110mm_HEAT: Sh_105mm_HEAT_MP
	{
		hit=675;
		indirectHit=32;
		indirectHitRange=3;
		caliber=14;
		explosive=0.89999998;
		allowAgainstInfantry=0;
		simulation="shotBullet";
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
	};
	class TFV_Sh_120mm_SAPHE: Sh_120mm_HE_Tracer_Yellow
	{
		hit=620;
		indirectHit=80;
		indirectHitRange=7;
		caliber=10;
		explosive=0.69999999;
		simulation="shotBullet";
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_red.p3d";
	};
	class TFV_Sh_175mm_HE: Sh_155mm_AMOS
	{
		hit=320;
		indirectHit=80;
		indirectHitRange=6;
		caliber=10;
		explosive=0.69999999;
	};
	class TFV_Sh_175mm_HE_guided: Sh_155mm_AMOS_guided
	{
		hit=320;
		indirectHit=80;
		indirectHitRange=6;
		caliber=10;
		explosive=0.69999999;
	};
	class TFV_Sh_175mm_HE_LG: Sh_155mm_AMOS_LG
	{
		hit=320;
		indirectHit=80;
		indirectHitRange=6;
		caliber=10;
		explosive=0.69999999;
	};
	class TFV_M41_Rocket_ATGM: M_Titan_AT_static
	{
		hit=125;
		airLock=1;
		manualControl=1;
		allowAgainstInfantry=1;
		maxControlRange=10000;
		initTime=0.1;
		missileKeepLockedCone=360;
		aiAmmoUsageFlags="128 + 256 + 512";
		warheadName="HE";
		submunitionAmmo="ammo_Penetrator_Titan_AT";
	};
	class TFV_M41_Rocket_ATGM2: M_Titan_AT
	{
		hit=160;
		airLock=1;
		manualControl=1;
		allowAgainstInfantry=1;
		maxControlRange=10000;
		initTime=0.1;
		missileKeepLockedCone=360;
		indirectHit=25;
		indirectHitRange=3.5;
		explosive=0.80000001;
		aiAmmoUsageFlags="128 + 256 + 512";
		warheadName="HE";
		submunitionAmmo="ammo_Penetrator_Titan_AT";
	};
	class TFV_M_ASGM2_AA: M_70mm_SAAMI
	{
		model="OPTRE_Weapons\Aircraft\ASGM2_missile_fly.p3d";
		hit=190;
		indirectHit=100;
		indirectHitRange=7;
		allowAgainstInfantry=1;
		airLock=1;
		irLock=1;
		aiAmmoUsageFlags="128 + 256";
		warheadName="HE";
		weaponLockSystem="2 + 16";
		missileLockCone=45;
		missileKeepLockedCone=120;
		missileLockMaxDistance=6000;
		missileLockMinDistance=75;
		cmImmunity=0.92000002;
	};
	class TFV_M_ASGM4_AA: M_Air_AA
	{
		model="OPTRE_Weapons\static\LAU65D\Rocket\ASGM4_missile_fly.p3d";
		initTime=0.5;
		airFriction=0.050000001;
		maxspeed=500;
		fuseDistance=50;
		maneuvrability=15;
		sideAirFriction=0.1;
		thrust=385;
		thrustTime=2.5;
		trackLead=1;
		trackOversteer=1;
		airLock=1;
		irLock=1;
		explosive=0.60000002;
		indirectHit=80;
		indirectHitRange=7;
		hit=190;
		aiAmmoUsageFlags="128+256+512";
		weaponLockSystem="2 + 16";
		missileLockCone=75;
		missileKeepLockedCone=120;
		missileLockMaxDistance=2500;
		missileLockMinDistance=100;
		warheadName="HE";
		cmImmunity=0.89999998;
	};
	class TFV_M_C2GMLS_AA: TFV_M_ASGM2_AA
	{
		model="OPTRE_Weapons\Aircraft\ASGM2_missile_fly.p3d";
		hit=200;
		indirectHit=120;
		indirectHitRange=8;
		warheadName="HE";
		submunitionAmmo="ammo_Penetrator_Rocket_04_AP";
		aiAmmoUsageFlags="128+256+512";
		allowAgainstInfantry=1;
		airLock=1;
		irLock=1;
		missileKeepLockedCone=120;
		missileLockCone=90;
		weaponLockSystem="2 + 16";
		cmImmunity=0.93000001;
	};
	class TFV_M_ASGM10_AA: M_Zephyr
	{
		model="OPTRE_Weapons\Aircraft\ASGM10_missile_fly.p3d";
		hit=400;
		missileLockCone=120;
		missileKeepLockedCone=120;
		indirectHit=125;
		indirectHitRange=13;
		timeToLive=35;
		airLock=2;
		irLock=1;
		maneuvrability=30;
		airFriction=0.079999998;
		sideAirFriction=0.16;
		thrust=240;
		weaponLockSystem="8 + 16";
		cmImmunity=0.94999999;
		missileLockMaxDistance=10000;
		missileLockMinDistance=150;
	};
	class TFV_M_Scorpion_AT: M_Scalpel_AT
	{
		model="OPTRE_Weapons\Aircraft\Scorpion_missile_fly.p3d";
		warheadName="TandemHEAT";
		submunitionAmmo="ammo_Penetrator_Scalpel";
		hit=220;
		indirectHit=60;
		indirectHitRange=7;
		airLock=0;
		maxSpeed=700;
		irLock=1;
		laserLock=1;
		weaponLockSystem="2 + 4 + 16";
		missileLockMaxDistance=5000;
		missileLockMinDistance=100;
	};
	class TFV_M_Jackknife_LGM: M_Scalpel_AT
	{
		model="OPTRE_Weapons\Aircraft\Jackknife_missile_fly.p3d";
		hit=1100;
		indirectHit=85;
		indirectHitRange=8;
		warheadName="HE";
		submunitionAmmo="ammo_Penetrator_AGM_02";
		submunitionDirectionType="SubmunitionModelDirection";
		explosive=1;
		airLock=0;
		irLock=1;
		laserLock=1;
		weaponLockSystem="2 + 4 + 16";
		missileLockMaxDistance=7500;
		missileLockMinDistance=200;
	};
	class TFV_M_ANVIL_1_Rocket: M_AT
	{
		model="OPTRE_Weapons\rockets\M41_rocket.p3d";
		hit=300;
		indirectHit=70;
		indirectHitRange=8;
		explosive=1;
		laserLock=0;
		canLock=0;
		irLock=0;
		airlock=0;
		nvLock=0;
		manualControl=0;
		weaponLockSystem=16;
		missileKeepLockedCone=60;
		missileLockCone=30;
		missileLockMaxDistance=2500;
		missileLockMinDistance=1;
		missileLockMaxSpeed=270;
		aiAmmoUsageFlags="64 + 128 + 512";
		allowAgainstInfantry=1;
		trackOversteer=0.75;
		trackLead=1;
		maneuvrability=16;
		class ace_missileguidance
		{
			enabled=0;
		};
	};
	class TFV_M_ANVIL_2_IR: TFV_M_ANVIL_1_Rocket
	{
		autoSeekTarget=1;
		canLock=2;
		airlock=1;
		irLock=1;
		cmImmunity=0.77999997;
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		flightProfiles[]=
		{
			"LoalDistance"
		};
		class LoalDistance
		{
			lockSeekDistanceFromParent=0;
		};
		class ace_missileguidance
		{
			enabled=1;
			minDeflection=0.00025000001;
			maxDeflection=0.0070000002;
			incDeflection=0.00050000002;
			canVanillaLock=1;
			defaultSeekerType="Thermal";
			seekerTypes[]=
			{
				"Optic",
				"Thermal"
			};
			defaultSeekerLockMode="LOAL";
			seekerLockModes[]=
			{
				"LOAL"
			};
			seekerAngle=30;
			seekerAccuracy=0.85000002;
			seekerMinRange=1;
			seekerMaxRange=2500;
			seekLastTargetPos=1;
			showHintOnCycle=1;
			defaultAttackProfile="DIR";
			attackProfiles[]=
			{
				"DIR"
			};
		};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensor: SensorTemplateIR
					{
						componentType="IRSensorComponent";
						class AirTarget
						{
							minRange=5;
							maxRange=2500;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=5;
							maxRange=2500;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=30;
						angleRangeVertical=30;
					};
				};
			};
		};
	};
	class TFV_M_ANVIL_3_LGM: TFV_M_ANVIL_1_Rocket
	{
		autoSeekTarget=1;
		canLock=2;
		irLock=0;
		laserLock=1;
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		flightProfiles[]=
		{
			"LoalDistance"
		};
		class LoalDistance
		{
			lockSeekDistanceFromParent=0;
		};
		class ace_missileguidance
		{
			enabled=1;
			minDeflection=0.00025000001;
			maxDeflection=0.0070000002;
			incDeflection=0.00050000002;
			canVanillaLock=0;
			defaultSeekerType="SALH";
			seekerTypes[]=
			{
				"SALH"
			};
			defaultSeekerLockMode="LOAL";
			seekerLockModes[]=
			{
				"LOAL"
			};
			seekerAngle=30;
			seekerAccuracy=0.85000002;
			seekerMinRange=1;
			seekerMaxRange=2500;
			defaultAttackProfile="DIR";
			attackProfiles[]=
			{
				"DIR"
			};
		};
	};
	class TFV_M_ANVIL_4_ARTY: R_230mm_HE
	{
		model="OPTRE_Weapons\rockets\M41_rocket.p3d";
		hit=330;
		indirectHit=80;
		indirectHitRange=9;
		explosive=1;
		simulation="'shotRocket'";
		submunitionAmmo="''";
	};
	class TFV_M_ANVILSMK_W_Rocket: TFV_M_ANVIL_1_Rocket
	{
		displayName="[TFV] White Smoke Rockets";
		hit=0;
		indirectHit=0;
		explosive=1;
		coefGravity=1;
		explosionEffects="TFV_ComplexSmokeRocketEffect_White";
	};
	class TFV_M_ANVILSMK_B_Rocket: TFV_M_ANVILSMK_W_Rocket
	{
		displayName="[TFV] Blue Smoke Rockets";
		explosionEffects="TFV_ComplexSmokeRocketEffect_Blue";
	};
	class TFV_M_ANVILSMK_R_Rocket: TFV_M_ANVILSMK_W_Rocket
	{
		displayName="[TFV] Red Smoke Rockets";
		explosionEffects="TFV_ComplexSmokeRocketEffect_Red";
	};
	class TFV_M_ANVILSMK_G_Rocket: TFV_M_ANVILSMK_W_Rocket
	{
		displayName="[TFV] Green Smoke Rockets";
		explosionEffects="TFV_ComplexSmokeRocketEffect_Green";
	};
	class TFV_M_ANVILSMK_O_Rocket: TFV_M_ANVILSMK_W_Rocket
	{
		displayName="[TFV] Orange Smoke Rockets";
		explosionEffects="TFV_ComplexSmokeRocketEffect_Orange";
	};
	class TFV_M_ANVILSMK_P_Rocket: TFV_M_ANVILSMK_W_Rocket
	{
		displayName="[TFV] Purple Smoke Rockets";
		explosionEffects="TFV_ComplexSmokeRocketEffect_Purple";
	};
	class TFV_M_ANVILSMK_Y_Rocket: TFV_M_ANVILSMK_W_Rocket
	{
		displayName="[TFV] Yellow Smoke Rockets";
		explosionEffects="TFV_ComplexSmokeRocketEffect_Yellow";
	};
	class TFV_Bo_500lb: Bo_Mk82
	{
		model="OPTRE_Weapons\Aircraft\500lb_bomb_fly.p3d";
		hit=5000;
		indirectHit=1100;
		indirectHitRange=12;
		caliber=1;
		explosive=1;
	};
	class TFV_Bo_1000lb: TFV_Bo_500lb
	{
		model="OPTRE_Weapons\Aircraft\1000lb_bomb_fly.p3d";
		hit=8000;
		indirectHit=2200;
		indirectHitRange=20;
		caliber=2;
		explosive=1;
	};
	class TFV_Bo_2000lb: TFV_Bo_500lb
	{
		model="OPTRE_Weapons\Aircraft\2000lb_bomb_fly.p3d";
		hit=12000;
		indirectHit=4000;
		indirectHitRange=35;
		caliber=4;
		explosive=1;
	};
	class TFV_Bo_GBU1071_LGB: Bo_GBU12_LGB
	{
		model="OPTRE_Weapons\Aircraft\gbu_bomb_fly.p3d";
		hit=6000;
		indirectHit=1500;
		indirectHitRange=14;
		explosive=1;
	};
	class TFV_Bo_cluster_AP: BombCluster_02_Ammo_F
	{
		hit=6000;
		indirectHit=1500;
		indirectHitRange=14;
		model="OPTRE_Weapons\Aircraft\1000lb_bomb_fly.p3d";
	};
	class TFV_M_Shiva_Nuke: TFV_M_Jackknife_LGM
	{
		model="OPTRE_Weapons\Aircraft\Shiva_missile_fly.p3d";
		hit=11000;
		indirectHit=1000;
		indirectHitRange=500;
		explosive=1;
		irLock=0;
		laserLock=1;
		initTime=5;
	};
	class TFV_Exp_Hydrogen_Small: Bo_Mk82
	{
		model="\TFV_Buildings\Military\TFV_barrel_hydrogen.p3d";
		effectssmoke="";
		explosioneffects="ExploAmmoExplosion";
		explosionEffectsRadius=4;
		CraterEffects="GrenadeCrater";
		hit=80;
		indirectHit=80;
		indirectHitRange=1.5;
		caliber=0.69999999;
		explosive=0.69999999;
	};
	class TFV_Exp_Fusion_Coil: Bo_Mk82
	{
		model="\TFV_Buildings\Military\TFV_fusion_coil.p3d";
		effectsSmoke="";
		explosioneffects="ExploAmmoExplosion";
		explosionEffectsRadius=5;
		CraterEffects="GrenadeCrater";
		hit=175;
		indirectHit=175;
		indirectHitRange=2;
		caliber=0.5;
		explosive=0.94999999;
	};
	class M319_HE: G_40mm_HE
	{
		model="OPTRE_Weapons\gl\mag_he.p3d";
	};
	class M319_HEDP: G_40mm_HEDP
	{
		model="OPTRE_Weapons\gl\mag_hedp.p3d";
	};
	class M319_Smoke: G_40mm_Smoke
	{
		model="OPTRE_Weapons\gl\mag_smk.p3d";
		deflecting=5;
		explosive=0;
		simulation="shotSmokeX";
		explosionTime=0;
		timetolive=60;
		fuseDistance=0;
		smokeColor[]={0.5,0.5,0.5,1};
		effectsSmoke="SmokeShellWhiteEffect";
	};
	class M319_Smoke_Green: M319_Smoke
	{
		model="OPTRE_Weapons\gl\mag_smkgrn.p3d";
		smokeColor[]={0,0.5,0,1};
	};
	class M319_Smoke_Orange: M319_Smoke
	{
		model="OPTRE_Weapons\gl\mag_smkorg.p3d";
		smokeColor[]={0.66970003,0.22750001,0.10053,1};
	};
	class M319_Smoke_Red: M319_Smoke
	{
		model="OPTRE_Weapons\gl\mag_smkred.p3d";
		smokeColor[]={0.84380001,0.1383,0.1353,1};
	};
	class M319_Buckshot: B_12Gauge_Pellets
	{
		model="OPTRE_Weapons\gl\mag_buckshot.p3d";
	};
	class TFV_40mm_Smoke: G_40mm_Smoke
	{
		deflecting=5;
		explosive=1;
		simulation="shotShell";
		explosionTime=0;
		fuseDistance=0;
		explosionEffects="TFV_Effect_GL_White";
		timetolive=60;
	};
	class TFV_40mm_SmokeRed: G_40mm_SmokeRed
	{
		deflecting=5;
		explosive=1;
		simulation="shotShell";
		explosionTime=0;
		fuseDistance=0;
		explosionEffects="TFV_Effect_GL_Red";
	};
	class TFV_40mm_SmokeGreen: G_40mm_SmokeGreen
	{
		deflecting=5;
		explosive=1;
		simulation="shotShell";
		explosionTime=0;
		fuseDistance=0;
		explosionEffects="TFV_Effect_GL_Green";
	};
	class TFV_40mm_SmokeYellow: G_40mm_SmokeYellow
	{
		deflecting=5;
		explosive=1;
		simulation="shotShell";
		explosionTime=0;
		fuseDistance=0;
		explosionEffects="TFV_Effect_GL_Yellow";
	};
	class TFV_40mm_SmokePurple: G_40mm_SmokePurple
	{
		deflecting=5;
		explosive=1;
		simulation="shotShell";
		explosionTime=0;
		fuseDistance=0;
		explosionEffects="TFV_Effect_GL_Purple";
	};
	class TFV_40mm_SmokeBlue: G_40mm_SmokeBlue
	{
		deflecting=5;
		explosive=1;
		simulation="shotShell";
		explosionTime=0;
		fuseDistance=0;
		explosionEffects="TFV_Effect_GL_Blue";
	};
	class TFV_40mm_SmokeOrange: G_40mm_SmokeOrange
	{
		deflecting=5;
		explosive=1;
		simulation="shotShell";
		explosionTime=0;
		fuseDistance=0;
		explosionEffects="TFV_Effect_GL_Orange";
	};
};
class CfgMagazines
{
	class 20Rnd_762x51_Mag;
	class 150Rnd_762x51_Box;
	class 30Rnd_45ACP_Mag_SMG_01;
	class 30Rnd_120mm_APFSDS_shells;
	class 30Rnd_120mm_HE_shells;
	class 40Rnd_105mm_APFSDS_T_Green;
	class 20Rnd_105mm_HEAT_MP_T_Green;
	class 5Rnd_GAT_missiles;
	class 4Rnd_GAA_missiles;
	class 12Rnd_missiles;
	class 12Rnd_PG_missiles;
	class 4Rnd_Missile_AGM_01_F;
	class 2Rnd_LG_Scalpel;
	class 2Rnd_Bomb_03_F;
	class 2Rnd_GBU12_LGB;
	class HandGrenade;
	class SmokeShell;
	class RPG32_HE_F;
	class RPG32_F;
	class NLAW_F;
	class Titan_AA;
	class Titan_AT;
	class 2000Rnd_20mm_shells;
	class 500Rnd_Cannon_30mm_Plane_CAS_02_F;
	class 50Rnd_570x28_SMG_03;
	class 1Rnd_HE_Grenade_Shell;
	class 1Rnd_smoke_grenade_shell;
	class 3Rnd_Smoke_Grenade_shell;
	class 1Rnd_SmokeRed_Grenade_shell;
	class 3Rnd_SmokeRed_Grenade_shell;
	class 1Rnd_SmokeGreen_Grenade_shell;
	class 3Rnd_SmokeGreen_Grenade_shell;
	class 1Rnd_SmokeYellow_Grenade_shell;
	class 3Rnd_SmokeYellow_Grenade_shell;
	class 1Rnd_SmokePurple_Grenade_shell;
	class 3Rnd_SmokePurple_Grenade_shell;
	class 1Rnd_SmokeBlue_Grenade_shell;
	class 3Rnd_SmokeBlue_Grenade_shell;
	class 1Rnd_SmokeOrange_Grenade_shell;
	class 3Rnd_SmokeOrange_Grenade_shell;
	class 140Rnd_30mm_MP_shells_Tracer_Red;
	class 60Rnd_30mm_APFSDS_shells_Tracer_Yellow;
	class TFV_60Rnd_762x51_Mag: 20Rnd_762x51_Mag
	{
		dlc="OPTRE";
		model="\OPTRE_Weapons\Ammo\MA5Ammo.p3d";
		displayName="[TFV] 60Rnd 7.62x51mm Magazine";
		displaynameshort="7.62x51mm";
		ammo="TFV_B_762x51_Ball";
		count=60;
		initspeed=900;
		picture="\OPTRE_Weapons\ar\icons\magazine.paa";
		descriptionshort="60 Round Magazine<br/>7.62x51mm";
		mass=18;
		tracersEvery=0;
		lastRoundsTracer=5;
	};
	class TFV_60Rnd_762x51_Mag_Tracer: TFV_60Rnd_762x51_Mag
	{
		dlc="OPTRE";
		displayName="[TFV] 60Rnd 7.62x51mm Magazine (Tracers)";
		displaynameshort="7.62x51mm Tracer";
		ammo="TFV_B_762x51_Tracer";
		descriptionshort="60 Round Magazine<br/>7.62x51mm<br/>Tracer";
		tracersEvery=1;
		lastRoundsTracer=60;
	};
	class TFV_60Rnd_762x51_Mag_Tracer_Yellow: TFV_60Rnd_762x51_Mag_Tracer
	{
		dlc="OPTRE";
		displayName="[TFV] 60Rnd 7.62x51mm Magazine (Tracers Yellow)";
		ammo="TFV_B_762x51_Tracer_Yellow";
	};
	class TFV_32Rnd_762x51_Mag: TFV_60Rnd_762x51_Mag
	{
		dlc="OPTRE";
		displayName="[TFV] 32Rnd 7.62x51mm Magazine";
		count=32;
		initspeed=950;
		descriptionshort="32 Round Magazine<br>7.62x51mm<br>(Increased Muzzle Velocity)";
		mass=10;
	};
	class TFV_32Rnd_762x51_Mag_Tracer: TFV_60Rnd_762x51_Mag_Tracer
	{
		dlc="OPTRE";
		displayName="[TFV] 32Rnd 7.62x51mm Magazine (Tracers)";
		count=32;
		descriptionshort="32 Round Magazine<br>7.62x51mm<br>(Increased Muzzle Velocity)<br>Tracer";
		mass=10;
	};
	class TFV_32Rnd_762x51_Mag_Tracer_Yellow: TFV_60Rnd_762x51_Mag_Tracer_Yellow
	{
		dlc="OPTRE";
		displayName="[TFV] 32Rnd 7.62x51mm Magazine (Tracers Yellow)";
		count=32;
		descriptionshort="32 Round Magazine<br>7.62x51mm<br>(Increased Muzzle Velocity)<br>Tracer";
		mass=10;
	};
	class TFV_32Rnd_762x51_Mag_UW: TFV_32Rnd_762x51_Mag_Tracer
	{
		dlc="OPTRE";
		initspeed=400;
		displayName="[TFV] 32Rnd 7.62x51mm Magazine (UW)";
		ammo="TFV_B_762x51_UW";
	};
	class TFV_25Rnd_762x51_Mag: TFV_60Rnd_762x51_Mag
	{
		dlc="OPTRE";
		model="\OPTRE_Weapons\br\BMR_Magazine.p3d";
		displayName="[TFV] 25Rnd 7.62x51mm Magazine";
		displaynameshort="7.62x51mm";
		ammo="TFV_B_762x51_Ball";
		count=25;
		initspeed=900;
		picture="\OPTRE_Weapons\ar\icons\magazine.paa";
		descriptionshort="20 Round Magazine<br>7.62x51mm";
		mass=12;
		tracersEvery=0;
		lastRoundsTracer=5;
	};
	class TFV_25Rnd_762x51_Mag_Tracer: TFV_25Rnd_762x51_Mag
	{
		dlc="OPTRE";
		displayName="[TFV] 25Rnd 7.62x51mm Magazine (Tracers)";
		ammo="TFV_B_762x51_Tracer";
		tracersEvery=1;
		lastRoundsTracer=25;
	};
	class TFV_25Rnd_762x51_Mag_Tracer_Yellow: TFV_25Rnd_762x51_Mag
	{
		dlc="OPTRE";
		displayName="[TFV] 25Rnd 7.62x51mm Magazine (Tracers Yellow)";
		ammo="TFV_B_762x51_Tracer_Yellow";
	};
	class TFV_100Rnd_762x51_Box: TFV_60Rnd_762x51_Mag
	{
		dlc="OPTRE";
		model="\OPTRE_Weapons\MG\magazine_1.p3d";
		displayName="[TFV] 100Rnd 7.62x51mm Box Magazine";
		displaynameshort="7.62x51mm";
		ammo="TFV_B_762x51_Ball";
		count=100;
		initspeed=950;
		picture="\OPTRE_Weapons\MG\icons\magazine.paa";
		descriptionshort="100 Round Box Magazine<br>7.62x51mm";
		mass=40;
		tracersEvery=0;
		lastRoundsTracer=10;
	};
	class TFV_100Rnd_762x51_Box_Tracer: TFV_100Rnd_762x51_Box
	{
		dlc="OPTRE";
		displayName="[TFV] 100Rnd 7.62x51mm Box Magazine (Tracers)";
		displaynameshort="7.62x51mm Tracer";
		ammo="TFV_B_762x51_Tracer";
		picture="\OPTRE_Weapons\MG\icons\magazine.paa";
		descriptionshort="100 Round Box Magazine<br>7.62x51mm<br>Tracer";
		tracersEvery=1;
		lastRoundsTracer=100;
	};
	class TFV_100Rnd_762x51_Box_Tracer_Yellow: TFV_100Rnd_762x51_Box_Tracer
	{
		dlc="OPTRE";
		displayName="[TFV] 100Rnd 7.62x51mm Box Magazine (Tracers Yellow)";
		ammo="TFV_B_762x51_Tracer_Yellow";
	};
	class TFV_400Rnd_762x51_Box_Tracer: TFV_100Rnd_762x51_Box_Tracer
	{
		dlc="OPTRE";
		displayName="[TFV] 400Rnd 7.62x51mm Box Magazine (Tracers)";
		count=400;
		lastRoundsTracer=400;
		mass=120;
	};
	class TFV_15Rnd_762x51_Mag: TFV_60Rnd_762x51_Mag
	{
		dlc="OPTRE";
		model="\OPTRE_Weapons\Ammo\MA5Ammo.p3d";
		displayName="[TFV] 15Rnd 7.62x51mm Magazine";
		displaynameshort="7.62x51mm";
		ammo="TFV_B_762x51_Ball";
		count=15;
		initspeed=1000;
		picture="\OPTRE_Weapons\ar\icons\magazine.paa";
		descriptionshort="15 Round Magazine<br>7.62x51mm";
		mass=10;
		tracersEvery=0;
		lastRoundsTracer=3;
	};
	class TFV_15Rnd_762x51_Mag_Tracer: TFV_15Rnd_762x51_Mag
	{
		dlc="OPTRE";
		displayName="[TFV] 15Rnd 7.62x51mm Magazine (Tracers)";
		displaynameshort="7.62x51mm Tracer";
		ammo="TFV_B_762x51_Tracer";
		descriptionshort="15 Round Magazine<br>7.62x51mm<br>Tracer";
		tracersEvery=1;
		lastRoundsTracer=15;
	};
	class TFV_15Rnd_762x51_Mag_Tracer_Yellow: TFV_15Rnd_762x51_Mag_Tracer
	{
		dlc="OPTRE";
		displayName="[TFV] 15Rnd 7.62x51mm Magazine (Tracers Yellow)";
		ammo="TFV_B_762x51_Tracer_Yellow";
	};
	class TFV_36Rnd_95x40_Mag: 20Rnd_762x51_Mag
	{
		dlc="OPTRE";
		model="\OPTRE_Weapons\Ammo\BR55Ammo.p3d";
		displayName="[TFV] 36Rnd 9.5x40mm Magazine";
		displaynameshort="9.5x40mm";
		ammo="TFV_B_95x40_Ball";
		count=36;
		initspeed=925;
		picture="\OPTRE_Weapons\br\icons\magazine.paa";
		descriptionshort="36 Round Magazine<br>9.5x40mm";
		mass=8;
		tracersEvery=0;
		lastRoundsTracer=6;
	};
	class TFV_36Rnd_95x40_Mag_Tracer: TFV_36Rnd_95x40_Mag
	{
		dlc="OPTRE";
		displayName="[TFV] 36Rnd 9.5x40mm Magazine (Tracers)";
		displaynameshort="9.5x40mm Tracer";
		ammo="TFV_B_95x40_Tracer";
		descriptionshort="36 Round Magazine<br>9.5x40mm<br>Tracer";
		tracersEvery=1;
		lastRoundsTracer=36;
	};
	class TFV_36Rnd_95x40_Mag_Tracer_Yellow: TFV_36Rnd_95x40_Mag_Tracer
	{
		dlc="OPTRE";
		displayName="[TFV] 36Rnd 9.5x40mm Magazine (Tracers Yellow)";
		ammo="TFV_B_95x40_Tracer_Yellow";
	};
	class TFV_100Rnd_95x40_Box: 150Rnd_762x51_Box
	{
		dlc="OPTRE";
		model="\OPTRE_Weapons\MG\magazine_1.p3d";
		displayName="[TFV] 100Rnd 9.5x40mm Box Magazine";
		displaynameshort="9.5x40mm";
		ammo="TFV_B_95x40_Ball";
		count=100;
		initspeed=925;
		picture="\OPTRE_Weapons\MG\icons\magazine.paa";
		descriptionshort="100 Round Box Magazine<br>9.5x40mm";
		mass=35;
		tracersEvery=0;
		lastRoundsTracer=10;
	};
	class TFV_100Rnd_95x40_Box_Tracer: TFV_100Rnd_95x40_Box
	{
		dlc="OPTRE";
		displayName="[TFV] 100Rnd 9.5x40mm Box Magazine (Tracers)";
		displaynameshort="9.5x40mm Tracer";
		ammo="TFV_B_95x40_Tracer";
		picture="\OPTRE_Weapons\MG\icons\magazine.paa";
		descriptionshort="100 Round Box Magazine<br>9.5x40mm<br>Tracer";
		tracersEvery=1;
		lastRoundsTracer=100;
	};
	class TFV_100Rnd_95x40_Box_Tracer_Yellow: TFV_100Rnd_95x40_Box_Tracer
	{
		dlc="OPTRE";
		displayName="[TFV] 100Rnd 9.5x40mm Box Magazine (Tracers Yellow)";
		ammo="TFV_B_95x40_Tracer_Yellow";
	};
	class TFV_200Rnd_95x40_Box: TFV_100Rnd_95x40_Box
	{
		dlc="OPTRE";
		displayName="[TFV] 200Rnd 9.5x40mm Box Magazine";
		count=200;
		picture="\OPTRE_Weapons\MG\icons\magazine.paa";
		descriptionshort="200 Round Box Magazine<br>9.5x40mm";
		mass=70;
	};
	class TFV_200Rnd_95x40_Box_Tracer: TFV_200Rnd_95x40_Box
	{
		dlc="OPTRE";
		displayName="[TFV] 200Rnd 9.5x40mm Box Magazine (Tracers)";
		displaynameshort="9.5x40mm Tracer";
		ammo="TFV_B_95x40_Tracer";
		picture="\OPTRE_Weapons\MG\icons\magazine.paa";
		descriptionshort="200 Round Box Magazine<br>9.5x40mm<br>Tracer";
		tracersEvery=1;
		lastRoundsTracer=200;
	};
	class TFV_200Rnd_95x40_Box_Tracer_Yellow: TFV_200Rnd_95x40_Box_Tracer
	{
		dlc="OPTRE";
		displayName="[TFV] 200Rnd 9.5x40mm Box Magazine (Tracers Yellow)";
		ammo="TFV_B_95x40_Tracer_Yellow";
	};
	class TFV_64Rnd_57x31_Mag: 50Rnd_570x28_SMG_03
	{
		dlc="OPTRE";
		model="\OPTRE_Weapons\Ammo\BR55Ammo.p3d";
		displayName="[TFV] 64Rnd 5.7x31mm Magazine";
		displaynameshort="5.7x31mm";
		ammo="TFV_B_57x31_Ball";
		count=64;
		picture="\OPTRE_Weapons\br\icons\magazine.paa";
		descriptionshort="64 Round Magazine<br>5.7x31mm";
		mass=8;
		tracersEvery=0;
		lastRoundsTracer=0;
	};
	class TFV_64Rnd_57x31_Mag_Tracer: TFV_64Rnd_57x31_Mag
	{
		dlc="OPTRE";
		displayName="[TFV] 64Rnd 5.7x31mm Magazine (Tracers)";
		displaynameshort="5.7x31mm Tracer";
		descriptionshort="64 Round Magazine<br>5.7x31mm<br>Tracer";
		ammo="TFV_B_57x31_Tracer";
		tracersEvery=1;
		lastRoundsTracer=64;
	};
	class TFV_64Rnd_57x31_Mag_Tracer_Yellow: TFV_64Rnd_57x31_Mag_Tracer
	{
		dlc="OPTRE";
		displayName="[TFV] 64Rnd 5.7x31mm Magazine (Tracers Yellow)";
		ammo="TFV_B_57x31_Tracer_Yellow";
	};
	class TFV_40Rnd_30x06_Mag: 20Rnd_762x51_Mag
	{
		dlc="OPTRE";
		model="\OPTRE_Weapons\AR\MA5_Magazine.p3d";
		displayName="[TFV] 40Rnd .30-06 Magazine";
		displaynameshort=".30-06";
		ammo="TFV_B_30x06_Ball";
		count=40;
		initspeed=600;
		picture="\OPTRE_Weapons\ar\icons\magazine.paa";
		descriptionshort="40 Round Magazine<br>.30-06";
		mass=20;
		tracersEvery=0;
		lastRoundsTracer=5;
	};
	class TFV_40Rnd_30x06_Mag_Tracer: TFV_40Rnd_30x06_Mag
	{
		dlc="OPTRE";
		displayName="[TFV] 40Rnd .30-06 Magazine (Tracers)";
		displaynameshort=".30-06 Tracer";
		ammo="TFV_B_30x06_Ball_Tracer";
		descriptionshort="40 Round Magazine<br>.30-06<br>Tracer";
		tracersEvery=1;
		lastRoundsTracer=40;
	};
	class TFV_8Rnd_127x40_Mag: 20Rnd_762x51_Mag
	{
		dlc="OPTRE";
		model="\OPTRE_Weapons\Ammo\smallAmmoPacket.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTexturesp[]=
		{
			"OPTRE_Weapons\Ammo\data\M6_Ammo_CO.paa"
		};
		displayName="[TFV] 8Rnd 12.7x40mm Magazine";
		displaynameshort="12.7x40mm";
		ammo="TFV_B_127x40_Ball";
		count=8;
		initspeed=600;
		picture="\OPTRE_Weapons\pistol\icons\magazine.paa";
		descriptionshort="8 Round Magazine<br>12.7x40mm<br>Semi-Armor Piercing High Explosive";
		mass=8;
		tracersEvery=0;
		lastRoundsTracer=2;
	};
	class TFV_8Rnd_127x40_AP_Mag: TFV_8Rnd_127x40_Mag
	{
		dlc="OPTRE";
		displayName="[TFV] 8Rnd 12.7x40mm AP Magazine";
		displaynameshort="12.7x40mm AP";
		ammo="TFV_B_127x40_AP";
		descriptionshort="8 Round Magazine<br>12.7x40mm<br>Armor Piercing";
		tracersEvery=0;
		lastRoundsTracer=0;
	};
	class TFV_8Rnd_127x40_Mag_Tracer: TFV_8Rnd_127x40_Mag
	{
		dlc="OPTRE";
		displayName="[TFV] 8Rnd 12.7x40mm Magazine (Tracers)";
		displaynameshort="12.7x40mm Tracer";
		picture="\OPTRE_Weapons\pistol\icons\magazine.paa";
		ammo="TFV_B_127x40_Tracer";
		descriptionshort="8 Round Magazine<br>12.7x40mm<br>Semi-Armor Piercing High Explosive Tracer";
		tracersEvery=1;
		lastRoundsTracer=8;
	};
	class TFV_12Rnd_127x40_Mag: TFV_8Rnd_127x40_Mag
	{
		dlc="OPTRE";
		displayName="[TFV] 12Rnd 12.7x40mm Magazine";
		count=12;
		descriptionshort="12 Round Magazine<br>12.7x40mm<br>Semi-Armor Piercing High Explosive";
		mass=8;
		tracersEvery=0;
		lastRoundsTracer=2;
	};
	class TFV_12Rnd_127x40_Mag_Tracer: TFV_12Rnd_127x40_Mag
	{
		dlc="OPTRE";
		displayName="[TFV] 12Rnd 12.7x40mm Magazine (Tracers)";
		descriptionshort="12 Round Magazine<br>12.7x40mm<br>Semi-Armor Piercing High Explosive Tracer";
		tracersEvery=1;
		lastRoundsTracer=12;
		ammo="TFV_B_127x40_Tracer";
	};
	class TFV_16Rnd_127x40_Mag: TFV_12Rnd_127x40_Mag
	{
		dlc="OPTRE";
		displayName="[TFV] 16Rnd 12.7x40mm Magazine";
		count=16;
		descriptionshort="16 Round Magazine<br>12.7x40mm<br>Semi-Armor Piercing High Explosive";
		mass=9;
		tracersEvery=0;
		lastRoundsTracer=2;
	};
	class TFV_16Rnd_127x40_Mag_Tracer: TFV_16Rnd_127x40_Mag
	{
		dlc="OPTRE";
		displayName="[TFV] 16Rnd 12.7x40mm Magazine (Tracers)";
		descriptionshort="16 Round Magazine<br>12.7x40mm<br>Semi-Armor Piercing High Explosive Tracer";
		tracersEvery=1;
		lastRoundsTracer=16;
		ammo="TFV_B_127x40_Tracer";
	};
	class TFV_10RND_338_SP: TFV_8Rnd_127x40_Mag
	{
		author="Article 2 Studios";
		dlc="OPTRE";
		displayName="[TFV] 10Rnd BR37 Magazine (SP)";
		displayNameShort=".338 Lapua";
		descriptionshort="10 Round Magazine Soft Point";
		picture="\OPTRE_Weapons\br\icons\magazine.paa";
		ammo="TFV_B_338_SP";
		count=10;
		tracersEvery=1;
		mass=16;
	};
	class TFV_10RND_338_VLD: TFV_10RND_338_SP
	{
		displayName="[TFV] 10Rnd BR37 Magazine (VLD)";
		descriptionshort="10 Round Magazine Very Low Drag";
		ammo="TFV_B_338_VLD";
	};
	class TFV_10RND_338_AP: TFV_10RND_338_SP
	{
		displayName="[TFV] 10Rnd BR37 Magazine (AP)";
		descriptionshort="10 Round Magazine Armor Piercing";
		ammo="TFV_B_338_AP";
	};
	class TFV_6Rnd_8Gauge_Pellets: 20Rnd_762x51_Mag
	{
		dlc="OPTRE";
		model="\OPTRE_Weapons\Shotgun\Shell_mag_S.p3d";
		scope=2;
		displayName="[TFV] 6Rnd 8 Gauge Pellets";
		displaynameshort="8 Gauge Pellets";
		ammo="TFV_8Gauge_Pellets";
		count=6;
		initspeed=500;
		picture="\a3\weapons_F\data\ui\m_12gauge_ca.paa";
		descriptionshort="6 Rounds of 8 Gauge Pellets";
		mass=10;
	};
	class TFV_6Rnd_8Gauge_Slugs: TFV_6Rnd_8Gauge_Pellets
	{
		dlc="OPTRE";
		model="\OPTRE_Weapons\Shotgun\Shell_mag_P.p3d";
		displayName="[TFV] 6Rnd 8 Gauge Slugs";
		displaynameshort="8 Gauge Slugs";
		ammo="TFV_8Gauge_Slugs";
		initspeed=800;
		picture="\a3\weapons_F\data\ui\m_12gauge_slugs_ca.paa";
		descriptionshort="6 Rounds of 8 Gauge Slugs";
		mass=10;
		count=6;
	};
	class TFV_12Rnd_8Gauge_Pellets: TFV_6Rnd_8Gauge_Pellets
	{
		dlc="OPTRE";
		displayName="[TFV] 12Rnd 8 Gauge Pellets";
		count=12;
		descriptionshort="12 Rounds of 8 Gauge Pellets";
		mass=16;
	};
	class TFV_12Rnd_8Gauge_Slugs: TFV_6Rnd_8Gauge_Slugs
	{
		dlc="OPTRE";
		displayName="[TFV] 12Rnd 8 Gauge Slugs";
		count=12;
		descriptionshort="12 Rounds of 8 Gauge Slugs";
		mass=16;
	};
	class TFV_6Rnd_8Gauge_HEDP: TFV_6Rnd_8Gauge_Slugs
	{
		dlc="OPTRE";
		displayName="[TFV] 6Rnd 8 Gauge HEDP";
		displaynameshort="8 Gauge HEDP";
		ammo="TFV_8Gauge_HEDP";
		count=6;
		initspeed=1000;
		descriptionshort="6 Rounds of Pure Overkill";
		mass=10;
		tracersEvery=1;
		lastRoundsTracer=6;
	};
	class TFV_60Rnd_5x23mm_Mag: 20Rnd_762x51_Mag
	{
		dlc="OPTRE";
		model="\OPTRE_Weapons\Ammo\M7Ammo.p3d";
		displayName="[TFV] 60Rnd 5x23mm Magazine";
		displaynameshort="5x23mm";
		ammo="TFV_B_5x23_Caseless";
		count=60;
		initspeed=600;
		picture="\OPTRE_Weapons\smg\icons\magazine.paa";
		descriptionshort="60 Round Magazine<br>5x23mm";
		mass=8;
		tracersEvery=0;
		lastRoundsTracer=5;
	};
	class TFV_60Rnd_5x23mm_Mag_tracer: TFV_60Rnd_5x23mm_Mag
	{
		dlc="OPTRE";
		displayName="[TFV] 60Rnd 5x23mm Magazine (Tracers)";
		displaynameshort="5x23mm Tracer";
		ammo="TFV_B_5x23_Caseless_Tracer";
		descriptionshort="60 Round Magazine<br>5x23mm<br>Tracer";
		tracersEvery=1;
		lastRoundsTracer=60;
	};
	class TFV_60Rnd_5x23mm_Mag_tracer_yellow: TFV_60Rnd_5x23mm_Mag_tracer
	{
		dlc="OPTRE";
		displayName="[TFV] 60Rnd 5x23mm Magazine (Tracers Yellow)";
		ammo="TFV_B_5x23_Caseless_Tracer_Yellow";
	};
	class TFV_48Rnd_5x23mm_Mag: TFV_60Rnd_5x23mm_Mag
	{
		dlc="OPTRE";
		displayName="[TFV] 48Rnd 5x23mm Magazine";
		count=48;
		initspeed=700;
		descriptionshort="48 Round Magazine<br>5x23mm";
		mass=6;
		tracersEvery=0;
		lastRoundsTracer=5;
	};
	class TFV_48Rnd_5x23mm_JHP_Mag: TFV_48Rnd_5x23mm_Mag
	{
		dlc="OPTRE";
		displayName="[TFV] 48Rnd 5x23mm (JHP) Magazine";
		displaynameshort="5x23mm JHP";
		ammo="TFV_B_5x23_Caseless_JHP";
		descriptionshort="48 Round Magazine<br>5x23mm<br>Jacketed Hollow Point";
	};
	class TFV_48Rnd_5x23mm_FMJ_Mag: TFV_48Rnd_5x23mm_Mag
	{
		dlc="OPTRE";
		displayName="[TFV] 48Rnd 5x23mm (FMJ) Magazine";
		displaynameshort="5x23mm FMJ";
		ammo="TFV_B_5x23_Caseless_FMJ";
		descriptionshort="48 Round Magazine<br>5x23mm<br>Full Metal Jacket";
	};
	class TFV_48Rnd_5x23mm_Mag_tracer: TFV_48Rnd_5x23mm_Mag
	{
		dlc="OPTRE";
		displayName="[TFV] 48Rnd 5x23mm Magazine (Tracers)";
		displaynameshort="5x23mm Tracer";
		ammo="TFV_B_5x23_Caseless_Tracer";
		descriptionshort="48 Round Magazine<br>5x23mm<br>Tracer";
		tracersEvery=1;
		lastRoundsTracer=48;
	};
	class TFV_48Rnd_5x23mm_Mag_tracer_yellow: TFV_48Rnd_5x23mm_Mag_tracer
	{
		dlc="OPTRE";
		displayName="[TFV] 48Rnd 5x23mm Magazine (Tracers Yellow)";
		ammo="TFV_B_5x23_Caseless_Tracer_Yellow";
	};
	class TFV_4Rnd_145x114_APFSDS_Mag: 20Rnd_762x51_Mag
	{
		dlc="OPTRE";
		model="\OPTRE_Weapons\Sniper\SRS99C_Mag.p3d";
		displayName="[TFV] 4Rnd 14.5x114mm APFSDS Magazine";
		displaynameshort="APFSDS";
		ammo="TFV_B_145x114_APFSDS";
		count=4;
		initspeed=1200;
		picture="\OPTRE_Weapons\ar\icons\magazine.paa";
		descriptionshort="4 Round Magazine<br>14.5x114mm<br>Armor Piercing Fin-Stabilized Disposable Shell";
		mass=15;
		tracersEvery=1;
		lastRoundsTracer=4;
	};
	class TFV_4Rnd_145x114_HVAP_Mag: TFV_4Rnd_145x114_APFSDS_Mag
	{
		dlc="OPTRE";
		displayName="[TFV] 4Rnd 14.5x114mm HVAP Magazine";
		displaynameshort="HVAP";
		ammo="TFV_B_145x114_HVAP";
		initspeed=850;
		descriptionshort="4 Round Magazine<br>14.5x114mm<br>High Velocity Armor Piercing";
		mass=15;
	};
	class TFV_4Rnd_145x114_HEDP_Mag: TFV_4Rnd_145x114_HVAP_Mag
	{
		dlc="OPTRE";
		displayName="[TFV] 4Rnd 14.5x114mm HEDP Magazine";
		displaynameshort="HEDP";
		ammo="TFV_B_145x114_HEDP";
		descriptionshort="4 Round Magazine<br>14.5x114mm<br>High Explosive Dual Purpose";
		mass=25;
	};
	class TFV_7Rnd_20mm_APFSDS_Mag: TFV_4Rnd_145x114_APFSDS_Mag
	{
		dlc="OPTRE";
		displayName="[TFV] 7Rnd 20mm APFSDS Magazine";
		displaynameshort="APFSDS";
		ammo="TFV_B_20mm_APFSDS";
		count=7;
		initspeed=5000;
		picture="\OPTRE_Weapons\ar\icons\magazine.paa";
		descriptionshort="7 Round Magazine<br>20mm<br>Armor Piercing Fin-Stabilized Disposable Shell";
		mass=15;
		tracersEvery=1;
		lastRoundsTracer=7;
	};
	class TFV_7Rnd_20mm_HEDP_Mag: TFV_4Rnd_145x114_HEDP_Mag
	{
		dlc="OPTRE";
		displayName="[TFV] 7Rnd 20mm HEDP Magazine";
		displaynameshort="HEDP";
		ammo="TFV_B_145x114_HEDP";
		descriptionshort="7 Round Magazine<br>20mm<br>High Explosive Dual Purpose";
		mass=25;
		count=7;
	};
	class TFV_M41_Twin_HEAT: RPG32_HE_F
	{
		dlc="OPTRE";
		displayName="[TFV] M19 HEAT (Un-guided) Twin Rockets";
		displaynameshort="HEAT";
		descriptionshort="High Explosive Anti Tank<br/>Un-guided";
		ammo="TFV_M41_Rocket_HEAT";
		picture="\OPTRE_Weapons\rockets\icons\rocket.paa";
		model="\OPTRE_Weapons\Ammo\boxAmmo.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTexturesp[]=
		{
			"OPTRE_Weapons\Ammo\data\SPNKr_Ammo_CO.paa"
		};
		count=2;
		mass=80;
		initSpeed=150;
		allowedSlots[]={901,701};
	};
	class TFV_M41_Twin_HEAP: TFV_M41_Twin_HEAT
	{
		dlc="OPTRE";
		ammo="TFV_M41_Rocket_HEAP";
		descriptionshort="High Explosive Anti Personnel<br/>Un-guided";
		displayName="[TFV] M19 HEAP Twin Rockets";
		displaynameshort="HEAP";
	};
	class TFV_M41_Twin_HEAT_G: TFV_M41_Twin_HEAT
	{
		dlc="OPTRE";
		displayName="[TFV] M19 HEAT (IR) Twin Rockets";
		displaynameshort="HEAT (IR Guided)";
		descriptionshort="High Explosive Anti Tank<br/>IR Guided";
		ammo="TFV_M41_Rocket_HEAT_Guided";
		maxLeadSpeed=270;
	};
	class TFV_M41_Twin_HEAT_SACLOS: RPG32_HE_F
	{
		dlc="OPTRE";
		displayName="[TFV] M19 HEAT (SACLOS) Twin Rockets";
		displaynameshort="HEAT (SACLOS)";
		descriptionshort="High Explosive Anti Tank<br/>Semi-automatic command to line-of-sight (SACLOS)";
		ammo="TFV_M41_Rocket_HEAT_SACLOS";
		picture="\OPTRE_Weapons\rockets\icons\rocket.paa";
		model="\OPTRE_Weapons\Rockets\M41_tube.p3d";
		count=2;
		mass=80;
		initSpeed=150;
		allowedSlots[]={901,701};
		maxLeadSpeed=270;
	};
	class TFV_M41_Twin_HE_SACLOS_ProximityFuse: TFV_M41_Twin_HEAT_SACLOS
	{
		dlc="OPTRE";
		displayName="[TFV] M19 HE (SACLOS proximity-fuse) Twin Rockets";
		displaynameshort="HE (SACLOS proximity-fuse)";
		descriptionshort="High Explosive proximity-fuse<br/>Semi-automatic command to line-of-sight (SACLOS)";
		ammo="TFV_M41_Rocket_HE_SACLOS_ProximityFuse";
	};
	class TFV_M41_Twin_HE: TFV_M41_Twin_HEAT_SACLOS
	{
		dlc="OPTRE";
		descriptionshort="High Explosive<br/>Un-guided";
		displayName="[TFV] M19 HE (Un-guided) Twin Rockets";
		displaynameshort="High Explosive Dumb-Fire";
		ammo="TFV_M41_Rocket_HE";
	};
	class TFV_M41_Twin_HEAT_SALH: TFV_M41_Twin_HEAT_SACLOS
	{
		dlc="OPTRE";
		displayName="[TFV] M19 HEAT (SALH) Twin Rockets";
		displaynameshort="HEAT (SALH)";
		descriptionshort="High Explosive Anti Tank<br/>SALH";
		ammo="TFV_M41_Rocket_HEAT_Laser";
	};
	class TFV_M41_Twin_HEAT_Thermal: TFV_M41_Twin_HEAT_SACLOS
	{
		displayName="[TFV] M19 HEAT (Heat-Seeking) Twin Rockets";
		displaynameshort="HEAT (Heat-seeking)";
		descriptionshort="High Explosive Anti Tank<br/>Heat-Seeking";
		ammo="TFV_M41_Rocket_HEAT_Thermal";
	};
	class TFV_M41_Twin_HE_SALH_ProximityFuse: TFV_M41_Twin_HEAT_SALH
	{
		displayName="[TFV] M19 HE (SALH proximity-fuse) Twin Rockets";
		displaynameshort="HE (SALH proximity-fuse)";
		descriptionshort="High Explosive proximity-fuse<br/>Semi-Active Laser Homing (SALH)";
		ammo="TFV_M41_Rocket_HE_Laser_ProximityFuse";
	};
	class TFV_M41_Twin_HE_Thermal_ProximityFuse: TFV_M41_Twin_HEAT_Thermal
	{
		displayName="[TFV] M19 HE (Heat-seeking proximity-fuse) Twin Rockets";
		displaynameshort="HE (Heat-seeking proximity-fuse)";
		descriptionshort="High Explosive proximity-fuse<br/>Heat-Seeking";
		ammo="TFV_M41_Rocket_HE_Thermal_ProximityFuse";
	};
	class TFV_M41_Twin_Smoke_W: TFV_M41_Twin_HE
	{
		descriptionshort="Smoke (White)<br/>Un-guided";
		displayName="[TFV] M19 White Smoke (Un-guided) Twin Rockets";
		displaynameshort="Smoke (white) Dumb-Fire";
		mass=40;
		ammo="TFV_M41_SMK_W";
	};
	class TFV_M41_Twin_Smoke_B: TFV_M41_Twin_Smoke_W
	{
		descriptionshort="Smoke (Blue)<br/>Un-guided";
		displayName="[TFV] M19 Blue Smoke (Un-guided) Twin Rockets";
		displaynameshort="Smoke (Blue) Dumb-Fire";
		ammo="TFV_M41_SMK_B";
	};
	class TFV_M41_Twin_Smoke_R: TFV_M41_Twin_Smoke_W
	{
		descriptionshort="Smoke (Red)<br/>Un-guided";
		displayName="[TFV] M19 Red Smoke (Un-guided) Twin Rockets";
		displaynameshort="Smoke (Red) Dumb-Fire";
		ammo="TFV_M41_SMK_R";
	};
	class TFV_M41_Twin_Smoke_G: TFV_M41_Twin_Smoke_W
	{
		descriptionshort="Smoke (Green)<br/>Un-guided";
		displayName="[TFV] M19 Green Smoke (Un-guided) Twin Rockets";
		displaynameshort="Smoke (Green) Dumb-Fire";
		ammo="TFV_M41_SMK_G";
	};
	class TFV_M41_Twin_Smoke_O: TFV_M41_Twin_Smoke_W
	{
		descriptionshort="Smoke (Orange)<br/>Un-guided";
		displayName="[TFV] M19 Orange Smoke (Un-guided) Twin Rockets";
		displaynameshort="Smoke (Orange) Dumb-Fire";
		ammo="TFV_M41_SMK_O";
	};
	class TFV_M41_Twin_Smoke_P: TFV_M41_Twin_Smoke_W
	{
		descriptionshort="Smoke (Purple)<br/>Un-guided";
		displayName="[TFV] M19 Purple Smoke (Un-guided) Twin Rockets";
		displaynameshort="Smoke (Purple) Dumb-Fire";
		ammo="TFV_M41_SMK_P";
	};
	class TFV_M41_Twin_Smoke_Y: TFV_M41_Twin_Smoke_W
	{
		descriptionshort="Smoke (Yellow)<br/>Un-guided";
		displayName="[TFV] M19 Yellow Smoke (Un-guided) Twin Rockets";
		displaynameshort="Smoke (Yellow) Dumb-Fire";
		ammo="TFV_M41_SMK_Y";
	};
	class TFV_3Rnd_ALIM_Gauss_Slugs: 30Rnd_120mm_APFSDS_shells
	{
		dlc="OPTRE";
		scope=2;
		displayName="[TFV] 3Rnd ALIM Gauss Slugs";
		displayNameShort="25x130mm Slug";
		ammo="TFV_25x130mm_Slug";
		initSpeed=13680;
		count=3;
		muzzleImpulseFactor[]={0,0};
	};
	class TFV_15Rnd_ALIM_Gauss_Slugs: TFV_3Rnd_ALIM_Gauss_Slugs
	{
		dlc="OPTRE";
		scope=2;
		displayName="[TFV] 15Rnd ALIM Gauss Slugs";
		displayNameShort="25x130mm Slug";
		ammo="TFV_25x130mm_Slug";
		initSpeed=13680;
		count=15;
		muzzleImpulseFactor[]={0,0};
	};
	class TFV_SpLaser_Battery: TFV_3Rnd_ALIM_Gauss_Slugs
	{
		dlc="OPTRE";
		scope=2;
		displayName="[TFV] M6 Laser Battery";
		displayNameShort="Laser";
		ammo="TFV_SpLaserAmmo";
		model="\OPTRE_Weapons\Ammo\boxAmmo.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTexturesp[]=
		{
			"OPTRE_Weapons\Ammo\data\SpartanLaser_Ammo_CO.paa"
		};
		initSpeed=13680;
		count=50;
		muzzleImpulseFactor[]={0,0};
	};
	class TFV_1Rnd_MAC_Rounds: TFV_3Rnd_ALIM_Gauss_Slugs
	{
		dlc="OPTRE";
		displayName="[TFV] MAC Round";
		displayNameShort="MAC Round";
		ammo="TFV_MAC_Round";
		count=1;
	};
	class TFV_1000Rnd_127x99_M41: TFV_3Rnd_ALIM_Gauss_Slugs
	{
		dlc="OPTRE";
		displayName="[TFV] 1000Rnd M41 LAAG Belt";
		displayNameShort="12.7x99";
		ammo="TFV_B_127x99_Ball";
		initSpeed=900;
		count=1000;
		tracersEvery=1;
		lastRoundsTracer=1000;
		muzzleImpulseFactor[]={0,0};
	};
	class TFV_1000Rnd_127x99_M41_HE: TFV_1000Rnd_127x99_M41
	{
		dlc="OPTRE";
		displayName="[TFV] 1000Rnd M41 LAAG Belt";
		displayNameShort="12.7x99";
		ammo="TFV_B_127x99_HE";
		initSpeed=900;
		count=1000;
		tracersEvery=1;
		lastRoundsTracer=1000;
		muzzleImpulseFactor[]={0,0};
	};
	class TFV_200Rnd_127x99_M247H: TFV_1000Rnd_127x99_M41
	{
		dlc="OPTRE";
		displayName="[TFV] 200Rnd M247H Box";
		displayNameShort="12.7x99 HE";
		ammo="TFV_B_127x99_HE";
		initSpeed=900;
		count=200;
		tracersEvery=1;
		lastRoundsTracer=200;
		muzzleImpulseFactor[]={0,0};
	};
	class TFV_3Rnd_102mm_rockets: 5Rnd_GAT_missiles
	{
		dlc="OPTRE";
		scope=2;
		displayName="[TFV] 3Rnd 102mm Guided HEAT Rockets";
		displayNameShort="102mm Guided HEAT";
		count=3;
		ammo="TFV_M41_Rocket_ATGM";
		initSpeed=60;
		maxLeadSpeed=60;
		sound[]=
		{
			"A3\Sounds_F\weapons\Rockets\titan_2",
			1.25893,
			1,
			1000
		};
		weaponSoundEffect="DefaultRifle";
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_2",
			0.50118703,
			1.3,
			400
		};
		soundHit[]=
		{
			"",
			1.25893,
			1,
			1
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
	};
	class TFV_2Rnd_GAT_missiles: TFV_3Rnd_102mm_rockets
	{
		dlc="OPTRE";
		scope=2;
		displayName="[TFV] 2Rnd Guided HEAT Missiles";
		displayNameShort="GAT HEAT";
		count=2;
		ammo="TFV_M41_Rocket_ATGM2";
		initSpeed=60;
		maxLeadSpeed=60;
		sound[]=
		{
			"A3\Sounds_F\weapons\Rockets\titan_2",
			1.25893,
			1,
			1000
		};
		weaponSoundEffect="DefaultRifle";
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_2",
			0.50118703,
			1.3,
			400
		};
		soundHit[]=
		{
			"",
			1.25893,
			1,
			1
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
	};
	class TFV_1Rnd_Anvil1_missiles: 12Rnd_missiles
	{
		dlc="OPTRE";
		scope=2;
		displayName="[TFV] 'ANVIL I' Rocket Pods";
		displayNameShort="Dumb HE Rockets";
		count=1;
		ammo="TFV_M_ANVIL_1_Rocket";
		initSpeed=150;
		maxLeadSpeed=600;
		sound[]=
		{
			"A3\Sounds_F\weapons\Rockets\titan_2",
			1.25893,
			1,
			1000
		};
		weaponSoundEffect="DefaultRifle";
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_2",
			0.50118703,
			1.3,
			400
		};
		soundHit[]=
		{
			"",
			1.25893,
			1,
			1
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1,
			20
		};
		nameSound="rockets";
		pylonWeapon="TFV_missiles_ANVIL1";
		hardpoints[]={};
	};
	class TFV_16Rnd_Anvil1_missiles: TFV_1Rnd_Anvil1_missiles
	{
		displayName="[TFV] 16x 'ANVIL I' HE Rockets";
		displayNameShort="Dumb HE Rockets";
		count=16;
		hardpoints[]=
		{
			"OPAEX_Hardpoint_AV14",
			"OPAEX_Hardpoint_AV22",
			"OPAEX_Hardpoint_UH144",
			"OPAEX_Hardpoint_D77-TC"
		};
	};
	class TFV_32Rnd_Anvil1_missiles: TFV_1Rnd_Anvil1_missiles
	{
		displayName="[TFV] 32x 'ANVIL I' HE Rockets";
		displayNameShort="Dumb HE Rockets";
		count=32;
		hardpoints[]=
		{
			"OPAEX_Hardpoint_D77-TC",
			"TFV_Hardpoint_SabrePilot"
		};
	};
	class TFV_16Rnd_Anvil2_missiles: TFV_1Rnd_Anvil1_missiles
	{
		displayName="[TFV] 16x 'ANVIL II' IR HE Rockets";
		displayNameShort="IR HE Rockets";
		ammo="TFV_M_ANVIL_2_IR";
		count=16;
		hardpoints[]=
		{
			"OPAEX_Hardpoint_AV14",
			"OPAEX_Hardpoint_AV22",
			"OPAEX_Hardpoint_UH144",
			"OPAEX_Hardpoint_D77-TC"
		};
		pylonWeapon="TFV_missiles_ANVIL2";
	};
	class TFV_32Rnd_Anvil2_missiles: TFV_1Rnd_Anvil1_missiles
	{
		displayName="[TFV] 32x 'ANVIL II' IR HE Rockets";
		displayNameShort="IR HE Rockets";
		count=32;
		ammo="TFV_M_ANVIL_2_IR";
		hardpoints[]=
		{
			"OPAEX_Hardpoint_D77-TC",
			"TFV_Hardpoint_SabrePilot",
			"TFV_Hardpoint_SabreCopilot"
		};
		pylonWeapon="TFV_missiles_ANVIL2";
	};
	class TFV_16Rnd_Anvil3_missiles: TFV_1Rnd_Anvil1_missiles
	{
		displayName="[TFV] 16x 'ANVIL III' SALH HE Rockets";
		displayNameShort="SALH HE Rockets";
		count=16;
		hardpoints[]=
		{
			"OPAEX_Hardpoint_AV14",
			"OPAEX_Hardpoint_AV22",
			"OPAEX_Hardpoint_UH144",
			"OPAEX_Hardpoint_D77-TC"
		};
		pylonWeapon="TFV_missiles_ANVIL3";
		ammo="TFV_M_ANVIL_3_LGM";
	};
	class TFV_32Rnd_Anvil3_missiles: TFV_1Rnd_Anvil1_missiles
	{
		displayName="[TFV] 32x 'ANVIL III' SALH HE Rockets";
		displayNameShort="SALH HE Rockets";
		count=32;
		hardpoints[]=
		{
			"OPAEX_Hardpoint_D77-TC",
			"TFV_Hardpoint_SabrePilot",
			"TFV_Hardpoint_SabreCopilot"
		};
		pylonWeapon="TFV_missiles_ANVIL3";
		ammo="TFV_M_ANVIL_3_LGM";
	};
	class TFV_16Rnd_AnvilSMK_W_missiles: TFV_16Rnd_Anvil1_missiles
	{
		displayName="[TFV] 16x 'ANVIL SMK-W' Smoke Rockets";
		displayNameShort="'ANVIL SMK-W' Smoke Rockets";
		pylonWeapon="TFV_missiles_AnvilSMK";
		ammo="TFV_M_ANVILSMK_W_Rocket";
	};
	class TFV_16Rnd_AnvilSMK_B_missiles: TFV_16Rnd_AnvilSMK_W_missiles
	{
		displayName="[TFV] 16x 'ANVIL SMK-B' Smoke Rocket";
		displayNameShort="'ANVIL SMK-B' Smoke Rockets";
		ammo="TFV_M_ANVILSMK_B_Rocket";
	};
	class TFV_16Rnd_AnvilSMK_R_missiles: TFV_16Rnd_AnvilSMK_W_missiles
	{
		displayName="[TFV] 16x 'ANVIL SMK-R' Smoke Rocket";
		displayNameShort="'ANVIL SMK-R' Smoke Rockets";
		ammo="TFV_M_ANVILSMK_R_Rocket";
	};
	class TFV_16Rnd_AnvilSMK_G_missiles: TFV_16Rnd_AnvilSMK_W_missiles
	{
		displayName="[TFV] 16x 'ANVIL SMK-G' Smoke Rocket";
		displayNameShort="'ANVIL SMK-G' Smoke Rockets";
		ammo="TFV_M_ANVILSMK_G_Rocket";
	};
	class TFV_16Rnd_AnvilSMK_O_missiles: TFV_16Rnd_AnvilSMK_W_missiles
	{
		displayName="[TFV] 16x 'ANVIL SMK-O' Smoke Rocket";
		displayNameShort="'ANVIL SMK-O' Smoke Rockets";
		ammo="TFV_M_ANVILSMK_O_Rocket";
	};
	class TFV_16Rnd_AnvilSMK_P_missiles: TFV_16Rnd_AnvilSMK_W_missiles
	{
		displayName="[TFV] 16x 'ANVIL SMK-P' Smoke Rocket";
		displayNameShort="'ANVIL SMK-P' Smoke Rockets";
		ammo="TFV_M_ANVILSMK_P_Rocket";
	};
	class TFV_16Rnd_AnvilSMK_Y_missiles: TFV_16Rnd_AnvilSMK_W_missiles
	{
		displayName="[TFV] 16x 'ANVIL SMK-Y' Smoke Rocket";
		displayNameShort="'ANVIL SMK-Y' Smoke Rockets";
		ammo="TFV_M_ANVILSMK_Y_Rocket";
	};
	class TFV_6Rnd_ASGM2_rockets: 4Rnd_GAA_missiles
	{
		dlc="OPTRE";
		scope=2;
		displayName="[TFV] 6Rnd ASGM-2 'Argent V' Guided AA Rockets";
		displayNameShort="6Rnd Guided AA";
		count=6;
		ammo="TFV_M_ASGM2_AA";
		initSpeed=150;
		maxLeadSpeed=650;
		sound[]=
		{
			"A3\Sounds_F\weapons\Rockets\titan_2",
			1.25893,
			1,
			1000
		};
		weaponSoundEffect="DefaultRifle";
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_2",
			0.50118703,
			1.3,
			400
		};
		soundHit[]=
		{
			"",
			1.25893,
			1,
			1
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
	};
	class TFV_12Rnd_ASGM2_rockets: TFV_6Rnd_ASGM2_rockets
	{
		dlc="OPTRE";
		scope=2;
		displayName="[TFV] 12Rnd ASGM-2 'Argent V' Guided AA Rockets";
		displayNameShort="12Rnd Guided AA";
		count=12;
	};
	class TFV_48Rnd_ASGM2_rockets: TFV_6Rnd_ASGM2_rockets
	{
		dlc="OPTRE";
		scope=2;
		displayName="[TFV] 48Rnd ASGM-2 'Argent V' Guided AA Rockets";
		displayNameShort="48Rnd Guided AA";
		count=48;
	};
	class TFV_8Rnd_ASGM4_rockets: TFV_6Rnd_ASGM2_rockets
	{
		ammo="TFV_M_ASGM4_AA";
		initSpeed=100;
		maxLeadSpeed=450;
		count=8;
		displayName="[TFV] 8Rnd ASGM-4 Rockets";
		displaynameshort="8Rnd AAAT";
	};
	class TFV_4Rnd_ASGM10_missiles: 4Rnd_GAA_missiles
	{
		dlc="OPTRE";
		scope=2;
		displayName="[TFV] 4Rnd ASGM-10 'Argent X' Guided AA Missile";
		displayNameShort="6Rnd Guided AA";
		count=6;
		ammo="TFV_M_ASGM10_AA";
		initSpeed=300;
		maxLeadSpeed=1000;
		sound[]=
		{
			"A3\Sounds_F\weapons\Rockets\titan_2",
			1.25893,
			1,
			1000
		};
		weaponSoundEffect="DefaultRifle";
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_2",
			0.50118703,
			1.3,
			400
		};
		soundHit[]=
		{
			"",
			1.25893,
			1,
			1
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
	};
	class TFV_8Rnd_ASGM10_missiles: TFV_4Rnd_ASGM10_missiles
	{
		dlc="OPTRE";
		scope=2;
		displayName="[TFV] 8Rnd ASGM-10 'Argent X' Guided AA Missile";
		displayNameShort="8Rnd Guided AA";
		count=8;
	};
	class TFV_12Rnd_ASGM10_missiles: TFV_4Rnd_ASGM10_missiles
	{
		dlc="OPTRE";
		scope=2;
		displayName="[TFV] 12Rnd ASGM-10 'Argent X' Guided AA Missile";
		displayNameShort="12Rnd Guided AA";
		count=12;
	};
	class TFV_1Rnd_C2GMLS_missiles: TFV_6Rnd_ASGM2_rockets
	{
		dlc="OPTRE";
		scope=2;
		displayName="[TFV] C2GMLS";
		displayNameShort="Class-2 MR";
		descriptionShort="Class-2 MR Self-Guided Missiles";
		count=1;
		ammo="TFV_M_C2GMLS_AA";
		pylonWeapon="TFV_missiles_C2GMLS";
		hardpoints[]={};
	};
	class TFV_12Rnd_C2GMLS_missiles: TFV_1Rnd_C2GMLS_missiles
	{
		displayName="[TFV] 12x C2GMLS";
		displayNameShort="Class-2 MR";
		descriptionShort="Class-2 MR Self-Guided Missiles";
		count=12;
		hardpoints[]=
		{
			"OPAEX_Hardpoint_D77-TC",
			"TFV_Hardpoint_SabrePilot",
			"TFV_Hardpoint_SabreCopilot"
		};
	};
	class TFV_8Rnd_C2GMLS_missiles: TFV_1Rnd_C2GMLS_missiles
	{
		displayName="[TFV] 8x C2GMLS";
		displayNameShort="Class-2 MR";
		descriptionShort="Class-2 MR Self-Guided Missiles";
		count=8;
		hardpoints[]=
		{
			"OPAEX_Hardpoint_AV14"
		};
	};
	class TFV_6Rnd_C2GMLS_missiles: TFV_1Rnd_C2GMLS_missiles
	{
		displayName="[TFV] 6x C2GMLS";
		displayNameShort="Class-2 MR";
		descriptionShort="Class-2 MR Self-Guided Missiles";
		count=6;
		hardpoints[]=
		{
			"TFV_Hardpoint_F99",
			"OPAEX_Hardpoint_AV22"
		};
	};
	class TFV_1Rnd_Scorpion_missiles: 4Rnd_Missile_AGM_01_F
	{
		dlc="OPTRE";
		scope=2;
		displayName="[TFV] AGM-90B 'Scorpion' Guided AT Missile";
		displayNameShort="Guided AT";
		count=1;
		ammo="TFV_M_Scorpion_AT";
		initSpeed=500;
		maxLeadSpeed=400;
		sound[]=
		{
			"A3\Sounds_F\weapons\Rockets\titan_2",
			1.25893,
			1,
			1000
		};
		weaponSoundEffect="DefaultRifle";
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_2",
			0.50118703,
			1.3,
			400
		};
		soundHit[]=
		{
			"",
			1.25893,
			1,
			1
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
		hardpoints[]={};
		pylonWeapon="TFV_missiles_Scorpion";
	};
	class TFV_4Rnd_Scorpion_missiles: TFV_1Rnd_Scorpion_missiles
	{
		displayName="[TFV] 4x AGM-90B 'Scorpion' Guided AT Missile";
		displayNameShort="4x Guided AT";
		count=4;
		hardpoints[]=
		{
			"TFV_Hardpoint_F99",
			"OPAEX_Hardpoint_AV14",
			"OPAEX_Hardpoint_UH144",
			"OPAEX_Hardpoint_AV22",
			"TFV_Hardpoint_SabrePilot",
			"TFV_Hardpoint_SabreCopilot"
		};
	};
	class TFV_8Rnd_Scorpion_missiles: TFV_1Rnd_Scorpion_missiles
	{
		displayName="[TFV] 8x AGM-90B 'Scorpion' Guided AT Missile";
		displayNameShort="8x Guided AT";
		count=8;
		hardpoints[]=
		{
			"OPAEX_Hardpoint_D77-TC"
		};
	};
	class TFV_Jackknife_missile: 2Rnd_LG_Scalpel
	{
		dlc="OPTRE";
		scope=2;
		displayName="[TFV] 1x AGM-502 'Jack Knife' SALH-ATGM";
		displayNameShort="SALH-ATGM";
		descriptionShort="'Jack Knife' Laser Guided Anti-Tank Missile";
		count=1;
		ammo="TFV_M_Jackknife_LGM";
		initSpeed=150;
		maxLeadSpeed=350;
		sound[]=
		{
			"A3\Sounds_F\weapons\Rockets\titan_2",
			1.25893,
			1,
			1000
		};
		weaponSoundEffect="DefaultRifle";
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_2",
			0.50118703,
			1.3,
			400
		};
		soundHit[]=
		{
			"",
			1.25893,
			1,
			1
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
		pylonWeapon="TFV_missiles_Jackknife";
	};
	class TFV_1Rnd_Jackknife_missile: TFV_Jackknife_missile
	{
		displayName="[TFV] 1x AGM-502 'Jack Knife' SALH-ATGM";
		hardpoints[]=
		{
			"OPAEX_Hardpoint_AV14",
			"OPAEX_Hardpoint_UH144"
		};
		count=1;
	};
	class TFV_2Rnd_Jackknife_missile: TFV_Jackknife_missile
	{
		displayName="[TFV] 2x AGM-502 'Jack Knife' SALH-ATGM";
		count=2;
		hardpoints[]=
		{
			"TFV_Hardpoint_F99",
			"OPAEX_Hardpoint_AV22"
		};
	};
	class TFV_3Rnd_Jackknife_missile: TFV_Jackknife_missile
	{
		displayName="[TFV] 3x AGM-502 'Jack Knife' SALH-ATGM";
		count=3;
		hardpoints[]=
		{
			"TFV_Hardpoint_SabrePilot",
			"TFV_Hardpoint_SabreCopilot"
		};
	};
	class TFV_4Rnd_Jackknife_missile: TFV_Jackknife_missile
	{
		displayName="[TFV] 4x AGM-502 'Jack Knife' SALH-ATGM";
		count=4;
		hardpoints[]=
		{
			"OPAEX_Hardpoint_D77-TC"
		};
	};
	class TFV_12Rnd_500lb_bomb: 2Rnd_Bomb_03_F
	{
		dlc="OPTRE";
		scope=2;
		displayName="[TFV] 12Rnd Mk208A 500lb Bomb";
		displayNameShort="12Rnd 500lb Bomb";
		count=12;
		ammo="TFV_Bo_500lb";
		initSpeed=0;
		maxLeadSpeed=1000;
	};
	class TFV_24Rnd_500lb_bomb: TFV_12Rnd_500lb_bomb
	{
		dlc="OPTRE";
		scope=2;
		displayName="[TFV] 24Rnd Mk208A 500lb Bomb";
		displayNameShort="24Rnd 500lb Bomb";
		count=24;
	};
	class TFV_36Rnd_500lb_bomb: TFV_12Rnd_500lb_bomb
	{
		dlc="OPTRE";
		scope=2;
		displayName="[TFV] 36Rnd Mk208A 500lb Bomb";
		displayNameShort="36Rnd 500lb Bomb";
		count=36;
	};
	class TFV_48Rnd_500lb_bomb: TFV_12Rnd_500lb_bomb
	{
		dlc="OPTRE";
		scope=2;
		displayName="[TFV] 48Rnd Mk208A 500lb Bomb";
		displayNameShort="48Rnd 500lb Bomb";
		count=48;
	};
	class TFV_12Rnd_1000lb_bomb: TFV_12Rnd_500lb_bomb
	{
		dlc="OPTRE";
		scope=2;
		displayName="[TFV] 12Rnd Mk208B 1000lb Bomb";
		displayNameShort="12Rnd 1000lb Bomb";
		count=12;
		ammo="TFV_Bo_1000lb";
		initSpeed=0;
		maxLeadSpeed=1000;
	};
	class TFV_24Rnd_1000lb_bomb: TFV_12Rnd_1000lb_bomb
	{
		dlc="OPTRE";
		scope=2;
		displayName="[TFV] 24Rnd Mk208B 1000lb Bomb";
		displayNameShort="24Rnd 1000lb Bomb";
		count=24;
	};
	class TFV_36Rnd_1000lb_bomb: TFV_12Rnd_1000lb_bomb
	{
		dlc="OPTRE";
		scope=2;
		displayName="[TFV] 36Rnd Mk208B 1000lb Bomb";
		displayNameShort="36Rnd 1000lb Bomb";
		count=36;
	};
	class TFV_8Rnd_2000lb_bomb: TFV_12Rnd_500lb_bomb
	{
		dlc="OPTRE";
		scope=2;
		displayName="[TFV] 8Rnd Mk208C 2000lb Bomb";
		displayNameShort="8Rnd 2000lb Bomb";
		count=8;
		ammo="TFV_Bo_2000lb";
		initSpeed=0;
		maxLeadSpeed=1000;
	};
	class TFV_16Rnd_2000lb_bomb: TFV_8Rnd_2000lb_bomb
	{
		dlc="OPTRE";
		scope=2;
		displayName="[TFV] 16Rnd Mk208C 2000lb Bomb";
		displayNameShort="16Rnd 2000lb Bomb";
		count=16;
	};
	class TFV_4Rnd_GBU_bomb: 2Rnd_GBU12_LGB
	{
		dlc="OPTRE";
		scope=2;
		displayName="[TFV] 4Rnd GBU-1071 Laser Guided Bomb";
		displayNameShort="4Rnd LG Bomb";
		count=4;
		ammo="TFV_Bo_GBU1071_LGB";
		initSpeed=0;
		maxLeadSpeed=1000;
	};
	class TFV_8Rnd_GBU_bomb: TFV_4Rnd_GBU_bomb
	{
		dlc="OPTRE";
		scope=2;
		displayName="[TFV] 8Rnd GBU-1071 Laser Guided Bomb";
		displayNameShort="8Rnd LG Bomb";
		count=8;
	};
	class TFV_12Rnd_Cluster_bomb: TFV_12Rnd_500lb_bomb
	{
		dlc="OPTRE";
		scope=2;
		displayName="[TFV] 12Rnd CBU-901 Cluster Bomb";
		displayNameShort="12Rnd Cluster Bomb";
		count=12;
		ammo="TFV_Bo_cluster_AP";
		initSpeed=0;
		maxLeadSpeed=1000;
	};
	class TFV_2000Rnd_20mm_HEIAP: 500Rnd_Cannon_30mm_Plane_CAS_02_F
	{
		author="Article 2 Studios";
		displayNameShort="20mm HEIAP";
		ammo="TFV_B_20mm_HEIAP";
		count=2000;
	};
	class TFV_2000Rnd_30mm_HE: 500Rnd_Cannon_30mm_Plane_CAS_02_F
	{
		author="Article 2 Studios";
		displayNameShort="30mm HE";
		ammo="TFV_B_30mm_HE";
		count=2000;
		hardpoints[]=
		{
			"TFV_Hardpoint_F99_F"
		};
		pylonWeapon="TFV_30mm_Cannon";
	};
	class TFV_2000Rnd_20mm_HE: 2000Rnd_20mm_shells
	{
		author="Article 2 Studios";
		displayNameShort="20mm HE";
		ammo="TFV_B_20mm_HE";
		count=2000;
	};
	class TFV_2500Rnd_50mm_HE: 500Rnd_Cannon_30mm_Plane_CAS_02_F
	{
		author="Article 2 Studios";
		displayName="[TFV] 2500Rnd 50mm HE";
		displayNameShort="50mm HE";
		ammo="TFV_B_50mm";
		count=2500;
	};
	class TFV_2500Rnd_50mm_HE2: 500Rnd_Cannon_30mm_Plane_CAS_02_F
	{
		author="Article 2 Studios";
		displayName="[TFV] 2500Rnd 50mm HE";
		displayNameShort="50mm HE";
		ammo="TFV_B_50mm_HE";
		count=2500;
	};
	class TFV_2500Rnd_50mm_APFSDS: TFV_2500Rnd_50mm_HE
	{
		author="Article 2 Studios";
		displayName="[TFV] 2500Rnd 50mm APFSDS";
		displayNameShort="50mm APFSDS";
		ammo="TFV_B_50mm_APFSDS";
		count=2500;
	};
	class TFV_300Rnd_50mm_shells: 500Rnd_Cannon_30mm_Plane_CAS_02_F
	{
		author="Article 2 Studios";
		displayNameShort="50mm HE";
		ammo="TFV_B_50mm_HE";
		count=300;
	};
	class TFV_100Rnd_50mm_HE: TFV_2500Rnd_50mm_HE
	{
		displayName="[TFV] 100Rnd 50mm HE";
		author="Article 2 Studios";
		count=100;
	};
	class TFV_100Rnd_50mm_APFSDS: TFV_2500Rnd_50mm_HE
	{
		author="Article 2 Studios";
		displayName="[TFV] 100Rnd 50mm APFSDS";
		displayNameShort="50mm APFSDS";
		ammo="TFV_B_50mm_APFSDS";
		count=100;
	};
	class TFV_300Rnd_30mm_HE: 140Rnd_30mm_MP_shells_Tracer_Red
	{
		author="Article 2 Studios";
		displayName="[TFV] 300Rnd 30mm MP";
		displayNameShort="30mm MP";
		ammo="TFV_B_30mm_HE";
		initSpeed=1070;
		count=300;
	};
	class TFV_250Rnd_30mm_AP: 60Rnd_30mm_APFSDS_shells_Tracer_Yellow
	{
		author="Article 2 Studios";
		displayName="[TFV] 250Rnd 30mm APFSDS";
		displaynameshort="30mm APFSDS";
		ammo="TFV_B_30mm_AP";
		count=250;
		tracersEvery=1;
		displayNameMFDFormat="APFSDS-T";
	};
	class TFV_300Rnd_30mm_HE2: 140Rnd_30mm_MP_shells_Tracer_Red
	{
		author="Article 2 Studios";
		displayName="[TFV] 300Rnd 30mm MP";
		displayNameShort="30mm MP";
		ammo="TFV_B_30mm_HE2";
		initSpeed=1070;
		count=300;
	};
	class TFV_250Rnd_30mm_AP2: 60Rnd_30mm_APFSDS_shells_Tracer_Yellow
	{
		author="Article 2 Studios";
		displayName="[TFV] 250Rnd 30mm APFSDS";
		displaynameshort="30mm APFSDS";
		ammo="TFV_B_30mm_AP2";
		count=250;
		tracersEvery=1;
		displayNameMFDFormat="APFSDS-T";
	};
	class TFV_300Rnd_40mm_HE: 140Rnd_30mm_MP_shells_Tracer_Red
	{
		author="Article 2 Studios";
		displayName="[TFV] 300Rnd 40mm HE";
		displayNameShort="40mm HE";
		ammo="TFV_B_40mm_HE";
		initSpeed=1070;
		count=300;
	};
	class TFV_1200Rnd_40mm_HE: 140Rnd_30mm_MP_shells_Tracer_Red
	{
		author="Article 2 Studios";
		displayName="[TFV] 1200Rnd 40mm HE";
		displayNameShort="40mm HE";
		ammo="TFV_B_40mm_HE";
		initSpeed=1070;
		count=1200;
	};
	class TFV_250Rnd_40mm_AP: 60Rnd_30mm_APFSDS_shells_Tracer_Yellow
	{
		author="Article 2 Studios";
		displayName="[TFV] 250Rnd 40mm APFSDS";
		displaynameshort="40mm APFSDS";
		ammo="TFV_B_40mm_AP";
		count=250;
		tracersEvery=1;
		displayNameMFDFormat="APFSDS-T";
	};
	class TFV_500Rnd_762x51_Box_Tracer: TFV_100Rnd_762x51_Box_Tracer
	{
		count=500;
	};
	class TFV_750Rnd_70mm_HE: 140Rnd_30mm_MP_shells_Tracer_Red
	{
		author="Article 2 Studios";
		displayName="[TFV] 750Rnd 70mm HE";
		displayNameShort="70mm HE";
		ammo="TFV_B_70mm_HE";
		initSpeed=1070;
		count=750;
	};
	class TFV_600Rnd_110mm: TFV_2500Rnd_50mm_HE
	{
		author="Article 2 Studios";
		displayNameShort="110mm HEAT";
		ammo="TFV_Sh_110mm_HEAT";
		count=600;
	};
	class TFV_120Rnd_120mm: 30Rnd_120mm_HE_shells
	{
		author="Article 2 Studios";
		displayNameShort="120mm SAPHE";
		ammo="TFV_Sh_120mm_SAPHE";
		count=120;
	};
	class TFV_60Rnd_105mm_SAPHE: 40Rnd_105mm_APFSDS_T_Green
	{
		ammo="TFV_Sh_105mm_SAPHE";
		count=60;
		displayName="[TFV] 105mm SAPHE";
		displaynameshort="SAPHE";
		initspeed=2000;
		lastroundstracer=0;
		scope=2;
		tracersevery=1;
	};
	class TFV_60Rnd_105mm_HEAT: TFV_60Rnd_105mm_SAPHE
	{
		ammo="TFV_Sh_105mm_HEAT";
		displayName="[TFV] 105mm HEAT";
		displaynameshort="HEAT";
	};
	class TFV_60Rnd_105mm_APBC: TFV_60Rnd_105mm_SAPHE
	{
		ammo="TFV_Sh_105mm_APBC";
		displayName="[TFV] 105mm AP";
		displaynameshort="AP";
	};
	class TFV_40Rnd_120mm_HE: TFV_60Rnd_105mm_SAPHE
	{
		ammo="TFV_Sh_120mm_HE";
		count=40;
		displayName="[TFV] 120mm HE";
		displaynameshort="HE";
	};
	class TFV_40Rnd_120mm_HEAT: TFV_40Rnd_120mm_HE
	{
		ammo="TFV_Sh_120mm_HEAT";
		displayName="[TFV] 120mm HEAT";
		displaynameshort="HEAT";
	};
	class TFV_40Rnd_120mm_AP: TFV_40Rnd_120mm_HE
	{
		ammo="TFV_Sh_120mm_AP";
		displayName="[TFV] 120mm AP";
		displaynameshort="AP";
	};
	class TFV_40Rnd_120mm_HE_2: TFV_40Rnd_120mm_HE
	{
	};
	class TFV_40Rnd_120mm_HEAT_2: TFV_40Rnd_120mm_HEAT
	{
	};
	class TFV_40Rnd_120mm_AP_2: TFV_40Rnd_120mm_AP
	{
	};
	class TFV_30Rnd_90mm_APBC: 40Rnd_105mm_APFSDS_T_Green
	{
		ammo="TFV_Sh_90mm_APBC";
		count=30;
		displayName="[TFV] 90mm APBC";
		displaynameshort="APBC";
		tracersevery=1;
	};
	class TFV_30Rnd_90mm_SAPHE: TFV_30Rnd_90mm_APBC
	{
		ammo="TFV_Sh_90mm_SAPHE";
		displayName="[TFV] 90mm SAPHE";
		displaynameshort="SAPHE";
	};
	class TFV_10Rnd_90mm_S1: TFV_30Rnd_90mm_APBC
	{
		ammo="TFV_Sh_90mm_S1";
		displayName="[TFV] 90mm S1 Canister";
		displaynameshort="Canister";
		count=10;
	};
	class TFV_4Rnd_75mm_AP: 40Rnd_105mm_APFSDS_T_Green
	{
		ammo="TFV_Sh_75mm_AP";
		count=4;
		displayName="[TFV] 75mm AP";
		displaynameshort="AP";
		tracersevery=1;
		muzzleImpulseFactor[]={0,0};
	};
	class TFV_4Rnd_75mm_HE: TFV_4Rnd_75mm_AP
	{
		ammo="TFV_Sh_75mm_HE";
		displayName="[TFV] 75mm HE";
		displaynameshort="HE";
	};
	class TFV_1Rnd_Shiva_nuke_missile: 2Rnd_LG_Scalpel
	{
		dlc="OPTRE";
		scope=2;
		displayName="[TFV] 1Rnd 'SHIVA' TACTICAL NUCLEAR MISSILE";
		displayNameShort="1Rnd NUCLEAR MISSILE";
		count=1;
		ammo="TFV_M_Shiva_Nuke";
		initSpeed=0;
		maxLeadSpeed=800;
		sound[]=
		{
			"A3\Sounds_F\weapons\Rockets\titan_2",
			1.25893,
			1,
			1000
		};
		weaponSoundEffect="DefaultRifle";
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_2",
			0.50118703,
			1.3,
			400
		};
		soundHit[]=
		{
			"",
			1.25893,
			1,
			1
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
		hardpoints[]=
		{
			"TFV_Hardpoint_SabrePilot",
			"TFV_Hardpoint_SabreCopilot"
		};
	};
	class TFV_M9_Frag: HandGrenade
	{
		dlc="OPTRE";
		ammo="TFV_G_M9_Frag";
		mass=8;
		displayName="[TFV] M9 HE-DP Grenade";
		descriptionShort="Hand Grenade";
		displayNameShort="M9 Frag";
		model="\OPTRE_Weapons\explosives\m9_grenade.p3d";
		picture="\OPTRE_Weapons\explosives\icons\m9.paa";
		pictureWire="\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Throw\FRAG.paa";
		count=1;
		nameSound="handgrenade";
		initSpeed=20;
	};
	class TFV_M2_Smoke: SmokeShell
	{
		dlc="OPTRE";
		displayName="[TFV] M2 Smoke Grenade (White)";
		picture="\A3\Weapons_f\data\ui\gear_smokegrenade_white_ca.paa";
		pictureWire="\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Throw\M2_SMOKE.paa";
		model="\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
		ammo="TFV_G_M2_Smoke";
		descriptionShort="Smoke Grenade<br>White";
		displayNameShort="White Smoke";
		mass=4;
	};
	class TFV_M2_Smoke_Blue: TFV_M2_Smoke
	{
		dlc="OPTRE";
		displayName="[TFV] M2 Smoke Grenade (Blue)";
		model="\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
		ammo="TFV_G_M2_BSmoke";
		descriptionShort="Smoke Grenade<br>Blue";
		displayNameShort="Blue Smoke";
	};
	class TFV_M2_Smoke_Yellow: TFV_M2_Smoke
	{
		dlc="OPTRE";
		displayName="[TFV] M2 Smoke Grenade (Yellow)";
		model="\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
		ammo="TFV_G_M2_YSmoke";
		descriptionShort="Smoke Grenade<br>Yellow";
		displayNameShort="Yellow Smoke";
	};
	class TFV_M2_Smoke_Red: TFV_M2_Smoke
	{
		dlc="OPTRE";
		displayName="[TFV] M2 Smoke Grenade (Red)";
		model="\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
		ammo="TFV_G_M2_RSmoke";
		descriptionShort="Smoke Grenade<br>Red";
		displayNameShort="Red Smoke";
	};
	class TFV_M2_Smoke_Green: TFV_M2_Smoke
	{
		dlc="OPTRE";
		displayName="[TFV] M2 Smoke Grenade (Green)";
		model="\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
		ammo="TFV_G_M2_GSmoke";
		descriptionShort="Smoke Grenade<br>Green";
		displayNameShort="Green Smoke";
	};
	class TFV_M2_Smoke_Orange: TFV_M2_Smoke
	{
		dlc="OPTRE";
		displayName="[TFV] M2 Smoke Grenade (Orange)";
		model="\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
		ammo="TFV_G_M2_OSmoke";
		descriptionShort="Smoke Grenade<br>Orange";
		displayNameShort="Orange Smoke";
	};
	class TFV_M2_Smoke_Purple: TFV_M2_Smoke
	{
		dlc="OPTRE";
		displayName="[TFV] M2 Smoke Grenade (Purple)";
		model="\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
		ammo="TFV_G_M2_PSmoke";
		descriptionShort="Smoke Grenade<br>Purple";
		displayNameShort="Purple Smoke";
	};
	class TFV_M8_Flare: TFV_M2_Smoke
	{
		dlc="OPTRE";
		displayName="[TFV] M8 Signal Flare (Red)";
		model="\OPTRE_Weapons\explosives\m8_flare.p3d";
		ammo="TFV_G_M8_Flare";
		descriptionShort="Emergency Flare";
		displayNameShort="Flare (Red)";
	};
	class TFV_M8_Flare_Green: TFV_M8_Flare
	{
		dlc="OPTRE";
		displayName="[TFV] M8 Signal Flare (Green)";
		displayNameShort="Flare (Green)";
		ammo="TFV_G_M8_Flare_Green";
	};
	class TFV_M8_Flare_Yellow: TFV_M8_Flare
	{
		dlc="OPTRE";
		displayName="[TFV] M8 Signal Flare (Yellow)";
		displayNameShort="Flare (Yellow)";
		ammo="TFV_G_M8_Flare_Yellow";
	};
	class TFV_M8_Flare_White: TFV_M8_Flare
	{
		dlc="OPTRE";
		displayName="[TFV] M8 Signal Flare (White)";
		displayNameShort="Flare (White)";
		ammo="TFV_G_M8_Flare_White";
	};
	class TFV_M8_Flare_Blue: TFV_M8_Flare
	{
		dlc="OPTRE";
		displayName="[TFV] M8 Signal Flare (Blue)";
		displayNameShort="Flare (Blue)";
		ammo="TFV_G_M8_Flare_Blue";
	};
	class TFV_ELB47_Strobe: TFV_M2_Smoke
	{
		dlc="OPTRE";
		displayName="[TFV] ELB-47 Strobe";
		model="\OPTRE_Weapons\items\beacon.p3d";
		ammo="TFV_G_ELB47_Strobe";
		descriptionShort="Emergency Beacon";
		displayNameShort="Beacon";
	};
	class M319_HE_Grenade_Shell: 1Rnd_HE_Grenade_Shell
	{
		dlc="OPTRE";
		displayName="[TFV] M319 HE";
		model="OPTRE_Weapons\gl\mag_he.p3d";
		ammo="M319_HE";
		displayNameShort="HE";
	};
	class M319_HEDP_Grenade_Shell: 1Rnd_HE_Grenade_Shell
	{
		dlc="OPTRE";
		displayName="[TFV] M319 HEDP";
		model="OPTRE_Weapons\gl\mag_hedp.p3d";
		ammo="M319_HEDP";
		displayNameShort="HEDP";
		mass=8;
	};
	class M319_Smoke: 1Rnd_smoke_grenade_shell
	{
		dlc="OPTRE";
		displayName="[TFV] M319 Smoke";
		model="OPTRE_Weapons\gl\mag_smk.p3d";
		ammo="M319_Smoke";
		displayNameShort="White Smoke";
	};
	class M319_Smoke_Red: 1Rnd_smoke_grenade_shell
	{
		dlc="OPTRE";
		displayName="[TFV] M319 Smoke Red";
		model="OPTRE_Weapons\gl\mag_smkred.p3d";
		ammo="M319_Smoke_Red";
		displayNameShort="Red Smoke";
	};
	class M319_Smoke_Green: 1Rnd_smoke_grenade_shell
	{
		dlc="OPTRE";
		displayName="[TFV] M319 Smoke Green";
		model="OPTRE_Weapons\gl\mag_smkgrn.p3d";
		ammo="M319_Smoke_Green";
		displayNameShort="Green Smoke";
	};
	class M319_Smoke_Orange: 1Rnd_smoke_grenade_shell
	{
		dlc="OPTRE";
		displayName="[TFV] M319 Smoke Orange";
		model="OPTRE_Weapons\gl\mag_smkorg.p3d";
		ammo="M319_Smoke_Orange";
		displayNameShort="Orange Smoke";
	};
	class M319_Buckshot: TFV_6Rnd_8Gauge_Pellets
	{
		dlc="OPTRE";
		displayName="[TFV] M319 Buckshot";
		model="OPTRE_Weapons\gl\mag_buckshot.p3d";
		ammo="M319_Buckshot";
		displayNameShort="Buckshot";
		count=1;
	};
	class TFV_1Rnd_Smoke_Grenade_shell: 1Rnd_smoke_grenade_shell
	{
		displayName="[TFV] Impact Smoke Round (White)";
		ammo="TFV_40mm_Smoke";
	};
	class TFV_3Rnd_Smoke_Grenade_shell: 3Rnd_Smoke_Grenade_shell
	{
		displayName="[TFV] 3Rnd 3GL Impact Smoke Rounds (White)";
		ammo="TFV_40mm_Smoke";
	};
	class TFV_1Rnd_SmokeRed_Grenade_shell: 1Rnd_SmokeRed_Grenade_shell
	{
		displayName="[TFV] Impact Smoke Round (Red)";
		ammo="TFV_40mm_SmokeRed";
	};
	class TFV_3Rnd_SmokeRed_Grenade_shell: 3Rnd_SmokeRed_Grenade_shell
	{
		displayName="[TFV] 3Rnd 3GL Impact Smoke Rounds (Red)";
		ammo="TFV_40mm_SmokeRed";
	};
	class TFV_1Rnd_SmokeGreen_Grenade_shell: 1Rnd_SmokeGreen_Grenade_shell
	{
		displayName="[TFV] Impact Smoke Round (Green)";
		ammo="TFV_40mm_SmokeGreen";
	};
	class TFV_3Rnd_SmokeGreen_Grenade_shell: 3Rnd_SmokeGreen_Grenade_shell
	{
		displayName="[TFV] 3Rnd 3GL Impact Smoke Rounds (Green)";
		ammo="TFV_40mm_SmokeGreen";
	};
	class TFV_1Rnd_SmokeYellow_Grenade_shell: 1Rnd_SmokeYellow_Grenade_shell
	{
		displayName="[TFV] Impact Smoke Round (Yellow)";
		ammo="TFV_40mm_SmokeYellow";
	};
	class TFV_3Rnd_SmokeYellow_Grenade_shell: 3Rnd_SmokeYellow_Grenade_shell
	{
		displayName="[TFV] 3Rnd 3GL Impact Smoke Rounds (Yellow)";
		ammo="TFV_40mm_SmokeYellow";
	};
	class TFV_1Rnd_SmokePurple_Grenade_shell: 1Rnd_SmokePurple_Grenade_shell
	{
		displayName="[TFV] Impact Smoke Round (Purple)";
		ammo="TFV_40mm_SmokePurple";
	};
	class TFV_3Rnd_SmokePurple_Grenade_shell: 3Rnd_SmokePurple_Grenade_shell
	{
		displayName="[TFV] 3Rnd 3GL Impact Smoke Rounds (Purple)";
		ammo="TFV_40mm_SmokePurple";
	};
	class TFV_1Rnd_SmokeBlue_Grenade_shell: 1Rnd_SmokeBlue_Grenade_shell
	{
		displayName="[TFV] Impact Smoke Round (Blue)";
		ammo="TFV_40mm_SmokeBlue";
	};
	class TFV_3Rnd_SmokeBlue_Grenade_shell: 3Rnd_SmokeBlue_Grenade_shell
	{
		displayName="[TFV] 3Rnd 3GL Impact Smoke Rounds (Blue)";
		ammo="TFV_40mm_SmokeBlue";
	};
	class TFV_1Rnd_SmokeOrange_Grenade_shell: 1Rnd_SmokeOrange_Grenade_shell
	{
		displayName="[TFV] Impact Smoke Round (Orange)";
		ammo="TFV_40mm_SmokeOrange";
	};
	class TFV_3Rnd_SmokeOrange_Grenade_shell: 3Rnd_SmokeOrange_Grenade_shell
	{
		displayName="[TFV] 3Rnd 3GL Impact Smoke Rounds (Orange)";
		ammo="TFV_40mm_SmokeOrange";
	};
};
class cfgCloudlets
{
	class SmokeShellWhite;
	class SmokeShellWhite2;
	class SmokeShellWhiteUW;
	class SmokeShellWhite2UW;
	class TFV_SmokeShellWhiteEffect: SmokeShellWhite
	{
		color[]=
		{
			{0.60000002,0.60000002,0.60000002,0.2},
			{0.60000002,0.60000002,0.60000002,0.050000001},
			{0.60000002,0.60000002,0.60000002,0}
		};
		colorCoef[]={1,1,1,1};
	};
	class TFV_SmokeShellRedEffect: TFV_SmokeShellWhiteEffect
	{
		colorCoef[]={0.84380001,0.1383,0.1353,1};
	};
	class TFV_SmokeShellGreenEffect: TFV_SmokeShellWhiteEffect
	{
		colorCoef[]={0.21250001,0.62580001,0.48910001,1};
	};
	class TFV_SmokeShellYellowEffect: TFV_SmokeShellWhiteEffect
	{
		colorCoef[]={0.98830003,0.86059999,0.071900003,1};
	};
	class TFV_SmokeShellPurpleEffect: TFV_SmokeShellWhiteEffect
	{
		colorCoef[]={0.4341,0.1388,0.41440001,1};
	};
	class TFV_SmokeShellBlueEffect: TFV_SmokeShellWhiteEffect
	{
		colorCoef[]={0.1183,0.1867,1,1};
	};
	class TFV_SmokeShellOrangeEffect: TFV_SmokeShellWhiteEffect
	{
		colorCoef[]={0.66970003,0.22750001,0.10053,1};
	};
	class TFV_SmokeShellWhiteEffect2: SmokeShellWhite2
	{
		color[]=
		{
			{0.60000002,0.60000002,0.60000002,1},
			{0.60000002,0.60000002,0.60000002,0.5},
			{0.60000002,0.60000002,0.60000002,0}
		};
		colorCoef[]={1,1,1,1};
	};
	class TFV_SmokeShellRedEffect2: TFV_SmokeShellWhiteEffect2
	{
		colorCoef[]={0.84380001,0.1383,0.1353,1};
	};
	class TFV_SmokeShellGreenEffect2: TFV_SmokeShellWhiteEffect2
	{
		colorCoef[]={0.21250001,0.62580001,0.48910001,1};
	};
	class TFV_SmokeShellYellowEffect2: TFV_SmokeShellWhiteEffect2
	{
		colorCoef[]={0.98830003,0.86059999,0.071900003,1};
	};
	class TFV_SmokeShellPurpleEffect2: TFV_SmokeShellWhiteEffect2
	{
		colorCoef[]={0.4341,0.1388,0.41440001,1};
	};
	class TFV_SmokeShellBlueEffect2: TFV_SmokeShellWhiteEffect2
	{
		colorCoef[]={0.1183,0.1867,1,1};
	};
	class TFV_SmokeShellOrangeEffect2: TFV_SmokeShellWhiteEffect2
	{
		colorCoef[]={0.66970003,0.22750001,0.10053,1};
	};
	class OPTRESmokeRocketWhite: SmokeShellWhite
	{
		size[]={3,10,7};
		circleRadius=2;
		color[]=
		{
			{0.60000002,0.60000002,0.60000002,0.40000001},
			{0.60000002,0.60000002,0.60000002,0.2},
			{0.60000002,0.60000002,0.60000002,0}
		};
		colorCoef[]={1,1,1,1};
		weight=1.274;
		lifeTime=60;
		rubbing=0.1;
	};
	class OPTRESmokeRocketRed: OPTRESmokeRocketWhite
	{
		colorCoef[]={0.84380001,0.1383,0.1353,1};
	};
	class OPTRESmokeRocketBlue: OPTRESmokeRocketWhite
	{
		colorCoef[]={0.1183,0.1867,1,1};
	};
	class OPTRESmokeRocketGreen: OPTRESmokeRocketWhite
	{
		colorCoef[]={0.21250001,0.62580001,0.48910001,1};
	};
	class OPTRESmokeRocketOrange: OPTRESmokeRocketWhite
	{
		colorCoef[]={0.66970003,0.22750001,0.10053,1};
	};
	class OPTRESmokeRocketPurple: OPTRESmokeRocketWhite
	{
		colorCoef[]={0.4341,0.1388,0.41440001,1};
	};
	class OPTRESmokeRocketYellow: OPTRESmokeRocketWhite
	{
		colorCoef[]={0.98830003,0.86059999,0.071900003,1};
	};
	class TFV_GBU1105_Cryobomb_BlueWhitefog: OPTRESmokeRocketWhite
	{
		size[]={3,5,7};
		circleRadius=60;
		color[]=
		{
			{0.60000002,0.60000002,0.80000001,0.2},
			{0.60000002,0.60000002,0.80000001,0.1},
			{0.60000002,0.60000002,0.80000001,0}
		};
		colorCoef[]={1,1,1,1};
		weight=1.274;
		lifeTime=60;
	};
};
class TFV_ComplexSmokeRocketEffect_White
{
	class SmokeEffect
	{
		simulation="particles";
		type="OPTRESmokeRocketWhite";
		lifetime=60;
		qualityLevel=-1;
		position[]={0,0,0};
		start=-1;
		enabled=1;
	};
};
class TFV_ComplexSmokeRocketEffect_Red: TFV_ComplexSmokeRocketEffect_White
{
	class SmokeEffect: SmokeEffect
	{
		type="OPTRESmokeRocketRed";
	};
};
class TFV_ComplexSmokeRocketEffect_Blue: TFV_ComplexSmokeRocketEffect_White
{
	class SmokeEffect: SmokeEffect
	{
		type="OPTRESmokeRocketBlue";
	};
};
class TFV_ComplexSmokeRocketEffect_Green: TFV_ComplexSmokeRocketEffect_White
{
	class SmokeEffect: SmokeEffect
	{
		type="OPTRESmokeRocketGreen";
	};
};
class TFV_ComplexSmokeRocketEffect_Orange: TFV_ComplexSmokeRocketEffect_White
{
	class SmokeEffect: SmokeEffect
	{
		type="OPTRESmokeRocketOrange";
	};
};
class TFV_ComplexSmokeRocketEffect_Purple: TFV_ComplexSmokeRocketEffect_White
{
	class SmokeEffect: SmokeEffect
	{
		type="OPTRESmokeRocketPurple";
	};
};
class TFV_ComplexSmokeRocketEffect_Yellow: TFV_ComplexSmokeRocketEffect_White
{
	class SmokeEffect: SmokeEffect
	{
		type="OPTRESmokeRocketYellow";
	};
};
class cfgMagazineWells
{
	class CBA_40mm_M203
	{
		TFV_grenades[]=
		{
			"TFV_1Rnd_Smoke_Grenade_shell",
			"TFV_1Rnd_SmokeRed_Grenade_shell",
			"TFV_1Rnd_SmokeGreen_Grenade_shell",
			"TFV_1Rnd_SmokeYellow_Grenade_shell",
			"TFV_1Rnd_SmokePurple_Grenade_shell",
			"TFV_1Rnd_SmokeBlue_Grenade_shell",
			"TFV_1Rnd_SmokeOrange_Grenade_shell",
			"TFV_3Rnd_Smoke_Grenade_shell",
			"TFV_3Rnd_SmokeRed_Grenade_shell",
			"TFV_3Rnd_SmokeGreen_Grenade_shell",
			"TFV_3Rnd_SmokeYellow_Grenade_shell",
			"TFV_3Rnd_SmokePurple_Grenade_shell",
			"TFV_3Rnd_SmokeBlue_Grenade_shell",
			"TFV_3Rnd_SmokeOrange_Grenade_shell"
		};
	};
	class UGL_40x36
	{
		TFV_grenades[]=
		{
			"TFV_1Rnd_Smoke_Grenade_shell",
			"TFV_1Rnd_SmokeRed_Grenade_shell",
			"TFV_1Rnd_SmokeGreen_Grenade_shell",
			"TFV_1Rnd_SmokeYellow_Grenade_shell",
			"TFV_1Rnd_SmokePurple_Grenade_shell",
			"TFV_1Rnd_SmokeBlue_Grenade_shell",
			"TFV_1Rnd_SmokeOrange_Grenade_shell"
		};
	};
	class CBA_40mm_EGLM
	{
		TFV_grenades[]=
		{
			"TFV_1Rnd_Smoke_Grenade_shell",
			"TFV_1Rnd_SmokeRed_Grenade_shell",
			"TFV_1Rnd_SmokeGreen_Grenade_shell",
			"TFV_1Rnd_SmokeYellow_Grenade_shell",
			"TFV_1Rnd_SmokePurple_Grenade_shell",
			"TFV_1Rnd_SmokeBlue_Grenade_shell",
			"TFV_1Rnd_SmokeOrange_Grenade_shell"
		};
	};
	class 3UGL_40x36
	{
		TFV_grenades[]=
		{
			"TFV_3Rnd_Smoke_Grenade_shell",
			"TFV_3Rnd_SmokeRed_Grenade_shell",
			"TFV_3Rnd_SmokeGreen_Grenade_shell",
			"TFV_3Rnd_SmokeYellow_Grenade_shell",
			"TFV_3Rnd_SmokePurple_Grenade_shell",
			"TFV_3Rnd_SmokeBlue_Grenade_shell",
			"TFV_3Rnd_SmokeOrange_Grenade_shell"
		};
	};
	class CBA_40mm_3GL
	{
		TFV_grenades[]=
		{
			"TFV_3Rnd_Smoke_Grenade_shell",
			"TFV_3Rnd_SmokeRed_Grenade_shell",
			"TFV_3Rnd_SmokeGreen_Grenade_shell",
			"TFV_3Rnd_SmokeYellow_Grenade_shell",
			"TFV_3Rnd_SmokePurple_Grenade_shell",
			"TFV_3Rnd_SmokeBlue_Grenade_shell",
			"TFV_3Rnd_SmokeOrange_Grenade_shell"
		};
	};
};
class TFV_Effect_GL_White
{
	class SmokeEffect
	{
		simulation="particles";
		type="TFV_SmokeShellWhiteEffect";
		qualityLevel=-1;
		lifetime=240;
		position[]={0,0,0};
		start=-1;
		enabled=1;
	};
	class SmokeEffect2: SmokeEffect
	{
		type="TFV_SmokeShellWhiteEffect2";
	};
	class SmokeShellUW: SmokeEffect
	{
		type="SmokeShellWhiteUW";
	};
	class SmokeShellUW2: SmokeEffect
	{
		type="SmokeShellWhite2UW";
	};
};
class TFV_Effect_GL_Red: TFV_Effect_GL_White
{
	class SmokeEffect: SmokeEffect
	{
		type="TFV_SmokeShellRedEffect";
	};
	class SmokeEffect2: SmokeEffect
	{
		type="TFV_SmokeShellRedEffect2";
	};
	class SmokeShellUW: SmokeEffect
	{
		type="SmokeShellRedUW";
	};
	class SmokeShellUW2: SmokeEffect
	{
		type="SmokeShellRed2UW";
	};
};
class TFV_Effect_GL_Green: TFV_Effect_GL_White
{
	class SmokeEffect: SmokeEffect
	{
		type="TFV_SmokeShellGreenEffect";
	};
	class SmokeEffect2: SmokeEffect
	{
		type="TFV_SmokeShellGreenEffect2";
	};
	class SmokeShellUW: SmokeEffect
	{
		type="SmokeShellGreenUW";
	};
	class SmokeShellUW2: SmokeEffect
	{
		type="SmokeShellGreen2UW";
	};
};
class TFV_Effect_GL_Yellow: TFV_Effect_GL_White
{
	class SmokeEffect: SmokeEffect
	{
		type="TFV_SmokeShellYellowEffect";
	};
	class SmokeEffect2: SmokeEffect
	{
		type="TFV_SmokeShellYellowEffect2";
	};
	class SmokeShellUW: SmokeEffect
	{
		type="SmokeShellYellowUW";
	};
	class SmokeShellUW2: SmokeEffect
	{
		type="SmokeShellYellow2UW";
	};
};
class TFV_Effect_GL_Purple: TFV_Effect_GL_White
{
	class SmokeEffect: SmokeEffect
	{
		type="TFV_SmokeShellPurpleEffect";
	};
	class SmokeEffect2: SmokeEffect
	{
		type="TFV_SmokeShellPurpleEffect2";
	};
	class SmokeShellUW: SmokeEffect
	{
		type="SmokeShellPurpleUW";
	};
	class SmokeShellUW2: SmokeEffect
	{
		type="SmokeShellPurple2UW";
	};
};
class TFV_Effect_GL_Blue: TFV_Effect_GL_White
{
	class SmokeEffect: SmokeEffect
	{
		type="TFV_SmokeShellBlueEffect";
	};
	class SmokeEffect2: SmokeEffect
	{
		type="TFV_SmokeShellBlueEffect2";
	};
	class SmokeShellUW: SmokeEffect
	{
		type="SmokeShellBlueUW";
	};
	class SmokeShellUW2: SmokeEffect
	{
		type="SmokeShellBlue2UW";
	};
};
class TFV_Effect_GL_Orange: TFV_Effect_GL_White
{
	class SmokeEffect: SmokeEffect
	{
		type="TFV_SmokeShellOrangeEffect";
	};
	class SmokeEffect2: SmokeEffect
	{
		type="TFV_SmokeShellOrangeEffect2";
	};
	class SmokeShellUW: SmokeEffect
	{
		type="SmokeShellOrangeUW";
	};
	class SmokeShellUW2: SmokeEffect
	{
		type="SmokeShellOrange2UW";
	};
};
