class CfgLoadoutWeapons {
	class Rifle_556 {
		loadoutWhitelist[] = {
			"SOCOMD_Rifleman",
			"SOCOMD_Breacher",
			"SOCOMD_Sapper",
			"SOCOMD_Medic",
			"SOCOMD_AT",
			"SOCOMD_AT_Assistant",
			"SOCOMD_Logistician"
		};

		magazines[] = {
			{"SOCOMD_Item_Magazine_556x45_30Rnd", 8}
		};
	};

	class RifleGL_556 { 
		loadoutWhitelist[] = {
			"SOCOMD_Rifleman",
			"SOCOMD_Breacher",
			"SOCOMD_Commander",
			"SOCOMD_Leader",
			"SOCOMD_2IC"
		};

		magazines[] = {
			{"SOCOMD_Item_Magazine_556x45_30Rnd", 8},
			{"1Rnd_HE_Grenade_shell", 8}
		};
		commandGrenades[] = {
			{"UGL_FlareRed_F", 2},
			{"1Rnd_SmokeRed_Grenade_shell", 2},
			{"ACE_HuntIR_M203", 3}
		};
	};

	class MachineGun_556 {
		loadoutWhitelist[] = {
			"SOCOMD_MachineGunner"
		};

		magazines[] = {
			{"SOCOMD_Item_Magazine_556x45_200Rnd_Tracer", 4}
		};
	};

	class Rifle_65 {
		loadoutWhitelist[] = {
			"SOCOMD_Rifleman",
			"SOCOMD_Sapper",
			"SOCOMD_Medic",
			"SOCOMD_AT",
			"SOCOMD_AT_Assistant",
			"SOCOMD_Logistician"
		};

		magazines[] = {
			{"SOCOMD_Item_Magazine_65x39_30Rnd", 6}
		};
	};

	class MachineGun_762 : MachineGun_556 {
		magazines[] = {};
	};

	class Rifle_762 {
		loadoutWhitelist[] = {
			"SOCOMD_Commander",
			"SOCOMD_Leader",
			"SOCOMD_2IC",
			"SOCOMD_Rifleman",
			"SOCOMD_Sapper",
			"SOCOMD_Medic",
			"SOCOMD_AT",
			"SOCOMD_AT_Assistant"
		};
		magazines[] = {
			{"SOCOMD_Item_Magazine_762x51_20Rnd", 8}
		};
	};
	class Long_Rifle_762 {
		loadoutWhitelist[] = {
			"SOCOMD_Marksman",
			"SOCOMD_Recon_Assistant"
		};

		magazines[] = {
			{"SOCOMD_Item_Magazine_762x51_20Rnd", 8}
		};
	};

	class Rifle_408 {
		loadoutWhitelist[] = {
			"SOCOMD_Recon"
		};

		magazines[] = {
			{"SOCOMD_Item_Magazine_408x7Rnd", 8}
		};
	};

	class Launcher {
		loadoutWhitelist[] = {
			"SOCOMD_AT"
		};

		magazines[] = {};
	};
};