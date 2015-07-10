//Defienindo na classe
class CfgPatches {
	class AEGIS_UI {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_UI_F"};
		author[] = {"Collumbus"};
		authorUrl = "http://aegis.zonadecombate.com.br/";
	};
};

class CfgMarkers {
	class b_unknown;	// Classe de referência externa
	
		class mrk_aegis : b_unknown {
		name = "AEGIS";
		icon = "ASIN\AEGIS\addons\aegis_ui\ui\aegis_icon.paa";
		shadow = true;
		scope = 2;
		color[] = {1, 1, 1, 1};
		size = 32;
	};

};