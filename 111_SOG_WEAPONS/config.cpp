class CfgPatches
{
	class 111_WEAPONS
	{
			
		requiredAddons[] = {"A3_Weapons_F","A3_Weapons_F_Mark","A3_Anims_F","A3_Anims_F_Config_Sdr","A3_Weapons_F_Acc","A3_Weapons_F_beta","A3_Weapons_F_EBR","rhsusf_c_weapons","rhsusf_weapons2","A3_UI_F"};
		requiredVersion = 0.1;
		units[] = {"111SOG_Rifle_Box"};
		weapons[] = {"111SOG_KRS_M14_BLK","111SOG_KRS_M14_TAN","111SOG_KRS_M14_ARCTIC","111SOG_KRS_M14_WOOD","srifle_LRR_F","111SOG_EBR_black_F","111SOG_EBR_DE_F","111SOG_EBR_GR_F","111SOG_MK1_Beowulf","111SOG_MK1_Beowulf_w","111SOG_MK1_Beowulf_od","111SOG_MK1_Beowulf_fde","111SOG_RPG32_wh","111SOG_RPG32_bk"};
		magazines[] = {"20rnd_Beowulf_magazine"};
		ammo[] = {"Beowulf_ball"};
	};
};


//-------------------------------------ADDING EVENTHANDLERS---------------------------------//

/*class Extended_PostInit_EventHandlers
{
	class tmr_rpg42
	{
		clientInit = "call compile preProcessFileLineNumbers '\tmr_rpg42\init.sqf'";
	};
};
class Extended_FiredBIS_EventHandlers
{
	class CAManBase
	{
		class tmr_rpg42
		{
			clientFiredBIS = "_this call tmr_rpg42_fnc_rpg42_firedEH";
		};
	};
};*/
class TMR_RPG42SmokeEffects
{
	class LightExpSmall
	{
		simulation = "light";
		type = "ExploLight";
		position[] = {0,1.3,0};
		intensity = 0.0005;
		interval = 1;
		lifeTime = 0.4;
	};
	class SmokeCloud
	{
		simulation = "particles";
		type = "TMR_RPG42SmokeCloudBigLight";
		position[] = {0,0.6,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1.1;
	};
	class SmokeCloudLinger
	{
		simulation = "particles";
		type = "TMR_RPG42SmokeCloudBigLightSlow";
		position[] = {0,0.6,0};
		intensity = 1;
		interval = 1;
		lifeTime = 40;
	};
};
class TMR_RPG42ThermobaricExplosionEffects
{
	class ShardsBigBurn
	{
		simulation = "particles";
		type = "ObjectDestructionShardsBurning";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class LightExpBig
	{
		simulation = "light";
		type = "ExploLight";
		position[] = {0,1.7,0};
		intensity = 0.0011;
		interval = 1;
		lifeTime = 0.6;
	};
	class Explosion1Big
	{
		simulation = "particles";
		type = "VehExplosionParticles";
		position[] = {0,0,0};
		intensity = 2;
		interval = 1;
		lifeTime = 0.2;
	};
	class Explosion2Big
	{
		simulation = "particles";
		type = "TMR_RPG42ThermobaricFireBallBright";
		position[] = {0,0,0};
		intensity = 23;
		interval = 1;
		lifeTime = 0.6;
	};
	class Smoke1Big
	{
		simulation = "particles";
		type = "VehExpSmoke";
		position[] = {0,0.3,0};
		intensity = 2;
		interval = 1;
		lifeTime = 1.5;
	};
	class SmallSmoke1Big
	{
		simulation = "particles";
		type = "VehExpSmoke2";
		position[] = {0,0,0};
		intensity = 2;
		interval = 1;
		lifeTime = 1.1;
	};
	class SmokeCloud
	{
		simulation = "particles";
		type = "TMR_RPG42ThermobaricCloudBigDark";
		position[] = {0,0,0};
		intensity = 3;
		interval = 1;
		lifeTime = 1;
	};
};

class FIR_WPExplosion
{
	class LightExp 
	{
		simulation = "light";
		type = "ExploLight";
		position[] = {
				0, 0, 0
		};
		intensity = 0.001000;
		interval = 1;
		lifeTime = 1;
	};

