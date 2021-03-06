class CfgLoadoutBackpacks {
	class Backpack_Leader {
		loadoutWhitelist[] = {
			"SOCOMD_Commander",
			"SOCOMD_Leader",
			"SOCOMD_2IC"
		};
	};

	class SOG_BAG_recon_MC : Backpack_Leader { };
	class SOG_BAG_recon_Tan : Backpack_Leader { };
	class Kit_Bag_R_MC : Backpack_Leader { };
	class SOG_BAG_recon_od : Backpack_Leader { };
	class Kit_Bag_R_od : Backpack_Leader { };
	class Kit_Bag_R_Tan : Backpack_Leader { };

	class Backpack_Operator {
		loadoutWhitelist[] = {
			"SOCOMD_Commander",
			"SOCOMD_Leader",
			"SOCOMD_2IC",
			"SOCOMD_Rifleman",
			"SOCOMD_Breacher",
			"SOCOMD_Marksman",
			"SOCOMD_Recon",
			"SOCOMD_Recon_Assistant",
			"SOCOMD_MachineGunner",
			"SOCOMD_Medic",
			"SOCOMD_AT",
			"SOCOMD_AT_Assistant",
			"SOCOMD_Pilot",
			"SOCOMD_Crewman",
			"SOCOMD_Logistician"
		};
	};

	class SOG_BAG_MC : Backpack_Operator { };
	class SOG_BAG_Tan : Backpack_Operator { };
	class Kit_Bag_MC : Backpack_Operator { };
	class Kit_Bag_Tan : Backpack_Operator { };
	class SOG_BAG_od : Backpack_Operator { };
	class Kit_Bag_od : Backpack_Operator { };

	class Backpack_Sapper {
		loadoutWhitelist[] = {
			"SOCOMD_Sapper"
		};
	};

	class Kit_Bag_pince_TAN : Backpack_Sapper { };
	class SOG_BAG_BREACHER_tan : Backpack_Sapper { };
	class Kit_Bag_pince_mc : Backpack_Sapper { };
	class SOG_BAG_BREACHER_MC : Backpack_Sapper { };
	class Kit_Bag_pince_od : Backpack_Sapper { };
	class SOG_BAG_BREACHER_od : Backpack_Sapper { };

	class Backpack_Medic {
		loadoutWhitelist[] = {
			"SOCOMD_Medic"
		};
	};

	class SOG_BAG_med_tan : Backpack_Medic { };
	class SOG_BAG_med_MC : Backpack_Medic { };
	class SOG_BAG_med_od : Backpack_Medic { };
};
