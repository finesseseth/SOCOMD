params["_logic", "_units", "_activated"];

if!(_activated && local _logic) exitWith {};

_mouseOver = missionNamespace getVariable [ "bis_fnc_curatorObjectPlaced_mouseOver", [""]];

_curatorEntity = objnull;
if ((_mouseOver select 0) == "OBJECT") then 
{
	 _curatorEntity = (_mouseOver select 1);
};

//Exit there is no curator entity under cursor
if(isNull _curatorEntity) exitWith {
	deleteVehicle _logic;
};

if(!isPlayer _curatorEntity) exitWith {
	deleteVehicle _logic;
};

[_curatorEntity, currentWeapon _curatorEntity] remoteExec ["ace_overheating_fnc_jamWeapon", owner _curatorEntity];

deleteVehicle _logic;