	class Explosion1 
	{
		simulation = "particles";
		type = "FIR_WPCloud";
		position[] = {
				0, 0, 0
		};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};

	class Trails 
	{
		simulation = "particles";
		type = "WPTrails";
		position[] = {
				0, 0, 0
		};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class FireDamage1 
	{
		simulation = "particles";
		type = "FIR_FireDamage1";
	};	
};


class CfgCloudlets
{
	class Default;
	class FireBallBright;
	class CloudBigDark;
	class TMR_RPG42ThermobaricCloudBigDark: CloudBigDark
	{
		interval = 0.003;
		circleRadius = 2.2;
		circleVelocity[] = {0,0.3,0};
		timerPeriod = 1;
		lifeTime = 11;
		moveVelocity[] = {1.3,1.3,1.3};
		rotationVelocity = 0;
		weight = 1.4;
		volume = 1;
		rubbing = 0.21;
		size[] = {5,10,11,13};
		color[] = {{0.49,0.49,0.49,0.45},{0.62,0.62,0.62,0.3},{0.62,0.62,0.62,0.15},{0.65,0.65,0.65,0.01}};
		animationSpeed[] = {0.5,0.3,0.25,0.2,0.18};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.05;
		lifeTimeVar = 3;
		positionVar[] = {5.2,5.6,5.2};
		MoveVelocityVar[] = {1.5,1.5,1.5};
		rotationVelocityVar = 10;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class TMR_RPG42ThermobaricFireballBright: FireBallBright
	{
		interval = "0.4 * interval";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		timerPeriod = 1;
		lifeTime = 0.21;
		moveVelocity[] = {3,3.1,3};
		rotationVelocity = 0;
		size[] = {"0.0125 * intensity + 1","0.0125 * intensity + 5","0.0125 * intensity + 7","0.0125 * intensity + 8","0.0125 * intensity + 9"};
		animationSpeed[] = {1.3};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.02;
		positionVar[] = {2.7,2.7,2.7};
		MoveVelocityVar[] = {2,2,2};
		rotationVelocityVar = 0;
		sizeVar = 0.6;
		colorVar[] = {0,0,0,2};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class TMR_RPG42SmokeCloudBigLight: Default
	{
		interval = "0.4 * interval";
		circleRadius = 3.3;
		circleVelocity[] = {0,0.03,0};
		angleVar = 1;
		animationName = "";
		timerPeriod = 1;
		lifeTime = 70;
		moveVelocity[] = {0.05,0.085,0.05};
		rotationVelocity = 0;
		weight = 0.052;
		volume = 0.04;
		rubbing = 0.025;
		size[] = {"0.0125 * intensity + 7","0.0125 * intensity + 13","0.0125 * intensity + 14","0.0125 * intensity + 16"};
		color[] = {{0.8,0.8,0.8,0.8},{0.9,0.9,0.9,0.8},{0.95,0.95,0.95,0.75},{0.97,0.97,0.97,0.65},{0.97,0.97,0.97,0.6},{0.98,0.98,0.98,0.6},{1,1,1,0}};
		animationSpeed[] = {1.5,0.5,0.3,0.25,0.25};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 4;
		positionVar[] = {5,12,5};
		MoveVelocityVar[] = {0.05,0.05,0.05};
		rotationVelocityVar = 20;
		sizeVar = 0.7;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class TMR_RPG42SmokeCloudBigLightSlow: TMR_RPG42SmokeCloudBigLight
	{
		circleRadius = 2.9;
		interval = 0.8;
		positionVar[] = {4,8,4};
	};
	class FIR_WPCloud : Default
	{
		blockAIVisibility = true; 		
		interval = 0.060000;
		circleRadius = 0;
		circleVelocity[] = {
				0, 0, 0
		};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 12;
		moveVelocity[] = {
				0, 0, 0
		};
		rotationVelocity = 0;
		weight = 10;
		volume = 7.900000;
		rubbing = 0.100000;
		size[] = {
				5, 10, 13, 16, 18, 20, 21, 22
		};
		color[] = {
				{1, 1, 1, 1}, {1, 1, 1, 0}
		};
		animationSpeed[] = {
				1000
		};
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 4;
		positionVar[] = {
				4, 3, 4
		};
		MoveVelocityVar[] = {
				0.200000, 0.200000, 0.200000
		};
		rotationVelocityVar = 20;
		sizeVar = 0.300000;
		colorVar[] = {
				0, 0, 0, 0
		};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
			
		//--- fire damage related parameters (optional)
		damageType="Fire";                       //damage type, only available option is "Fire" so far
		coreIntensity = 4.25;                    //damage coeficient in the center of fire
		coreDistance = 8.0;                      //how far can unit get damage
		damageTime = 0.1;                        //how often is unit getting damage 		
	};
	class FIR_FireDamage1 : Default
	{
		animationSpeedCoef = 1;
		colorCoef[] = {
				1, 1, 1
		};
		sizeCoef = 1;
		position[] = {
				0, 0, 0
		};
		interval = 100;
		circleRadius = 0;
		circleVelocity[] = {
				0, 0, 0
		};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 1;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 12.000000;
		moveVelocity[] = {
				0, 0, 0
		};
		rotationVelocity = 0;
		weight = 1;
		volume = 0.104000;
		rubbing = 0;
		size[] = {
				0.00010000
		};
		color[] = {
				{1, 1, 1, 0}
		};
		animationSpeed[] = {
				0
		};
		randomDirectionPeriod = 0.100000;
		randomDirectionIntensity = 0.100000;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		lifeTimeVar = 0;
		positionVar[] = {
				0, 0, 0
		};
		MoveVelocityVar[] = {
				0, 0, 0
		};
		rotationVelocityVar = 1;
		sizeVar = 0;
		colorVar[] = {
				0, 0, 0, 0.000000
		};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		coreIntensity = 4.250000;
		coreDistance = 20.000000;
		damageTime = 2.100000;
		constantDistance = 10.000000;
		damageType = "Fire";
		//coreIntensity = 3;  //damage coeficient in the center of fire
		//coreDistance = 19.0;     //how far can unit get damage
		//damageTime = 4;   
	};
};



//------------------------------------------------------|||WEAPONS|||---------------------------------


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
	class GrenadeLauncher;
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
	
	class 111SOG_KRS_M14_BLK: srifle_DMR_06_camo_F
	{
		author = "Krossin";
		scope = 2;
		displayName = "111SOG M14 (BLK)";
		picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_06\Data\UI\gear_DMR_06_olive_X_CA.paa";
		hiddenSelectionsTextures[] = {"\111_SOG_WEAPONS\Data\dmr_blk_co.paa","\111_SOG_WEAPONS\Data\111_dmr_06_02_co.paa"};
	};
	class 111SOG_KRS_M14_TAN: srifle_DMR_06_camo_F
	{
		author = "Krossin";
		scope = 2;
		displayName = "111SOG M14 (Desert)";
		picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_06\Data\UI\gear_DMR_06_olive_X_CA.paa";
		hiddenSelectionsTextures[] = {"\111_SOG_WEAPONS\Data\dmr_desert_co.paa","\111_SOG_WEAPONS\Data\111_dmr_06_02_co.paa"};
	};
	class 111SOG_KRS_M14_ARCTIC: srifle_DMR_06_camo_F
	{
		author = "Krossin";
		scope = 2;
		displayName = "111SOG M14 (Arctic)";
		picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_06\Data\UI\gear_DMR_06_olive_X_CA.paa";
		hiddenSelectionsTextures[] = {"\111_SOG_WEAPONS\Data\dmr_arctic_co.paa","\111_SOG_WEAPONS\Data\111_dmr_06_02_co.paa"};
	};
	class 111SOG_KRS_M14_WOOD: srifle_DMR_06_camo_F
	{
		author = "Krossin";
		scope = 2;
		displayName = "111SOG M14 (Wood)";
		picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_06\Data\UI\gear_DMR_06_olive_X_CA.paa";
		hiddenSelectionsTextures[] = {"\111_SOG_WEAPONS\Data\dmr_wood_co.paa","\111_SOG_WEAPONS\Data\111_dmr_06_02_co.paa"};
	};
	
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
		displayName = "111SOG Mk14 EBR 7.62 mm (Black)";
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
		displayName = "111SOG Mk14 EBR 7.62 mm (DE)";
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
		displayName = "111SOG Mk14 EBR 7.62 mm (Grey)";
		scope = 2;
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\111_SOG_WEAPONS\data\ebr01_gry_co.paa","\111_SOG_WEAPONS\data\ebr02_gry_co.paa"};
		hiddenSelectionsMaterials[] = {"\111_SOG_WEAPONS\data\m14_ebr01.rvmat","\111_SOG_WEAPONS\data\m14_ebr02.rvmat"};
		magazines[] = {"rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m993_Mag","rhsusf_20Rnd_762x51_m62_Mag","20Rnd_762x51_Mag"};
	};
	//---------------------------------------LOKI LAUNCHER-------------------------------------------------------------//
	class 111SOG_RPG32_wh: launch_RPG32_F
	{
		author = "Loki";
		displayName = "111SOG RPG 42 (White)";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"\111_SOG_WEAPONS\data\rpg_32_body_co_wh.paa","\a3\weapons_f\launchers\rpg32\data\rpg_32_optics_co.paa"};
		maxZeroing = 1500;  //changed from 600
		modelOptics = "\A3\Weapons_F\acc\reticle_RPG_F";
		magazines[] = {"RPG32_F","RPG32_HE_F","TMR_RPG32_Smoke_F","TMR_RPG32_TB_F","TMR_RPG32_WP"};
		modes[] = {"Single"};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Dry_RPG32",0.446684,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32",1,1,10};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Fly_RPG32",0.316228,1.5,900};
		canLock = 1;
		lockAcquire = 1;
		descriptionShort = "Rocket Launcher";
		
	};
	
