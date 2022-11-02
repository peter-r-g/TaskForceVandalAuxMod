class CfgPatches
{
	class OPTRE_Vehicles_Pelican
	{
		units[]=
		{
			"TFV_Objects_Wreck_Pelican",
			"TFV_Objects_Wreck_Pelican_Static1",
			"TFV_Objects_Wreck_Pelican_Static2",
			"TFV_Pelican_unarmed",
			"TFV_Pelican_unarmed_ins",
			"TFV_Pelican_unarmed_marine",
			"TFV_Pelican_unarmed_PD",
			"TFV_Pelican_armed",
			"TFV_Pelican_armed_marine",
			"TFV_Pelican_armed_ins",
			"TFV_Pelican_unarmed_green",
			"TFV_Pelican_unarmed_tan",
			"TFV_Pelican_unarmed_black",
			"TFV_Pelican_armed_green",
			"TFV_Pelican_armed_tan",
			"TFV_Pelican_armed_black",
			"TFV_Pelican_armed_70mm_ins",
			"TFV_Pelican_armed_70mm",
			"TFV_Pelican_unarmed_CMA",
			"TFV_Pelican_armed_CMA"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Air_F",
			"A3_Air_F_Beta",
			"A3_Weapons_F",
			"OPTRE_Core",
			"OPTRE_Weapons",
			"TFV_Weapons"
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
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgVehicles
{
	class All
	{
	};
	class Static: All
	{
	};
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints;
		class ViewPilot;
		class CargoTurret;
		class Reflectors
		{
			class Right;
		};
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class EventHandlers;
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class Components;
		class AnimationSources;
		class ViewOptics;
		class RotorLibHelicopterProperties;
	};
	class TFV_Pelican_F: Helicopter_Base_H
	{
		dlc="OPTRE";
		vehicleClass="TFV_UNSC_Air_class";
		scope=0;
		author="Article 2 Studios";
		armor=140;
		destrType="DestructWreck";
		gearRetracting=1;
		displayName="[TFV] Pelican_base";
		model="OPTRE_Vehicles\Pelican\Pelican_base.p3d";
		icon="OPTRE_Vehicles\Pelican\Data\icon.paa";
		mapSize=25;
		picture="OPTRE_Vehicles\Pelican\Data\icon2.paa";
		driveOnComponent[]=
		{
			"wheel_1_1",
			"wheel_2_1",
			"wheel_2_2"
		};
		nameSound="veh_air_plane_s";
		damageResistance=0.0055499999;
		fuelCapacity=2000;
		fuelConsumptionRate=0.038449999;
		insideSoundCoef=0.0116228;
		noseDownCoef=0;
		crewCrashProtection=0;
		crewExplosionProtection=0;
		maxSpeed=500;
		maxFordingDepth=0.75;
		mainBladeRadius=0.1;
		liftForceCoef=2;
		bodyFrictionCoef=0.67769998;
		cyclicAsideForceCoef=4;
		cyclicForwardForceCoef=2;
		backRotorForceCoef=1.377;
		driverAction="pilot_Heli_Light_02";
		driverInAction="pilot_Heli_Light_02";
		precisegetinout=1;
		GetInAction="pilot_Heli_Light_02_Enter";
		GetOutAction="pilot_Heli_Light_02_Exit";
		cargoGetInAction[]=
		{
			"GetInHelicopterCargo"
		};
		cargoGetOutAction[]=
		{
			"GetOutHelicopterCargo"
		};
		transportSoldier=10;
		cargoCanEject=1;
		driverCanEject=0;
		cargoAction[]=
		{
			"passenger_apc_narrow_generic01",
			"passenger_apc_generic04",
			"passenger_apc_narrow_generic02",
			"passenger_generic01_leanright",
			"passenger_apc_narrow_generic02",
			"passenger_apc_narrow_generic03",
			"passenger_generic01_leanleft",
			"passenger_generic01_foldhands",
			"passenger_apc_generic04",
			"passenger_generic01_foldhands",
			"passenger_apc_generic02"
		};
		cargoIsCoDriver[]={0,0};
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
		hideWeaponsCargo=1;
		ejectDeadGunner=0;
		cargoProxyIndexes[]={3,4,5,6,7,8,9,10,11,12};
		lockDetectionSystem="2+4+8+16";
		allowTabLock=1;
		gunnerCanSee=31;
		commanderCanSee=31;
		driverCanSee=31;
		canUseScanner=1;
		incomingMissileDetectionSystem="2+4+8+16";
		irScanToEyeFactor=1;
		irScanRangeMin=200;
		irScanRangeMax=10000;
		irScanGround=1;
		irTarget=1;
		irTargetSize=2;
		laserScanner=1;
		laserTarget=0;
		weaponLockSystem="2+4+8+16";
		nvScanner=1;
		radarTarget=1;
		radarTargetSize=2;
		radarType=4;
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		showAllTargets=2;
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		cost=900000;
		class EventHandlers
		{
			class OPTRE_EventHandlers
			{
				killed="{ detach _x; _x setVelocity [0,0,-1]; } forEach ((_this select 0) getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]);";
			};
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=0.1;
				visual="Hull";
				minimalHit=0.050000001;
				depends="Total";
				radius=0.0099999998;
			};
			class HitFuel: HitFuel
			{
				armor=0.69999999;
				radius=0.25;
				minimalHit=0.050000001;
				explosionShielding=2;
			};
			class HitAvionics: HitAvionics
			{
				armor=1.3;
				radius=0.40000001;
				minimalHit=0.050000001;
				explosionShielding=1.5;
			};
			class HitHRotor: HitHRotor
			{
				armor=2.5999999;
				radius=0.40000001;
				minimalHit=0.090000004;
				explosionShielding=2.5;
			};
			class HitVRotor: HitVRotor
			{
				armor=1.3;
				radius=0.059999999;
				minimalHit=0.050000001;
				explosionShielding=6;
			};
		};
		class TransportBackpacks
		{
		};
		class TransportItems
		{
		};
		maximumLoad=5000;
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustsEffectHeliMed";
			};
			class Exhaust2
			{
				position="exhaust2";
				direction="exhaust2_dir";
				effect="ExhaustsEffectHeliMed";
			};
			class Exhaust3
			{
				position="exhaust3";
				direction="exhaust3_dir";
				effect="ExhaustsEffectHeliMed";
			};
			class Exhaust4
			{
				position="exhaust4";
				direction="exhaust4_dir";
				effect="ExhaustsEffectHeliMed";
			};
			class Exhaust5
			{
				position="exhaust5";
				direction="exhaust5_dir";
				effect="ExhaustsEffectHeliMed";
			};
			class Exhaust6
			{
				position="exhaust6";
				direction="exhaust6_dir";
				effect="ExhaustsEffectHeliMed";
			};
			class Exhaust7
			{
				position="exhaust7";
				direction="exhaust7_dir";
				effect="ExhaustsEffectHeliMed";
			};
			class Exhaust8
			{
				position="exhaust8";
				direction="exhaust8_dir";
				effect="ExhaustsEffectHeliMed";
			};
		};
		selectionFireAnim="muzzleFlash";
		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		memoryPointLMissile="Rocket_1";
		memoryPointRMissile="Rocket_2";
		class ViewPilot: ViewPilot
		{
			initFov=0.75;
			minFov=0.375;
			maxFov=1.1;
		};
		class Viewoptics: ViewOptics
		{
			initAngleX=0;
			minAngleX=0;
			maxAngleX=0;
			initAngleY=0;
			minAngleY=0;
			maxAngleY=0;
			initFov=0.1;
			minFov=0.1;
			maxFov=1.2;
		};
		class pilotCamera
		{
		};
		memoryPointDriverOptics="slingCamera";
		slingLoadMaxCargoMass=500000;
		slingLoadMemoryPoint="slingLoad0";
		defaultUserMFDvalues[]={0.082000002,0.40799999,0.039000001,1};
		class MFD
		{
			class AirplaneHUD
			{
				enableParallax=0;
				helmetMountedDisplay=0;
				helmetPosition[]={-0.032499999,0.032499999,0.1};
				helmetRight[]={0.064999998,0,0};
				helmetDown[]={0,-0.064999998,0};
				topLeft="HUD LH";
				topRight="HUD PH";
				bottomLeft="HUD LD";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.082000002,0.40799999,0.039000001,1};
				class Bones
				{
				};
				class Draw
				{
					condition="1-on * on";
				};
			};
			class B_Plane_Fighter_01_static_HUD
			{
				enableParallax=0;
				helmetMountedDisplay=1;
				helmetPosition[]={-0.032499999,0.032499999,0.1};
				helmetRight[]={0.064999998,0,0};
				helmetDown[]={0,-0.064999998,0};
				class Pos10Vector
				{
					type="vector";
					pos0[]={0.5,0.5};
					pos10[]={1.225,1.1};
				};
				topLeft="HUD LH";
				topRight="HUD PH";
				bottomLeft="HUD LD";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.082000002,0.40799999,0.039000001,1};
				class Bones
				{
					class PlaneW
					{
						type="fixed";
						pos[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class Velocity: Pos10Vector
					{
						type="vector";
						source="velocityToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class PlaneOrientation
					{
						type="vector";
						source="forward";
						pos[]={0.5,0.5};
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class WeaponAim
					{
						type="vector";
						source="weaponToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class MissileFlightTimeRot1
					{
						type="rotational";
						source="MissileFlightTime";
						sourceScale=1;
						center[]={0,0};
						min=0;
						max=0.5;
						minAngle=0;
						maxAngle=18;
						aspectRatio=0.98540199;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle=36;
						max=1;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle=54;
						max=1.5;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle=72;
						max=2;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle=90;
						max=2.5;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle=108;
						max=3;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle=126;
						max=3.5;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle=144;
						max=4;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle=162;
						max=4.5;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle=180;
						max=5;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle=198;
						max=5.5;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle=216;
						max=6;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle=234;
						max=6.5;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle=252;
						max=7;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle=270;
						max=7.5;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle=288;
						max=8;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle=306;
						max=8.5;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle=324;
						max=9;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle=342;
						max=9.5;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle=360;
						max=10;
					};
					class Target
					{
						type="vector";
						source="targetToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class TargetingPodDir
					{
						source="pilotcameratoview";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class TargetingPodTarget
					{
						source="pilotcameratargettoview";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class ImpactPoint
					{
						type="vector";
						source="ImpactPointToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class ImpactPointRelative
					{
						type="vector";
						source="impactpointtoviewweaponRelative";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class NormalizeBombCircle
					{
						type="normalizedorsmaller";
						limit=0.079999998;
						aspectRatio=0.98540199;
					};
					class Limit0109
					{
						type="limit";
						limits[]={0.1,0.1,0.89999998,0.89999998};
					};
					class LimitWaypoint
					{
						type="limit";
						limits[]={0.2,0.1,0.80000001,0.1};
					};
					class WPPoint
					{
						type="vector";
						source="WPPoint";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class WPPointToView: WPPoint
					{
						source="WPPointToView";
					};
					class Airport1
					{
						type="vector";
						source="airportCorner1ToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class Airport2: Airport1
					{
						source="airportCorner2ToView";
					};
					class Airport3: Airport1
					{
						source="airportCorner3ToView";
					};
					class Airport4: Airport1
					{
						source="airportCorner4ToView";
					};
					class ILS_H
					{
						type="ils";
						pos0[]={0.5,0.5};
						pos3[]={0.58219999,0.5};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.58099997};
					};
					class HorizonBankRot
					{
						type="rotational";
						source="horizonBank";
						center[]={0.5,0.5};
						min="-rad(30)";
						max="rad(30)";
						minAngle="180.25-30";
						maxAngle="180.75+30";
						aspectRatio=1;
					};
					class Level0: Pos10Vector
					{
						pos0[]={0.5,0.5};
						pos10[]={0.884,0.88};
						type="horizontoview";
						angle=0;
					};
					class LevelP5: Level0
					{
						angle=5;
					};
					class LevelM5: Level0
					{
						angle=-5;
					};
					class LevelP10: Level0
					{
						angle=10;
					};
					class LevelM10: Level0
					{
						angle=-10;
					};
					class LevelP15: Level0
					{
						angle=15;
					};
					class LevelM15: Level0
					{
						angle=-15;
					};
					class LevelP20: Level0
					{
						angle=20;
					};
					class LevelM20: Level0
					{
						angle=-20;
					};
					class LevelP25: Level0
					{
						angle=25;
					};
					class LevelM25: Level0
					{
						angle=-25;
					};
					class LevelP30: Level0
					{
						angle=30;
					};
					class LevelM30: Level0
					{
						angle=-30;
					};
					class LevelP35: Level0
					{
						angle=35;
					};
					class LevelM35: Level0
					{
						angle=-35;
					};
					class LevelP40: Level0
					{
						angle=40;
					};
					class LevelM40: Level0
					{
						angle=-40;
					};
					class LevelP45: Level0
					{
						angle=45;
					};
					class LevelM45: Level0
					{
						angle=-45;
					};
					class LevelP50: Level0
					{
						angle=50;
					};
					class LevelM50: Level0
					{
						angle=-50;
					};
					class LevelP60: Level0
					{
						angle=60;
					};
					class LevelM60: Level0
					{
						angle=-60;
					};
					class LevelP70: Level0
					{
						angle=70;
					};
					class LevelM70: Level0
					{
						angle=-70;
					};
					class LevelP80: Level0
					{
						angle=80;
					};
					class LevelM80: Level0
					{
						angle=-80;
					};
					class LevelP90: Level0
					{
						angle=90;
					};
					class LevelM90: Level0
					{
						angle=-90;
					};
					class LarAmmoMax
					{
						type="linear";
						source="LarAmmoMax";
						sourceScale=1;
						min=0;
						max=1;
						minPos[]={0,1};
						maxPos[]={0,0};
					};
					class LarAmmoMin: LarAmmoMax
					{
						source="LarAmmoMin";
					};
					class LarTargetDist: LarAmmoMax
					{
						source="LarTargetDist";
					};
				};
				class Draw
				{
					width=1;
					alpha="user3";
					color[]=
					{
						"user0",
						"user1",
						"user2"
					};
					condition="(1 - (cameraHeadingDiffY<=-40) + (abs(cameraHeadingDiffX)>=30))*on";
					class VelocityLine
					{
						type="line";
						width=1;
						points[]=
						{
							
							{
								"PlaneW",
								1
							},
							
							{
								"Velocity",
								1
							},
							{},
							
							{
								"Velocity",
								{0,-0.0049145301},
								1
							},
							
							{
								"Velocity",
								{0.0024999999,-0.0042559798},
								1
							},
							
							{
								"Velocity",
								{0.0043299999,-0.0024572599},
								1
							},
							
							{
								"Velocity",
								{0.0049999999,0},
								1
							},
							
							{
								"Velocity",
								{0.0043299999,0.0024572599},
								1
							},
							
							{
								"Velocity",
								{0.0024999999,0.0042559798},
								1
							},
							
							{
								"Velocity",
								{0,0.0049145301},
								1
							},
							
							{
								"Velocity",
								{-0.0024999999,0.0042559798},
								1
							},
							
							{
								"Velocity",
								{-0.0043299999,0.0024572599},
								1
							},
							
							{
								"Velocity",
								{-0.0049999999,0},
								1
							},
							
							{
								"Velocity",
								{-0.0043299999,-0.0024572599},
								1
							},
							
							{
								"Velocity",
								{-0.0024999999,-0.0042559798},
								1
							},
							
							{
								"Velocity",
								{0,-0.0049145301},
								1
							},
							{}
						};
					};
					class PlaneW
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneOrientation",
								{-0.039999999,0},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.015,0},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.0074999998,0.015},
								1
							},
							
							{
								"PlaneOrientation",
								{0,0},
								1
							},
							
							{
								"PlaneOrientation",
								{0.0074999998,0.015},
								1
							},
							
							{
								"PlaneOrientation",
								{0.015,0},
								1
							},
							
							{
								"PlaneOrientation",
								{0.039999999,0},
								1
							}
						};
					};
					class PlaneMovementCrosshair
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"Velocity",
								{0,-0.02},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,-0.01732},
								1
							},
							
							{
								"Velocity",
								{0.01732,-0.0099999998},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							
							{
								"Velocity",
								{0.01732,0.0099999998},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,0.01732},
								1
							},
							
							{
								"Velocity",
								{0,0.02},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,0.01732},
								1
							},
							
							{
								"Velocity",
								{-0.01732,0.0099999998},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							
							{
								"Velocity",
								{-0.01732,-0.0099999998},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,-0.01732},
								1
							},
							
							{
								"Velocity",
								{0,-0.02},
								1
							},
							{},
							
							{
								"Velocity",
								{0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{-0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{0,-0.039999999},
								1
							},
							
							{
								"Velocity",
								{0,-0.02},
								1
							}
						};
					};
					class MachineGunCrosshairGroup
					{
						type="group";
						condition="-2+(mgun+rocket)*ImpactDistance";
						class MachineGunCrosshair
						{
							type="line";
							width=1.5;
							points[]=
							{
								
								{
									"ImpactPointRelative",
									{0,-0.088686101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{0,0.088686101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,0.078832097},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{-0.090000004,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{0.090000004,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{0,-0.0019708001},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,0.0019708001},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Circle
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"ImpactPointRelative",
									{0,-0.0630657},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.064000003},
									1,
									"ImpactPointRelative",
									1
								}
							};
						};
						class Circle_Min_Range
						{
							type="line";
							width=1.5;
							points[]=
							{
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.079999998,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,0.078832097},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.079999998,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPointRelative",
								{-0.0020000001,0.11},
								1
							};
							right[]=
							{
								"ImpactPointRelative",
								{0.045000002,0.11},
								1
							};
							down[]=
							{
								"ImpactPointRelative",
								{-0.0020000001,0.15000001},
								1
							};
						};
					};
					class AAMissileCrosshairGroup
					{
						type="group";
						condition="AAmissile";
						class AAMissileCrosshair
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"PlaneOrientation",
									{0,-0.24635001},
									1
								},
								
								{
									"PlaneOrientation",
									{0.043400001,-0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{0.085500002,-0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{0.125,-0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{0.16069999,-0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{0.19149999,-0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2165,-0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{0.234925,-0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2462,-0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{0.25,0},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2462,0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{0.234925,0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2165,0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{0.19149999,0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{0.16069999,0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{0.125,0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{0.085500002,0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{0.043400001,0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{0,0.24635001},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.043400001,0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.085500002,0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.125,0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.16069999,0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.19149999,0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2165,0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.234925,0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2462,0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.25,0},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2462,-0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.234925,-0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2165,-0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.19149999,-0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.16069999,-0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.125,-0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.085500002,-0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.043400001,-0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{0,-0.24635001},
									1
								}
							};
						};
						class Lines
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.20999999,0.55000001},
									1
								},
								
								{
									{0.19,0.55000001},
									1
								},
								
								{
									{0.19,0.70999998},
									1
								},
								
								{
									{0.20999999,0.70999998},
									1
								},
								{},
								
								{
									{0.20999999,0.67000002},
									1
								},
								
								{
									{0.19,0.67000002},
									1
								},
								{},
								
								{
									{0.20999999,0.63},
									1
								},
								
								{
									{0.19,0.63},
									1
								},
								{},
								
								{
									{0.20999999,0.58999997},
									1
								},
								
								{
									{0.19,0.58999997},
									1
								},
								{},
								
								{
									"LarTargetDist",
									-0.16,
									{0.17,0.73000002},
									1
								},
								
								{
									"LarTargetDist",
									-0.16,
									{0.19,0.70999998},
									1
								},
								
								{
									"LarTargetDist",
									-0.16,
									{0.17,0.69},
									1
								},
								{}
							};
						};
						class Poly
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"LarAmmoMin",
										-0.16,
										{0.191,0.70999998},
										1
									},
									
									{
										"LarAmmoMax",
										-0.16,
										{0.191,0.70999998},
										1
									},
									
									{
										"LarAmmoMax",
										-0.16,
										{0.208,0.70999998},
										1
									},
									
									{
										"LarAmmoMin",
										-0.16,
										{0.208,0.70999998},
										1
									}
								}
							};
						};
						class TopText
						{
							type="text";
							source="LarTop";
							sourceScale=0.001;
							scale=1;
							pos[]=
							{
								{0.22,0.52999997},
								1
							};
							right[]=
							{
								{0.25999999,0.52999997},
								1
							};
							down[]=
							{
								{0.22,0.56999999},
								1
							};
							align="right";
						};
						class MiddleText: TopText
						{
							source="LarTop";
							sourcePrecision=-1;
							sourceScale=0.00050000002;
							pos[]=
							{
								{0.22,0.61000001},
								1
							};
							right[]=
							{
								{0.25999999,0.61000001},
								1
							};
							down[]=
							{
								{0.22,0.64999998},
								1
							};
						};
						class SpeedText: TopText
						{
							source="LarTargetSpeed";
							align="left";
							sourceScale=3.5999999;
							pos[]=
							{
								"LarTargetDist",
								-0.16,
								{0.16,0.69},
								1
							};
							right[]=
							{
								"LarTargetDist",
								-0.16,
								{0.2,0.69},
								1
							};
							down[]=
							{
								"LarTargetDist",
								-0.16,
								{0.16,0.73000002},
								1
							};
						};
					};
					class ATMissileCrosshairGroup
					{
						condition="ATmissile";
						type="group";
						class ATMissileCrosshair
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"WeaponAim",
									{-0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.15000001,-0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.15000001,0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.15000001,-0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.15000001,0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.13,-0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.13,0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.13,-0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.13,0.15000001},
									1
								}
							};
						};
					};
					class RocketCrosshairGroup
					{
						type="group";
						condition="Rocket";
						class MachineGunCrosshair
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.019708},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.019708},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.039999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.039999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.02,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.0099999998,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0099999998,-0.039416101},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0019708001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0019708001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.07},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
						};
					};
					class BombCrosshairGroup
					{
						type="group";
						condition="bomb";
						class BombCrosshair
						{
							width=4;
							type="line";
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,0.088686101},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.078832097},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0019708001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0019708001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.078832097},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.078832097},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.078832097},
									1
								},
								{},
								{},
								
								{
									"ImpactPoint",
									-1,
									"Velocity",
									1,
									"NormalizeBombCircle",
									1,
									"ImpactPoint",
									1,
									{0,0},
									1
								},
								
								{
									"Velocity",
									1,
									"Limit0109",
									1,
									{0,0},
									1
								}
							};
						};
						class Circle
						{
							type="line";
							width=6;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0630657},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.078832097},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.064000003},
									1,
									"ImpactPoint",
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.11},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.15000001},
								1
							};
						};
					};
					class WeaponsText
					{
						condition="1- mgun";
						class WeaponsText
						{
							type="text";
							source="weapon";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.032000002,0.83999997},
								1
							};
							right[]=
							{
								{0.086999997,0.83999997},
								1
							};
							down[]=
							{
								{0.032000002,0.88499999},
								1
							};
						};
					};
					class MGunText
					{
						condition="mgun";
						class WeaponsText
						{
							type="text";
							source="static";
							text="GUN";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.032000002,0.83999997},
								1
							};
							right[]=
							{
								{0.086999997,0.83999997},
								1
							};
							down[]=
							{
								{0.032000002,0.88499999},
								1
							};
						};
					};
					class AmmoText
					{
						type="text";
						source="ammo";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.032000002,0.88},
							1
						};
						right[]=
						{
							{0.086999997,0.88},
							1
						};
						down[]=
						{
							{0.032000002,0.92500001},
							1
						};
					};
					class Laser
					{
						condition="laseron";
						class LaserText
						{
							type="text";
							source="static";
							text="LASER";
							align="left";
							scale=1;
							pos[]=
							{
								{0.93199998,0.80000001},
								1
							};
							right[]=
							{
								{0.98699999,0.80000001},
								1
							};
							down[]=
							{
								{0.93199998,0.84500003},
								1
							};
						};
					};
					class ILS
					{
						condition="ils";
						class GearText
						{
							type="text";
							source="static";
							text="GEAR";
							align="left";
							scale=1;
							pos[]=
							{
								{0.93199998,0.80000001},
								1
							};
							right[]=
							{
								{0.98699999,0.80000001},
								1
							};
							down[]=
							{
								{0.93199998,0.84500003},
								1
							};
						};
						class Glideslope
						{
							clipTL[]={0,0};
							clipBR[]={1,1};
							class ILS
							{
								type="line";
								width=2;
								points[]=
								{
									
									{
										"ILS_W",
										{-0.12,0},
										1
									},
									
									{
										"ILS_W",
										{0.12,0},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.12,-0.0118248},
										1
									},
									
									{
										"ILS_W",
										{-0.12,0.0118248},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.059999999,-0.0088686096},
										1
									},
									
									{
										"ILS_W",
										{-0.059999999,0.0088686096},
										1
									},
									{},
									
									{
										"ILS_W",
										{0,-0.0118248},
										1
									},
									
									{
										"ILS_W",
										{0,0.0118248},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.059999999,-0.0088686096},
										1
									},
									
									{
										"ILS_W",
										{0.059999999,0.0088686096},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.12,-0.0118248},
										1
									},
									
									{
										"ILS_W",
										{0.12,0.0118248},
										1
									},
									{},
									
									{
										"ILS_H",
										{0,-0.118248},
										1
									},
									
									{
										"ILS_H",
										{0,0.118248},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.012,-0.118248},
										1
									},
									
									{
										"ILS_H",
										{0.012,-0.118248},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.0089999996,-0.059124101},
										1
									},
									
									{
										"ILS_H",
										{0.0089999996,-0.059124101},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.012,0},
										1
									},
									
									{
										"ILS_H",
										{0.012,0},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.0089999996,0.059124101},
										1
									},
									
									{
										"ILS_H",
										{0.0089999996,0.059124101},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.012,0.118248},
										1
									},
									
									{
										"ILS_H",
										{0.012,0.118248},
										1
									}
								};
							};
							class airport
							{
								type="line";
								points[]=
								{
									
									{
										"airport1",
										1
									},
									
									{
										"airport2",
										1
									},
									
									{
										"airport4",
										1
									},
									
									{
										"airport3",
										1
									},
									
									{
										"airport1",
										1
									}
								};
							};
						};
					};
					class TargetLocking
					{
						condition="missilelocking";
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								}
							};
						};
					};
					class TargetLocked
					{
						condition="missilelocked";
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								}
							};
						};
					};
					class IncomingMissile
					{
						condition="incomingmissile";
						blinkingPattern[]={0.30000001,0.30000001};
						blinkingStartsOn=1;
						color[]={1,0,0};
						class Text
						{
							type="text";
							source="static";
							text="!INCOMING MISSILE!";
							align="center";
							scale=1;
							pos[]=
							{
								{0.48500001,0.21678799},
								1
							};
							right[]=
							{
								{0.54500002,0.21678799},
								1
							};
							down[]=
							{
								{0.48500001,0.266058},
								1
							};
						};
					};
					class StallGroup
					{
						type="group";
						condition="stall";
						color[]={1,0,0};
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class StallText
						{
							type="text";
							source="static";
							text="STALL";
							align="center";
							scale=1;
							pos[]=
							{
								{0.5,0.25},
								1
							};
							right[]=
							{
								{0.54000002,0.25},
								1
							};
							down[]=
							{
								{0.5,0.28999999},
								1
							};
						};
					};
					class TargetingPodGroup
					{
						condition="1-pilotcameralock";
						class TargetingPodDir
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"TargetingPodDir",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.020805599,-0.0040780702},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0117854,-0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0041384902,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.020805599,-0.0040780702},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.020805599,0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0176381,0.0116134},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0117854,0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0041384902,0.0205019},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0041384902,0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0117854,0.017380601},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0176381,0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.020805599,-0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0117854,-0.0173807},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0041385,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								{}
							};
						};
					};
					class TargetingPodGroupOn
					{
						condition="pilotcameralock";
						class TargetingPodDir
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,-0.0040780702},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0117854,-0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0041384902,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.020805599,-0.0040780702},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.020805599,0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0176381,0.0116134},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0117854,0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0041384902,0.0205019},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0041384902,0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0117854,0.017380601},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0176381,0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,-0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0117854,-0.0173807},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0041385,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								{}
							};
						};
					};
					class MainCenterLine1
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								
								{
									-0.49000001,
									"0 + 0.025"
								},
								1
							},
							
							{
								"PlaneW",
								{-0.49000001,0},
								1
							},
							
							{
								"PlaneW",
								{-0.44999999,0},
								1
							}
						};
					};
					class MainCenterLine2
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{-0.33000001,0},
								1
							},
							
							{
								"PlaneW",
								{-0.25,0},
								1
							}
						};
					};
					class MainCenterLine3
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								
								{
									0.49000001,
									"0 + 0.025"
								},
								1
							},
							
							{
								"PlaneW",
								{0.49000001,0},
								1
							},
							
							{
								"PlaneW",
								{0.25,0},
								1
							}
						};
					};
					class SpeedIndicatorBox
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{-0.49000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{-0.49000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{-0.30000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{-0.30000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{-0.49000001,-0.25},
								1
							}
						};
					};
					class BrakesWarn
					{
						type="text";
						source="userText";
						sourceScale=1;
						sourceIndex=5;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38,-0.30000001},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.38 + 0.05",
								-0.30000001
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38,
								"-0.3 + 0.05"
							},
							1
						};
					};
					class AlphaNumber
					{
						type="text";
						source="AoA";
						sourceScale=57.295799;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38999999,0.162},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.39 + 0.04",
								0.162
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38999999,
								"0.162 + 0.05"
							},
							1
						};
					};
					class AlphaText
					{
						type="text";
						source="static";
						text="AoA:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,0.162},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								0.162
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"0.162 + 0.05"
							},
							1
						};
					};
					class GGroup
					{
						type="group";
						condition="on";
						class GNumber
						{
							type="text";
							source="userText";
							sourceScale=1;
							sourceIndex=4;
							align="right";
							scale=1;
							pos[]=
							{
								"PlaneW",
								{-0.38999999,0.213},
								1
							};
							right[]=
							{
								"PlaneW",
								
								{
									"-0.39 + 0.04",
									0.213
								},
								1
							};
							down[]=
							{
								"PlaneW",
								
								{
									-0.38999999,
									"0.213 + 0.05"
								},
								1
							};
						};
						class GText
						{
							type="text";
							source="static";
							text="G:";
							align="left";
							scale=1;
							pos[]=
							{
								"PlaneW",
								{-0.41,0.213},
								1
							};
							right[]=
							{
								"PlaneW",
								
								{
									"-0.41 + 0.04",
									0.213
								},
								1
							};
							down[]=
							{
								"PlaneW",
								
								{
									-0.41,
									"0.213 + 0.05"
								},
								1
							};
						};
					};
					class SpeedGroup
					{
						type="group";
						condition="on";
						class SpeedNumber
						{
							type="text";
							source="speed";
							sourceScale=3.5999999;
							align="center";
							scale=1;
							pos[]=
							{
								"PlaneW",
								{-0.40000001,-0.25},
								1
							};
							right[]=
							{
								"PlaneW",
								{-0.30000001,-0.25},
								1
							};
							down[]=
							{
								"PlaneW",
								{-0.40000001,-0.2},
								1
							};
						};
					};
					class Grid
					{
						condition="on";
						class CoordXNumber
						{
							type="text";
							source="coordinateX";
							sourceScale=0.0099999998;
							sourceLength=3;
							sourceOffset=-0.5;
							align="left";
							scale=1;
							pos[]=
							{
								{0.90600002,0.85399997},
								1
							};
							right[]=
							{
								{0.954,0.85399997},
								1
							};
							down[]=
							{
								{0.90600002,0.89899999},
								1
							};
						};
						class CoordYNumber: CoordXNumber
						{
							source="coordinateY";
							align="right";
							pos[]=
							{
								{0.92199999,0.85399997},
								1
							};
							right[]=
							{
								{0.96700001,0.85399997},
								1
							};
							down[]=
							{
								{0.92199999,0.89899999},
								1
							};
						};
						class Time: CoordXNumber
						{
							source="time";
							text="%X";
							align="center";
							pos[]=
							{
								{0.90700001,0.88},
								1
							};
							right[]=
							{
								{0.95499998,0.88},
								1
							};
							down[]=
							{
								{0.90700001,0.92500001},
								1
							};
						};
					};
					class AltitudeIndicatorBox
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{0.49000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{0.49000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{0.30000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{0.30000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{0.49000001,-0.25},
								1
							}
						};
					};
					class AltitudeNumberASL
					{
						type="text";
						source="altitudeASL";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{0.40000001,-0.25},
							1
						};
						right[]=
						{
							"PlaneW",
							{0.47999999,-0.25},
							1
						};
						down[]=
						{
							"PlaneW",
							{0.40000001,-0.2},
							1
						};
					};
					class AltitudeRadarText
					{
						type="text";
						source="static";
						text="R";
						align="left";
						scale=1;
						sourceScale=1;
						pos[]=
						{
							"PlaneW",
							{0.31999999,-0.192},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"+0.32 + 0.04",
								-0.192
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								0.31999999,
								"-0.192 + 0.041"
							},
							1
						};
					};
					class AltitudeNumberAGL
					{
						type="text";
						source="altitudeAGL";
						sourceScale=1;
						sourceLength=4;
						sourceOffset=-2;
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{0.47999999,-0.19},
							1
						};
						right[]=
						{
							"PlaneW",
							{0.54000002,-0.19},
							1
						};
						down[]=
						{
							"PlaneW",
							{0.47999999,-0.15000001},
							1
						};
					};
					class PitchNumber
					{
						type="text";
						source="horizonDive";
						sourceScale=57.295799;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38999999,-0.075999998},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.39 + 0.04",
								-0.075999998
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38999999,
								"-0.076 + 0.05"
							},
							1
						};
					};
					class PitchText
					{
						type="text";
						source="static";
						text="P:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,-0.075999998},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								-0.075999998
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"-0.076 + 0.05"
							},
							1
						};
					};
					class RollNumber
					{
						type="text";
						source="horizonBank";
						sourceScale=57.295799;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38999999,-0.025},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.39 + 0.04",
								-0.025
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38999999,
								"-0.025 + 0.05"
							},
							1
						};
					};
					class RollText
					{
						type="text";
						source="static";
						text="R:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,-0.025},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								-0.025
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"-0.025 + 0.05"
							},
							1
						};
					};
					class ClimbNumber
					{
						type="text";
						source="vspeed";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38999999,0.026000001},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.39 + 0.04",
								0.026000001
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38999999,
								"+0.026 + 0.05"
							},
							1
						};
					};
					class ClimbText
					{
						type="text";
						source="static";
						text="C:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,0.026000001},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								0.026000001
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"+0.026 + 0.05"
							},
							1
						};
					};
					class HeadingArrow
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{-0.02,0.041999999},
								1
							},
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{0,0.022},
								1
							},
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{0.02,0.041999999},
								1
							}
						};
					};
					class WP
					{
						condition="wpvalid";
						class WPdist
						{
							type="text";
							source="wpdist";
							sourceScale=0.001;
							sourcePrecision=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.92400002,0.60501802},
								1
							};
							down[]=
							{
								{0.92400002,0.64246398},
								1
							};
							right[]=
							{
								{0.96399999,0.60501802},
								1
							};
						};
						class WPIndex
						{
							type="text";
							source="wpIndex";
							sourceScale=1;
							sourceLength=2;
							align="right";
							scale=1;
							pos[]=
							{
								{0.87699997,0.60501802},
								1
							};
							right[]=
							{
								{0.917,0.60501802},
								1
							};
							down[]=
							{
								{0.87699997,0.64246398},
								1
							};
						};
						class WPstatic
						{
							type="text";
							source="static";
							text="WP";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								
								{
									"0.825+0.01",
									0.60650003
								},
								1
							};
							right[]=
							{
								{0.875,0.60650003},
								1
							};
							down[]=
							{
								
								{
									"0.825+0.01",
									0.6415
								},
								1
							};
						};
						class WPKM
						{
							type="text";
							source="static";
							text=":";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								
								{
									"0.825+0.09",
									0.60650003
								},
								1
							};
							right[]=
							{
								{0.95499998,0.60650003},
								1
							};
							down[]=
							{
								
								{
									"0.825+0.09",
									0.6415
								},
								1
							};
						};
					};
					class HeadingRotation
					{
						condition="abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)-5";
						class HeadingHeadNumber
						{
							type="text";
							source="cameraDir";
							sourceScale=1;
							align="center";
							scale=1;
							pos[]=
							{
								
								{
									"0.80-0.302",
									"0.082+0.065"
								},
								1
							};
							right[]=
							{
								
								{
									"0.83-0.302",
									"0.082+0.065"
								},
								1
							};
							down[]=
							{
								
								{
									"0.80-0.302",
									"0.113+0.065"
								},
								1
							};
						};
						class HeadingArrow
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.48800001,0.141},
									1
								},
								
								{
									{0.51200002,0.141},
									1
								},
								
								{
									{0.542,0.161},
									1
								},
								
								{
									{0.51200002,0.18099999},
									1
								},
								
								{
									{0.48800001,0.18099999},
									1
								},
								
								{
									{0.458,0.161},
									1
								},
								
								{
									{0.48800001,0.141},
									1
								},
								{}
							};
						};
					};
					class HeadingScale
					{
						type="scale";
						NeverEatSeaWeed=1;
						horizontal=1;
						source="heading";
						sourceScale=1;
						width=3;
						top=0.1;
						center=0.5;
						bottom=0.89999998;
						lineXleft=0.105;
						lineYright=0.115;
						lineXleftMajor=0.094999999;
						lineYrightMajor=0.115;
						majorLineEach=5;
						numberEach=5;
						step="18 / 9";
						stepSize="(0.70 - 0.3) / 15";
						align="center";
						scale=1;
						pos[]={0.096000001,0.0546};
						right[]={0.14300001,0.0546};
						down[]={0.096000001,0.093000002};
					};
					class HeadingIndicatorBox
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{-0.035,-0.45500001},
								1
							},
							
							{
								"PlaneW",
								{-0.035,-0.5},
								1
							},
							
							{
								"PlaneW",
								{0.035,-0.5},
								1
							},
							
							{
								"PlaneW",
								{0.035,-0.45500001},
								1
							},
							
							{
								"PlaneW",
								{-0.035,-0.45500001},
								1
							}
						};
					};
					class HeadingIndicatorArrow
					{
						type="polygon";
						points[]=
						{
							
							{
								
								{
									"PlaneW",
									{-0.015,-0.45500001},
									1
								},
								
								{
									"PlaneW",
									{0,-0.44499999},
									1
								},
								
								{
									"PlaneW",
									{0.015,-0.45500001},
									1
								}
							}
						};
					};
					class HeadingNumber
					{
						type="text";
						source="heading";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneW",
							
							{
								0,
								"(-0.5   )"
							},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								0.029999999,
								"(-0.5   )"
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								0,
								"(-0.5 + 0.045 )"
							},
							1
						};
					};
					class HorizonBankRot
					{
						type="line";
						width=2;
						points[]=
						{
							
							{
								"HorizonBankRot",
								
								{
									0,
									"0.39421001-0.109"
								},
								1
							},
							
							{
								"HorizonBankRot",
								
								{
									0.0099999998,
									"0.41673699-0.109"
								},
								1
							},
							
							{
								"HorizonBankRot",
								
								{
									-0.0099999998,
									"0.41673699-0.109"
								},
								1
							},
							
							{
								"HorizonBankRot",
								
								{
									0,
									"0.39421001-0.109"
								},
								1
							}
						};
					};
					class HorizonBankRotLines
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								{0.619959,0.71298599},
								1
							},
							
							{
								{0.63143897,0.74420297},
								1
							},
							{},
							
							{
								{0.58291,0.73901898},
								1
							},
							
							{
								{0.58808702,0.76077801},
								1
							},
							{},
							
							{
								{0.54057401,0.74850398},
								1
							},
							
							{
								{0.54318398,0.77083802},
								1
							},
							{},
							
							{
								{0.4975,0.740421},
								1
							},
							
							{
								{0.4975,0.77420998},
								1
							},
							{},
							
							{
								{0.45442599,0.74850398},
								1
							},
							
							{
								{0.45181599,0.77083802},
								1
							},
							{},
							
							{
								{0.41209,0.73901898},
								1
							},
							
							{
								{0.40691301,0.76077801},
								1
							},
							{},
							
							{
								{0.37504101,0.71298599},
								1
							},
							
							{
								{0.363561,0.74420297},
								1
							}
						};
					};
					class Horizont
					{
						clipTL[]={0.2,0.2};
						clipBR[]={0.80000001,0.80000001};
						class Dimmed
						{
							class Level0
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"Level0",
										{0.75,0},
										1
									},
									
									{
										"Level0",
										{0.064999998,0},
										1
									},
									{},
									
									{
										"Level0",
										{-0.064999998,0},
										1
									},
									
									{
										"Level0",
										{-0.75,0},
										1
									}
								};
							};
						};
						class HideOnTurn
						{
							condition="20-abs(cameraDir-heading)*( (abs(heading-cameraDir))<=340)) ";
							class Limiter
							{
								class Level0
								{
									type="line";
									width=2;
									points[]={};
								};
								class LevelM5: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM5",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM5",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.22,0},
											1
										},
										
										{
											"LevelM5",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.19,0},
											1
										},
										
										{
											"LevelM5",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.16,0},
											1
										},
										
										{
											"LevelM5",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.13,0},
											1
										},
										
										{
											"LevelM5",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.1,0},
											1
										},
										
										{
											"LevelM5",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.07,0},
											1
										},
										
										{
											"LevelM5",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM5",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM5",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.22,0},
											1
										},
										
										{
											"LevelM5",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.19,0},
											1
										},
										
										{
											"LevelM5",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.16,0},
											1
										},
										
										{
											"LevelM5",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.13,0},
											1
										},
										
										{
											"LevelM5",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.1,0},
											1
										},
										
										{
											"LevelM5",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.07,0},
											1
										},
										
										{
											"LevelM5",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_5
								{
									type="text";
									source="static";
									text=-5;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM5",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM5",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM5",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_5_R
								{
									type="text";
									source="static";
									text=-5;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM5",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM5",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM5",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP5: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP5",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP5",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP5",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP5",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP5",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP5",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_5
								{
									type="text";
									source="static";
									text="5";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP5",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP5",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP5",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_5_R
								{
									type="text";
									source="static";
									text="5";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP5",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP5",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP5",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM10: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM10",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM10",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.22,0},
											1
										},
										
										{
											"LevelM10",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.19,0},
											1
										},
										
										{
											"LevelM10",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.16,0},
											1
										},
										
										{
											"LevelM10",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.13,0},
											1
										},
										
										{
											"LevelM10",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.1,0},
											1
										},
										
										{
											"LevelM10",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.07,0},
											1
										},
										
										{
											"LevelM10",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM10",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM10",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.22,0},
											1
										},
										
										{
											"LevelM10",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.19,0},
											1
										},
										
										{
											"LevelM10",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.16,0},
											1
										},
										
										{
											"LevelM10",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.13,0},
											1
										},
										
										{
											"LevelM10",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.1,0},
											1
										},
										
										{
											"LevelM10",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.07,0},
											1
										},
										
										{
											"LevelM10",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_10
								{
									type="text";
									source="static";
									text=-10;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM10",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM10",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM10",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_10_R
								{
									type="text";
									source="static";
									text=-10;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM10",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM10",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM10",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP10: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP10",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP10",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP10",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP10",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP10",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP10",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_10
								{
									type="text";
									source="static";
									text="10";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP10",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP10",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP10",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_10_R
								{
									type="text";
									source="static";
									text="10";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP10",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP10",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP10",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM15: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM15",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM15",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.22,0},
											1
										},
										
										{
											"LevelM15",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.19,0},
											1
										},
										
										{
											"LevelM15",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.16,0},
											1
										},
										
										{
											"LevelM15",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.13,0},
											1
										},
										
										{
											"LevelM15",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.1,0},
											1
										},
										
										{
											"LevelM15",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.07,0},
											1
										},
										
										{
											"LevelM15",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM15",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM15",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.22,0},
											1
										},
										
										{
											"LevelM15",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.19,0},
											1
										},
										
										{
											"LevelM15",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.16,0},
											1
										},
										
										{
											"LevelM15",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.13,0},
											1
										},
										
										{
											"LevelM15",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.1,0},
											1
										},
										
										{
											"LevelM15",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.07,0},
											1
										},
										
										{
											"LevelM15",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_15
								{
									type="text";
									source="static";
									text=-15;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM15",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM15",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM15",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_15_R
								{
									type="text";
									source="static";
									text=-15;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM15",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM15",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM15",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP15: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP15",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP15",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP15",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP15",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP15",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP15",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_15
								{
									type="text";
									source="static";
									text="15";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP15",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP15",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP15",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_15_R
								{
									type="text";
									source="static";
									text="15";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP15",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP15",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP15",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM20: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM20",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM20",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.22,0},
											1
										},
										
										{
											"LevelM20",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.19,0},
											1
										},
										
										{
											"LevelM20",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.16,0},
											1
										},
										
										{
											"LevelM20",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.13,0},
											1
										},
										
										{
											"LevelM20",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.1,0},
											1
										},
										
										{
											"LevelM20",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.07,0},
											1
										},
										
										{
											"LevelM20",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM20",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM20",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.22,0},
											1
										},
										
										{
											"LevelM20",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.19,0},
											1
										},
										
										{
											"LevelM20",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.16,0},
											1
										},
										
										{
											"LevelM20",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.13,0},
											1
										},
										
										{
											"LevelM20",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.1,0},
											1
										},
										
										{
											"LevelM20",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.07,0},
											1
										},
										
										{
											"LevelM20",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_20
								{
									type="text";
									source="static";
									text=-20;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM20",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM20",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM20",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_20_R
								{
									type="text";
									source="static";
									text=-20;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM20",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM20",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM20",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP20: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP20",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP20",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP20",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP20",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP20",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP20",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_20
								{
									type="text";
									source="static";
									text="20";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP20",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP20",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP20",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_20_R
								{
									type="text";
									source="static";
									text="20";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP20",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP20",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP20",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM25: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM25",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM25",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.22,0},
											1
										},
										
										{
											"LevelM25",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.19,0},
											1
										},
										
										{
											"LevelM25",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.16,0},
											1
										},
										
										{
											"LevelM25",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.13,0},
											1
										},
										
										{
											"LevelM25",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.1,0},
											1
										},
										
										{
											"LevelM25",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.07,0},
											1
										},
										
										{
											"LevelM25",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM25",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM25",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.22,0},
											1
										},
										
										{
											"LevelM25",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.19,0},
											1
										},
										
										{
											"LevelM25",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.16,0},
											1
										},
										
										{
											"LevelM25",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.13,0},
											1
										},
										
										{
											"LevelM25",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.1,0},
											1
										},
										
										{
											"LevelM25",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.07,0},
											1
										},
										
										{
											"LevelM25",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_25
								{
									type="text";
									source="static";
									text=-25;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM25",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM25",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM25",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_25_R
								{
									type="text";
									source="static";
									text=-25;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM25",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM25",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM25",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP25: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP25",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP25",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP25",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP25",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP25",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP25",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_25
								{
									type="text";
									source="static";
									text="25";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP25",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP25",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP25",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_25_R
								{
									type="text";
									source="static";
									text="25";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP25",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP25",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP25",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM30: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM30",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM30",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.22,0},
											1
										},
										
										{
											"LevelM30",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.19,0},
											1
										},
										
										{
											"LevelM30",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.16,0},
											1
										},
										
										{
											"LevelM30",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.13,0},
											1
										},
										
										{
											"LevelM30",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.1,0},
											1
										},
										
										{
											"LevelM30",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.07,0},
											1
										},
										
										{
											"LevelM30",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM30",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM30",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.22,0},
											1
										},
										
										{
											"LevelM30",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.19,0},
											1
										},
										
										{
											"LevelM30",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.16,0},
											1
										},
										
										{
											"LevelM30",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.13,0},
											1
										},
										
										{
											"LevelM30",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.1,0},
											1
										},
										
										{
											"LevelM30",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.07,0},
											1
										},
										
										{
											"LevelM30",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_30
								{
									type="text";
									source="static";
									text=-30;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM30",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM30",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM30",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_30_R
								{
									type="text";
									source="static";
									text=-30;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM30",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM30",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM30",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP30: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP30",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP30",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP30",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP30",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP30",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP30",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_30
								{
									type="text";
									source="static";
									text="30";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP30",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP30",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP30",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_30_R
								{
									type="text";
									source="static";
									text="30";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP30",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP30",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP30",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM35: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM35",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM35",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.22,0},
											1
										},
										
										{
											"LevelM35",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.19,0},
											1
										},
										
										{
											"LevelM35",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.16,0},
											1
										},
										
										{
											"LevelM35",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.13,0},
											1
										},
										
										{
											"LevelM35",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.1,0},
											1
										},
										
										{
											"LevelM35",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.07,0},
											1
										},
										
										{
											"LevelM35",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM35",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM35",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.22,0},
											1
										},
										
										{
											"LevelM35",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.19,0},
											1
										},
										
										{
											"LevelM35",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.16,0},
											1
										},
										
										{
											"LevelM35",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.13,0},
											1
										},
										
										{
											"LevelM35",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.1,0},
											1
										},
										
										{
											"LevelM35",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.07,0},
											1
										},
										
										{
											"LevelM35",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_35
								{
									type="text";
									source="static";
									text=-35;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM35",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM35",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM35",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_35_R
								{
									type="text";
									source="static";
									text=-35;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM35",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM35",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM35",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP35: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP35",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP35",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP35",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP35",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP35",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP35",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_35
								{
									type="text";
									source="static";
									text="35";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP35",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP35",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP35",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_35_R
								{
									type="text";
									source="static";
									text="35";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP35",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP35",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP35",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM40: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM40",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM40",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.22,0},
											1
										},
										
										{
											"LevelM40",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.19,0},
											1
										},
										
										{
											"LevelM40",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.16,0},
											1
										},
										
										{
											"LevelM40",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.13,0},
											1
										},
										
										{
											"LevelM40",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.1,0},
											1
										},
										
										{
											"LevelM40",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.07,0},
											1
										},
										
										{
											"LevelM40",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM40",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM40",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.22,0},
											1
										},
										
										{
											"LevelM40",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.19,0},
											1
										},
										
										{
											"LevelM40",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.16,0},
											1
										},
										
										{
											"LevelM40",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.13,0},
											1
										},
										
										{
											"LevelM40",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.1,0},
											1
										},
										
										{
											"LevelM40",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.07,0},
											1
										},
										
										{
											"LevelM40",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_40
								{
									type="text";
									source="static";
									text=-40;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM40",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM40",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM40",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_40_R
								{
									type="text";
									source="static";
									text=-40;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM40",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM40",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM40",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP40: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP40",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP40",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP40",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP40",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP40",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP40",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_40
								{
									type="text";
									source="static";
									text="40";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP40",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP40",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP40",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_40_R
								{
									type="text";
									source="static";
									text="40";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP40",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP40",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP40",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM45: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM45",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM45",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.22,0},
											1
										},
										
										{
											"LevelM45",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.19,0},
											1
										},
										
										{
											"LevelM45",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.16,0},
											1
										},
										
										{
											"LevelM45",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.13,0},
											1
										},
										
										{
											"LevelM45",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.1,0},
											1
										},
										
										{
											"LevelM45",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.07,0},
											1
										},
										
										{
											"LevelM45",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM45",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM45",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.22,0},
											1
										},
										
										{
											"LevelM45",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.19,0},
											1
										},
										
										{
											"LevelM45",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.16,0},
											1
										},
										
										{
											"LevelM45",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.13,0},
											1
										},
										
										{
											"LevelM45",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.1,0},
											1
										},
										
										{
											"LevelM45",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.07,0},
											1
										},
										
										{
											"LevelM45",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_45
								{
									type="text";
									source="static";
									text=-45;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM45",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM45",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM45",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_45_R
								{
									type="text";
									source="static";
									text=-45;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM45",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM45",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM45",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP45: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP45",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP45",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP45",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP45",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP45",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP45",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_45
								{
									type="text";
									source="static";
									text="45";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP45",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP45",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP45",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_45_R
								{
									type="text";
									source="static";
									text="45";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP45",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP45",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP45",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM50: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM50",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM50",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.22,0},
											1
										},
										
										{
											"LevelM50",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.19,0},
											1
										},
										
										{
											"LevelM50",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.16,0},
											1
										},
										
										{
											"LevelM50",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.13,0},
											1
										},
										
										{
											"LevelM50",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.1,0},
											1
										},
										
										{
											"LevelM50",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.07,0},
											1
										},
										
										{
											"LevelM50",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM50",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM50",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.22,0},
											1
										},
										
										{
											"LevelM50",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.19,0},
											1
										},
										
										{
											"LevelM50",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.16,0},
											1
										},
										
										{
											"LevelM50",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.13,0},
											1
										},
										
										{
											"LevelM50",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.1,0},
											1
										},
										
										{
											"LevelM50",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.07,0},
											1
										},
										
										{
											"LevelM50",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_50
								{
									type="text";
									source="static";
									text=-50;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM50",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM50",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM50",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_50_R
								{
									type="text";
									source="static";
									text=-50;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM50",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM50",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM50",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP50: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP50",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP50",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP50",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP50",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP50",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP50",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_50
								{
									type="text";
									source="static";
									text="50";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP50",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP50",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP50",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_50_R
								{
									type="text";
									source="static";
									text="50";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP50",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP50",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP50",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM60: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM60",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM60",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.22,0},
											1
										},
										
										{
											"LevelM60",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.19,0},
											1
										},
										
										{
											"LevelM60",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.16,0},
											1
										},
										
										{
											"LevelM60",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.13,0},
											1
										},
										
										{
											"LevelM60",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.1,0},
											1
										},
										
										{
											"LevelM60",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.07,0},
											1
										},
										
										{
											"LevelM60",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM60",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM60",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.22,0},
											1
										},
										
										{
											"LevelM60",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.19,0},
											1
										},
										
										{
											"LevelM60",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.16,0},
											1
										},
										
										{
											"LevelM60",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.13,0},
											1
										},
										
										{
											"LevelM60",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.1,0},
											1
										},
										
										{
											"LevelM60",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.07,0},
											1
										},
										
										{
											"LevelM60",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_60
								{
									type="text";
									source="static";
									text=-60;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM60",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM60",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM60",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_60_R
								{
									type="text";
									source="static";
									text=-60;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM60",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM60",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM60",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP60: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP60",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP60",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP60",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP60",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP60",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP60",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_60
								{
									type="text";
									source="static";
									text="60";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP60",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP60",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP60",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_60_R
								{
									type="text";
									source="static";
									text="60";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP60",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP60",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP60",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM70: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM70",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM70",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.22,0},
											1
										},
										
										{
											"LevelM70",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.19,0},
											1
										},
										
										{
											"LevelM70",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.16,0},
											1
										},
										
										{
											"LevelM70",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.13,0},
											1
										},
										
										{
											"LevelM70",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.1,0},
											1
										},
										
										{
											"LevelM70",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.07,0},
											1
										},
										
										{
											"LevelM70",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM70",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM70",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.22,0},
											1
										},
										
										{
											"LevelM70",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.19,0},
											1
										},
										
										{
											"LevelM70",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.16,0},
											1
										},
										
										{
											"LevelM70",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.13,0},
											1
										},
										
										{
											"LevelM70",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.1,0},
											1
										},
										
										{
											"LevelM70",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.07,0},
											1
										},
										
										{
											"LevelM70",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_70
								{
									type="text";
									source="static";
									text=-70;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM70",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM70",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM70",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_70_R
								{
									type="text";
									source="static";
									text=-70;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM70",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM70",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM70",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP70: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP70",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP70",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP70",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP70",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP70",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP70",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_70
								{
									type="text";
									source="static";
									text="70";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP70",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP70",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP70",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_70_R
								{
									type="text";
									source="static";
									text="70";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP70",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP70",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP70",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM80: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM80",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM80",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.22,0},
											1
										},
										
										{
											"LevelM80",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.19,0},
											1
										},
										
										{
											"LevelM80",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.16,0},
											1
										},
										
										{
											"LevelM80",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.13,0},
											1
										},
										
										{
											"LevelM80",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.1,0},
											1
										},
										
										{
											"LevelM80",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.07,0},
											1
										},
										
										{
											"LevelM80",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM80",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM80",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.22,0},
											1
										},
										
										{
											"LevelM80",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.19,0},
											1
										},
										
										{
											"LevelM80",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.16,0},
											1
										},
										
										{
											"LevelM80",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.13,0},
											1
										},
										
										{
											"LevelM80",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.1,0},
											1
										},
										
										{
											"LevelM80",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.07,0},
											1
										},
										
										{
											"LevelM80",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_80
								{
									type="text";
									source="static";
									text=-80;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM80",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM80",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM80",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_80_R
								{
									type="text";
									source="static";
									text=-80;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM80",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM80",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM80",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP80: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP80",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP80",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP80",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP80",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP80",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP80",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_80
								{
									type="text";
									source="static";
									text="80";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP80",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP80",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP80",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_80_R
								{
									type="text";
									source="static";
									text="80";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP80",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP80",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP80",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM90: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM90",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM90",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.22,0},
											1
										},
										
										{
											"LevelM90",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.19,0},
											1
										},
										
										{
											"LevelM90",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.16,0},
											1
										},
										
										{
											"LevelM90",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.13,0},
											1
										},
										
										{
											"LevelM90",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.1,0},
											1
										},
										
										{
											"LevelM90",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.07,0},
											1
										},
										
										{
											"LevelM90",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM90",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM90",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.22,0},
											1
										},
										
										{
											"LevelM90",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.19,0},
											1
										},
										
										{
											"LevelM90",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.16,0},
											1
										},
										
										{
											"LevelM90",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.13,0},
											1
										},
										
										{
											"LevelM90",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.1,0},
											1
										},
										
										{
											"LevelM90",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.07,0},
											1
										},
										
										{
											"LevelM90",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_90
								{
									type="text";
									source="static";
									text=-90;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM90",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM90",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM90",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_90_R
								{
									type="text";
									source="static";
									text=-90;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM90",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM90",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM90",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP90: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP90",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP90",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP90",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP90",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP90",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP90",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_90
								{
									type="text";
									source="static";
									text="90";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP90",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP90",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP90",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_90_R
								{
									type="text";
									source="static";
									text="90";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP90",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP90",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP90",
										{0.25999999,0.033},
										1
									};
								};
							};
						};
						class UnhideOnTurn
						{
							condition="abs(cameraDir-heading)*( (abs(heading-cameraDir))<=340)-20";
							class Cross
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"PlaneW",
										{-0.02,0},
										1
									},
									
									{
										"PlaneW",
										{-0.039999999,0},
										1
									},
									{},
									
									{
										"PlaneW",
										{0.02,0},
										1
									},
									
									{
										"PlaneW",
										{0.039999999,0},
										1
									},
									{},
									
									{
										"PlaneW",
										{0,-0.019708},
										1
									},
									
									{
										"PlaneW",
										{0,-0.039416101},
										1
									},
									{},
									
									{
										"PlaneW",
										{0,0.019708},
										1
									},
									
									{
										"PlaneW",
										{0,0.039416101},
										1
									},
									{}
								};
							};
						};
					};
					class RadarBoxes
					{
						type="radartoview";
						pos0[]={0.5,0.5};
						pos10[]={0.773,0.773};
						width=4;
						points[]=
						{
							
							{
								{-0.0020000001,-0.0020000001},
								1
							},
							
							{
								{0.0020000001,-0.0020000001},
								1
							},
							
							{
								{0.0020000001,0.0020000001},
								1
							},
							
							{
								{-0.0020000001,0.0020000001},
								1
							},
							
							{
								{-0.0020000001,-0.0020000001},
								1
							}
						};
					};
					class TargetDiamond
					{
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,-0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,-0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.02},
									1
								}
							};
						};
					};
				};
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\OPTRE_Vehicles\Pelican\pelicanPylonPic.paa";
				class pylons
				{
					class pylons1
					{
						maxweight=560;
						hardpoints[]=
						{
							"OPAEX_Hardpoint_D77-TC"
						};
						attachment="OPTRE_32Rnd_Anvil1_missiles";
						bay=-1;
						priority=2;
						UIposition[]={0.1,0.5};
						turret[]={};
					};
					class pylons2: pylons1
					{
						mirroredMissilePos=1;
						UIposition[]={0.1,0.1};
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="[TFV] Empty";
						attachment[]={};
					};
					class Default
					{
						displayName="[TFV] CAP";
						attachment[]=
						{
							"OPTRE_12Rnd_C2GMLS_missiles",
							"OPTRE_12Rnd_C2GMLS_missiles"
						};
					};
					class CAS_Rockets
					{
						displayName="[TFV] CAS: ANVIL I";
						attachment[]=
						{
							"OPTRE_32Rnd_Anvil1_missiles",
							"OPTRE_32Rnd_Anvil1_missiles"
						};
					};
					class CAS_Rockets_Guided
					{
						displayName="[TFV] CAS: ANVIL II & III";
						attachment[]=
						{
							"OPTRE_32Rnd_Anvil2_missiles",
							"OPTRE_32Rnd_Anvil3_missiles"
						};
					};
					class CAS_AT
					{
						displayName="[TFV] AT";
						attachment[]=
						{
							"OPTRE_4Rnd_Jackknife_missile",
							"OPTRE_4Rnd_Jackknife_missile"
						};
					};
				};
			};
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=500;
							maxRange=2000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=2000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=300;
						animDirection="mainGun";
						angleRangeHorizontal=46;
						angleRangeVertical=34;
						aimdown=-0.25;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=500;
							maxRange=1500;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=1500;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=300;
						animDirection="mainGun";
						angleRangeHorizontal=46;
						angleRangeVertical=34;
						aimdown=-0.25;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=4000;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=4000;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableSpeed=300;
						angleRangeHorizontal=180;
						angleRangeVertical=90;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						aimDown=30;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
				{
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				gunnerAction="pilot_Heli_Light_02";
				gunnerInAction="pilot_Heli_Light_02";
				precisegetinout=1;
				gunnerGetInAction="pilot_Heli_Light_02_Enter";
				gunnerGetOutAction="pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner="Pos_Gunner";
				memoryPointsGetInGunnerDir="Pos_Gunner_dir";
				canEject=0;
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				gunnerLeftHandAnimName="";
				gunnerRightHandAnimName="";
				maxHorizontalRotSpeed=5;
				maxVerticalRotSpeed=5;
				proxyindex=1;
				isCopilot=1;
				gunnerName="Co-Pilot";
				primaryGunner=1;
				visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				weapons[]=
				{
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"Laserbatteries"
				};
				minElev=-90;
				maxElev=40;
				initElev=-45;
				minTurn=-180;
				maxTurn=180;
				initTurn=0;
				stabilizedInAxes="StabilizedInAxesBoth";
				startEngine=0;
				class Viewoptics
				{
					minAngleX=-360;
					maxAngleX=360;
					initAngleX=0;
					minAngleY=-360;
					maxAngleY=360;
					initAngleY=0;
					initFov=0.75;
					minFov=0.25;
					maxFov=0.75;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
				};
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						directionStabilized=1;
						opticsdisplayName="[TFV] W";
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						opticsdisplayName="[TFV] M";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
						opticsdisplayName="[TFV] N";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						minFov=0.25;
						maxFov=1.25;
						initFov=0.75;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components: components
						{
							class VehiclePrimaryGunnerDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="PrimaryGunner";
							};
							class VehicleMissileDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="Missile";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={4000,2000,16000,8000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay="SensorDisplay";
						class Components: components
						{
							class VehiclePrimaryGunnerDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="PrimaryGunner";
							};
							class VehicleMissileDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="Missile";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={4000,2000,16000,8000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
				soundServo[]=
				{
					"",
					0.0099999998,
					1
				};
				outGunnerMayFire=1;
				commanding=-1;
				gunBeg="S_start";
				gunEnd="S_end";
				memoryPointGunnerOptics="gunner1";
				selectionFireAnim="";
				castGunnerShadow=0;
				viewGunnerShadow=0;
				turretAxis="axisturret1";
				gunnerOpticsModel="";
				gunnerOpticsEffect[]=
				{
					"TankCommanderOptics1",
					"BWTV"
				};
				gunnerForceOptics=0;
				turretInfoType="RscOptics_Heli_Attack_01_gunner";
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos_cargo_l";
				memoryPointsGetInGunnerDir="pos_cargo_l_dir";
				gunnerName="Passenger (Left door)";
				proxyIndex=1;
				maxElev=15;
				minElev=-25;
				maxTurn=10;
				minTurn=-50;
				isPersonTurret=1;
				ejectDeadGunner=0;
				enabledByAnimationSource="cargoDoors";
				memoryPointGunnerOptics="";
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos_cargo_r";
				memoryPointsGetInGunnerDir="pos_cargo_r_dir";
				gunnerName="Passenger (Right door)";
				proxyIndex=2;
				maxElev=15;
				minElev=-25;
				maxTurn=50;
				minTurn=-10;
				isPersonTurret=1;
				ejectDeadGunner=0;
				enabledByAnimationSource="cargoDoors";
				memoryPointGunnerOptics="";
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_destruct.rvmat",
				"A3\data_F\default.rvmat",
				"A3\data_F\default.rvmat",
				"A3\data_F\default_destruct.rvmat"
			};
		};
		attenuationEffectType="HeliAttenuation";
		soundGetIn[]=
		{
			"A3\Sounds_F\air\Heli_Light_02\open",
			"db-5",
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\air\Heli_Light_02\close",
			"db0",
			1,
			50
		};
		soundEnviron[]=
		{
			"",
			"db-30",
			1
		};
		soundDammage[]=
		{
			"A3\Sounds_F\air\Heli_Light_02\crash",
			"db-5",
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_int_start_v2",
			"db-5",
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_ext_start_v2",
			"db-2",
			1,
			600
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_int_stop_v2",
			"db-5",
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_ext_stop_v2",
			"db-2",
			1,
			600
		};
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",
			"db-20",
			1
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",
			"db-20",
			1
		};
		class Sounds
		{
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F\air\plane_fighter_03\Plane_Fighter_03_engi_ext",
					"db-10",
					1,
					900
				};
				frequency="rotorSpeed";
				volume="0.5*camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\plane_fighter_03\Plane_Fighter_03_low_ext",
					"db-5",
					1,
					1200
				};
				frequency="rotorSpeed";
				volume="0.5*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust/3)*0.8";
				cone[]={1.6,3.1400001,1.6,0.94999999};
			};
			class RotorHighOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\plane_fighter_03\Plane_Fighter_03_engi_ext",
					"db-5",
					1,
					1500
				};
				frequency="rotorSpeed";
				volume="0.5*camPos*(rotorSpeed factor[0.4,1])";
				cone[]={1.6,3.1400001,1.6,0.94999999};
			};
			class RotorNoiseExt
			{
				sound[]=
				{
					"A3\Sounds_F\air\plane_fighter_03\Plane_Fighter_03-fors_ext",
					"db-5",
					1,
					800
				};
				frequency=1;
				volume="0.5*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust/3)*0.8";
				cone[]={1.6,3.1400001,1.6,0.94999999};
			};
			class EngineLowIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_low_int",
					"db-5",
					1
				};
				frequency="rotorSpeed";
				volume="0.25*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust/3)*0.8";
			};
			class EngineHighIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_engi_int",
					"db-5",
					1.2
				};
				frequency="rotorSpeed";
				volume="0.25*camPos*(rotorSpeed factor[0.4,1])";
			};
			class ForsageIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-fors_int",
					"db-5",
					1
				};
				frequency="rotorSpeed";
				volume="0.25*(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class WindNoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\noise",
					"db-5",
					1
				};
				frequency="1";
				volume="0.25*(1-camPos)*(speed factor[1, 150])";
			};
		};
		class RenderTargets
		{
			class LeftCam
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="PIP2_pos";
					pointDirection="PIP2_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.75;
				};
			};
			class RightCam
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.75;
				};
			};
			class BackLeftCam
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="PIP3_pos";
					pointDirection="PIP3_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.75;
				};
			};
			class BackRightCam
			{
				renderTarget="rendertarget3";
				class CameraView1
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.75;
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class cargoDoors
			{
				source="user";
				animPeriod=5;
				initPhase=0;
				sound="ServoRampSound_2";
			};
			class wingControl
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class gunVert
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class gunHorz
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class HideWeapon
			{
				source="user";
				animPeriod=9.9999997e-006;
				initPhase=0;
			};
			class Gatling
			{
				source="revolving";
				weapon="gatling_30mm";
			};
			class Gatling_flash
			{
				source="ammorandom";
				weapon="gatling_30mm";
			};
			class Missiles_revolving
			{
				source="revolving";
				weapon="missiles_DAGR";
			};
			class Proxy
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
		class UserActions
		{
			class PelLift_LoadVehicle
			{
				userActionID=6;
				displayName="Load Vehicle";
				displayNameDefault="Load Vehicle";
				textToolTip="Load Vehicle";
				position="cargo_door_handle";
				showWindow=0;
				radius=15;
				priority=2;
				onlyForPlayer=0;
				condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player)";
				statement="0 = [this,vehicle player] spawn OPTRE_fnc_PelicanLoadValidate;";
			};
			class PelLift_LoadPodMenu
			{
				userActionID=9;
				displayName="Load Supply Pods";
				displayNameDefault="Load Supply Pods";
				textToolTip="Load Supply Pods";
				position="cargo_door_handle";
				showWindow=0;
				radius=15;
				priority=2;
				onlyForPlayer=0;
				condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND ((vehicle player) isKindOf ""OPTRE_cart_base"")";
				statement="OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject = this; createDialog ""OPTRE_PelicanLoadSupplyPods_Menu""; OPTRE_PelicanLoadSupplyPods_Menu_cam = ""camera"" CamCreate getPosATL OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject;  OPTRE_PelicanLoadSupplyPods_Menu_cam CamSetTarget OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject; OPTRE_PelicanLoadSupplyPods_Menu_cam CameraEffect [""Internal"",""Back""]; OPTRE_PelicanLoadSupplyPods_Menu_cam camSetRelPos [4,-12,-2.4]; OPTRE_PelicanLoadSupplyPods_Menu_cam CamCommit 0; showCinemaBorder false; if (sunOrMoon == 0) then {camUseNVG true;};";
			};
			class PelLift_UnLoadVehicle
			{
				userActionID=7;
				displayName="Unload Vehicle / Supply Pods";
				displayNameDefault="Unload Vehicle / Supply Pods";
				textToolTip="Unload Vehicle / Supply Pods";
				position="cargo_door_handle";
				showWindow=0;
				radius=5;
				priority=3;
				onlyForPlayer=0;
				condition="(player in [gunner this, driver this]) AND ((count (vehicle player getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				statement="0 = [this] spawn OPTRE_fnc_PelicanUnLoadValidate;";
			};
			class PelLift_OpenDetachPodMenu
			{
				userActionID=8;
				displayName="Detach Individual Supply Pod Menu";
				displayNameDefault="Detach Individual Supply Pod Menu";
				textToolTip="Detach Individual Supply Pod Menu";
				position="cargo_door_handle";
				showWindow=0;
				radius=5;
				priority=3;
				onlyForPlayer=0;
				condition="(player in [gunner this, driver this]) AND (({_x isKindOf ""NATO_Box_Base""} count (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				statement="0 = this spawn OPTRE_fnc_PelicanLoadSupplyPodMenuDetachMenu;";
			};
			class RampOpen
			{
				userActionID=50;
				displayName="Open Ramp";
				displayNameDefault="Open Ramp";
				textToolTip="Open Ramp";
				position="cargo_door_handle";
				showWindow=0;
				radius=100000;
				priority=4;
				onlyForPlayer=0;
				condition="((this animationPhase ""cargoDoor_1"" < 0.5) AND (this animationPhase ""cargoDoor_2"" < 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement="this animate [""cargoDoor_1"",1]; this animate [""cargoDoor_2"",1]";
				animPeriod=5;
			};
			class RampClose: RampOpen
			{
				userActionID=51;
				displayName="Close Ramp";
				displayNameDefault="Close Ramp";
				textToolTip="Close Ramp";
				priority=4;
				condition="((this animationPhase ""cargoDoor_1"" > 0.5) AND (this animationPhase ""cargoDoor_2"" > 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement="this animate [""cargoDoor_1"",0]; this animate [""cargoDoor_2"",0]";
				animPeriod=5;
			};
			class ThrusterEngage: RampOpen
			{
				userActionID=52;
				displayName="ENGAGE FORWARD THRUSTERS";
				displayNameDefault="ENGAGE FORWARD THRUSTERS";
				textToolTip="ENGAGE FORWARD THRUSTERS";
				priority=10;
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				statement="0 = this spawn OPTRE_fnc_ThrusterEngage";
			};
			class ThrusterDisengage: ThrusterEngage
			{
				userActionID=53;
				displayName="DISENGAGE FORWARD THRUSTERS";
				displayNameDefault="DISENGAGE FORWARD THRUSTERS";
				textToolTip="DISENGAGE FORWARD THRUSTERS";
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				statement="0 = this spawn OPTRE_fnc_ThrusterDisengage";
			};
			class AirbrakeEngage: ThrusterEngage
			{
				userActionID=54;
				displayName="ENGAGE AIRBRAKES";
				displayNameDefault="ENGAGE AIRBRAKES";
				textToolTip="ENGAGE AIRBRAKES";
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND ((speed this) > 100)";
				statement="0 = this spawn OPTRE_fnc_AirbrakeEngage";
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"clan",
			"clan_text",
			"insignia",
			"attach_gun"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Vehicles\Pelican\data\PelicanExterior_standard_CO.paa",
			""
		};
		class Reflectors: Reflectors
		{
			class Right
			{
				color[]={7000,7500,10000};
				ambient[]={70,75,100};
				intensity=50;
				size=1;
				innerAngle=15;
				outerAngle=65;
				coneFadeCoef=10;
				position="Light_R_pos";
				direction="Light_R_dir";
				hitpoint="Light_R_hitpoint";
				selection="Light_R";
				useFlare=1;
				flareSize=10;
				flareMaxDistance=250;
				dayLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=1;
					hardLimitStart=100;
					hardLimitEnd=200;
				};
			};
			class Left: Right
			{
				position="Light_L_pos";
				direction="Light_L_dir";
				hitpoint="Light_L_hitpoint";
				selection="Light_L";
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Right"
			}
		};
		class textureSources
		{
			class standard
			{
				displayName="[TFV] Standard";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Pelican\data\PelicanExterior_standard_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorgreen
			{
				displayName="[TFV] Green";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Pelican\data\PelicanExterior_green_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colortan
			{
				displayName="[TFV] Tan";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Pelican\data\PelicanExterior_Tan_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorblack
			{
				displayName="[TFV] Black";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Pelican\data\PelicanExterior_black_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorsnow
			{
				displayName="[TFV] Snow";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Pelican\data\PelicanExterior_snow_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colormarine
			{
				displayName="[TFV] Marines";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Pelican\data\PelicanExterior_marine_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorinnie
			{
				displayName="[TFV] Innie";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Pelican\data\PelicanExterior_innie_CO.paa"
				};
				factions[]=
				{
					"OPTRE_Ins"
				};
			};
		};
		textureList[]=
		{
			"standard",
			1,
			"colorgreen",
			1,
			"colorblack",
			1,
			"colorsnow",
			1,
			"colortan",
			1
		};
	};
	class TFV_Pelican_unarmed: TFV_Pelican_F
	{
		displayName="[TFV] D77H-TCI Pelican";
		author="Article 2 Studios";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		vehicleClass="OPTRE_UNSC_Air_class";
		faction="OPTRE_UNSC";
		crew="OPTRE_UNSC_Airforce_Soldier_Airman";
		textureList[]=
		{
			"standard",
			1,
			"colorgreen",
			1,
			"colorblack",
			1,
			"colorsnow",
			1,
			"colortan",
			1
		};
		tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
	};
	class TFV_Pelican_unarmed_marine: TFV_Pelican_F
	{
		displayName="[TFV] D77H-TCI Pelican (Marine)";
		author="Article 2 Studios";
		scope=1;
		scopeCurator=2;
		side=1;
		vehicleClass="OPTRE_UNSC_Air_class";
		faction="OPTRE_UNSC";
		crew="OPTRE_UNSC_Marine_Pilot";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Vehicles\Pelican\data\PelicanExterior_Marine_CO.paa",
			""
		};
		textureList[]=
		{
			"colormarine",
			1
		};
		tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
	};
	class TFV_Pelican_unarmed_ins: TFV_Pelican_unarmed
	{
		displayName="[TFV] D77H-TCI Pelican (Ins)";
		author="Article 2 Studios";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=0;
		faction="OPTRE_Ins";
		crew="OPTRE_Ins_URF_Crewman";
		vehicleClass="OPTRE_Ins_Air_class";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Vehicles\Pelican\data\PelicanExterior_innie_CO.paa",
			""
		};
		textureList[]=
		{
			"colorinnie",
			1
		};
	};
	class TFV_Pelican_armed: TFV_Pelican_F
	{
		displayName="[TFV] D77H-TCI/AV Pelican";
		author="Article 2 Studios";
		scope=2;
		scopecurator=2;
		scopeArsenal=2;
		side=1;
		vehicleClass="OPTRE_UNSC_Air_class";
		faction="OPTRE_UNSC";
		crew="OPTRE_UNSC_Airforce_Soldier_Airman";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"clan",
			"clan_text",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Vehicles\Pelican\data\PelicanExterior_standard_CO.paa",
			""
		};
		memoryPointLMissile="Rocket_1";
		memoryPointRMissile="Rocket_2";
		weapons[]=
		{
			"CMFlareLauncher",
			"OPTRE_missiles_Anvil1"
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				gunnerAction="pilot_Heli_Light_02";
				gunnerInAction="pilot_Heli_Light_02";
				precisegetinout=1;
				gunnerGetInAction="pilot_Heli_Light_02_Enter";
				gunnerGetOutAction="pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner="Pos_Gunner";
				memoryPointsGetInGunnerDir="Pos_Gunner_dir";
				canEject=1;
				body="mainTurret";
				gun="mainGun";
				gunAxis="Osa Hlavne";
				gunBeg="Usti hlavne";
				gunEnd="konec hlavne";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				gunnerLeftHandAnimName="";
				gunnerRightHandAnimName="";
				maxHorizontalRotSpeed=5;
				maxVerticalRotSpeed=5;
				proxyindex=1;
				isCopilot=1;
				gunnerName="Gunner";
				primaryGunner=1;
				visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				weapons[]=
				{
					"OPTRE_CHAINGUN40",
					"CMFlareLauncher",
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"OPTRE_1200Rnd_40mm_HE",
					"OPTRE_1200Rnd_40mm_HE",
					"OPTRE_1200Rnd_40mm_HE",
					"OPTRE_1200Rnd_40mm_HE",
					"OPTRE_1200Rnd_40mm_HE",
					"168Rnd_CMFlare_Chaff_Magazine",
					"Laserbatteries"
				};
				minElev=-90;
				maxElev=30;
				initElev=0;
				minTurn=-180;
				maxTurn=180;
				initTurn=0;
				stabilizedInAxes="StabilizedInAxesBoth";
				startEngine=0;
				class Viewoptics
				{
					minAngleX=-80;
					maxAngleX=80;
					initAngleX=0;
					minAngleY=-80;
					maxAngleY=15;
					initAngleY=0;
					initFov=0.75;
					minFov=0.25;
					maxFov=0.75;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
				};
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						directionStabilized=1;
						opticsdisplayName="[TFV] W";
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						opticsdisplayName="[TFV] M";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
						opticsdisplayName="[TFV] N";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						minFov=0.25;
						maxFov=1.25;
						initFov=0.75;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components: components
						{
							class VehiclePrimaryGunnerDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="PrimaryGunner";
							};
							class VehicleMissileDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="Missile";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={4000,2000,16000,8000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay="SensorDisplay";
						class Components: components
						{
							class VehiclePrimaryGunnerDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="PrimaryGunner";
							};
							class VehicleMissileDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="Missile";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={4000,2000,16000,8000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
				soundServo[]=
				{
					"",
					0.0099999998,
					1
				};
				outGunnerMayFire=1;
				commanding=-1;
				memoryPointGunnerOptics="gunner1";
				selectionFireAnim="";
				castGunnerShadow=0;
				viewGunnerShadow=0;
				turretAxis="axisturret1";
				gunnerOpticsModel="";
				gunnerOpticsEffect[]=
				{
					"TankCommanderOptics1",
					"BWTV"
				};
				gunnerForceOptics=0;
				turretInfoType="RscOptics_Heli_Attack_01_gunner";
				discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
				discreteDistanceInitIndex=5;
				showAllTargets=4;
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos_cargo_l";
				memoryPointsGetInGunnerDir="pos_cargo_l_dir";
				gunnerName="Passenger (Left door)";
				proxyIndex=1;
				maxElev=15;
				minElev=-25;
				maxTurn=10;
				minTurn=-50;
				isPersonTurret=1;
				ejectDeadGunner=0;
				enabledByAnimationSource="cargoDoors";
				memoryPointGunnerOptics="";
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos_cargo_r";
				memoryPointsGetInGunnerDir="pos_cargo_r_dir";
				gunnerName="Passenger (Right door)";
				proxyIndex=2;
				maxElev=15;
				minElev=-25;
				maxTurn=50;
				minTurn=-10;
				isPersonTurret=1;
				ejectDeadGunner=0;
				enabledByAnimationSource="cargoDoors";
				memoryPointGunnerOptics="";
			};
		};
		class textureSources
		{
			class standard
			{
				displayName="[TFV] Standard";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Pelican\data\PelicanExterior_standard_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorgreen
			{
				displayName="[TFV] Green";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Pelican\data\PelicanExterior_green_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colortan
			{
				displayName="[TFV] Tan";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Pelican\data\PelicanExterior_Tan_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorblack
			{
				displayName="[TFV] Black";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Pelican\data\PelicanExterior_black_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorsnow
			{
				displayName="[TFV] Snow";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Pelican\data\PelicanExterior_snow_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colormarine
			{
				displayName="[TFV] Marines";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Pelican\data\PelicanExterior_marine_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorinnie
			{
				displayName="[TFV] Innie";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Pelican\data\PelicanExterior_innie_CO.paa"
				};
				factions[]=
				{
					"OPTRE_Ins"
				};
			};
		};
		textureList[]=
		{
			"standard",
			1,
			"colorgreen",
			1,
			"colorblack",
			1,
			"colortan",
			1,
			"colorsnow",
			1
		};
	};
	class TFV_Pelican_armed_70mm: TFV_Pelican_F
	{
		displayName="[TFV] D77H-TCI/AV Pelican 70mm";
		author="Article 2 Studios";
		scope=2;
		scopecurator=2;
		scopeArsenal=2;
		side=1;
		vehicleClass="OPTRE_UNSC_Air_class";
		faction="OPTRE_UNSC";
		crew="OPTRE_UNSC_Airforce_Soldier_Airman";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"clan",
			"clan_text",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Vehicles\Pelican\data\PelicanExterior_standard_CO.paa",
			""
		};
		memoryPointLMissile="Rocket_1";
		memoryPointRMissile="Rocket_2";
		weapons[]=
		{
			"CMFlareLauncher",
			"OPTRE_missiles_Anvil1"
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				gunnerAction="pilot_Heli_Light_02";
				gunnerInAction="pilot_Heli_Light_02";
				precisegetinout=1;
				gunnerGetInAction="pilot_Heli_Light_02_Enter";
				gunnerGetOutAction="pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner="Pos_Gunner";
				memoryPointsGetInGunnerDir="Pos_Gunner_dir";
				canEject=1;
				body="mainTurret";
				gun="mainGun";
				gunAxis="Osa Hlavne";
				gunBeg="Usti hlavne";
				gunEnd="konec hlavne";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				gunnerLeftHandAnimName="";
				gunnerRightHandAnimName="";
				maxHorizontalRotSpeed=5;
				maxVerticalRotSpeed=5;
				proxyindex=1;
				isCopilot=1;
				gunnerName="Gunner";
				primaryGunner=1;
				visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				weapons[]=
				{
					"OPTRE_M370",
					"CMFlareLauncher",
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"OPTRE_750Rnd_70mm_HE",
					"OPTRE_750Rnd_70mm_HE",
					"OPTRE_750Rnd_70mm_HE",
					"OPTRE_750Rnd_70mm_HE",
					"OPTRE_750Rnd_70mm_HE",
					"168Rnd_CMFlare_Chaff_Magazine",
					"Laserbatteries"
				};
				minElev=-90;
				maxElev=30;
				initElev=0;
				minTurn=-180;
				maxTurn=180;
				initTurn=0;
				stabilizedInAxes="StabilizedInAxesBoth";
				startEngine=0;
				class Viewoptics
				{
					minAngleX=-80;
					maxAngleX=80;
					initAngleX=0;
					minAngleY=-80;
					maxAngleY=15;
					initAngleY=0;
					initFov=0.75;
					minFov=0.25;
					maxFov=0.75;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
				};
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						directionStabilized=1;
						opticsdisplayName="[TFV] W";
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						opticsdisplayName="[TFV] M";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
						opticsdisplayName="[TFV] N";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						minFov=0.25;
						maxFov=1.25;
						initFov=0.75;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components: components
						{
							class VehiclePrimaryGunnerDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="PrimaryGunner";
							};
							class VehicleMissileDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="Missile";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={4000,2000,16000,8000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay="SensorDisplay";
						class Components: components
						{
							class VehiclePrimaryGunnerDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="PrimaryGunner";
							};
							class VehicleMissileDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="Missile";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={4000,2000,16000,8000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
				soundServo[]=
				{
					"",
					0.0099999998,
					1
				};
				outGunnerMayFire=1;
				commanding=-1;
				memoryPointGunnerOptics="gunner1";
				selectionFireAnim="";
				castGunnerShadow=0;
				viewGunnerShadow=0;
				turretAxis="axisturret1";
				gunnerOpticsModel="";
				gunnerOpticsEffect[]=
				{
					"TankCommanderOptics1",
					"BWTV"
				};
				gunnerForceOptics=0;
				turretInfoType="RscOptics_Heli_Attack_01_gunner";
				discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
				discreteDistanceInitIndex=5;
				showAllTargets=4;
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos_cargo_l";
				memoryPointsGetInGunnerDir="pos_cargo_l_dir";
				gunnerName="Passenger (Left door)";
				proxyIndex=1;
				maxElev=15;
				minElev=-25;
				maxTurn=10;
				minTurn=-50;
				isPersonTurret=1;
				ejectDeadGunner=0;
				enabledByAnimationSource="cargoDoors";
				memoryPointGunnerOptics="";
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos_cargo_r";
				memoryPointsGetInGunnerDir="pos_cargo_r_dir";
				gunnerName="Passenger (Right door)";
				proxyIndex=2;
				maxElev=15;
				minElev=-25;
				maxTurn=50;
				minTurn=-10;
				isPersonTurret=1;
				ejectDeadGunner=0;
				enabledByAnimationSource="cargoDoors";
				memoryPointGunnerOptics="";
			};
		};
		class textureSources
		{
			class standard
			{
				displayName="[TFV] Standard";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Pelican\data\PelicanExterior_standard_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorgreen
			{
				displayName="[TFV] Green";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Pelican\data\PelicanExterior_green_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colortan
			{
				displayName="[TFV] Tan";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Pelican\data\PelicanExterior_Tan_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorblack
			{
				displayName="[TFV] Black";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Pelican\data\PelicanExterior_black_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorsnow
			{
				displayName="[TFV] Snow";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Pelican\data\PelicanExterior_snow_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colormarine
			{
				displayName="[TFV] Marines";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Pelican\data\PelicanExterior_marine_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorinnie
			{
				displayName="[TFV] Innie";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Pelican\data\PelicanExterior_innie_CO.paa"
				};
				factions[]=
				{
					"OPTRE_Ins"
				};
			};
		};
		textureList[]=
		{
			"standard",
			1,
			"colorgreen",
			1,
			"colorblack",
			1,
			"colortan",
			1,
			"colorsnow",
			1
		};
	};
	class TFV_Pelican_armed_marine: TFV_Pelican_armed
	{
		scope=1;
		scopeCurator=2;
		author="Article 2 Studios";
		displayName="[TFV] D77H-TCI/AV Pelican (Marine)";
		crew="OPTRE_UNSC_Marine_Pilot";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Vehicles\Pelican\data\PelicanExterior_marine_CO.paa",
			""
		};
		textureList[]=
		{
			"colormarine",
			1
		};
	};
	class TFV_Pelican_armed_ins: TFV_Pelican_armed
	{
		author="Article 2 Studios";
		displayName="[TFV] D77H-TCI/AV Pelican (Ins)";
		side=0;
		faction="OPTRE_Ins";
		crew="OPTRE_Ins_URF_Crewman";
		vehicleClass="OPTRE_Ins_Air_class";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Vehicles\Pelican\data\PelicanExterior_innie_CO.paa",
			""
		};
		textureList[]=
		{
			"colorinnie",
			1
		};
	};
	class TFV_Pelican_unarmed_PD: TFV_Pelican_unarmed
	{
		author="Article 2 Studios";
		displayName="[TFV] D77H-TCI Pelican (Police)";
		side=2;
		crew="OPTRE_CPD_Pilot";
		vehicleClass="OPTRE_PD_Air_class";
		faction="OPTRE_PD";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Vehicles\Pelican\data\PelicanExterior_police_CO.paa",
			""
		};
		textureList[]=
		{
			"police",
			1
		};
	};
	class TFV_Pelican_armed_70mm_ins: TFV_Pelican_armed_70mm
	{
		displayName="[TFV] D77H-TCI/AV Pelican 70mm (Ins)";
		side=0;
		faction="OPTRE_Ins";
		crew="OPTRE_Ins_URF_Crewman";
		vehicleClass="OPTRE_Ins_Air_class";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Vehicles\Pelican\data\PelicanExterior_innie_CO.paa",
			""
		};
		textureList[]=
		{
			"colorinnie",
			1
		};
	};
	class TFV_Pelican_unarmed_CMA: TFV_Pelican_unarmed
	{
		displayName="[TFV] D77H-TCI Pelican [CMA]";
		author="Article 2 Studios";
		scope=2;
		scopeCurator=2;
		side=2;
		faction="OPTRE_CAA";
		crew="OPTRE_CMA_Army_Soldier_Airman";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"clan",
			"clan_text",
			"insignia",
			"attach_gun"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Vehicles\Pelican\data\PelicanExterior_black_CO.paa",
			""
		};
	};
	class TFV_Pelican_armed_CMA: TFV_Pelican_armed
	{
		scope=2;
		scopeCurator=2;
		side=2;
		faction="OPTRE_CAA";
		crew="OPTRE_CMA_Army_Soldier_Airman";
		author="Article 2 Studios";
		displayName="[TFV] D77H-TCI/AV Pelican [CMA]";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"clan",
			"clan_text",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Vehicles\Pelican\data\PelicanExterior_black_CO.paa",
			""
		};
	};
	class PlaneWreck;
	class TFV_Objects_Wreck_Pelican: PlaneWreck
	{
		author="Article 2 Studios";
		scope=2;
		scopeCurator=2;
		model="OPTRE_Vehicles\Pelican\pelican_wreck.p3d";
		icon="OPTRE_Vehicles\Pelican\Data\icon.paa";
		displayName="[TFV] D77H-TCI Pelican Wreck";
		typicalCargo[]={};
		vehicleClass="OPTRE_UNSC_Object_class";
		irTarget=0;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		transportSoldier=1;
		class Eventhandlers
		{
		};
	};
	class Wreck_base_F;
	class TFV_Objects_Wreck_Pelican_Static1: Wreck_base_F
	{
		author="Article 2 Studios";
		displayName="[TFV] D77H-TCI Pelican Wreck (Static 1)";
		icon="OPTRE_Vehicles\Pelican\Data\icon.paa";
		mapSize=25;
		model="OPTRE_Vehicles\Pelican\pelican_wreck_static1.p3d";
		vehicleClass="OPTRE_UNSC_Object_class";
		scope=2;
		scopeCurator=2;
	};
	class TFV_Objects_Wreck_Pelican_Static2: TFV_Objects_Wreck_Pelican_Static1
	{
		author="Article 2 Studios";
		displayName="[TFV] D77H-TCI Pelican Wreck (Static 2)";
		model="OPTRE_Vehicles\Pelican\pelican_wreck_static2.p3d";
	};
	class TFV_Pelican_unarmed_green: TFV_Pelican_F
	{
		displayName="[TFV] D77H-TCI Pelican (Green)";
		author="Article 2 Studios";
		scope=1;
		scopeCurator=1;
		side=1;
		vehicleClass="OPTRE_UNSC_Air_class";
		faction="OPTRE_UNSC";
		crew="OPTRE_UNSC_Airforce_Soldier_Airman";
		accuracy=1.5;
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		cost=900000;
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"clan",
			"clan_text",
			"insignia",
			"attach_gun"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Vehicles\Pelican\data\PelicanExterior_green_CO.paa",
			""
		};
	};
	class TFV_Pelican_unarmed_tan: TFV_Pelican_unarmed_green
	{
		displayName="[TFV] D77H-TCI Pelican (Tan)";
		author="Article 2 Studios";
		scope=1;
		scopeCurator=2;
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"clan",
			"clan_text",
			"insignia",
			"attach_gun"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Vehicles\Pelican\data\PelicanExterior_Tan_CO.paa",
			""
		};
	};
	class TFV_Pelican_unarmed_black: TFV_Pelican_unarmed_green
	{
		displayName="[TFV] D77H-TCI Pelican (Black)";
		author="Article 2 Studios";
		scope=1;
		scopeCurator=2;
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"clan",
			"clan_text",
			"insignia",
			"attach_gun"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Vehicles\Pelican\data\PelicanExterior_black_CO.paa",
			""
		};
	};
	class TFV_Pelican_armed_green: TFV_Pelican_armed
	{
		scope=1;
		scopeCurator=1;
		author="Article 2 Studios";
		displayName="[TFV] D77H-TCI/AV Pelican (Green)";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"clan",
			"clan_text",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Vehicles\Pelican\data\PelicanExterior_green_CO.paa",
			""
		};
	};
	class TFV_Pelican_armed_tan: TFV_Pelican_armed_green
	{
		scope=1;
		scopeCurator=2;
		author="Article 2 Studios";
		displayName="[TFV] D77H-TCI/AV Pelican (Tan)";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"clan",
			"clan_text",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Vehicles\Pelican\data\PelicanExterior_tan_CO.paa",
			""
		};
	};
	class TFV_Pelican_armed_black: TFV_Pelican_armed_green
	{
		scope=1;
		scopeCurator=2;
		author="Article 2 Studios";
		displayName="[TFV] D77H-TCI/AV Pelican (Black)";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"clan",
			"clan_text",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Vehicles\Pelican\data\PelicanExterior_black_CO.paa",
			""
		};
	};
};
