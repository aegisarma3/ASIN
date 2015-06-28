
if (local _this) then {
	if !(_this getVariable ["BIS_enableRandomization",true]) exitWith {};

	_rnd1 = floor random 6;
	if (((_this getVariable "color")>=0)&&((_this getVariable "color")<=5))
	then
	{
		_rnd1 = _this getVariable "color";
	};
	_this animate ["HidePolice", 1];
	_this animate ["HideServices", 1];
	_this animate ["HideBackpacks", 1];
	_this animate ["HideBumper1", 1];
	_this animate ["HideBumper2", 0];
	_this animate ["HideConstruction", 0];
	_this animate ["HideDoor3", 0];
	

	_this setObjectTextureGlobal [0, ["ASIN\AEGIS\addons\aegis_vehicles\data\offroad\offroad_01.paa",
	"ASIN\AEGIS\addons\aegis_vehicles\data\offroad\offroad_01.paa",
	"ASIN\AEGIS\addons\aegis_vehicles\data\offroad\offroad_01.paa",
	"ASIN\AEGIS\addons\aegis_vehicles\data\offroad\offroad_01.paa",
	"ASIN\AEGIS\addons\aegis_vehicles\data\offroad\offroad_01.paa",
	"ASIN\AEGIS\addons\aegis_vehicles\data\offroad\offroad_01.paa"] select _rnd1];

	_this setObjectTextureGlobal [1, ["ASIN\AEGIS\addons\aegis_vehicles\data\offroad\offroad_01.paa",
	"ASIN\AEGIS\addons\aegis_vehicles\data\offroad\offroad_01.paa",
	"ASIN\AEGIS\addons\aegis_vehicles\data\offroad\offroad_01.paa",
	"ASIN\AEGIS\addons\aegis_vehicles\data\offroad\offroad_01.paa",
	"ASIN\AEGIS\addons\aegis_vehicles\data\offroad\offroad_01.paa",
	"ASIN\AEGIS\addons\aegis_vehicles\data\offroad\offroad_01.paa"] select _rnd1];
};