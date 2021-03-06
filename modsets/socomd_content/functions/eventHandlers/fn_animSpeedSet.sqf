/*
BASE = AmovPercM*
RUN = AmovPercMrun*
SPRINT = AmovPercMeva*
*/

_unit = _this select 0;
_anim = _this select 1;

_speed = 1.0;
_weight = 0.0;
_minSpeed = 0.85;
_maxSpeed = 1.15;
// Weight is 330 for 15kg (its in lb's)
// 27.5kg is normal speed (600 lb)
_minLoad = 300;
_maxLoad = 1000;

effected = _anim find "amovpercmrun";
if (effected == -1) then {
	_weight = loadAbs _unit;
	_speed = linearConversion[_maxLoad,_minLoad,_weight,_minSpeed,_maxSpeed,true];
};
_unit setAnimSpeedCoef _speed;