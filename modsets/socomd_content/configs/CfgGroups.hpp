#define DEFINE_UNIT(unitId,idxX,idxY,type,rating) \
class Unit##unitId { \
	side = East; \
	vehicle = type; \
	rank = rating; \
	position[] = {(idxX * 1), -(idxY * 1) ,0}; \
};

class CfgGroups {
	class East {
		class SOCOMD_SSO {
			name = "Spetsnaz ALFA Group (SSO)";

			class SOCOMD_SSO_CMD_Groups {
				name = "Infantry";
				aliveCategory = "Infantry";

				class SOCOMD_SSO_CMD_Group2 {
					faction = FACTION_STR;
					side = WEST;
					name = "2 Man Group";
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_SSO_soldier_Leader", "SERGEANT")
					DEFINE_UNIT(1,0,1,"SOCOMD_SSO_soldier_Rifleman", "CORPORAL")
				};

				class SOCOMD_SSO_CMD_Group4 {
					faction = FACTION_STR;
					side = WEST;
					name = "4 Man Group";
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_SSO_soldier_Leader", "SERGEANT")
					DEFINE_UNIT(1,0,1,"SOCOMD_SSO_soldier_Rifleman", "CORPORAL")
					DEFINE_UNIT(2,0,2,"SOCOMD_SSO_soldier_Autorifle", "PRIVATE")
					DEFINE_UNIT(5,1,1,"SOCOMD_SSO_soldier_Machinegunner", "PRIVATE")
				};

				class SOCOMD_SSO_CMD_Group6 {
					faction = FACTION_STR;
					side = WEST;
					name = "6 Man Group";
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_SSO_soldier_Leader", "SERGEANT")
					DEFINE_UNIT(1,0,1,"SOCOMD_SSO_soldier_Leader", "CORPORAL")
					DEFINE_UNIT(2,0,2,"SOCOMD_SSO_soldier_Rifleman", "PRIVATE")
					DEFINE_UNIT(3,0,3,"SOCOMD_SSO_soldier_Autorifle", "PRIVATE")
					DEFINE_UNIT(4,1,0,"SOCOMD_SSO_soldier_Machinegunner", "PRIVATE")
					DEFINE_UNIT(5,1,1,"SOCOMD_SSO_soldier_Machinegunner", "PRIVATE")
				};
                class SOCOMD_SSO_CMD_Group8 {
					faction = FACTION_STR;
					side = WEST;
					name = "8 Man Group";
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_SSO_soldier_Leader", "SERGEANT")
					DEFINE_UNIT(1,0,1,"SOCOMD_SSO_soldier_Leader", "CORPORAL")
					DEFINE_UNIT(2,0,2,"SOCOMD_SSO_soldier_Rifleman", "PRIVATE")
					DEFINE_UNIT(3,0,3,"SOCOMD_SSO_soldier_Rifleman", "PRIVATE")
                    DEFINE_UNIT(4,1,0,"SOCOMD_SSO_soldier_Autorifle", "PRIVATE")
					DEFINE_UNIT(5,1,1,"SOCOMD_SSO_soldier_Autorifle", "PRIVATE")
					DEFINE_UNIT(6,1,2,"SOCOMD_SSO_soldier_Machinegunner", "PRIVATE")
					DEFINE_UNIT(7,1,3,"SOCOMD_SSO_soldier_Machinegunner", "PRIVATE")
				};                     
			};
            class SOCOMD_SSO_CMD_Groups_2 {
				name = "Infantry (No GL)";
				aliveCategory = "Infantry";

				class SOCOMD_SSO_CMD_Group2 {
					faction = FACTION_STR;
					side = WEST;
					name = "2 Man Group";
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_SSO_soldier_Rifleman", "SERGEANT")
					DEFINE_UNIT(1,0,1,"SOCOMD_SSO_soldier_Rifleman", "CORPORAL")
				};

