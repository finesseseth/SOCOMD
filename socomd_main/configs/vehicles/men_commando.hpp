////////////////////////////////////////////////////////////////////////////////
//COMMON DEFINES
 
#define CMD_UNIT_COMMON_AMMO 		ITEM04("RH_12Rnd_45cal_usp"), \
									ITEM02("SmokeShell"), \
									ITEM02("SmokeShellGreen"), \
									ITEM02("HandGrenade"), \
									ITEM02("ACE_M84"), \
									ITEM01("B_IR_Grenade")

#define CMD_UNIT_PILOT_AMMO			ITEM04("RH_12Rnd_45cal_usp"), \
									ITEM02("SmokeShell"), \
									ITEM02("SmokeShellGreen"), \
									ITEM01("B_IR_Grenade")

#define CMD_UNIT_COMMON_WEAPONS 	ITEM01("RH_usp"), \
									ITEM01("Throw"), \
									ITEM01("Put")
 
#define CMD_UNIT_COMMON_LINKEDITEMS	ITEM01("ItemMap"), \
									ITEM01("ItemCompass"), \
									ITEM01("ItemWatch")
 
#define CMD_UNIT_COMMON_ITEMS 		ITEM01("ACRE_PRC343"), \
									ITEM01("ItemcTabHCam"), \
									ITEM01("ACE_IR_Strobe_Item"), \
									ITEM01("ACE_Flashlight_KSF1"), \
									ITEM01("murshun_cigs_lighter"), \
									ITEM01("ACE_NVG_Gen4"), \
									ITEM04("ACE_CableTie"), \
									ITEM01("ACE_Earplugs"), \
									ITEM01("ACE_MapTools")

#define CMD_UNIT_PILOT_ITEMS 		ITEM01("ACRE_PRC343"), \
									ITEM01("ItemcTabHCam"), \
									ITEM01("ACE_IR_Strobe_Item"), \
									ITEM01("ACE_Flashlight_KSF1"), \
									ITEM01("murshun_cigs_lighter"), \
									ITEM04("ACE_CableTie"), \
									ITEM01("ACE_Earplugs"), \
									ITEM01("ACE_MapTools")
						
#define CMD_UNIT_COMMON_MEDS 		ITEM06("ACE_fieldDressing"), \
									ITEM06("ACE_quikclot"), \
									ITEM06("ACE_elasticBandage"), \
									ITEM06("ACE_packingBandage"), \
									ITEM02("ACE_morphine"), \
									ITEM02("ACE_epinephrine"), \
									ITEM01("ACE_tourniquet")
 								
#define CMD_UNIT_MEDIC_MEDS 		ITEM18("ACE_fieldDressing"), \
									ITEM18("ACE_quikclot"), \
									ITEM18("ACE_elasticBandage"), \
									ITEM18("ACE_packingBandage"), \
									ITEM08("ACE_morphine"), \
									ITEM04("ACE_epinephrine"), \
									ITEM04("ACE_tourniquet"), \
									ITEM08("ACE_salineIV_500"), \
									ITEM02("ACE_bodyBag")
 								
////////////////////////////////////////////////////////////////////////////////
// AMMO DEFINES
 
#define CMD_UNIT_AMMO_RIFLEMAN 		ITEM07("SMA_30Rnd_556x45_M855A1"), \
									ITEM02("SMA_30Rnd_556x45_M855A1_Tracer")
 
#define CMD_UNIT_AMMO_UNDERSLUNG 	ITEM05("1Rnd_HE_Grenade_shell"), \
									ITEM02("1Rnd_SmokeRed_Grenade_shell"), \
									ITEM02("ACE_HuntIR_M203")
 
#define CMD_UNIT_AMMO_MARKSMAN 		ITEM09("SMA_20Rnd_762x51mm_M80A1_EPR")

#define CMD_UNIT_AMMO_GUNNER		ITEM04("SMA_150Rnd_762_M80A1")
 
////////////////////////////////////////////////////////////////////////////////
// BASE CLASSES
 
class SOCOMD_Soldier_LongSleeve : B_Soldier_02_f
{
	scope 						= protected;
	side 						= 1;
	faction 					= "SOCOMD_CMD";
	author						= "SOCOMD";
	displayName 				= "SOCOMD Solider (Sleeve Down)";

	uniformClass				= "SOCOMD_Uniform_LongSleeve";
	model 						= "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d"; 
	hiddenSelections[]			= { "Camo", "Insignia" };
	hiddenSelectionsTextures[] 	= { "socomd_data\uniform\clothes\ia_soldier_01_clothing_co.paa" };

