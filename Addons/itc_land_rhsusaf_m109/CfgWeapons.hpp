class CfgWeapons {
	class gm_cannon_base;
	class gm_155mm_m126_base : gm_cannon_base { class range_01_single; };
	class itc_land_gm_weap_m126: gm_155mm_m126_base {
		scope = 1;
		displayName = "Howitzer 155 mm";
		autoReload = 0;
		modes[] = {"Single"};
		reloadTime = 1;
		magazineReloadTime = 6;	
		#include "CfgWeapons_howitzers_magazinesm109.hpp"
		class Single: Single1 {
			displayName = "";
			artilleryCharge = 1;
			reloadTime = 6;			
		};
		class EventHandlers
		{
				class itc_land_veh_weapons
				{
						fired = "_this call itc_land_veh_weapons_fnc_fired;";
				};
		};
	};
		

};