				class SOCOMD_SSO_CMD_Group4 {
					faction = FACTION_STR;
					side = WEST;
					name = "4 Man Group";
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_SSO_soldier_Rifleman", "SERGEANT")
					DEFINE_UNIT(1,0,1,"SOCOMD_SSO_soldier_Rifleman", "CORPORAL")
					DEFINE_UNIT(2,0,2,"SOCOMD_SSO_soldier_Rifleman", "PRIVATE")
					DEFINE_UNIT(5,1,1,"SOCOMD_SSO_soldier_Machinegunner", "PRIVATE")
				};

				class SOCOMD_SSO_CMD_Group6 {
					faction = FACTION_STR;
					side = WEST;
					name = "6 Man Group";
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_SSO_soldier_Rifleman", "SERGEANT")
					DEFINE_UNIT(1,0,1,"SOCOMD_SSO_soldier_Rifleman", "CORPORAL")
					DEFINE_UNIT(2,0,2,"SOCOMD_SSO_soldier_Rifleman", "PRIVATE")
					DEFINE_UNIT(3,0,3,"SOCOMD_SSO_soldier_Rifleman", "PRIVATE")
					DEFINE_UNIT(4,1,0,"SOCOMD_SSO_soldier_Rifleman", "PRIVATE")
					DEFINE_UNIT(5,1,1,"SOCOMD_SSO_soldier_Machinegunner", "PRIVATE")
				};
                class SOCOMD_SSO_CMD_Group8 {
					faction = FACTION_STR;
					side = WEST;
					name = "8 Man Group";
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_SSO_soldier_Rifleman", "SERGEANT")
					DEFINE_UNIT(1,0,1,"SOCOMD_SSO_soldier_Rifleman", "CORPORAL")
					DEFINE_UNIT(2,0,2,"SOCOMD_SSO_soldier_Rifleman", "PRIVATE")
					DEFINE_UNIT(3,0,3,"SOCOMD_SSO_soldier_Rifleman", "PRIVATE")
                    DEFINE_UNIT(4,1,0,"SOCOMD_SSO_soldier_Autorifle", "PRIVATE")
					DEFINE_UNIT(5,1,1,"SOCOMD_SSO_soldier_Autorifle", "PRIVATE")
					DEFINE_UNIT(6,1,2,"SOCOMD_SSO_soldier_Machinegunner", "PRIVATE")
					DEFINE_UNIT(7,1,3,"SOCOMD_SSO_soldier_Machinegunner", "PRIVATE")
				};    
            };
            class SOCOMD_SSO_CMD_Groups_3 {
				name = "Infantry (Night)";
				aliveCategory = "Infantry";

				class SOCOMD_SSO_CMD_Group2 {
					faction = FACTION_STR;
					side = WEST;
					name = "2 Man Group";
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_SSO_soldier_Leader_Night", "SERGEANT")
					DEFINE_UNIT(1,0,1,"SOCOMD_SSO_soldier_Rifleman_Night", "CORPORAL")
				};

				class SOCOMD_SSO_CMD_Group4 {
					faction = FACTION_STR;
					side = WEST;
					name = "4 Man Group";
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_SSO_soldier_Leader_Night", "SERGEANT")
					DEFINE_UNIT(1,0,1,"SOCOMD_SSO_soldier_Rifleman_Night", "CORPORAL")
					DEFINE_UNIT(2,0,2,"SOCOMD_SSO_soldier_Rifleman_Night", "PRIVATE")
					DEFINE_UNIT(5,1,1,"SOCOMD_SSO_soldier_Machinegunner_Night", "PRIVATE")
				};