	weapons[] 					= { CMD_UNIT_COMMON_WEAPONS };
	respawnWeapons[] 			= { CMD_UNIT_COMMON_WEAPONS };
	magazines[] 				= { CMD_UNIT_COMMON_AMMO };
	respawnMagazines[] 			= { CMD_UNIT_COMMON_AMMO };
	respawnLinkedItems[] 		= { CMD_UNIT_COMMON_LINKEDITEMS };
	linkedItems[] 				= { CMD_UNIT_COMMON_LINKEDITEMS };
	Items[] 					= { CMD_UNIT_COMMON_ITEMS };
	RespawnItems[] 				= { CMD_UNIT_COMMON_ITEMS };
	backpack					= "";
};
 
class SOCOMD_Diver : B_diver_F
{
	scope 						= protected;
	author						= "SOCOMD";
	displayName 				= "SOCOMD Diver";
	uniformClass				= "SOCOMD_Uniform_Diver";

	weapons[] 					= {	CMD_UNIT_COMMON_WEAPONS };
	respawnWeapons[] 			= { CMD_UNIT_COMMON_WEAPONS };
	magazines[] 				= { CMD_UNIT_COMMON_AMMO };
	respawnMagazines[] 			= { CMD_UNIT_COMMON_AMMO };
	linkedItems[] 				= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_Rebreather"};
	respawnLinkedItems[] 		= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_Rebreather"};
	Items[] 					= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS};
	RespawnItems[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS};
	backpack					= "";
};
 
class SOCOMD_Soldier_ShortSleeve : SOCOMD_Soldier_LongSleeve
{
	scope 						= protected;
	displayName 				= "SOCOMD Solider (Sleeve Up)";
	uniformClass				= "SOCOMD_Uniform_ShortSleeve";
	model 						= "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d"; 

	hiddenSelections[]			= { "Camo", "Insignia" };
	hiddenSelectionsTextures[] 	= { "socomd_data\uniform\clothes\ia_soldier_01_clothing_co.paa" };
};
 
class SOCOMD_Officer_LongSleeve : SOCOMD_Soldier_LongSleeve
{
	scope 						= protected;
	displayName 				= "SOCOMD Officer (Sleeve Down)";
	uniformClass				= "SOCOMD_Uniform_Officer_LongSleeve";
	model 						= "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d"; 

	hiddenSelections[]			= { "Camo", "Insignia" };
	hiddenSelectionsTextures[] 	= { "socomd_data\uniform\clothes\ia_officer_01_clothing_co.paa" };
};
 
class SOCOMD_Officer_ShortSleeve : SOCOMD_Soldier_ShortSleeve
{
	scope 						= protected;
	displayName 				= "SOCOMD Officer (Sleeve Up)";
	uniformClass				= "SOCOMD_Officer_Uniform_ShortSleeve";
	model 						= "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d"; 

	hiddenSelections[]			= { "Camo", "Insignia" };
	hiddenSelectionsTextures[] 	= { "socomd_data\uniform\clothes\ia_officer_01_clothing_co.paa" };
};
 

////////////////////////////////////////////////////////////////////////////////
// PLATOON GROUP

class SOCOMD_PlatoonLeader : SOCOMD_Soldier_LongSleeve
{
	scope = public;
	_generalMacro 			= "SOCOMD_PlatoonLeader";
	displayName 			= "Platoon Leader";
	vehicleclass 			= "SOCOMD_Core";
	icon 					= "iconManLeader";

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_HK416GLCQB", "Laserdesignator" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_HK416GLCQB", "Laserdesignator" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, CMD_UNIT_AMMO_UNDERSLUNG, "Laserbatteries" };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, CMD_UNIT_AMMO_UNDERSLUNG, "Laserbatteries" };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_MICH_Multi", "ItemcTab" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_MICH_Multi", "ItemcTab" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_HuntIR_monitor", "ACRE_PRC152", "ACRE_PRC117F"};
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_HuntIR_monitor", "ACRE_PRC152", "ACRE_PRC117F"};
};
 