	class 111SOG_RPG32_bk: launch_RPG32_F
	{
		author = "Loki";
		displayName = "111SOG RPG 42 (Black)";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"\111_SOG_WEAPONS\data\rpg_32_body_co_bk.paa","\a3\weapons_f\launchers\rpg32\data\rpg_32_optics_co.paa"};
		maxZeroing = 1500;  //changed from 600
		modelOptics = "\A3\Weapons_F\acc\reticle_RPG_F";
		magazines[] = {"RPG32_F","RPG32_HE_F","TMR_RPG32_Smoke_F","TMR_RPG32_TB_F","TMR_RPG32_Cluster","TMR_RPG32_WP"};
		modes[] = {"Single"};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Dry_RPG32",0.446684,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32",1,1,10};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Fly_RPG32",0.316228,1.5,900};
		canLock = 1;
		lockAcquire = 1;
		descriptionShort = "Rocket Launcher";
		
	};
	
	

	
//-----------------------------------MK-1EMR Beowulf------------------------------//
	
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
	
	
	
	

	
	

	
	
	
	

};






//----------------------------------------------NEW AMMO CLASS------------------------------//

class CfgAmmo
{
	class Default;
	
	class GrenadeCore;
	class ShellBase;
	class SubmunitionBullet;
	
	class MissileCore;
	class MissileBase;
	class RocketBase;
	
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



class SubmunitionGrenade: SubmunitionBullet
	{
		explosive=1;
		model="\A3\weapons_f\ammo\flare_red";
		submunitionConeAngle=0;
		submunitionCount=1;
		submunitionAmmo="GrenadeCore";
		allowAgainstInfantry=1;
		class HitEffects
		{
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			hitFoliage="ImpactLeaves";
			hitGlass="ImpactGlass";
			hitGlassArmored="ImpactGlassThin";
			hitWood="ImpactWood";
			hitMetal="ImpactMetal";
			hitMetalPlate="ImpactMetal";
			hitBuilding="ImpactPlaster";
			hitPlastic="ImpactPlastic";
			hitRubber="ImpactRubber";
			hitConcrete="ImpactConcrete";
			hitMan="ImpactEffectsBlood";
			hitGroundSoft="ImpactEffectsSmall";
			hitGroundHard="ImpactEffectsHardGround";
			hitWater="ImpactEffectsWater";
			hitVirtual="ImpactMetal";
		};
	};