				class SOCOMD_SSO_CMD_Group6 {
					faction = FACTION_STR;
					side = WEST;
					name = "6 Man Group";
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_SSO_soldier_Leader_Night", "SERGEANT")
					DEFINE_UNIT(1,0,1,"SOCOMD_SSO_soldier_Rifleman_Night", "CORPORAL")
					DEFINE_UNIT(2,0,2,"SOCOMD_SSO_soldier_Rifleman_Night", "PRIVATE")
					DEFINE_UNIT(3,0,3,"SOCOMD_SSO_soldier_Rifleman_Night", "PRIVATE")
					DEFINE_UNIT(4,1,0,"SOCOMD_SSO_soldier_Rifleman_Night", "PRIVATE")
					DEFINE_UNIT(5,1,1,"SOCOMD_SSO_soldier_Machinegunner_Night", "PRIVATE")
				};      
                class SOCOMD_SSO_CMD_Group8 {
					faction = FACTION_STR;
					side = WEST;
					name = "8 Man Group";
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_SSO_soldier_Leader_Night", "SERGEANT")
					DEFINE_UNIT(1,0,1,"SOCOMD_SSO_soldier_Leader_Night", "CORPORAL")
					DEFINE_UNIT(2,0,2,"SOCOMD_SSO_soldier_Rifleman_Night", "PRIVATE")
					DEFINE_UNIT(3,0,3,"SOCOMD_SSO_soldier_Rifleman_Night", "PRIVATE")
                    DEFINE_UNIT(4,1,0,"SOCOMD_SSO_soldier_Autorifle_Night", "PRIVATE")
					DEFINE_UNIT(5,1,1,"SOCOMD_SSO_soldier_Autorifle_Night", "PRIVATE")
					DEFINE_UNIT(6,1,2,"SOCOMD_SSO_soldier_Machinegunner_Night", "PRIVATE")
					DEFINE_UNIT(7,1,3,"SOCOMD_SSO_soldier_Machinegunner_Night", "PRIVATE")
				};          
			};
            class SOCOMD_SSO_CMD_Groups_4 {
				name = "Infantry (Night) (No GL)";
				aliveCategory = "Infantry";

				class SOCOMD_SSO_CMD_Group2 {
					faction = FACTION_STR;
					side = WEST;
					name = "2 Man Group";
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_SSO_soldier_Rifleman_Night", "SERGEANT")
					DEFINE_UNIT(1,0,1,"SOCOMD_SSO_soldier_Rifleman_Night", "CORPORAL")
				};

				class SOCOMD_SSO_CMD_Group4 {
					faction = FACTION_STR;
					side = WEST;
					name = "4 Man Group";
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_SSO_soldier_Rifleman_Night", "SERGEANT")
					DEFINE_UNIT(1,0,1,"SOCOMD_SSO_soldier_Rifleman_Night", "CORPORAL")
					DEFINE_UNIT(2,0,2,"SOCOMD_SSO_soldier_Rifleman_Night", "PRIVATE")
					DEFINE_UNIT(5,1,1,"SOCOMD_SSO_soldier_Machinegunner_Night", "PRIVATE")
				};

				class SOCOMD_SSO_CMD_Group6 {
					faction = FACTION_STR;
					side = WEST;
					name = "6 Man Group";
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_SSO_soldier_Rifleman_Night", "SERGEANT")
					DEFINE_UNIT(1,0,1,"SOCOMD_SSO_soldier_Rifleman_Night", "CORPORAL")
					DEFINE_UNIT(2,0,2,"SOCOMD_SSO_soldier_Rifleman_Night", "PRIVATE")
					DEFINE_UNIT(3,0,3,"SOCOMD_SSO_soldier_Rifleman_Night", "PRIVATE")
					DEFINE_UNIT(4,1,0,"SOCOMD_SSO_soldier_Rifleman_Night", "PRIVATE")
					DEFINE_UNIT(5,1,1,"SOCOMD_SSO_soldier_Machinegunner_Night", "PRIVATE")
				};
                class SOCOMD_SSO_CMD_Group8 {
					faction = FACTION_STR;
					side = WEST;
					name = "8 Man Group";
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_SSO_soldier_Rifleman_Night", "SERGEANT")
					DEFINE_UNIT(1,0,1,"SOCOMD_SSO_soldier_Rifleman_Night", "CORPORAL")
					DEFINE_UNIT(2,0,2,"SOCOMD_SSO_soldier_Rifleman_Night", "PRIVATE")
					DEFINE_UNIT(3,0,3,"SOCOMD_SSO_soldier_Rifleman_Night", "PRIVATE")
                    DEFINE_UNIT(4,1,0,"SOCOMD_SSO_soldier_Autorifle_Night", "PRIVATE")
					DEFINE_UNIT(5,1,1,"SOCOMD_SSO_soldier_Autorifle_Night", "PRIVATE")
					DEFINE_UNIT(6,1,2,"SOCOMD_SSO_soldier_Machinegunner_Night", "PRIVATE")
					DEFINE_UNIT(7,1,3,"SOCOMD_SSO_soldier_Machinegunner_Night", "PRIVATE")
				};
			};
		};

