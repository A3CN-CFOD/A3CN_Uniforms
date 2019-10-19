class CfgVehicles
{
	class B_Soldier_base_F;
	class I_Soldier_base_F;
	class O_V_Soldier_Viper_F;

	class B_Soldier_A3CN : B_Soldier_base_F
	{
		dlc = "A3CN_Uniforms_DLC";
		scope = protected;
		author = "NFC3SPECTRO / Toaster";
	};
	class I_Soldier_A3CN : I_Soldier_base_F
	{
		dlc = "A3CN_Uniforms_DLC";
		scope = protected;
		author = "NFC3SPECTRO / Toaster";
	};
	class O_Viper_A3CN : O_V_Soldier_Viper_F
	{
		dlc = "A3CN_Uniforms_DLC";
		scope = protected;
		author = "NFC3SPECTRO / Toaster";
	
	};

	#include "\x\a3cn_uniforms\addons\apparel\config\adax_vehicles.hpp"
	#include "\x\a3cn_uniforms\addons\apparel\config\mytra_vehicles.hpp"
	#include "\x\a3cn_uniforms\addons\apparel\config\cascavel_vehicles.hpp"
	#include "\x\a3cn_uniforms\addons\apparel\config\vibora_vehicles.hpp"
	#include "\x\a3cn_uniforms\addons\apparel\config\kappa_vehicles.hpp"
	#include "\x\a3cn_uniforms\addons\apparel\config\taipan_vehicles.hpp"
	#include "\x\a3cn_uniforms\addons\apparel\config\everest_vehicles.hpp"
	#include "\x\a3cn_uniforms\addons\apparel\config\atak_vehicles.hpp"
	#include "\x\a3cn_uniforms\addons\apparel\config\kraken_vehicles.hpp"
};

