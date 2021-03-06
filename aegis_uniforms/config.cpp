


class CfgPatches {
    class aegis_uniforms {
        units[] = {};
       	weapons[] = {"U_AEGIS_BLK_POLO_JEANS_BASE","U_AEGIS_BLUE_POLO_JEANS_BASE","U_AEGIS_WHITE_POLO_JEANS_BASE","U_AEGIS_BLUEPLAID_POLO_JEANS_BASE","U_AEGIS_WHITE_TAN_BASE","U_AEGIS_WHITE_OLIVE_BASE","U_AEGIS_WHITE_BLACK_BASE","U_AEGIS_BLK_TAN_BASE","U_AEGIS_BLK_OLIVE_BASE","U_AEGIS_TSHIRT_BLK_UCP_BASE","U_AEGIS_TSHIRT_BLK_BASE"};
        requiredVersion = "0.1";
        requiredAddons[] = {"A3_Characters_F","A3_Characters_F_Beta","A3_Characters_F_Gamma","A3_Characters_F_EPA","A3_Characters_F_EPB"};
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


class CfgVehicles
{
	class B_Soldier_base_F;
	class I_Soldier_base_F;
	class I_G_Soldier_base_F;









// ██╗   ██╗███╗   ██╗██╗███████╗ ██████╗ ██████╗ ███╗   ███╗███████╗
// ██║   ██║████╗  ██║██║██╔════╝██╔═══██╗██╔══██╗████╗ ████║██╔════╝
// ██║   ██║██╔██╗ ██║██║█████╗  ██║   ██║██████╔╝██╔████╔██║███████╗
// ██║   ██║██║╚██╗██║██║██╔══╝  ██║   ██║██╔══██╗██║╚██╔╝██║╚════██║
// ╚██████╔╝██║ ╚████║██║██║     ╚██████╔╝██║  ██║██║ ╚═╝ ██║███████║
//  ╚═════╝ ╚═╝  ╚═══╝╚═╝╚═╝      ╚═════╝ ╚═╝  ╚═╝╚═╝     ╚═╝╚══════╝


	// BODYGUARD
	class U_AEGIS_BLK_POLO_JEANS_BASE: B_Soldier_base_F
	{
		_generalMacro = "B_Soldier_03_f";
		scope = 1;
		modelsides[] = {3,2,1,0};
		author = "AEGIS Team";
		side = 1;
		displayName = "Guarda Costas";
		faction = "AEGIS";
		vehicleClass = "Men";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		nakedUniform = "U_BasicBody";
		uniformClass = "U_AEGIS_BLK_POLO_JEANS";
		hiddenSelectionsTextures[] = {"\aegis_uniforms\data\uniforms\U_aegis_blk_polo_jeans.paa"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Civil\Data\c_poloshirtpants.rvmat","A3\Characters_F\Civil\Data\c_poloshirtpants_injury.rvmat","A3\Characters_F\Civil\Data\c_poloshirtpants_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};

	};

	class U_AEGIS_BLUE_POLO_JEANS_BASE: U_AEGIS_BLK_POLO_JEANS_BASE
	{
		scope = 1;
		author = "AEGIS Team";
		displayName = "Guarda Costas 2";
		nakedUniform = "U_BasicBody";
		uniformClass = "U_AEGIS_BLUE_POLO_JEANS";
		hiddenSelectionsTextures[] = {"\aegis_uniforms\data\uniforms\U_aegis_blue_polo_jeans.paa"};
	};



	class U_AEGIS_WHITE_POLO_JEANS_BASE: U_AEGIS_BLK_POLO_JEANS_BASE
	{
		scope = 1;
		author = "AEGIS Team";
		displayName = "Guarda Costas 3";
		nakedUniform = "U_BasicBody";
		uniformClass = "U_AEGIS_WHITE_POLO_JEANS";
		hiddenSelectionsTextures[] = {"\aegis_uniforms\data\uniforms\U_aegis_white_polo_jeans.paa"};
	};



	class U_AEGIS_BLUEPLAID_POLO_JEANS_BASE: U_AEGIS_BLK_POLO_JEANS_BASE
	{
		scope = 1;
		author = "AEGIS Team";
		displayName = "Guarda Costas 3";
		nakedUniform = "U_BasicBody";
		uniformClass = "U_AEGIS_BLUEPLAID_POLO_JEANS";
		hiddenSelectionsTextures[] = {"\aegis_uniforms\data\uniforms\U_aegis_blueplaid_polo_jeans.paa"};
	};



