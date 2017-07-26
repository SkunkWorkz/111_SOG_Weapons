class CfgPatches
{
	class 111_WEAPONS
	{
			
		requiredAddons[] = {"A3_Weapons_F","A3_Weapons_F_Mark","A3_Anims_F","A3_Anims_F_Config_Sdr","A3_Weapons_F_Acc","A3_Weapons_F_beta","A3_Weapons_F_EBR","rhsusf_c_weapons","rhsusf_weapons2","kio_sr25"};
		requiredVersion = 0.1;
		units[] = {"111SOG_Rifle_Box"};
		weapons[] = {"srifle_LRR_F","111SOG_EBR_black_F","111SOG_EBR_DE_F","111SOG_EBR_GR_F","111SOG_MK1_Beowulf","111SOG_MK1_Beowulf_w","111SOG_MK1_Beowulf_od","111SOG_MK1_Beowulf_fde"};
		magazines[] = {"20rnd_Beowulf_magazine"};
		ammo[] = {"Beowulf_ball"};
	};
};


class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class ItemCore;
class InventoryMuzzleItem_Base_F;


class CfgWeapons

{
	class Launcher_Base_F; 
	class launch_RPG32_F: Launcher_Base_F {}; //RPG32
	class Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	
	class UGL_F;
	//Base Rifles
	class DMR_06_base_F: Rifle_Long_Base_F {};//M14
	class EBR_base_F: Rifle_Long_Base_F {};   //M14EBR
	class LRR_base_F: Rifle_Long_Base_F       //LRR
	{
		class WeaponSlotsInfo;
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_01",1.0,1,300};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_02",1.0,1,300};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_03",1.0,1,300};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_interior",1.0,1,300};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_trees",1.0,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_forest",1.0,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_meadows",1.0,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_houses",1.0,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
		};
	};

	//-----------------------------------------------M14--------------------------------------//
	class srifle_DMR_06_camo_F: DMR_06_base_F
	{
		scope = 0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_B","rhsusf_acc_rotex5_tan"};
				iconPosition[] = {0.0,0.43};
				iconScale = 0.2;
			};
		};
	};
	/*class KRS_M14_TAN: srifle_DMR_06_camo_F
	{
		author = "Krossin";
		scope = 2;
		displayName = "M14 (Tan)";
		picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_06\Data\UI\gear_DMR_06_olive_X_CA.paa";
		hiddenSelectionsTextures[] = {"\111_SOG_WEAPONS\Data\M14_Tan_co.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_06\Data\dmr_06_02_camo_co.paa"};
	};
	class KRS_M14_TAN_CAMO: srifle_DMR_06_camo_F
	{
		author = "Krossin";
		scope = 2;
		displayName = "M14 (Tan Camo)";
		picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_06\Data\UI\gear_DMR_06_olive_X_CA.paa";
		hiddenSelectionsTextures[] = {"\111_SOG_WEAPONS\Data\M14_Tan_Camo_co.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_06\Data\dmr_06_02_camo_co.paa"};
	};
	class KRS_M14_WOOD: srifle_DMR_06_camo_F
	{
		author = "Krossin";
		scope = 2;
		displayName = "M14 (Wood)";
		picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_06\Data\UI\gear_DMR_06_olive_X_CA.paa";
		hiddenSelectionsTextures[] = {"\111_SOG_WEAPONS\Data\M14_wood_co.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_06\Data\DMR_06_02_CO.paa"};
	};*/
	//------------------------------------------408----------------------------------------//
	class srifle_LRR_F: LRR_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_93mmg","muzzle_snds_93mmg_tan"};
				iconPosition[] = {0.0,0.43};
				iconScale = 0.2;
			};
		};
	};
	//-----------------------------------------EBR------------------------------------------//
	class srifle_EBR_F: EBR_base_F
	{
		scope = 0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_93mmg","muzzle_snds_93mmg_tan","muzzle_snds_H_MG","muzzle_snds_H_SW","muzzle_snds_L","rhs_acc_pbs1", "rhs_acc_dtk3", "rhs_acc_dtk1", "rhs_acc_dtk", "rhs_acc_dtk4long", "rhs_acc_dtk4screws", "rhs_acc_ak5"};
				iconPosition[] = {0.0,0.43};
				iconScale = 0.2;
			};
		};
        class GunParticles;
    };
	class 111SOG_EBR_black_F: srifle_EBR_F
	{
		author = "Shrike";
		baseWeapon = "111SOG_EBR_black_F";
		displayName = "Mk14 EBR 7.62 mm (Black)";
		scope = 2;
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\111_SOG_WEAPONS\data\ebr01_black_co.paa","\111_SOG_WEAPONS\data\ebr02_black_co.paa"};
		hiddenSelectionsMaterials[] = {"\111_SOG_WEAPONS\data\m14_ebr01.rvmat","\111_SOG_WEAPONS\data\m14_ebr02.rvmat"};
		magazines[] = {"rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m993_Mag","rhsusf_20Rnd_762x51_m62_Mag","20Rnd_762x51_Mag"};
	};
	class 111SOG_EBR_DE_F: srifle_EBR_F
	{
		author = "Shrike";
		baseWeapon = "111SOG_EBR_AOR1_F";
		displayName = "Mk14 EBR 7.62 mm (DE)";
		scope = 2;
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\111_SOG_WEAPONS\data\ebr01_AOR1_co.paa","\111_SOG_WEAPONS\data\ebr02_AOR1_co.paa"};
		hiddenSelectionsMaterials[] = {"\111_SOG_WEAPONS\data\m14_ebr01.rvmat","\111_SOG_WEAPONS\data\m14_ebr02.rvmat"};
		magazines[] = {"rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m993_Mag","rhsusf_20Rnd_762x51_m62_Mag","20Rnd_762x51_Mag"};
	};
	class 111SOG_EBR_GR_F: srifle_EBR_F
	{
		author = "Shrike";
		baseWeapon = "111SOG_EBR_AOR1_F";
		displayName = "Mk14 EBR 7.62 mm (Grey)";
		scope = 2;
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\111_SOG_WEAPONS\data\ebr01_gry_co.paa","\111_SOG_WEAPONS\data\ebr02_gry_co.paa"};
		hiddenSelectionsMaterials[] = {"\111_SOG_WEAPONS\data\m14_ebr01.rvmat","\111_SOG_WEAPONS\data\m14_ebr02.rvmat"};
		magazines[] = {"rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m993_Mag","rhsusf_20Rnd_762x51_m62_Mag","20Rnd_762x51_Mag"};
	};
	//------------------------------------------LOKI LAUNCHER-------------------------------------------------------------//
	class 111SOG_RPG32: launch_RPG32_F
	{
		author = "Loki";
		displayName = "RPG 42 (Black)";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"\111_SOG_WEAPONS\data\rpg_32_body_co_bl.paa","\a3\weapons_f\launchers\rpg32\data\rpg_32_optics_co.paa"};
		maxZeroing = 1500;  //changed from 600
		modelOptics = "\A3\Weapons_F\acc\reticle_RPG_F";
		magazines[] = {"RPG32_F","RPG32_HE_F"};
		modes[] = {"Single"};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Dry_RPG32",0.446684,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32",1,1,10};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Fly_RPG32",0.316228,1.5,900};
		canLock = 1;
		lockAcquire = 1;
		descriptionShort = "Rocket Launcher";
		
	};
	
	
	//-----------------------------50BEOWULF-MK11MOD-----------------------------//
	
	//--------------MK-1EMR Beowulf------------------------------//
	
	class srifle_DMR_03_F
	{
		class WeaponSlotsInfo
		{
			class MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_93mmg","muzzle_snds_93mmg_tan","muzzle_snds_H_MG","muzzle_snds_H_SW","muzzle_snds_L","rhs_acc_pbs1", "rhs_acc_dtk3", "rhs_acc_dtk1", "rhs_acc_dtk", "rhs_acc_dtk4long", "rhs_acc_dtk4screws", "rhs_acc_ak5"};
				iconPosition[] = {0.0,0.0};//.43
				iconScale = 0.2;
			};
		};
        class GunParticles;
    };
	
	class 111SOG_MK1_Beowulf: srifle_DMR_03_F
	{
		author = "Shrike & Dagger";
		scope = 2;
		recoil = "recoil_dmr_05";
		displayName = "111SOG EMR Beowulf (Black)";
		magazines[] = {"rhsusf_mag_10Rnd_STD_50BMG_M33","20rnd_Beowulf_magazine"};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\111_SOG_WEAPONS\data\DMR_03_01_black_CO.paa","\111_SOG_WEAPONS\data\DMR_03_02_black_CO.paa"};
	};
	
	class 111SOG_MK1_Beowulf_w: srifle_DMR_03_F
	{
		author = "Shrike & Dagger";
		scope = 2;
		recoil = "recoil_dmr_05";
		displayName = "111SOG EMR Beowulf (White)";
		magazines[] = {"rhsusf_mag_10Rnd_STD_50BMG_M33","20rnd_Beowulf_magazine"};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\111_SOG_WEAPONS\data\DMR_03_01_wht_CO.paa","\111_SOG_WEAPONS\data\DMR_03_02_wht_CO.paa"};
	};
	
	class 111SOG_MK1_Beowulf_od: srifle_DMR_03_F
	{
		author = "Shrike & Dagger";
		scope = 2;
		recoil = "recoil_dmr_05";
		displayName = "111SOG EMR Beowulf (OD)";
		magazines[] = {"rhsusf_mag_10Rnd_STD_50BMG_M33","20rnd_Beowulf_magazine"};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\111_SOG_WEAPONS\data\DMR_03_01_od_CO.paa","\111_SOG_WEAPONS\data\DMR_03_02_od_CO.paa"};
	};
	
	class 111SOG_MK1_Beowulf_fde: srifle_DMR_03_F
	{
		author = "Shrike & Dagger";
		scope = 2;
		recoil = "recoil_dmr_05";
		displayName = "111SOG EMR Beowulf (FDE)";
		magazines[] = {"rhsusf_mag_10Rnd_STD_50BMG_M33","20rnd_Beowulf_magazine"};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\111_SOG_WEAPONS\data\DMR_03_01_fde_CO.paa","\111_SOG_WEAPONS\data\DMR_03_02_fde_CO.paa"};
	};
	
	
	
	
	//--------------MK-11EC (sr25) Beowulf----------------------//
	
	

	
	
	
	

};






