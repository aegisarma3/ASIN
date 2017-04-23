#define _ARMA_


enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};


class CfgPatches
{
	class aegis_main
	{
		author = "Toaster";
		name = "AEGIS - Official Mod";
		url = "http://aegisgroup.com.br";
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgMods
{
	class Mod_Base;
	class AEGISmod: Mod_Base
	{
		picture = "\aegis_main\images\logo_aegis.paa";
		logo = "\aegis_main\images\logo_aegis_small.paa";
		logoOver = "\aegis_main\images\logo_aegis_small.paa";
		logoSmall = "\aegis_main\images\logo_aegis_small.paa";
		tooltip = "AEGIS";
		tooltipOwned = "AEGIS PMC";
		action = "http://aegisgroup.com.br";
		dlcColor[] = {0.69,0.25,0.12,1};
		overview = "A collection of uniforms and vehicles for the AEGIS units.";
		hideName = 1;
		hidePicture = 0;
		name = "AEGIS - Official Mod";
		author = "Toaster";
		overviewPicture = "\aegis_main\images\logo_aegis_desc.paa";
		dir = "AEGISmod";

		class Features{};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class A3_Mod
		{
			list[] = {"aegis_main","aegis_uniforms","aegis_units","aegis_vehicles","aegis_ui"};
		};
	};
};
