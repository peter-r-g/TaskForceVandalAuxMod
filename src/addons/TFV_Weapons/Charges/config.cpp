class CfgPatches
{
	class TFV_Weapons_Charges
	{
		units[]=
		{
			"TFV_Placed_M168",
			"TFV_Placed_C7",
			"TFV_Placed_C12",
			"TFV_Placed_Mine",
			"TFV_Placed_M41_IED",
			"TFV_Placed_M41_IED_B"
		};
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
			"C12_Remote_Mag",
			"C7_Remote_Mag",
			"UNSCMine_Range_Mag",
			"M168_Remote_Mag",
			"M41_IED_Remote_Mag",
			"M41_IED_B_Remote_Mag"
		};
		ammo[]=
		{
			"C12_Remote_Ammo",
			"C7_Remote_Ammo",
			"M168_Remote_Ammo",
			"UNSC_Mine_Ammo",
			"M41_IED_Remote_Ammo",
			"M41_IED_B_Remote_Ammo"
		};
	};
};
class CfgVehicles
{
	class MineGeneric;
	class MineBase: MineGeneric
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=1;
		_generalMacro="MineBase";
		icon="iconExplosiveGP";
	};
	class TFV_Placed_C12: MineBase
	{
		DLC="OPTRE";
		author="Article 2 Studios";
		mapSize=0.43000001;
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\SatchelCharge_F.jpg";
		scope=2;
		scopeCurator=2;
		icon="iconExplosiveGP";
		ammo="C12_Remote_Ammo";
		model="\OPTRE_Weapons\charges\c12.p3d";
		displayName="[TFV] C12 Explosive";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Explosives";
	};
	class TFV_Placed_Mine: MineBase
	{
		DLC="OPTRE";
		author="Article 2 Studios";
		mapSize=0.43000001;
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\SatchelCharge_F.jpg";
		scope=2;
		scopeCurator=2;
		icon="iconExplosiveGP";
		ammo="UNSC_Mine_Ammo";
		model="\OPTRE_Weapons\charges\UNSCMine.p3d";
		displayName="[TFV] UNSC Land Mine";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Explosives";
	};
	class TFV_Placed_C7: MineBase
	{
		DLC="OPTRE";
		author="Article 2 Studios";
		mapSize=0.43000001;
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\SatchelCharge_F.jpg";
		scope=2;
		scopeCurator=2;
		icon="iconExplosiveGP";
		ammo="C7_Remote_Ammo";
		model="\OPTRE_Weapons\charges\c7.p3d";
		displayName="[TFV] C7 Explosive Foam";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Explosives";
	};
	class TFV_Placed_M168: MineBase
	{
		DLC="OPTRE";
		author="Article 2 Studios";
		mapSize=0.43000001;
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\SatchelCharge_F.jpg";
		scope=2;
		scopeCurator=2;
		icon="iconExplosiveGP";
		ammo="M168_Remote_Ammo";
		model="\OPTRE_Weapons\charges\m168.p3d";
		displayName="[TFV] M168 Demolition Charge";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Explosives";
	};
	class TFV_Placed_M41_IED: TFV_Placed_M168
	{
		DLC="OPTRE";
		author="Article 2 Studios";
		ammo="M41_IED_Remote_Ammo";
		model="\OPTRE_Weapons\charges\m41.p3d";
		displayName="[TFV] M41 IED";
	};
	class TFV_Placed_M41_IED_B: TFV_Placed_M41_IED
	{
		DLC="OPTRE";
		author="Article 2 Studios";
		ammo="M41_IED_B_Remote_Ammo";
		model="\OPTRE_Weapons\charges\m41_b.p3d";
		displayName="[TFV] M41 IED (Buried)";
	};
};
class CfgAmmo
{
	class SatchelCharge_Remote_Ammo;
	class ATMine_Range_Ammo;
	class C12_Remote_Ammo: SatchelCharge_Remote_Ammo
	{
		hit=5500;
		indirectHit=3500;
		indirectHitRange=8;
		defaultMagazine="C12_Remote_Mag";
		model="\OPTRE_Weapons\charges\c12.p3d";
		picture="\OPTRE_Weapons\charges\icons\c12.paa";
		explosive=1;
		explosionType="bomb";
		mineModelDisabled="\OPTRE_Weapons\charges\c12G.p3d";
		ExplosionEffects="MineNondirectionalExplosion";
		CraterEffects="MineNondirectionalCrater";
		SoundSetExplosion[]=
		{
			"BigIED_Exp_SoundSet",
			"BigIED_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		soundTrigger[]=
		{
			"A3\Sounds_F\weapons\mines\electron_trigger_1",
			0.56234133,
			1,
			50
		};
		soundActivation[]=
		{
			"A3\Sounds_F\weapons\mines\electron_activate_mine_1",
			0.56234133,
			1,
			50
		};
		soundDeactivation[]=
		{
			"A3\Sounds_F\weapons\mines\deactivate_mine_3a",
			0.56234133,
			1,
			50
		};
		whistleDist=10;
		mineInconspicuousness=3;
		mineTrigger="RemoteTrigger";
		triggerWhenDestroyed=1;
	};
	class C7_Remote_Ammo: SatchelCharge_Remote_Ammo
	{
		hit=2500;
		indirectHit=2500;
		indirectHitRange=0.5;
		defaultMagazine="C7_Remote_Mag";
		model="\OPTRE_Weapons\charges\C7.p3d";
		picture="\OPTRE_Weapons\charges\icons\c12.paa";
		explosive=1;
		explosionType="bomb";
		mineModelDisabled="\OPTRE_Weapons\charges\C7Can.p3d";
		ExplosionEffects="DirectionalMineExplosion";
		CraterEffects="";
		craterShape="\A3\weapons_f\empty.p3d";
		SoundSetExplosion[]=
		{
			"BigIED_Exp_SoundSet",
			"BigIED_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		soundTrigger[]=
		{
			"A3\Sounds_F\weapons\mines\electron_trigger_1",
			0.56234133,
			1,
			50
		};
		soundActivation[]=
		{
			"A3\Sounds_F\weapons\mines\electron_activate_mine_1",
			0.56234133,
			1,
			50
		};
		soundDeactivation[]=
		{
			"A3\Sounds_F\weapons\mines\deactivate_mine_3a",
			0.56234133,
			1,
			50
		};
		whistleDist=10;
		mineInconspicuousness=3;
		mineTrigger="RemoteTrigger";
		triggerWhenDestroyed=1;
	};
	class M168_Remote_Ammo: SatchelCharge_Remote_Ammo
	{
		hit=8500;
		indirectHit=4500;
		indirectHitRange=10;
		defaultMagazine="M168_Remote_Mag";
		model="\OPTRE_Weapons\charges\m168.p3d";
		picture="\OPTRE_Weapons\charges\icons\c12.paa";
		explosive=1;
		explosionType="bomb";
		mineModelDisabled="\OPTRE_Weapons\charges\m168g.p3d";
		ExplosionEffects="MineNondirectionalExplosion";
		CraterEffects="MineNondirectionalCrater";
		SoundSetExplosion[]=
		{
			"BigIED_Exp_SoundSet",
			"BigIED_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		soundTrigger[]=
		{
			"A3\Sounds_F\weapons\mines\electron_trigger_1",
			0.56234133,
			1,
			50
		};
		soundActivation[]=
		{
			"A3\Sounds_F\weapons\mines\electron_activate_mine_1",
			0.56234133,
			1,
			50
		};
		soundDeactivation[]=
		{
			"A3\Sounds_F\weapons\mines\deactivate_mine_3a",
			0.56234133,
			1,
			50
		};
		whistleDist=10;
		mineInconspicuousness=3;
		mineTrigger="RemoteTrigger";
		triggerWhenDestroyed=1;
	};
	class UNSC_Mine_Ammo: ATMine_Range_Ammo
	{
		hit=2000;
		indirectHit=2000;
		indirectHitRange=1.5;
		model="\OPTRE_Weapons\charges\UNSCmine.p3d";
		mineModelDisabled="\OPTRE_Weapons\charges\UNSCmine.p3d";
		defaultMagazine="UNSCMine_Range_Mag";
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\mines\AT_landmine_explosion_01",
			3.1622801,
			1,
			2000
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\mines\AT_landmine_explosion_02",
			3.1622801,
			1,
			2000
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.5,
			"soundHit2",
			0.5
		};
		explosionEffects="ATMineExplosion";
		CraterEffects="ATMineCrater";
		whistleDist=8;
		mineInconspicuousness=40;
		mineTrigger="RangeTrigger";
	};
	class M41_IED_Remote_Ammo: SatchelCharge_Remote_Ammo
	{
		hit=400;
		indirectHit=200;
		indirectHitRange=5;
		defaultMagazine="M41_IED_Remote_Mag";
		model="\OPTRE_Weapons\charges\m41.p3d";
		picture="\OPTRE_Weapons\rockets\icons\rocket.paa";
		explosive=1;
		explosionType="bomb";
		mineModelDisabled="\OPTRE_Weapons\charges\m41g.p3d";
		ExplosionEffects="MineNondirectionalExplosionSmall";
		CraterEffects="MineNondirectionalCraterSmall";
		soundHit[]=
		{
			"a3\sounds_f\arsenal\explosives\mines\explosion_claymore",
			3.1622777,
			1,
			1500
		};
		soundDeactivation[]=
		{
			"A3\Sounds_F\weapons\Mines\deactivate_mine_3a",
			1.4125376,
			1,
			20
		};
		soundTrigger[]=
		{
			"A3\Sounds_F\weapons\mines\electron_trigger_1",
			0.56234133,
			1,
			50
		};
		soundActivation[]=
		{
			"A3\Sounds_F\weapons\mines\electron_activate_mine_1",
			0.56234133,
			1,
			50
		};
		whistleDist=10;
		mineInconspicuousness=50;
		mineTrigger="RemoteTrigger";
		triggerWhenDestroyed=1;
	};
	class M41_IED_B_Remote_Ammo: M41_IED_Remote_Ammo
	{
		defaultMagazine="M41_IED_B_Remote_Mag";
		model="\OPTRE_Weapons\charges\m41_b.p3d";
		mineModelDisabled="\OPTRE_Weapons\charges\m41g.p3d";
	};
};
class CfgWeapons
{
	class Default;
	class Put: Default
	{
		muzzles[]+=
		{
			"C12_Muzzle",
			"UNSC_Mine_Muzzle",
			"C7_Muzzle",
			"M168_Muzzle",
			"M41_IED_Muzzle",
			"M41_IED_B_Muzzle"
		};
		class PutMuzzle: Default
		{
		};
		class C12_Muzzle: PutMuzzle
		{
			magazines[]=
			{
				"C12_Remote_Mag"
			};
		};
		class UNSC_Mine_Muzzle: PutMuzzle
		{
			magazines[]=
			{
				"UNSCMine_Range_Mag"
			};
		};
		class C7_Muzzle: PutMuzzle
		{
			magazines[]=
			{
				"C7_Remote_Mag"
			};
		};
		class M168_Muzzle: PutMuzzle
		{
			magazines[]=
			{
				"M168_Remote_Mag"
			};
		};
		class M41_IED_Muzzle: PutMuzzle
		{
			magazines[]=
			{
				"M41_IED_Remote_Mag"
			};
		};
		class M41_IED_B_Muzzle: PutMuzzle
		{
			magazines[]=
			{
				"M41_IED_B_Remote_Mag"
			};
		};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class SatchelCharge_Remote_Mag;
	class ATMine_Range_Mag;
	class C12_Remote_Mag: SatchelCharge_Remote_Mag
	{
		author="Article 2 Studios";
		scope=2;
		displayName="[TFV] C12 Demolition Charge";
		displayNameShort="C12 Demo Charge";
		descriptionShort="Compact explosive charge";
		descriptionUse="Use: Set Charge";
		type="2* 256";
		allowedSlots[]={901,701};
		ammo="C12_Remote_Ammo";
		model="\OPTRE_Weapons\charges\c12G.p3d";
		picture="\OPTRE_Weapons\charges\icons\c12.paa";
		mass=90;
		count=1;
		maxLeadSpeed=0;
		nameSoundWeapon="satchelcharge";
		nameSound="satchelcharge";
		weaponPoolAvailable=1;
		useActionTitle="Put %1 (%2 left)";
		sound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			10
		};
	};
	class C7_Remote_Mag: SatchelCharge_Remote_Mag
	{
		author="Article 2 Studios";
		scope=2;
		displayName="[TFV] C-7 Explosive Foam";
		displayNameShort="C7 Explosive Foam";
		descriptionShort="Compact explosive Foam";
		descriptionUse="Use: Set Charge";
		type="2* 256";
		allowedSlots[]={901,701};
		ammo="C7_Remote_Ammo";
		model="\OPTRE_Weapons\charges\C7Can.p3d";
		picture="\OPTRE_Weapons\charges\icons\c7.paa";
		mass=40;
		count=1;
		maxLeadSpeed=0;
		nameSoundWeapon="satchelcharge";
		nameSound="satchelcharge";
		weaponPoolAvailable=1;
		useActionTitle="Put %1 (%2 left)";
		sound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			10
		};
	};
	class UNSCMine_Range_Mag: ATMine_Range_Mag
	{
		author="Article 2 Studios";
		scope=2;
		mass=60;
		displayName="[TFV] M154 AT Mine";
		descriptionUse="Use mine";
		picture="\OPTRE_Weapons\charges\icons\mine.paa";
		model="\OPTRE_Weapons\charges\UNSCmine.p3d";
		useAction=1;
		useActionTitle="Put %1 (%2 left)";
		type="2* 256";
		allowedSlots[]={901,701};
		value=5;
		ammo="UNSC_Mine_Ammo";
		nameSoundWeapon="mine";
		nameSound="mine";
		count=1;
		initSpeed=0;
		maxLeadSpeed=0;
		descriptionShort="BIP BAP BOOM!";
		weaponPoolAvailable=1;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			10
		};
	};
	class M168_Remote_Mag: SatchelCharge_Remote_Mag
	{
		author="Article 2 Studios";
		scope=2;
		displayName="[TFV] M168 Demolition Pack";
		displayNameShort="M168 Demo Charge";
		descriptionShort="Compact explosive block";
		descriptionUse="Use: Set Charge";
		type="2* 256";
		allowedSlots[]={901,701};
		ammo="M168_Remote_Ammo";
		model="\OPTRE_Weapons\charges\m168g.p3d";
		picture="\OPTRE_Weapons\charges\icons\m168.paa";
		mass=150;
		count=1;
		maxLeadSpeed=0;
		nameSoundWeapon="satchelcharge";
		nameSound="satchelcharge";
		weaponPoolAvailable=1;
		useActionTitle="Put %1 (%2 left)";
		sound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			10
		};
	};
	class M41_IED_Remote_Mag: SatchelCharge_Remote_Mag
	{
		author="Article 2 Studios";
		scope=2;
		displayName="[TFV] M41 IED";
		displayNameShort="M41 IED";
		descriptionShort="Improvised Explosive Device";
		descriptionUse="Use: Set Charge";
		type="2* 256";
		allowedSlots[]={901,701};
		ammo="M41_IED_Remote_Ammo";
		model="\OPTRE_Weapons\charges\m41.p3d";
		picture="\OPTRE_Weapons\rockets\icons\rocket.paa";
		mass=40;
		count=1;
		maxLeadSpeed=0;
		nameSoundWeapon="satchelcharge";
		nameSound="satchelcharge";
		weaponPoolAvailable=1;
		useActionTitle="Put %1 (%2 left)";
		sound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			10
		};
	};
	class M41_IED_B_Remote_Mag: M41_IED_Remote_Mag
	{
		author="Article 2 Studios";
		ammo="M41_IED_B_Remote_Ammo";
		displayName="[TFV] M41 IED (Buried)";
		displayNameShort="M41 IED (Buried)";
		model="\OPTRE_Weapons\charges\m41_b.p3d";
	};
};