		class SOCOMD_Vympel {
			name = "Spetsnaz VEGA Group (Vympel)";

			class SOCOMD_Vympel_CMD_Groups {
				name = "Infantry";
				aliveCategory = "Infantry";

				class SOCOMD_Vympel_CMD_Group2 {
					faction = FACTION_STR;
					side = WEST;
					name = "2 Man Group";
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_Vympel_Leader", "SERGEANT")
					DEFINE_UNIT(1,0,1,"SOCOMD_Vympel_Operator", "CORPORAL")
				};

				class SOCOMD_Vympel_CMD_Group4 {
					faction = FACTION_STR;
					side = WEST;
					name = "4 Man Group";
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_Vympel_Leader", "SERGEANT")
					DEFINE_UNIT(1,0,1,"SOCOMD_Vympel_Operator", "CORPORAL")
					DEFINE_UNIT(2,0,2,"SOCOMD_Vympel_Medic", "PRIVATE")
					DEFINE_UNIT(5,1,1,"SOCOMD_Vympel_MachineGunner", "PRIVATE")
				};

				class SOCOMD_Vympel_CMD_Group6 {
					faction = FACTION_STR;
					side = WEST;
					name = "6 Man Group";
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_Vympel_Leader", "SERGEANT")
					DEFINE_UNIT(1,0,1,"SOCOMD_Vympel_Operator", "CORPORAL")
					DEFINE_UNIT(2,0,2,"SOCOMD_Vympel_Operator", "PRIVATE")
					DEFINE_UNIT(3,0,3,"SOCOMD_Vympel_Medic", "PRIVATE")
					DEFINE_UNIT(4,1,0,"SOCOMD_Vympel_MachineGunner", "PRIVATE")
					DEFINE_UNIT(5,1,1,"SOCOMD_Vympel_Sapper", "PRIVATE")
				};
                class SOCOMD_Vympel_CMD_Group8 {
					faction = FACTION_STR;
					side = WEST;
					name = "8 Man Group";
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_Vympel_Leader", "SERGEANT")
					DEFINE_UNIT(1,0,1,"SOCOMD_Vympel_Operator", "CORPORAL")
					DEFINE_UNIT(2,0,2,"SOCOMD_Vympel_Operator", "PRIVATE")
					DEFINE_UNIT(3,0,3,"SOCOMD_Vympel_Medic", "PRIVATE")
                    DEFINE_UNIT(4,1,0,"SOCOMD_Vympel_MachineGunner", "PRIVATE")
					DEFINE_UNIT(5,1,1,"SOCOMD_Vympel_MachineGunner", "PRIVATE")
					DEFINE_UNIT(6,1,2,"SOCOMD_Vympel_Sapper", "PRIVATE")
					DEFINE_UNIT(7,1,3,"SOCOMD_Vympel_Marksman", "PRIVATE")
				};                     
			};
		};

		class SOCOMD_FSB {
			name = "Spetsnaz ALFA Group (FSB)";

			class SOCOMD_FSB_CMD_Groups {
				name = "Infantry";
				aliveCategory = "Infantry";

				class SOCOMD_FSB_CMD_Group2 {
					faction = FACTION_STR;
					side = EAST;
					name = "2 Man Group";
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_FSB_Leader", "SERGEANT")
					DEFINE_UNIT(1,0,1,"SOCOMD_FSB_Breacher", "CORPORAL")
				};

				class SOCOMD_FSB_CMD_Group4 {
					faction = FACTION_STR;
					side = EAST;
					name = "4 Man Group";
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_FSB_Leader", "SERGEANT")
					DEFINE_UNIT(1,0,1,"SOCOMD_FSB_Breacher", "CORPORAL")
					DEFINE_UNIT(2,0,2,"SOCOMD_FSB_Medic", "PRIVATE")
					DEFINE_UNIT(5,1,1,"SOCOMD_FSB_Operator", "PRIVATE")
				};
			};
		};
	};
};
