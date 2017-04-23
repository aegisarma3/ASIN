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
    class aegis_vehicles {
        units[] = {"AEGIS_Offroad_Transport","AEGIS_Offroad_Armed","AEGIS_Offroad_Cargo","AEGIS_MH6M"};
       	weapons[] = {};
        requiredVersion = "0.1";
        requiredAddons[] = {"A3_Soft_F"};
        author = "Toaster";
        authorUrl = "http://aegisgroup.com.br/";
        version = "1.0";
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
  class Offroad_01_base_F;
  class Offroad_01_armed_base_F;

  class C_Offroad_01_F: Offroad_01_base_F
  {
    class EventHandlers;
  };
  class B_G_Offroad_01_armed_F: Offroad_01_armed_base_F
  {
    class EventHandlers;
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
    hiddenSelectionsTextures[] = {"\aegis_vehicles\data\offroad\offroad_01.paa","\aegis_vehicles\data\offroad\offroad_01.paa"};

    class EventHandlers: EventHandlers
    {
      init = "_this select 0 setVariable [""BIS_enableRandomization"", false];";
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
    hiddenSelectionsTextures[] = {"\aegis_vehicles\data\offroad\offroad_01.paa","\aegis_vehicles\data\offroad\offroad_01.paa"};
    class EventHandlers: EventHandlers
    {
      init = "_this select 0 setVariable [""BIS_enableRandomization"", false];";
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
    hiddenSelectionsTextures[] = {"\aegis_vehicles\data\offroad\offroad_01.paa","\aegis_vehicles\data\offroad\offroad_01.paa"};
    class EventHandlers: EventHandlers
    {
      init = "_this select 0 setVariable [""BIS_enableRandomization"", false];";
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
