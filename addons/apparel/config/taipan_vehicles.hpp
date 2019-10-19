class A3CN_AS1_Taipan_LongSleeve : B_Soldier_A3CN 
{
	model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
	uniformClass = "A3CN_Apparel_Taipan_LongSleeve";
	hiddenSelections[] = {"Camo", "insignia"};
	hiddenSelectionsTextures[] = {"x\a3cn_uniforms\addons\apparel\data\taipan_camo.paa"};
};

class A3CN_AS1_Taipan_ShortSleeve : B_Soldier_A3CN 
{
	model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
	uniformClass = "A3CN_Apparel_Taipan_ShortSleeve";
	hiddenSelections[] = {"Camo", "insignia"};
	hiddenSelectionsTextures[] = {"x\a3cn_uniforms\addons\apparel\data\taipan_camo.paa"};
};
class A3CN_AS1_Taipan_Shirt : B_Soldier_A3CN 
{
	model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
	uniformClass = "A3CN_AS1_Apparel_Taipan_Shirt";
	hiddenSelections[] = {"Camo","Camo2","Insignia"};
	hiddenSelectionsTextures[] = {"x\a3cn_uniforms\addons\apparel\data\taipan_camo.paa","x\a3cn_uniforms\addons\apparel\data\taipan_shirt.paa"};
};
class A3CN_AS2_Taipan_Sniper : B_Soldier_A3CN {
	model = "\A3\Characters_F\BLUFOR\b_sniper.p3d";
	uniformClass = "A3CN_AS2_Apparel_Taipan_Sniper";
	hiddenSelections[] = {"Camo","Camo3","Insignia"};
	hiddenSelectionsTextures[] = {"x\a3cn_uniforms\addons\apparel\data\taipan_camo.paa","x\a3cn_uniforms\addons\apparel\data\taipan_suit.paa"};
};
class A3CN_AS3_Taipan_FullSniper : B_Soldier_A3CN {
	model = "\A3\Characters_f_mark\BLUFOR\b_fullghillie_f.p3d";
	uniformClass = "A3CN_AS3_Apparel_Taipan_FullSniper";
	hiddenSelections[] = {"Camo","Camo3","Insignia"};
	hiddenSelectionsTextures[] = {"x\a3cn_uniforms\addons\apparel\data\taipan_fullsuit.paa","x\a3cn_uniforms\addons\apparel\data\taipan_forage.paa"};
};
class A3CN_AE1_Taipan_Viper : O_Viper_A3CN {
	model = "\A3\Characters_f_exp\OPFOR\o_viper.p3d";
	uniformClass = "A3CN_AS3_Apparel_Taipan_Viper";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"x\a3cn_uniforms\addons\apparel\data\taipan_viper.paa"};
	hiddenSelectionsMaterials[] = {"x\a3cn_uniforms\addons\apparel\data\viper_suit.rvmat","x\a3cn_uniforms\addons\apparel\data\viper_suit_injury.rvmat","x\a3cn_uniforms\addons\apparel\data\viper_suit_injury.rvmat"};
};