class SOCOMD_PlatoonSergeant : SOCOMD_Soldier_LongSleeve
{
	scope = public;
	_generalMacro 			= "SOCOMD_PlatoonSergeant";
	displayName 			= "Platoon Sergeant";
	vehicleclass 			= "SOCOMD_Core";
	icon 					= "iconManExplosive";

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_HK416GLCQB", "Rangefinder" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_HK416GLCQB", "Rangefinder" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, CMD_UNIT_AMMO_UNDERSLUNG, ITEM04("SmokeShell") };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, CMD_UNIT_AMMO_UNDERSLUNG, ITEM04("SmokeShell") };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_MICH_Multi", "ItemAndroid" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_MICH_Multi", "ItemAndroid" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_EntrenchingTool", "ACE_HuntIR_monitor", "ACRE_PRC152" };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_EntrenchingTool", "ACE_HuntIR_monitor", "ACRE_PRC152" };
	//backpack 				= "SOCOMD_Backpack";		
};
 
class SOCOMD_PlatoonMedic : SOCOMD_Soldier_LongSleeve
{
	scope = public;
	_generalMacro 			= "SOCOMD_PlatoonMedic";
	displayName 			= "Platoon Medic";
	vehicleclass 			= "SOCOMD_Core";
	icon 					= "iconManMedic";

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_HK416CUSTOMCQBvfg", "Rangefinder" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_HK416CUSTOMCQBvfg", "Rangefinder" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, ITEM04("SmokeShell") };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, ITEM04("SmokeShell") };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_CM", "SOCOMD_MICH_Tan" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_CM", "SOCOMD_MICH_Tan" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_MEDIC_MEDS, "ACRE_PRC152", ITEM04("ACE_personalAidKit") };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_MEDIC_MEDS, "ACRE_PRC152", ITEM04("ACE_personalAidKit") };
	//backpack 				= "SOCOMD_Medic_Backpack";
};
 
class SOCOMD_PlatoonSignaller : SOCOMD_Soldier_LongSleeve
{
	scope = public;
	_generalMacro 			= "SOCOMD_PlatoonSignaller";
	displayName 			= "Platoon Signaller";
	vehicleclass 			= "SOCOMD_Core";
	icon 					= "iconMan";

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_HK416CUSTOMCQBvfg", "Laserdesignator" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_HK416CUSTOMCQBvfg", "Laserdesignator" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, "Laserbatteries" };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, "Laserbatteries" };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_MICH_Multi", "ItemcTab" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_MICH_Multi", "ItemcTab" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACRE_PRC152", "ACRE_PRC117F" };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACRE_PRC152", "ACRE_PRC117F" };
};

////////////////////////////////////////////////////////////////////////////////
// SECTION GROUP

class SOCOMD_SectionLeader : SOCOMD_Soldier_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_SectionLeader";
	displayName 			= "Section Leader";
	vehicleclass 			= "SOCOMD_Core";
	icon 					= "iconManLeader";

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_HK416GLCQB", "Laserdesignator" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_HK416GLCQB", "Laserdesignator" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, CMD_UNIT_AMMO_UNDERSLUNG, "Laserbatteries"};
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, CMD_UNIT_AMMO_UNDERSLUNG, "Laserbatteries"};
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_FAST_Tan", "ItemAndroid" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_FAST_Tan", "ItemAndroid" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_HuntIR_monitor", "ACRE_PRC152" };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_HuntIR_monitor", "ACRE_PRC152" };	
};

class SOCOMD_2IC : SOCOMD_Soldier_LongSleeve
{
	scope = public;
	_generalMacro 			= "SOCOMD_2IC";
	displayName				= "Section 2IC";
	vehicleclass 			= "SOCOMD_Core";
	icon 					= "iconManExplosive";

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_HK416GLCQB", "Rangefinder" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_HK416GLCQB", "Rangefinder" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, CMD_UNIT_AMMO_UNDERSLUNG };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, CMD_UNIT_AMMO_UNDERSLUNG };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_FAST_Multi", "ItemAndroid" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_FAST_Multi", "ItemAndroid" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_HuntIR_monitor", "ACRE_PRC152" };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_HuntIR_monitor", "ACRE_PRC152" };
};

class SOCOMD_Sapper : SOCOMD_Soldier_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Sapper";
	displayName 			= "Section Sapper";
	vehicleclass 			= "SOCOMD_Core";
	icon 					= "iconManEngineer";
	engineer 				= 1;
	detectSkill 			= 100;

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_HK416CUSTOMCQBvfg" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_HK416CUSTOMCQBvfg" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_MICH_Multi" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_MICH_Multi" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_EntrenchingTool", "MineDetector" };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_EntrenchingTool", "MineDetector" };
	backpack 				= "SOCOMD_Sapper_Backpack";	
};