	class 111SOG_cluster_AP: BulletCore
	{

		model="\A3\weapons_f\ammo\flare_red";
		hit=10;
		indirectHit=5;
		indirectHitRange=7;
		timeToLive=20;
		initTime=0;
		explosive=1;
		//explosionTime=.005;
		typicalspeed=100;
		//fuseDistance=.01;
		EffectFly="";
		explosionSoundEffect="DefaultExplosion";
		CraterEffects="GrenadeCrater";
		CraterWaterEffects="ImpactEffectsWaterExplosion";
		explosionEffects="GrenadeExplosion";
		allowAgainstInfantry=1;
		aiAmmoUsageFlags = 64;
		soundHit[]=
		{
			"\111_SOG_WEAPONS\sounds\Cluster_1",
			10,
			1.1,
			1500
		};
		//EffectFly="ArtilleryTrails";
	};

	class Cluster_Grenade: SubmunitionGrenade
	{
		author="Shrike88";
		scope=2;
		displayName="111SOG Submunition Gernade";
		picture="\A3\Weapons_F\Data\UI\gear_mine_AP_tripwire_CA.paa";
		model="\A3\Weapons_F\explosives\mine_AP_tripwire_i";
		//simulation="shotShell";
		hit=10;
		indirectHit=10;
		indirectHitRange=16;
		explosive= 1;
		timeToLive = 25;
		fuseDistance=.01;
		allowAgainstInfantry=1;
		typicalspeed=200;
		aiAmmoUsageFlags = 64;
		CraterEffects="GrenadeCrater";
		CraterWaterEffects="ImpactEffectsWaterExplosion";
		explosionEffects="GrenadeExplosion";
		soundHit[]=
		{
			"\111_SOG_WEAPONS\sounds\C_sep_1",
			8.2589254,
			.09,
			1000
		};
		submunitionAmmo="111SOG_cluster_AP";
		submunitionConeType[]=
		{
			"random",
			10
		};
		submunitionConeAngle=7;
		cost=200;
		airFriction=0;


	};
	
	

	
	/*class M_RPG32_F: MissileBase
	{
		irlock = 0;
		canLock = 0;
		fuseDistance = 7;
		timetolive = 20;
		hit = 550;
		indirecthit = 29;
		indirecthitrange = 7;
		model = "\A3\weapons_f\launchers\RPG32\pg32v_rocket.p3d";
	};*/
	class R_PG32V_F: RocketBase
	{
		hit = 550;
		indirecthit = 29;
		indirecthitrange = 7;
		allowAgainstInfantry = 0;
	};
	class R_TBG32V_F: R_PG32V_F
	{
		hit = 350;
		indirectHit = 60;
		indirectHitRange = 20;
		model = "\A3\weapons_f\launchers\RPG32\tbg32v_rocket.p3d";
		CraterEffects = "ATMissileCrater";
		explosioneffects = "TMR_RPG42ThermobaricExplosionEffects";
		allowAgainstInfantry = 1;
	};
	class TMR_R_DG32V_F: R_PG32V_F
	{
		hit = 40;
		indirecthit = 18;
		indirecthitrange = 5;
		explosioneffects = "TMR_RPG42SmokeEffects";
		allowAgainstInfantry = 1;
	};
	
