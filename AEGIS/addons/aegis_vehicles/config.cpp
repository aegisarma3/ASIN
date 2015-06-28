enum {
  OrdinalEnum = 2,
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

class DefaultEventhandlers;
class CfgPatches {
    class ADDON {
        units[] = {"AEGIS_Offroad_Transport","AEGIS_Offroad_Armed","AEGIS_Offroad_Cargo","AEGIS_MH9"};
       	weapons[] = {};
        requiredVersion = "0.1";
        requiredAddons[] = {"A3_Soft_F"};
        author[] = {"Toaster"};
        authorUrl = "https://aegis.zonadecombate.com.br";
       	version = "0.3";
    };
};


// oooooo     oooo oooooooooooo ooooo   ooooo ooooo   .oooooo.   ooooo        oooooooooooo  .oooooo..o 
//  `888.     .8'  `888'     `8 `888'   `888' `888'  d8P'  `Y8b  `888'        `888'     `8 d8P'    `Y8 
//   `888.   .8'    888          888     888   888  888           888          888         Y88bo.      
//    `888. .8'     888oooo8     888ooooo888   888  888           888          888oooo8     `"Y8888o.  
//     `888.8'      888    "     888     888   888  888           888          888    "         `"Y88b 
//      `888'       888       o  888     888   888  `88b    ooo   888       o  888       o oo     .d8P 
//       `8'       o888ooooood8 o888o   o888o o888o  `Y8bood8P'  o888ooooood8 o888ooooood8 8""88888P'  

 
class UniformSlotInfo
{
  slotType = 0;
  linkProxy = "-";
};
class CfgVehicles
{
  class Heli_Light_01_unarmed_base_F;
  class Offroad_01_base_F;
  class Offroad_01_armed_base_F;
  class B_Heli_Light_01_F: Heli_Light_01_unarmed_base_F
  {
    class EventHandlers;
  };
  class C_Offroad_01_F: Offroad_01_base_F
  {
    class EventHandlers;
  };
  class B_G_Offroad_01_armed_F: Offroad_01_armed_base_F
  {
    class EventHandlers;
  };
  class AEGIS_MH9: B_Heli_Light_01_F
  {
    displayName = "[AEGIS] MH-9";
    side = 1;
    faction = "AEGIS";
    author = "Toaster";
    forceInGarage = 1;
    crew = "AEGIS_Operador";
    hiddenSelectionsTextures[] = {"ASIN\AEGIS\addons\aegis_vehicles\data\littlebird\Heli_light01_ext_pmc_co.paa","ASIN\AEGIS\addons\aegis_vehicles\data\littlebird\heli_light01_int_pmc_co.paa"};
    class EventHandlers: EventHandlers
    {
      init = "(_this select 0) execVM ""ASIN\AEGIS\addons\aegis_vehicles\scripts\heli.sqf""";
    };
  };
  class AEGIS_Offroad_Transport: C_Offroad_01_F
  {
    scope = 2;
    side = 1;
    author = "Toaster";
    forceInGarage = 1;
    faction = "AEGIS";
    displayName = "[AEGIS] Offroad Transporte";
    crew = "AEGIS_Operador";
    typicalCargo[] = {"AEGIS_Operador"};
    enableGPS = 1;
    transportMaxBackpacks = 6;
    hiddenSelectionsTextures[] = {"ASIN\AEGIS\addons\aegis_vehicles\data\offroad\offroad_01.paa","ASIN\AEGIS\addons\aegis_vehicles\data\offroad\offroad_01.paa"};
    
    class EventHandlers: EventHandlers
    {
      init = "(_this select 0) execVM ""ASIN\AEGIS\addons\aegis_vehicles\scripts\randomize.sqf""";
    };
    class TransportItems
    {
      class _xx_ToolKit
      {
        name = "ToolKit";
        count = 1;
      };
      class _xx_Medikit
      {
        name = "Medikit";
        count = 1;
      };
      class _xx_FirstAidKit
      {
        name = "FirstAidKit";
        count = 10;
      };
    };
  };
  class AEGIS_Offroad_Armed: B_G_Offroad_01_armed_F
  {
    scope = 2;
    side = 1;
    author = "Toaster";
    forceInGarage = 1;
    faction = "AEGIS";
    displayName = "[AEGIS] Offroad Armada";
    crew = "AEGIS_Operador";
    typicalCargo[] = {"AEGIS_Operador"};
    enableGPS = 1;
    mapSize = 5;
    transportMaxBackpacks = 6;
    hiddenSelectionsTextures[] = {"ASIN\AEGIS\addons\aegis_vehicles\data\offroad\offroad_01.paa","ASIN\AEGIS\addons\aegis_vehicles\data\offroad\offroad_01.paa"};
    class EventHandlers: EventHandlers
    {
      init = "(_this select 0) execVM ""ASIN\AEGIS\addons\aegis_vehicles\scripts\randomize.sqf""";
    };
    class TransportItems
    {
      class _xx_ToolKit
      {
        name = "ToolKit";
        count = 1;
      };
      class _xx_Medikit
      {
        name = "Medikit";
        count = 1;
      };
      class _xx_FirstAidKit
      {
        name = "FirstAidKit";
        count = 10;
      };
    };
  };
  class AEGIS_Offroad_Cargo: C_Offroad_01_F
  {
    scope = 2;
    side = 1;
    author = "Toaster";
    forceInGarage = 1;
    faction = "AEGIS";
    displayName = "[AEGIS] Offroad Cargo";
    crew = "AEGIS_Operador";
    typicalCargo[] = {"AEGIS_Operador"};
    enableGPS = 1;
    transportSoldier = 1;
    cargoAction[] = {"passenger_low01"};
    transportMaxBackpacks = 6;
    hiddenSelectionsTextures[] = {"ASIN\AEGIS\addons\aegis_vehicles\data\offroad\offroad_01.paa","ASIN\AEGIS\addons\aegis_vehicles\data\offroad\offroad_01.paa"};
    class EventHandlers: EventHandlers
    {
      init = "(_this select 0) execVM ""ASIN\AEGIS\addons\aegis_vehicles\scripts\randomize.sqf""";
    };
    class TransportItems
    {
      class _xx_ToolKit
      {
        name = "ToolKit";
        count = 1;
      };
      class _xx_Medikit
      {
        name = "Medikit";
        count = 1;
      };
      class _xx_FirstAidKit
      {
        name = "FirstAidKit";
        count = 10;
      };
    };
  };
};