class SOCOMD_Gunner : SOCOMD_Soldier_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Gunner";
	displayName 			= "Section Gunner";
	vehicleclass 			= "SOCOMD_Core";
	icon 					= "iconManMG";

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "sma_minimi_mk3_762tsb" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "sma_minimi_mk3_762tsb" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_GUNNER };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_GUNNER };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_AR", "SOCOMD_MICH_Multi" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_AR", "SOCOMD_MICH_Multi" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS };	
};

class SOCOMD_Rifleman : SOCOMD_Soldier_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Rifleman";
	displayName 			= "Section Rifleman";
	vehicleclass 			= "SOCOMD_Core";
	icon 					= "iconMan";

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_HK416CUSTOMCQBvfg" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_HK416CUSTOMCQBvfg" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_MICH_Multi" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_MICH_Multi" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS };
	//backpack 				= "SOCOMD_Backpack";
};

class SOCOMD_Marksman : SOCOMD_Soldier_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Marksman";
	displayName 			= "Section Marksman";
	vehicleclass 			= "SOCOMD_Core";
	icon 					= "iconMan";

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_HK417_16in", "Rangefinder" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_HK417_16in", "Rangefinder" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_MARKSMAN };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_MARKSMAN };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_FAST_Multi" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_FAST_Multi" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS };
};

class SOCOMD_AT : SOCOMD_Soldier_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_AT";
	displayName 			= "Section AT";
	vehicleclass 			= "SOCOMD_Core";
	icon 					= "iconManAT";

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_HK416CUSTOMCQBvfg", "CUP_launch_M72A6" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_HK416CUSTOMCQBvfg", "CUP_launch_M72A6" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, "CUP_M72A6_M"};
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, "CUP_M72A6_M"};
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_FAST_Multi" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_FAST_Multi" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS };
};

class SOCOMD_Medic : SOCOMD_Soldier_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Medic";
	displayName 			= "Section Medic";
	vehicleclass 			= "SOCOMD_Core";
	icon 					= "iconManMedic";

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_HK416CUSTOMCQBvfg" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_HK416CUSTOMCQBvfg" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_CM", "SOCOMD_MICH_Tan" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_CM", "SOCOMD_MICH_Tan" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_MEDIC_MEDS };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_MEDIC_MEDS };
};
 
////////////////////////////////////////////////////////////////////////////////
// SNIPER TEAM GROUP

class SOCOMD_Recon_TeamLeader : SOCOMD_Soldier_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Recon_TeamLeader";
	displayName 			= "Sniper Team Leader";
	vehicleclass 			= "SOCOMD_Sniper";
	icon 					= "iconManLeader";
	camouflage 				= 0.4;

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_HK416CUSTOMCQBvfg", "Laserdesignator" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_HK416CUSTOMCQBvfg", "Laserdesignator" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, "Laserbatteries" };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, "Laserbatteries" };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_FAST_Multi", "ItemAndroid" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_FAST_Multi", "ItemAndroid" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_M26_Clacker", "ACRE_PRC152" };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_M26_Clacker", "ACRE_PRC152" };
};
 
class SOCOMD_Sniper_Spotter : SOCOMD_Soldier_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Sniper_Spotter";
	displayName 			= "Sniper Team Spotter";
	vehicleclass 			= "SOCOMD_Sniper";
	icon 					= "iconManAT";
	camouflage 				= 0.4;

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_HK416CUSTOMCQBvfg", "Rangefinder" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_HK416CUSTOMCQBvfg", "Rangefinder" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, "Laserbatteries" };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, "Laserbatteries" };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_FAST_Multi", "ItemAndroid" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_FAST_Multi", "ItemAndroid" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_M26_Clacker", "ACRE_PRC152" };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_M26_Clacker", "ACRE_PRC152" };
	backpack 				= "SOCOMD_LongRange_Radio";
};

////////////////////////////////////////////////////////////////////////////////
// WEAPONS TEAM GROUP

class SOCOMD_Weapons_TeamLeader : SOCOMD_Soldier_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Weapons_TeamLeader";
	displayName 			= "Weapons Team Leader";
	vehicleclass 			= "SOCOMD_Weapons";
	icon 					= "iconManLeader";

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_HK416GLCQB", "Laserdesignator" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_HK416GLCQB", "Laserdesignator" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, CMD_UNIT_AMMO_UNDERSLUNG, "Laserbatteries" };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, CMD_UNIT_AMMO_UNDERSLUNG, "Laserbatteries" };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_MICH_Multi", "ItemAndroid" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_MICH_Multi", "ItemAndroid" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_EntrenchingTool", "ACE_HuntIR_monitor", "ACRE_PRC152" };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_EntrenchingTool", "ACE_HuntIR_monitor", "ACRE_PRC152" };
	backpack 				= "SOCOMD_LongRange_Radio";
};

