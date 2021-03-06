class CfgFunctions {
	class SOCOMD {
		class Common {
			file="\socomd_core\functions\common";
			class CommonInitServer { postInit = 1; };
			class CommonInitLocal {};
		};

		class Utils {
			file="\socomd_core\functions\utils";
			class SetUnitLoadout {};
			class SwitchUnitLoadout {};
			class SwitchUnitPrimaryWeapon {};
			class SwitchUnitHandgunWeapon {};
			class SwitchUnitSecondaryWeapon {};
			class ToggleTranslator {};
			class GetLoadoutScopeFOV {};
			class GetLoadoutMaxOptic {};
			class BushMasterInit {};
			class ACRERackInit {};
			class XEH_postInit {};
			class GetWorldType {};
			class GetWorldUniform {};
			class SaveLoadoutPrefs {};
			class LoadLoadoutPrefs {};
			class UpdateArsenalContent {};
			class RefreshInsignia {};
			class addPrimaryAmmo {};
			class addSecondaryAmmo {};
			class addHandgunAmmo {};
			class removeAmmo {};
		};

		class Actions {
			file="\socomd_core\functions\action";
			class Action_ConnectSignal {};
			class Action_ToggleDiving {};
			class Action_ToggleSnow {};
			class Action_ToggleHalo {};
			class Action_ReplaceCrewColours {};
			class Action_ReplaceUniform {};
			class Action_ReplaceVest {};
			class Action_ReplaceHeadgear {};
			class Action_ReplaceFacewear {};
			class Action_ReplaceBackpack {};
			class Action_EnterSpectator {};
			class Action_displayName {};
			class Action_placePlaceables {};
			class Action_putBlindfoldOn {};
			class Action_ReplaceNVG {};
		};

		class ActionConditions {
			file="\socomd_core\functions\actionConditions";
			class ActionCondition_CanToggleDiving {};
			class ActionCondition_CanToggleHalo {};
			class ActionCondition_CanSwitchGroundCrewVest {};
			class ActionCondition_CanUseLoadoutWeapon {};
			class ActionCondition_HasPrimary556	{};
			class ActionCondition_CanSwapVest {};
			class ActionCondition_CanSwapBackpacks {};
			class ActionCondition_CanSwapNVG {};
			class ActionCondition_IsAdmin {};
			class ActionCondition_IsRadarOn {};
			class ActionCondition_IsRadarOff {};
			class ActionCondition_canInteract {};
			class ActionCondition_HasLoadout {};
			class ActionCondition_HandleReserve {};
			class ActionCondition_HaloActions {};
		};

		class ASORUtil {
			file="\socomd_core\functions\asorUtil";
			class ASORGS_IsBlacklisted {};
			class ASORGS_GetOpticsWhitelist {};
			class ASORGS_CheckScopeFOV {};
			class ASORVS_GetClassnames {};
		};

		class Medical {
			file = "\socomd_core\functions\medical";
            class events {};
			class adenosine {};
            class adenosineLocal {};
			class ketamine {};
			class ketamineLocal {};
			class ketamine_sedation {};
			class ketEffect {};
		};
	};
    class ace_medical {
        class functions {
            file = "\socomd_core\functions\medical";
            class handleCreateLitter {};
			class getBloodVolumeChange {};
        };
    };
	class advanced_peltors{
		class functions {
			file = "\socomd_core\functions\advanced_peltors";
			class explosionEventNear {};
			class gunShotNear {};
			class handlePeltors {};
			class handlePeltorStatus {};
			class explosionShake {};
		};
	};
};
