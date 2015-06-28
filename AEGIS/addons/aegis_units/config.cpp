


class CfgPatches {
    class ADDON {
        units[] = {"AEGIS_Operador"};
       	weapons[] = {"U_AEGIS_BLK_POLO_JEANS"};
        requiredVersion = "0.1";
        requiredAddons[] = {"A3_Characters_F","A3_Characters_F_Beta","A3_Characters_F_Gamma","A3_Characters_F_EPA","A3_Characters_F_EPB"};
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

class UniformSlotInfo
{
  slotType = 0;
  linkProxy = "-";
};


class CfgFactionClasses
{
  class AEGIS
  {
    displayName = "AEGIS (PMC)";
    priority = 1;
    side = 1;
    icon = "ASIN\AEGIS\addons\aegis_units\ui\aegis_icon.paa";
  };
};




class CfgVehicles
{
	class SoldierWB;
  class B_Soldier_02_f;
  class I_Soldier_base_F: SoldierWB
  {
    class EventHandlers;
  };
  class B_Soldier_base_F: SoldierWB
  {
    class EventHandlers;
  };
  class B_Soldier_03_f: B_Soldier_base_F
  {
    class EventHandlers;
  };




  class U_AEGIS_BLK_POLO_JEANS_BASE: B_Soldier_base_F
  {
    _generalMacro = "B_Soldier_03_f";
    scope = 1;
    modelsides[] = {3,2,1,0};
    author = "Toaster";
    side = 1;
    displayName = "Guarda Costas";
    faction = "AEGIS";
    vehicleClass = "Men";
    model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
    nakedUniform = "U_BasicBody";
    uniformClass = "U_AEGIS_BLK_POLO_JEANS";
    hiddenSelectionsTextures[] = {"ASIN\AEGIS\addons\aegis_uniforms\data\uniforms\U_aegis_blk_polo_jeans.paa"};
    Items[] = {"FirstAidKit"};
    RespawnItems[] = {"FirstAidKit"};
    class Wounds
    {
      tex[] = {};
      mat[] = {"A3\Characters_F\Civil\Data\c_poloshirtpants.rvmat","A3\Characters_F\Civil\Data\c_poloshirtpants_injury.rvmat","A3\Characters_F\Civil\Data\c_poloshirtpants_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
    };
    
  };



  class AEGIS_Operador: U_AEGIS_BLK_POLO_JEANS_BASE
  {
    scope = 2;
    author = "Toaster";
    displayName = "Operador";
    nakedUniform = "U_BasicBody";
    Items[] = {"FirstAidKit"};
    RespawnItems[] = {"FirstAidKit"};
    weapons[] = {"arifle_MX_Black_F","hgun_P07_F","Throw","Put","Binocular"};
    respawnWeapons[] = {"arifle_MX_Black_F","hgun_P07_F","Throw","Put","Binocular"};
    magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","HandGrenade","HandGrenade","HandGrenade","HandGrenade"};
    respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","HandGrenade","HandGrenade","HandGrenade","HandGrenade"};
    linkeditems[] = {"G_Shades_Black","V_aegis_carrier_lite_blk","H_Cap_pmc","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnlinkeditems[] = {"G_Shades_Black","V_aegis_carrier_lite_blk","H_Cap_pmc","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    class EventHandlers: EventHandlers
    {
      //init = "[(_this select 0),'COMBAT'] call BG_fnc_InitPMC";
    };
  };





}; // END VEHICLES
 


































































// oooooo   oooooo     oooo oooooooooooo       .o.       ooooooooo.     .oooooo.   ooooo      ooo  .oooooo..o 
//  `888.    `888.     .8'  `888'     `8      .888.      `888   `Y88.  d8P'  `Y8b  `888b.     `8' d8P'    `Y8 
//   `888.   .8888.   .8'    888             .8"888.      888   .d88' 888      888  8 `88b.    8  Y88bo.      
//    `888  .8'`888. .8'     888oooo8       .8' `888.     888ooo88P'  888      888  8   `88b.  8   `"Y8888o.  
//     `888.8'  `888.8'      888    "      .88ooo8888.    888         888      888  8     `88b.8       `"Y88b 
//      `888'    `888'       888       o  .8'     `888.   888         `88b    d88'  8       `888  oo     .d8P 
//       `8'      `8'       o888ooooood8 o88o     o8888o o888o         `Y8bood8P'  o8o        `8  8""88888P'                                                                                          

                                                                   
class cfgWeapons
{
	
};