	class FIR_Hydra_WP_Rocket : R_PG32V_F//Rocketbase//MissileBase
	{
		cost = 500;
		hit = 190;
		indirectHit = 50;
		indirectHitRange = 17;
		manualControl = 0;
		maxControlRange = 0;
		airLock = 0;
		irLock = 0;
		laserLock = 0;
		nvLock = 0;
		weaponLockSystem = 0;
		cmimmunity = 1;
		fuseDistance = 50;
		timeToLive = 60;
		explosioneffects = "FIR_WPExplosion";
		model = "\A3\weapons_f\launchers\RPG32\pg32v_rocket.p3d";
		FIR_AWS_WP = 1;
		whistleDist = 30;
		class CamShakeExplode
		{
			power = 16;
			duration = 1.8;
			frequency = 20;
			distance = 191.554;
		};
		class CamShakeHit
		{
			power = 80;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.9907;
			duration = 1.8;
			frequency = 20;
			distance = 71.5542;
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};


};


	
//-------------------------------------------------||MAGAZINES||--------------------------------
	
	
class CfgMagazines
{
	class Default;
	class CA_Magazine;
	class CA_LauncherMagazine;
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
		mass = 24.00;
	};
	
	
	
	class RPG32_F: CA_LauncherMagazine
	{
		ammo = "R_PG32V_F";
		mass = 50;
		displayname = "PG-42V HEAT Rocket";
		displaynameshort = "HEAT";
		descriptionshort = "Type: 105mm high explosive anti-tank rocket<br />Rounds: 1<br />Used in: RPG-42";
	};
	class RPG32_HE_F: RPG32_F
	{
		displayname = "OG-42V HE Rocket";
		displaynameshort = "HE";
		descriptionshort = "Type: 105mm high explosive anti-personnel rocket<br />Rounds: 1<br />Used in: RPG-42";
	};
	class TMR_RPG32_TB_F: RPG32_F
	{
		ammo = "R_TBG32V_F";
		displayname = "TBG-42V Thermobaric Rocket";
		displaynameshort = "Thermobaric";
		descriptionshort = "Type: 105mm thermobaric anti-personnel rocket<br />Rounds: 1<br />Used in: RPG-42";
	};
	class TMR_RPG32_Smoke_F: RPG32_F
	{
		ammo = "TMR_R_DG32V_F";
		displayname = "DG-42V Smoke Rocket";
		displaynameshort = "Smoke";
		descriptionshort = "Type: 105mm smoke/marker rocket<br />Used in: RPG-42";
	};
	class TMR_RPG32_Cluster: RPG32_F
	{
		ammo = "Cluster_Grenade";
		displayname = "DG-42SV Submunition Rocket";
		displaynameshort = "Cluster";
		descriptionshort = "Type: 105mm Cluster/submunition rocket<br />Used in: RPG-42";
	};
	
