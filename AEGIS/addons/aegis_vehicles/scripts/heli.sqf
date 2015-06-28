
if (local _this) then {
	if !(_this getVariable ["BIS_enableRandomization",true]) exitWith {};

	_this animate ["AddHoldingFrame", 1];
	_this animate ["AddCargoHook_Cover", 0];

};