class SOCOMD_Weapons_Specialist : SOCOMD_Soldier_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Weapons_Specialist";
	displayName 			= "Weapons Team Specialist";
	vehicleclass 			= "SOCOMD_Weapons";
	icon 					= "iconManEngineer";

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_HK416CUSTOMCQBvfg", "Binocular" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_HK416CUSTOMCQBvfg", "Binocular" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_MICH_Multi", "ItemAndroid" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_MICH_Multi", "ItemAndroid" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_EntrenchingTool" };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_EntrenchingTool" };
	backpack 				= "SOCOMD_Weapons_Backpack";
};
 
class SOCOMD_Weapons_Assistant : SOCOMD_Soldier_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Weapons_Assistant";
	displayName 			= "Weapons Team Assistant";
	vehicleclass 			= "SOCOMD_Weapons";
	icon 					= "iconManEngineer";

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_HK416CUSTOMCQBvfg", "Binocular" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_HK416CUSTOMCQBvfg", "Binocular" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_MICH_Multi", "ItemAndroid" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_MICH_Multi", "ItemAndroid" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_EntrenchingTool" };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_EntrenchingTool" };
	backpack 				= "SOCOMD_Weapons_Backpack";
};

////////////////////////////////////////////////////////////////////////////////
// SPECIAL UNITS

class SOCOMD_Pilot : SOCOMD_Officer_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Pilot";
	vehicleclass 			= "SOCOMD_Core";
	displayName 			= "Heli-Pilot";
	icon 					= "iconMan";

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "Binocular" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "Binocular" };
	magazines[] 			= { CMD_UNIT_PILOT_AMMO };
	respawnMagazines[] 		= { CMD_UNIT_PILOT_AMMO };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_Pilot_2", "SOCOMD_Pilot_helmet", "ItemcTab", "SOCOMD_Invis_NVG" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_Pilot_2", "SOCOMD_Pilot_helmet", "ItemcTab", "SOCOMD_Invis_NVG" };
	Items[] 				= { CMD_UNIT_PILOT_ITEMS, CMD_UNIT_COMMON_MEDS, "ACRE_PRC152", "ACRE_PRC117F" };
	RespawnItems[] 			= { CMD_UNIT_PILOT_ITEMS, CMD_UNIT_COMMON_MEDS, "ACRE_PRC152", "ACRE_PRC117F" };
	//backpack 				= "SOCOMD_LongRange_Radio";
};
 
class SOCOMD_Crew : SOCOMD_Officer_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Crew";
	vehicleclass 			= "SOCOMD_Core";
	displayName 			= "Heli-Crew";
	icon 					= "iconMan";

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "Binocular" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "Binocular" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_Crew_helmet", "ItemcTab" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_Crew_helmet", "ItemcTab" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS };
	//backpack 				= "SOCOMD_LongRange_Radio";
};
 
class SOCOMD_Homestead: SOCOMD_Soldier_LongSleeve
{
	scope = public;
	vehicleclass = "SOCOMD_Core";
	_generalMacro = "SOCOMD_Homestead";
	displayName = "Homestead";
	icon = "iconMan";

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "ItemMap", "ItemGPS", "SOCOMD_Vest_TL", "SOCOMD_BERET", "zeus_earpiece" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "ItemMap", "ItemGPS", "SOCOMD_Vest_TL", "SOCOMD_BERET", "zeus_earpiece" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACRE_PRC152", "ACRE_PRC117F" };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACRE_PRC152", "ACRE_PRC117F" };
};
 
class SOCOMD_Journalist : SOCOMD_Soldier_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Journalist";
	displayName 			= "Section Journalist";
	vehicleclass 			= "SOCOMD_Core";
	icon 					= "iconManExplosive";

	uniformClass 			= "U_BG_Guerilla2_1";
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "V_Press_F", "LOP_H_6B27M_UN" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "V_Press_F", "LOP_H_6B27M_UN" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS };
};

class SOCOMD_Trainer : SOCOMD_Homestead
{
	scope = public;
	vehicleclass = "SOCOMD_Core";
	_generalMacro = "SOCOMD_Trainer";
	displayName = "Trainer";
	icon = "iconMan";
};

class SOCOMD_Trainee : SOCOMD_Rifleman
{
	scope = public;
	vehicleclass = "SOCOMD_Core";
	_generalMacro = "SOCOMD_Trainee";
	displayName = "Trainee";
	icon = "iconMan";
};