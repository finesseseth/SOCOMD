class ACE_ItemCore;
class ACE_morphine; //displayName= "Morphine Autoinjector 10mg/1mL IM"
class ACE_atropine; //displayName= "Atropine 1.2mg/1mL IO"
class ACE_epinephrine; //displayName="Adrenaline 1mg/1mL IO"

class adv_aceCPR_AED: ACE_ItemCore {
	displayName="HeartStart MRx";
	picture="\socomd_data_core\icon\AED.paa";
	scope = 2;
	model = "\A3\Structures_F_EPA\Items\Medical\Defibrillator_F.p3d";
	descriptionShort = "$STR_ADV_ACECPR_AED_DESCRIPTION";
	descriptionUse = "$STR_ADV_ACECPR_AED_DESCRIPTION";
	class ItemInfo: CBA_MiscItem_ItemInfo {
    	mass = 30;
	};
};

class ACE_morphine_Medic: ACE_morphine {
	author="Monk";
	displayName="Morphine 10mg/1mL";
	picture="\socomd_data_core\icon\morphine.paa";
	descriptionShort="Analgesic, used for moderate pain";
	descriptionUse="Analgesic, used for moderate pain";
};

class ACE_epinephrine_Medic: ACE_epinephrine {
	author="Monk";
	displayName="Epinephrine 1mg/1mL Ampoule";
	picture="\socomd_data_core\icon\epi.paa";
	descriptionShort="Sympathomimetic, increases HR, bronchodilation and vasoconstriction";
	descriptionUse="Sympathomimetic, increases HR, bronchodilation and vasoconstriction";
};

class ACE_fentanyl: ACE_morphine {
	author="Monk";
	displayName="Fentanyl 100mcg/2mL Ampoule";
	picture="\socomd_data_core\icon\fentanyl.paa";
	descriptionShort="Analgesic, used for severe pain";
	descriptionUse="Analgesic, used for severe pain";
};

class ACE_naloxone: ACE_atropine {
	author="Monk";
	displayName="Naloxone 1.6mg/4mL Ampoule";
	picture="\socomd_data_core\icon\naloxone.paa";
	descriptionShort="Opiod antagonist, reverses negative effects of narcotics";
	descriptionUse="Opiod antagonist, reverses negative effects of narcotics";
};

class ACE_apap: ACE_morphine {
	author="Monk";
	displayName="Paracetemol 1g Tablets";
	picture="\socomd_data_core\icon\apap.paa";
	model="\A3\Structures_F_EPA\Items\Medical\PainKillers_F.p3d";
	descriptionShort="Analgesic/Antipyretic, used for light pain and fever";
	descriptionUse="Analgesic/Antipyretic, used for light pain and fever";
	class ItemInfo: CBA_MiscItem_ItemInfo {
		mass=0.5;
	};
};

class KAT_larynx: ACE_ItemCore {
	displayName="i-Gel";
	descriptionShort="Maintains airway patency and prevents vomit from entering the lungs";
	descriptionUse="Maintains airway patency and prevents vomit from entering the lungs";
	picture="\socomd_data_core\icon\LMA.paa";
};

class KAT_guedel: ACE_ItemCore {
	displayName="NPA";
	descriptionShort="Maintains airway patency";
	descriptionUse="Maintains airway patency";
	picture="\socomd_data_core\icon\NPA.paa";
};

class KAT_ChestSeal: ACE_ItemCore {
	displayName="Chest Seal";
	picture="\socomd_data_core\icon\Hyfin.paa";
};

class SOCOMD_NDC: ACE_ItemCore {
	scope=2;
	displayName="14 gauge NDC";
	descriptionShort="14 gauge needle for performing emergency chest decompression";
	descriptionUse="14 gauge needle for performing emergency chest decompression";
	picture="\socomd_data_core\icon\NDC.paa";
	class ItemInfo: CBA_MiscItem_ItemInfo {
		mass=0.01;
	};
};

class SOCOMD_VPN: ACE_ItemCore {
	scope=2;
	displayName="3mL Drug Syringe";
	descriptionShort="For administering drugs";
	descriptionUse="For administering drugs";
	picture="\socomd_data_core\icon\VPN.paa";
	class ItemInfo: CBA_MiscItem_ItemInfo {
		mass=0.01;
	};
};

class SOCOMD_Ket: ACE_morphine {
	scope=2;
	displayName="Ketamine 6mg/2mL Ampoule";
	descriptionShort="Analgesic used for severe pain";
	descriptionUse="Analgesic used for severe pain";
	picture="\socomd_data_core\icon\ket.paa";
	class ItemInfo: CBA_MiscItem_ItemInfo {
		mass=0.01;
	};
};

class SOCOMD_Ket_S: ACE_morphine {
	scope=2;
	displayName="Ketamine 200mg/2mL Ampoule";
	descriptionShort="Analgesic used for severe pain and sedation";
	descriptionUse="Analgesic used for severe pain and sedation";
	picture="\socomd_data_core\icon\ket.paa";
	class ItemInfo: CBA_MiscItem_ItemInfo {
		mass=0.01;
	};
};

class SOCOMD_Tetra: ACE_morphine {
	scope=2;
	displayName="Tetracycline 250mg capsule";
	descriptionShort="Antibiotic capsule";
	descriptionUse="Antibiotic capsule";
	picture="\socomd_data_core\icon\tetra.paa";
	class ItemInfo: CBA_MiscItem_ItemInfo {
		mass=0.01;
	};
};

class ACE_fieldDressing: ACE_ItemCore {
	scope=2;
	author="$STR_ace_common_ACETeam";
	model="\z\ace\addons\medical\data\bandage.p3d";
	picture="\socomd_data_core\icon\IB.paa";
	displayName="Israeli Bandage";
	descriptionShort="Quickly stanches haemorrhaging from injuries";
	descriptionUse="Quickly stanches haemorrhaging from injuries";
	class ItemInfo: CBA_MiscItem_ItemInfo
	{
		mass=1;
	};
};

class ACE_quikclot: ACE_ItemCore {
	scope=2;
	author="$STR_ace_common_ACETeam";
	displayName="Quikclot Combat Gauze";
	model="\z\ace\addons\medical\data\QuikClot.p3d";
	picture="\socomd_data_core\icon\Quikclot.paa";
	descriptionShort="$STR_ace_medical_QuikClot_Desc_Short";
	descriptionUse="$STR_ace_medical_QuikClot_Desc_Use";
	class ItemInfo: CBA_MiscItem_ItemInfo
	{
		mass=1;
	};
};