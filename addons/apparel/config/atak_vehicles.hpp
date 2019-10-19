class A3CN_AS1_Atak_LongSleeve : B_Soldier_A3CN 
{
	model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
	uniformClass = "A3CN_Apparel_Atak_LongSleeve";
	hiddenSelections[] = {"Camo", "insignia"};
	hiddenSelectionsTextures[] = {"x\a3cn_uniforms\addons\apparel\data\atak_camo.paa"};
};

class A3CN_AS1_Atak_ShortSleeve : B_Soldier_A3CN 
{
	model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
	uniformClass = "A3CN_Apparel_Atak_ShortSleeve";
	hiddenSelections[] = {"Camo", "insignia"};
	hiddenSelectionsTextures[] = {"x\a3cn_uniforms\addons\apparel\data\atak_camo.paa"};
};
class A3CN_AS1_Atak_Shirt : B_Soldier_A3CN 
{
	model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
	uniformClass = "A3CN_AS1_Apparel_Atak_Shirt";
	hiddenSelections[] = {"Camo","Camo2","Insignia"};
	hiddenSelectionsTextures[] = {"x\a3cn_uniforms\addons\apparel\data\atak_camo.paa","x\a3cn_uniforms\addons\apparel\data\atak_shirt.paa"};
};
class A3CN_AS2_Atak_Sniper : B_Soldier_A3CN {
	model = "\A3\Characters_F\BLUFOR\b_sniper.p3d";
	uniformClass = "A3CN_AS2_Apparel_Atak_Sniper";
	hiddenSelections[] = {"Camo","Camo3","Insignia"};
	hiddenSelectionsTextures[] = {"x\a3cn_uniforms\addons\apparel\data\atak_camo.paa","x\a3cn_uniforms\addons\apparel\data\atak_suit.paa"};
};
class A3CN_AS3_Atak_FullSniper : B_Soldier_A3CN {
	model = "\A3\Characters_f_mark\BLUFOR\b_fullghillie_f.p3d";
	uniformClass = "A3CN_AS3_Apparel_Atak_FullSniper";
	hiddenSelections[] = {"Camo","Camo3","Insignia"};
	hiddenSelectionsTextures[] = {"x\a3cn_uniforms\addons\apparel\data\atak_fullsuit.paa","x\a3cn_uniforms\addons\apparel\data\atak_forage.paa"};
};