	class TMR_RPG32_WP: RPG32_F
	{
		scope = 2;
		displayName = "DG-42WP White Phosphorus Rocket";
		displayNameShort = "White Phosphorus";
		ammo = "FIR_Hydra_WP_Rocket";
		count = 1;
		//maxLeadSpeed = 300;
		mass = 30;
			
	};
	
	
	class Grenade_cluster: CA_Magazine
	{
		mass=10;
		scope=2;
		value=1;
		displayName="111SOG Submunition Grenade";
		picture="\A3\Weapons_F\Data\UI\gear_mine_AP_tripwire_CA.paa";
		model="\A3\Weapons_F\explosives\mine_AP_tripwire_i";
		type=256;
		ammo="Cluster_Grenade";
		count=1;
		initSpeed=70;
		//nameSoundWeapon="satchelcharge";
		nameSound="handgrenade";
		maxLeadSpeed=140;
		allowAgainstInfantry=1;
		sound[]=
		{
			"A3\Sounds_F\weapons\mines\electron_trigger_1",
			0.56234133,
			1,
			50
		};
		descriptionShort="Cluster Grenade for clearing mines or infantry";
		displayNameShort="M124Grd";
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
				weapon = "111SOG_MK1_Beowulf";
				count = 10;
			};
			class _xx_111SOG_EBR_GR_F
			{
				weapon = "111SOG_EBR_GR_F";
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
			class _xx_Grenade_cluster
			{
				magazine="Grenade_cluster";
				count=5;
			};
		};
	};
};

