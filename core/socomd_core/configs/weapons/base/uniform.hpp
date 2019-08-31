class Uniform_Base;
class U_B_CombatUniform_mcam : Uniform_Base
{
	class ItemInfo;
};

class ADFU_G3_MC;
class SOCOMD_Uniform_SleevesDown : ADFU_G3_MC {
	scope = public;
	author = AUTHOR_STR;
	displayName = "SOCOMD Uniform";
};

class SOCOMD_Uniform_SleevesDown_Recon : ADFU_G3_MC {
	scope = public;
	author = AUTHOR_STR;
	displayName = "SOCOMD Recon Uniform";
};

class ADFU_G3_MC_Rolled;
class SOCOMD_Uniform_SleevesUp : ADFU_G3_MC_Rolled {
	scope = public;
	author = AUTHOR_STR;
	displayName = "SOCOMD Uniform (Rolled)";
};

class SOCOMD_Uniform_SleevesUp_Recon : ADFU_G3_MC_Rolled {
	scope = public;
	author = AUTHOR_STR;
	displayName = "SOCOMD Recon Uniform (Rolled)";
};

class U_B_Wetsuit;
class SOCOMD_Uniform_Wetsuit : U_B_Wetsuit {
	scope = public;
	author = AUTHOR_STR;
	displayName = "SOCOMD Wetsuit";
};

class UniformItem;
class SOCOMD_Commando_BLK_SleevesDown : ADFU_G3_MC {
	displayName = "SOCOMD Black Role";
	author = "SOCOMD & ADFU";
	class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="SOCOMD_Soldier_BLK_SleevesDown";
			containerClass="Supply80";
			mass=40;
		};
	model="\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
};
class SOCOMD_Commando_AMCU_SleevesDown : ADFU_G3_MC {
	displayName = "SOCOMD AMCU";
	author = "SOCOMD & ADFU";
	class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="SOCOMD_Soldier_AMC_SleevesDown";
			containerClass="Supply80";
			mass=40;
		};
	model="\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
};


class SOCOMD_Uniform_Survival: Uniform_Base
{
	author="SOCOMD";
	scope=2;
	displayName="SOCOMD Survival Fatigues";
	picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="SOCOMD_Survival";
		containerClass="Supply80";
		uniformType="Neopren";
		mass=60;
	};
};

class SOCOMD_Tee_uniform: Uniform_Base
{
	author="SOCOMD";
	scope=2;
	displayName="SOCOMD Tee";
	picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="SOCOMD_Tee";
		containerClass="Supply80";
		mass=60;
	};
};

class SEAL_AOR1_U: Uniform_Base
{
	author="SOCOMD";
	scope=2;
	displayName="SEAL AOR1";
	picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="SEAL_AOR1";
		containerClass="Supply80";
		mass=60;
	};
};

class U_B_FullGhillie_lsh;
class SOCOMD_Ghillie_lsh : U_B_FullGhillie_lsh {};

class U_B_FullGhillie_sard;
class SOCOMD_Ghillie_sard : U_B_FullGhillie_sard {};

class U_B_FullGhillie_ard;
class SOCOMD_Ghillie_ard : U_B_FullGhillie_ard {};

class U_B_T_FullGhillie_tna_F;
class SOCOMD_Ghillie_jngl : U_B_T_FullGhillie_tna_F {};