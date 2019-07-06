class B_Soldier_A3CN : B_Soldier_base_F
{
	dlc = "A3CN_Uniforms_DLC";
	scope = protected;
	author = "NFC3SPECTRO / Toaster";
};
class A3CN_AS1_Adax_LongSleeve : B_Soldier_A3CN 
{
	model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
	uniformClass = "A3CN_Apparel_Adax_LongSleeve";
	hiddenSelections[] = {"Camo", "insignia"};
	hiddenSelectionsTextures[] = {"x\a3cn_uniforms\addons\apparel\data\adax_camo.paa"};
};

class A3CN_AS1_Adax_ShortSleeve : B_Soldier_A3CN 
{
	model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
	uniformClass = "A3CN_Apparel_Adax_ShortSleeve";
	hiddenSelections[] = {"Camo", "insignia"};
	hiddenSelectionsTextures[] = {"x\a3cn_uniforms\addons\apparel\data\adax_camo.paa"};
};
class A3CN_AS1_Adax_Shirt : B_Soldier_A3CN 
{
	model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
	uniformClass = "A3CN_AS1_Apparel_Adax_Shirt";
	hiddenSelections[] = {"Camo","Camo2","Insignia"};
	hiddenSelectionsTextures[] = {"x\a3cn_uniforms\addons\apparel\data\adax_camo.paa","x\a3cn_uniforms\addons\apparel\data\adax_shirt.paa"};
};
class A3CN_AS2_Adax_Sniper : B_Soldier_A3CN {
	model = "\A3\Characters_F\BLUFOR\b_sniper.p3d";
	uniformClass = "A3CN_AS2_Apparel_Adax_Sniper";
	hiddenSelections[] = {"Camo","Camo3","Insignia"};
	hiddenSelectionsTextures[] = {"x\a3cn_uniforms\addons\apparel\data\adax_camo.paa","x\a3cn_uniforms\addons\apparel\data\adax_suit.paa"};
};
class A3CN_AS3_Adax_FullSniper : B_Soldier_A3CN {
	model = "\A3\Characters_f_mark\BLUFOR\b_fullghillie_f.p3d";
	uniformClass = "A3CN_AS3_Apparel_Adax_FullSniper";
	hiddenSelections[] = {"Camo","Camo3","Insignia"};
	hiddenSelectionsTextures[] = {"x\a3cn_uniforms\addons\apparel\data\adax_fullsuit.paa","x\a3cn_uniforms\addons\apparel\data\adax_forage.paa"};
};
class A3CN_AS4_Adax_Camisa : B_Soldier_A3CN {
	model = "\A3\Characters_f_exp\Gendarmerie\B_GEN_Soldier_F.p3d";
	uniformClass = "A3CN_AS4_Apparel_Adax_Camisa";
	hiddenSelections[] = {"Camo1","Camo2","Insignia"};
	hiddenSelectionsTextures[] = {"x\a3cn_uniforms\addons\apparel\data\adax_camisa.paa","x\a3cn_uniforms\addons\apparel\data\adax_camo.paa"};
	hiddenSelectionsMaterials[] = {"","x\a3cn_uniforms\addons\apparel\data\uniform.rvmat"};
};
class A3CN_AN1_Adax_Pullover : B_Soldier_A3CN {
	model = "\A3\Characters_F_bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
	uniformClass = "A3CN_AN1_Apparel_Adax_Pullover";
	hiddenSelections[] = {"Camo","Insignia"};
	hiddenSelectionsTextures[] = {"x\a3cn_uniforms\addons\apparel\data\adax_pullover.paa"};
};






