class AU_03_780000_v1;
class SOCOMD_BERET : AU_03_780000_v1 {
	rgoc_canAcceptNVG = 0;
	author = AUTHOR_STR;
	scope = public;
	displayName = "SOCOMD Beret";
};


class SOCOMD_Aus_Boonie: H_Booniehat_khk_hs {
	author = AUTHOR_STR;
	scope = public;
	displayName = "SOCOMD Booniehat MC";

	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\socomd_data_core\CTgear\booniehat_co.paa"};
};
class SOCOMD_Aus_Boonie_AMC: H_Booniehat_khk_hs {
	author = AUTHOR_STR;
	scope = public;
	displayName = "SOCOMD Booniehat AMCU";

	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\socomd_data_core\CTgear\booniehat_AMC_co.paa"};
};