#define private		0
#define protected	1
#define public		2

#define true		1
#define false		0

class CfgVehicles
{
	class B_Soldier_base_F;
	class A3CN_Adax_LongSleeve : B_Soldier_base_F {
		Author = "JohnHansen/NFC3SPECTRO";
		scope = protected;
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = "Uniforme_AS1_Adax_ML";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"x\a3cn_uniforms\addons\apparel\data\adax_camo.paa"};
	};
	class A3CN_Adax_ShortSleeve : B_Soldier_base_F {
		Author = "JohnHansen/NFC3SPECTRO";
		scope = protected;
		model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass = "Uniforme_AS1_Adax_MD";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"x\a3cn_uniforms\addons\apparel\data\adax_camo.paa"};
	};
	class A3CN_Adax_Shirt : B_Soldier_base_F {
		Author = "JohnHansen/NFC3SPECTRO";
		scope = protected;
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		uniformClass = "Uniforme_AS5_Adax_C";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"x\a3cn_uniforms\addons\apparel\data\adax_camo.paa"};
	};
	class A3CN_AE2_Adax_T : B_CTRG_Soldier_base_F {
		Author = "JohnHansen/NFC3SPECTRO";
		scope = protected;
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		uniformClass = "Uniforme_AE2_Adax_T";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"x\a3cn_uniforms\addons\apparel\data\adax_camo.paa"};
	};
	class A3CN_AR1_Adax_ML : I_Soldier_base_F {
		Author = "JohnHansen/NFC3SPECTRO";
		scope = protected;
		model = "\A3\Characters_F_beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "Uniforme_AR1_Adax_ML";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"x\a3cn_uniforms\addons\apparel\data\adax_camo_guerrilla.paa"};
	};
	class A3CN_AR1_Adax_MD : I_Soldier_base_F {
		Author = "JohnHansen/NFC3SPECTRO";
		scope = protected;
		model = "\A3\Characters_F_beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "Uniforme_AR1_Adax_MD";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"x\a3cn_uniforms\addons\apparel\data\adax_camo_guerrilla.paa"};
	};
	class A3CN_AS2_Adax : I_Soldier_base_F {
		Author = "JohnHansen/NFC3SPECTRO";
		scope = protected;
		model = "\A3\Characters_F\BLUFOR\b_sniper.p3d";
		uniformClass = "Uniforme_AS2_Adax";
		hiddenSelections[] = {"Camo","Camo3","Insignia"};
		hiddenSelectionsTextures[] = {"x\a3cn_uniforms\addons\apparel\data\adax_camo_sniper.paa","x\a3cn_uniforms\addons\apparel\data\adax_suit.paa"};
	};
	class A3CN_AM1_Adax : B_diver_TL_F {
		Author = "JohnHansen/NFC3SPECTRO";
		scope = protected;
		model = "\A3\characters_F\common\diver_slotable.p3d";
		uniformClass = "Uniforme_AM1_Adax";
		hiddenSelections[] = {"Camo1","camo2", "insignia"};
		hiddenSelectionsTextures[] = {"x\a3cn_uniforms\addons\apparel\data\adax_camo_diver.paa","x\a3cn_uniforms\addons\apparel\data\adax_camo.paa"};
	};
	class A3CN_AP2_Adax : B_Soldier_base_F {
		Author = "JohnHansen/NFC3SPECTRO";
		scope = protected;
		model = "\A3\Characters_F\Common\coveralls.p3d";
		uniformClass = "Uniforme_AP2_Adax";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\A3CN\Uniformes\AP2\Adax\adax_camo.paa"};
	};
	class A3CN_AC1_Adax : B_Soldier_base_F {
		Author = "JohnHansen/NFC3SPECTRO";
		scope = protected;
		model = "\A3\Characters_F_beta\INDEP\ia_officer.p3d";
		uniformClass = "Uniforme_AC1_Adax";
		hiddenSelections[] = {"Camo1","Camo2", "insignia"};
		hiddenSelectionsTextures[] = {"\A3CN\Uniformes\AC1\Adax\adax_camo.paa","\A3CN\Uniformes\AC1\Adax\adax_calca.paa"};
	};
	class A3CN_AP1_Adax : B_Soldier_base_F {
		Author = "JohnHansen/NFC3SPECTRO";
		scope = protected;
		model = "\A3\Characters_F\Common\pilot_f.p3d";
		uniformClass = "Uniforme_AP1_Adax";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\A3CN\Uniformes\AP1\Adax\adax_camo.paa"};
	};
	class A3CN_AN1_Adax : B_Soldier_base_F {
		Author = "JohnHansen/NFC3SPECTRO";
		scope = protected;
		model = "\A3\Characters_F_bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
		uniformClass = "Uniforme_AN1_Adax";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\A3CN\Uniformes\AN1\Adax\adax_camo.paa"};
	};
	class A3CN_AS4_Adax : B_Soldier_base_F {
		Author = "JohnHansen/NFC3SPECTRO";
		scope = protected;
		model = "\A3\Characters_f_exp\Gendarmerie\B_GEN_Soldier_F.p3d";
		uniformClass = "Uninorme_AS4_Adax";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\A3CN\Uniformes\AS4\Adax\adax_camisa.paa","\A3CN\Uniformes\AS4\Adax\adax_camo.paa"};
	};
	class A3CN_AS3_Adax : B_Soldier_base_F {
		Author = "JohnHansen/NFC3SPECTRO";
		scope = protected;
		model = "\A3\Characters_f_mark\BLUFOR\b_fullghillie_f.p3d";
		uniformClass = "Uniforme_as3_Adax";
		hiddenSelections[] = {"Camo","Camo3","Insignia"};
		hiddenSelectionsTextures[] = {"\A3CN\Uniformes\AS3\Adax\adax_camo.paa","\A3CN\Uniformes\AS3\Adax\adax_suit.paa"};
	};
	class A3CN_AE1_Adax : O_V_Soldier_Viper_F {
		Author = "JohnHansen/NFC3SPECTRO";
		scope = protected;
		model = "\A3\Characters_f_exp\OPFOR\o_viper.p3d";
		uniformClass = "Uniforme_AE1_Adax";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\A3CN\Uniformes\AE1\Adax\adax_camo.paa"};
	};
	class A3CN_AB3_Adax : B_Soldier_base_F {
		Author = "JohnHansen/NFC3SPECTRO";
		scope = protected;
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		uniformClass = "Uniforme_AB3_Adax";
		hiddenSelections[] = {"Camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\A3CN\Uniformes\AB3\Adax\adax_camo.paa","\A3CN\Uniformes\AB3\Adax\adax_camisa.paa"};
	};
};

