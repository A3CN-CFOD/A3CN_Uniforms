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
	class A3CN_Uniforms_Main
	{
		author = "A3CN Team";
		name = "A3CN Uniforms";
		url = "http://www.arma3.com";
		requiredAddons[] = {"A3_soft_f_exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgMods
{
	class Mod_Base;
	class A3CNUniformsMod: Mod_Base
	{
		picture = "\x\a3cn_uniforms\addons\main\logos\a3cn_mod_icon_ca.paa";
		logo = "\x\a3cn_uniforms\addons\main\logos\a3cn_mod_logo_ca.paa";
		logoOver = "\x\a3cn_uniforms\addons\main\logos\a3cn_mod_logoover_ca.paa";
		logoSmall = "\x\a3cn_uniforms\addons\main\logos\a3cn_mod_logo_small_ca.paa";
		tooltip = "tooltip";
		tooltipOwned = "tooltip_owned";
		action = "http://www.mesadeguerra.com.br";
		dlcColor[] = {0.69,0.25,0.12,1};
		overview = "Mod oficial do grupo A3CN para uniformes da unidade CFOD.";
		hideName = 1;
		hidePicture = 0;
		name = "A3CN Uniforms";
		author = "A3CN Team";
		overviewPicture = "\x\a3cn_uniforms\addons\main\images\mod_overviewpicture_co.paa";
		dir = "A3CN_Uniforms";

		class Features{};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class A3_Mod
		{
			list[] = {"A3CN_Uniforms_Main"};
		};
	};
};