//----------------------------------------------NEW AMMO CLASS------------------------------//

class CfgAmmo
{
	class Default;
	class BulletCore;
	class BulletBase;
	class Beowulf_ball: BulletBase
	{
		hit = 42;
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 1.2;
		typicalSpeed = 700;
		cartridge = "FxCartridge_762";
		airFriction = -0.001;
		waterFriction = -0.3;
		caliber = 2.7;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale = 0.6;
		tracerStartTime = 0.0075;
		tracerEndTime = 5;
		visibleFire = 6;
		audibleFire = 9;
		class CamShakeExplode
		{
			power = "(8^0.5)";
			duration = "((round (8^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((8^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 8;
			duration = "((round (5^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};
};
class CfgMagazines
{
	class Default;
	class CA_Magazine;
	class 20rnd_Beowulf_magazine: CA_Magazine
	{
		scope = 2;
		displayName = "20Rnd Beowulf Magazine";
		picture = "\kio_sr25\Data\gear\gear_sr25_magazine_x_ca.paa";
		ammo = "Beowulf_ball";
		model = "\kio_sr25\magazine.p3d";
		count = 20;
		initSpeed = 600;
		tracersEvery = 0;
		lastRoundsTracer = 5;
		descriptionShort = "20-round detachable box magazine";
		mass = 30.00;
	};
};

//-------------------------------------------WEAPONS BOX---------------------------------//


class CfgVehicles
{
	class ReammoBox;
	class 111SOG_Rifle_Box: ReammoBox
	{
		mapSize = 1.81;
		author = "Shrike";
		_generalMacro = "Box_NATO_Wps_F";
		scope = 2;
		displayName = "111SOG Beo-Box";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		icon = "iconCrateWpns";
		transportMaxWeapons = 12;
		transportMaxMagazines = 64;
		class TransportMagazines
		{
			class _xx_20rnd_Beowulf_magazine
			{
				magazine = "20rnd_Beowulf_magazine";
				count = 100;
			};
		};
		class TransportWeapons
		{
			class _xx_111SOG_MK1_Beowulf
			{
				weapon = "111SOG EMR Beowulf (Black)";
				count = 10;
			};
			class _xx_srifle_EBR_F
			{
				weapon = "Mk14 EBR 7.62 mm (Grey)";
				count = 10;
			};
		};
		class TransportItems
		{
			class _xx_optic_ACO
			{
				name = "optic_ACO";
				count = 10;
			};
			class _xx_optic_ACO_grn
			{
				name = "optic_ACO_grn";
				count = 5;
			};
			class _xx_optic_Hamr
			{
				name = "optic_Hamr";
				count = 10;
			};
			class _xx_optic_Holosight
			{
				name = "optic_Holosight";
				count = 10;
			};
			class _xx_acc_flashlight
			{
				name = "acc_flashlight";
				count = 5;
			};
			class _xx_kio_muzzle_sr25S
			{
				name = "kio_muzzle_sr25S";
				count = 10;
			};
			class _xx_acc_pointer_IR
			{
				name = "acc_pointer_IR";
				count = 5;
			};
			class _xx_optic_DMS
			{
				name = "optic_DMS";
				count = 5;
			};
			class _xx_optic_NVS
			{
				name = "optic_NVS";
				count = 5;
			};
			class _xx_optic_NightStalker
			{
				name = "optic_NightStalker";
				count = 5;
			};
			class _xx_optic_tws
			{
				name = "optic_tws";
				count = 5;
			};
			class _xx_optic_Arco
			{
				name = "optic_Arco";
				count = 5;
			};
		};
	};
};

