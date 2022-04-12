 class CfgPatches {
	class itc_land_gm_m109	{
		units[] = {	"itc_land_gm_ge_army_m109g","itc_land_gm_dk_army_m109" };
		weapons[] = {};
		requiredVersion = 1.8;
		requiredAddons[] = {"gm_core", "A3_Armor_F_Slammer", "gm_vehicles_land_tracked_m109", "itc_land_veh_sights","itc_land_sphammohandler"};
		author = "nomisum";
		authors[] = {"Toadball", "nomisum"};
	};
};

#include "CfgITCLandBalistics.hpp"
#include "CfgXEH.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