	class U_AEGIS_WHITE_TAN_BASE: B_Soldier_base_F
	{
		scope = 1;
		model = "\A3\Characters_F_EPB\Guerrilla\ig_guerrilla5_1.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\aegis_uniforms\data\uniforms\U_aegis_pmc_white.paa","\aegis_uniforms\data\uniforms\U_aegis_clothing_blktan.paa"};
		hiddenSelectionsMaterials[] = {"","\aegis_uniforms\data\uniforms\U_aegis_rollup_clothing.rvmat"};
	};


	class U_AEGIS_WHITE_OLIVE_BASE: B_Soldier_base_F
	{
		scope = 1;
		model = "\A3\Characters_F_EPB\Guerrilla\ig_guerrilla5_1.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\aegis_uniforms\data\uniforms\U_aegis_pmc_white.paa","\aegis_uniforms\data\uniforms\U_aegis_clothing_blkod.paa"};
		hiddenSelectionsMaterials[] = {"","\aegis_uniforms\data\uniforms\U_aegis_rollup_clothing.rvmat"};
	};


	class U_AEGIS_WHITE_BLACK_BASE: B_Soldier_base_F
	{
		scope = 1;
		model = "\A3\Characters_F_EPB\Guerrilla\ig_guerrilla5_1.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\aegis_uniforms\data\uniforms\U_aegis_pmc_white.paa","\aegis_uniforms\data\uniforms\U_aegis_blkblk_trans.paa"};
		hiddenSelectionsMaterials[] = {"","\aegis_uniforms\data\uniforms\U_aegis_rollup_clothing.rvmat"};
	};


	class U_AEGIS_BLK_TAN_BASE: B_Soldier_base_F
	{
		scope = 1;
		model = "\A3\Characters_F_EPB\Guerrilla\ig_guerrilla5_1.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_gamma\Guerrilla\Data\ig_guerrilla2_1_co.paa","\aegis_uniforms\data\uniforms\U_aegis_clothing_blktan.paa"};
		hiddenSelectionsMaterials[] = {"","\aegis_uniforms\data\uniforms\U_aegis_rollup_clothing.rvmat"};
	};


	class U_AEGIS_BLK_OLIVE_BASE: B_Soldier_base_F
	{
		scope = 1;
		model = "\A3\Characters_F_EPB\Guerrilla\ig_guerrilla5_1.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_gamma\Guerrilla\Data\ig_guerrilla2_1_co.paa","\aegis_uniforms\data\uniforms\U_aegis_clothing_blkod.paa"};
		hiddenSelectionsMaterials[] = {"","\aegis_uniforms\data\uniforms\U_aegis_rollup_clothing.rvmat",""};
	};



	class U_AEGIS_TSHIRT_BLK_UCP_BASE: B_Soldier_base_F
	{
		scope = 1;
		model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		hiddenSelections[] = {"camo","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\aegis_uniforms\data\uniforms\U_aegis_tshirt_UCP.paa","\a3\characters_f\Common\Data\basicbody_black_co.paa"};
		hiddenSelectionsMaterials[] = {"\aegis_uniforms\data\uniforms\U_aegis_rollup_clothing.rvmat","\a3\characters_f\Common\Data\basicbody.rvmat"};
	};



	class U_AEGIS_TSHIRT_BLK_BASE: B_Soldier_base_F
	{
		scope = 1;
		model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		hiddenSelections[] = {"camo","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\aegis_uniforms\data\uniforms\U_aegis_tshirt_BLK.paa","\a3\characters_f\Common\Data\basicbody_black_co.paa"};
		hiddenSelectionsMaterials[] = {"\aegis_uniforms\data\uniforms\U_aegis_rollup_clothing.rvmat","\a3\characters_f\Common\Data\basicbody.rvmat"};
	};



	class U_AEGIS_UNIFORM_BLK_BASE: I_Soldier_base_F
	{
		scope = 1;
		modelsides[] = {3,2,1,0};
		author = "AEGIS Team";
		nakedUniform = "U_BasicBody";
		uniformClass = "U_AEGIS_UNIFORM_BLK_BASE";
		hiddenSelectionsTextures[] = {"\aegis_uniforms\data\uniforms\U_PG_Blk.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
	};


	class U_AEGIS_UNIFORM_TAN_BASE: I_Soldier_base_F
	{
		scope = 1;
		modelsides[] = {3,2,1,0};
		author = "AEGIS Team";
		nakedUniform = "U_BasicBody";
		uniformClass = "U_AEGIS_UNIFORM_TAN_BASE";
		hiddenSelectionsTextures[] = {"\aegis_uniforms\data\uniforms\U_PG_Blk_Tan.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
	};


	class U_AEGIS_UNIFORM_OLIVE_BASE: I_Soldier_base_F
	{
		scope = 1;
		modelsides[] = {3,2,1,0};
		author = "AEGIS Team";
		nakedUniform = "U_BasicBody";
		uniformClass = "U_AEGIS_UNIFORM_OLIVE_BASE";
		hiddenSelectionsTextures[] = {"\aegis_uniforms\data\uniforms\U_PG_Blk_Grn.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
	};


	class U_AEGIS_GUER_OLIVE_BASE: I_G_Soldier_base_F
	{

		scope = 1;

		author = "AEGIS Team";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_Bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
		uniformClass = "U_AEGIS_GUER_OLIVE_BASE";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\aegis_uniforms\data\uniforms\U_aegis_guer_olive.paa"};
	};




	class U_AEGIS_GUER_BLK_BASE: I_G_Soldier_base_F
	{

		scope = 1;

		author = "AEGIS Team";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_Bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
		uniformClass = "U_AEGIS_GUER_BLK_BASE";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\aegis_uniforms\data\uniforms\U_aegis_guer_blk.paa"};
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
	class Uniform_Base;
	class UniformItem;
	class ItemCore;
	class HeadgearItem;
	class Vest_Base;
	class VestItem;
	class H_Beret_02;
	class H_Booniehat_khk;
	class H_Cap_red;
	class H_MilCap_oucamo;















	// ██╗   ██╗███╗   ██╗██╗███████╗ ██████╗ ██████╗ ███╗   ███╗███████╗
	// ██║   ██║████╗  ██║██║██╔════╝██╔═══██╗██╔══██╗████╗ ████║██╔════╝
	// ██║   ██║██╔██╗ ██║██║█████╗  ██║   ██║██████╔╝██╔████╔██║███████╗
	// ██║   ██║██║╚██╗██║██║██╔══╝  ██║   ██║██╔══██╗██║╚██╔╝██║╚════██║
	// ╚██████╔╝██║ ╚████║██║██║     ╚██████╔╝██║  ██║██║ ╚═╝ ██║███████║
	//  ╚═════╝ ╚═╝  ╚═══╝╚═╝╚═╝      ╚═════╝ ╚═╝  ╚═╝╚═╝     ╚═╝╚══════╝

	class U_AEGIS_BLK_POLO_JEANS: Uniform_Base
	{
		scope = 2;
		author = "AEGIS Team";
		displayName = "[AEGIS] Polo Preta";
		picture = "\aegis_uniforms\ui\aegis_icon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "U_AEGIS_BLK_POLO_JEANS_BASE";
			containerClass = "Supply40";
			mass = 60;
		};
	};

	class U_AEGIS_BLUE_POLO_JEANS: Uniform_Base
	{
		scope = 2;
		author = "AEGIS Team";
		displayName = "[AEGIS] Polo Azul";
		picture = "\aegis_uniforms\ui\aegis_icon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "U_AEGIS_BLUE_POLO_JEANS_BASE";
			containerClass = "Supply40";
			mass = 60;
		};
	};

	class U_AEGIS_WHITE_POLO_JEANS: Uniform_Base
	{
		scope = 2;
		author = "AEGIS Team";
		displayName = "[AEGIS] Polo Branca";
		picture = "\aegis_uniforms\ui\aegis_icon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "U_AEGIS_WHITE_POLO_JEANS_BASE";
			containerClass = "Supply40";
			mass = 60;
		};
	};

	class U_AEGIS_BLUEPLAID_POLO_JEANS: Uniform_Base
	{
		scope = 2;
		author = "AEGIS Team";
		displayName = "[AEGIS] Junina Tática";
		picture = "\aegis_uniforms\ui\aegis_icon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "U_AEGIS_BLUEPLAID_POLO_JEANS_BASE";
			containerClass = "Supply40";
			mass = 60;
		};
	};

	class U_AEGIS_WHITE_TAN: Uniform_Base
	{
		scope = 2;
		displayName = "[AEGIS] Dobrada Branca";
		picture = "\aegis_uniforms\ui\aegis_icon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "U_AEGIS_WHITE_TAN_BASE";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class U_AEGIS_WHITE_OLIVE: Uniform_Base
	{
		scope = 2;
		displayName = "[AEGIS] Dobrada Branca Verde";
		picture = "\aegis_uniforms\ui\aegis_icon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "U_AEGIS_WHITE_OLIVE_BASE";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class U_AEGIS_WHITE_BLACK: Uniform_Base
	{
		scope = 2;
		displayName = "[AEGIS] Dobrada Branca Preta";
		picture = "\aegis_uniforms\ui\aegis_icon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "U_AEGIS_WHITE_BLACK_BASE";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class U_AEGIS_BLK_TAN: Uniform_Base
	{
		scope = 2;
		displayName = "[AEGIS] Dobrada Preta Bege";
		picture = "\aegis_uniforms\ui\aegis_icon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "U_AEGIS_BLK_TAN_BASE";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class U_AEGIS_BLK_OLIVE: Uniform_Base
	{
		scope = 2;
		displayName = "[AEGIS] Preta Verde";
		picture = "\aegis_uniforms\ui\aegis_icon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "U_AEGIS_BLK_OLIVE_BASE";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class U_AEGIS_TSHIRT_BLK_UCP: Uniform_Base
	{
		scope = 2;
		displayName = "[AEGIS] Camiseta Preta + UCP";
		picture = "\aegis_uniforms\ui\aegis_icon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "U_AEGIS_TSHIRT_BLK_UCP_BASE";
			containerClass = "Supply40";
			mass = 40;
		};
	};



	class U_AEGIS_TSHIRT_BLK: Uniform_Base
	{
		scope = 2;
		displayName = "[AEGIS] Camiseta Preta";
		picture = "\aegis_uniforms\ui\aegis_icon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "U_AEGIS_TSHIRT_BLK_BASE";
			containerClass = "Supply40";
			mass = 40;
		};
	};


	class U_AEGIS_UNIFORM_BLK: Uniform_Base
	{
		scope = 2;
		author = "AEGIS Team";
		displayName = "[AEGIS] Uniforme Preto";
		picture = "\aegis_uniforms\ui\icon_U_PG_RS_Blk.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "U_AEGIS_UNIFORM_BLK_BASE";
			containerClass = "Supply40";
			mass = 60;
		};
	};


	class U_AEGIS_UNIFORM_TAN: Uniform_Base
	{
		scope = 2;
		author = "AEGIS Team";
		displayName = "[AEGIS] Uniforme Deserto";
		picture = "\aegis_uniforms\ui\icon_U_PG_RS_Blk_Tan.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "U_AEGIS_UNIFORM_TAN_BASE";
			containerClass = "Supply40";
			mass = 60;
		};
	};


	class U_AEGIS_UNIFORM_OLIVE: Uniform_Base
	{
		scope = 2;
		author = "AEGIS Team";
		displayName = "[AEGIS] Uniforme Oliva";
		picture = "\aegis_uniforms\ui\icon_U_PG_RS_Blk_Grn.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "U_AEGIS_UNIFORM_OLIVE_BASE";
			containerClass = "Supply40";
			mass = 60;
		};
	};



	class U_AEGIS_GUER_OLIVE: Uniform_Base
	{
		author = "AEGIS Team";
		scope = 2;
		displayName = "[AEGIS] Uniforme Casual Olive";
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\aegis_uniforms\data\uniforms\U_aegis_guer_olive.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "U_AEGIS_GUER_OLIVE_BASE";
			containerClass = "Supply30";
			mass = 30;
		};
	};



	class U_AEGIS_GUER_BLK: Uniform_Base
	{
		author = "AEGIS Team";
		scope = 2;
		displayName = "[AEGIS] Uniforme Casual Preta";
		picture = "\aegis_uniforms\ui\icon_U_G_Guerrilla_blk_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\aegis_uniforms\data\uniforms\U_aegis_guer_blk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "U_AEGIS_GUER_BLK_BASE";
			containerClass = "Supply30";
			mass = 30;
		};
	};












	// ██╗  ██╗███████╗ █████╗ ██████╗  ██████╗ ███████╗ █████╗ ██████╗
	// ██║  ██║██╔════╝██╔══██╗██╔══██╗██╔════╝ ██╔════╝██╔══██╗██╔══██╗
	// ███████║█████╗  ███████║██║  ██║██║  ███╗█████╗  ███████║██████╔╝
	// ██╔══██║██╔══╝  ██╔══██║██║  ██║██║   ██║██╔══╝  ██╔══██║██╔══██╗
	// ██║  ██║███████╗██║  ██║██████╔╝╚██████╔╝███████╗██║  ██║██║  ██║
	// ╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝╚═════╝  ╚═════╝ ╚══════╝╚═╝  ╚═╝╚═╝  ╚═╝

	class H_Capbw_pmc: ItemCore
	{
		author = "AEGIS Team";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[AEGIS] Boné Preto Virado";
		picture = "\aegis_uniforms\ui\aegis_icon.paa";
		model = "\aegis_uniforms\data\headgear\H_capb_backwards.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\aegis_uniforms\data\headgear\H_capb_pmc.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 2;
			uniformModel = "\aegis_uniforms\data\headgear\H_capb_backwards.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
	};

	class H_Capbw_tan_pmc: H_Capbw_pmc
	{
		author = "AEGIS Team";
		displayName = "[AEGIS] Boné Bege Virado";
		picture = "\aegis_uniforms\ui\aegis_icon.paa";
		hiddenSelectionsTextures[] = {"\aegis_uniforms\data\headgear\H_capb_tan_pmc.paa"};
	};



	class H_Cap_pmc: H_Cap_red
	{
		author = "AEGIS Team";
		displayName = "[AEGIS] Boné Preto";
		picture = "\aegis_uniforms\ui\aegis_icon.paa";
		model = "\A3\Characters_F\common\capb";
		hiddenSelectionsTextures[] = {"\aegis_uniforms\data\headgear\H_capb_pmc.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 3;
			uniformModel = "\A3\Characters_F\common\capb.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo"};
			allowedSlots[] = {801,901,701,605};
			armor = 0;
			passThrough = 1;
		};
	};


	class H_Cap_tan_pmc: H_Cap_pmc
	{
		author = "AEGIS Team";
		displayName = "[AEGIS] Boné Bege";
		picture = "\aegis_uniforms\ui\aegis_icon.paa";
		hiddenSelectionsTextures[] = {"\aegis_uniforms\data\headgear\H_capb_tan_pmc.paa"};
	};


	class H_Booniehat_blk: H_Booniehat_khk
	{
		author = "AEGIS Team";
		displayName = "[AEGIS] Booniehat Preto";
		picture = "\aegis_uniforms\ui\aegis_icon.paa";
		hiddenSelectionsTextures[] = {"\aegis_uniforms\data\headgear\H_booniehat_blk_co.paa"};
	};


	class H_Beret_AEGIS_clean: H_Beret_02
	{
		author = "AEGIS Team";
		displayName = "[AEGIS] Boina Preta";
		picture = "\aegis_uniforms\ui\aegis_icon.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelectionsTextures[] = {"\aegis_uniforms\data\headgear\H_beret_black.paa"};

	};



	class H_Cap_AEGIS_blk: H_MilCap_oucamo
	{
		scope = 2;
		scopeCurator = 2;
		author = "AEGIS Team";
		_generalMacro = "H_Cap_AEGIS_blk";
		displayName = "[AEGIS] Cap Preto";
		picture = "\aegis_uniforms\ui\aegis_icon.paa";
		hiddenSelectionsTextures[] = {"\aegis_uniforms\data\headgear\H_cap_AEGIS_blk.paa"};
	};

	class H_Cap_AEGIS_tan: H_MilCap_oucamo
	{
		scope = 2;
		scopeCurator = 2;
		author = "AEGIS Team";
		_generalMacro = "H_Cap_AEGIS_tan";
		displayName = "[AEGIS] Cap Deserto";
		picture = "\aegis_uniforms\ui\aegis_icon.paa";
		hiddenSelectionsTextures[] = {"\aegis_uniforms\data\headgear\H_cap_AEGIS_tan.paa"};
	};



	// ██╗   ██╗███████╗███████╗████████╗███████╗
	// ██║   ██║██╔════╝██╔════╝╚══██╔══╝██╔════╝
	// ██║   ██║█████╗  ███████╗   ██║   ███████╗
	// ╚██╗ ██╔╝██╔══╝  ╚════██║   ██║   ╚════██║
	//  ╚████╔╝ ███████╗███████║   ██║   ███████║
	//   ╚═══╝  ╚══════╝╚══════╝   ╚═╝   ╚══════╝

	class V_aegis_carrier_lite_blk: ItemCore
	{
		author = "AEGIS Team";
		_generalMacro = "V_aegis_carrier_lite_blk";
		displayName = "[AEGIS] Colete Leve (Preto)";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		picture = "\aegis_uniforms\ui\aegis_icon.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\aegis_uniforms\data\vests\V_aegis_carrier_blk.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			hiddenSelections[] = {"camo","insignia"};
			containerClass = "Supply140";
			mass = 80;
      class HitpointsProtectionInfo
			{
        class Chest
				{
					HitpointName = "HitChest";
					armor = 16;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 16;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};

		};
	};


	class V_aegis_carrier_rig_blk: ItemCore
	{
		author = "AEGIS Team";
		_generalMacro = "V_aegis_carrier_rig_blk";
		displayName = "[AEGIS] Colete Médio (Preto)";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		picture = "\aegis_uniforms\ui\aegis_icon.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\aegis_uniforms\data\vests\V_aegis_carrier_blk.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			hiddenSelections[] = {"camo","insignia"};
			containerClass = "Supply140";
			mass = 100;
      class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};


	class V_aegis_carrier_lite_tan: ItemCore
	{
		author = "AEGIS Team";
		_generalMacro = "V_aegis_carrier_lite_tan";
		displayName = "[AEGIS] Colete Leve (Deserto)";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		picture = "\aegis_uniforms\ui\aegis_icon.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\aegis_uniforms\data\vests\V_aegis_carrier_tan.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			hiddenSelections[] = {"camo","insignia"};
			containerClass = "Supply140";
			mass = 80;
      class HitpointsProtectionInfo
			{
        class Chest
				{
					HitpointName = "HitChest";
					armor = 16;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 16;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};


	class V_aegis_carrier_rig_tan: ItemCore
	{
		author = "AEGIS Team";
		_generalMacro = "V_aegis_carrier_rig_tan";
		displayName = "[AEGIS] Colete Médio (Deserto)";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		picture = "\aegis_uniforms\ui\aegis_icon.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\aegis_uniforms\data\vests\V_aegis_carrier_tan.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			hiddenSelections[] = {"camo","insignia"};
			containerClass = "Supply140";
			mass = 100;
      /*class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 8;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 8;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 24;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 24;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 24;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};*/




      class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};




		};
	};





	class V_aegis_carrier_lite_wood: ItemCore
	{
	author = "AEGIS Team";
	_generalMacro = "V_aegis_carrier_lite_wood";
	displayName = "[AEGIS] Colete Leve (Floresta)";
	scope = 2;
	weaponPoolAvailable = 1;
	allowedSlots[] = {901};
	picture = "\aegis_uniforms\ui\aegis_icon.paa";
	hiddenSelections[] = {"camo","insignia"};
	hiddenSelectionsTextures[] = {"\aegis_uniforms\data\vests\V_aegis_carrier_wood.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			hiddenSelections[] = {"camo","insignia"};
			containerClass = "Supply140";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 16;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 16;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};

		};
	};





	class V_aegis_carrier_rig_wood: ItemCore
	{
	author = "AEGIS Team";
	_generalMacro = "V_aegis_carrier_rig_wood";
	displayName = "[AEGIS] Colete Médio (Floresta)";
	scope = 2;
	weaponPoolAvailable = 1;
	allowedSlots[] = {901};
	picture = "\aegis_uniforms\ui\aegis_icon.paa";
	hiddenSelections[] = {"camo","insignia"};
	hiddenSelectionsTextures[] = {"\aegis_uniforms\data\vests\V_aegis_carrier_wood.paa"};
		class ItemInfo: VestItem
		{
		  uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		  hiddenSelections[] = {"camo","insignia"};
		  containerClass = "Supply140";
		  mass = 100;

		class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};


}; // Final
