/// Magazines macros definition ///

#define mag_2(a) a, a
#define mag_3(a) a, a, a
#define mag_4(a) a, a, a, a
#define mag_5(a) a, a, a, a, a
#define mag_6(a) a, a, a, a, a, a
#define mag_7(a) a, a, a, a, a, a, a
#define mag_8(a) a, a, a, a, a, a, a, a
#define mag_9(a) a, a, a, a, a, a, a, a, a
#define mag_10(a) a, a, a, a, a, a, a, a, a, a
#define mag_11(a) a, a, a, a, a, a, a, a, a, a, a
#define mag_12(a) a, a, a, a, a, a, a, a, a, a, a, a
#define mag_24(a) a, a, a, a, a, a, a, a, a, a, a, a,a, a, a, a, a, a, a, a, a, a, a, a

class CfgVehicles {
	class LandVehicle;
	class Tank: LandVehicle {
        class ACE_SelfActions;
	};
	class Tank_F: Tank {
        class ACE_SelfActions: ACE_SelfActions {};
		class Turrets {
			class MainTurret;
		};
		class AnimationSources;
	};
	class gm_tracked_base: Tank_F {
        class ACE_SelfActions: ACE_SelfActions {};
		class Turrets: Turrets {
				class MainTurret: MainTurret {};
		};
		class AnimationSources: AnimationSources {};
	};
	class gm_tracked_Artillery_base: gm_tracked_base {
        class ACE_SelfActions: ACE_SelfActions {};
		class AnimationSources: AnimationSources {};
		class Turrets: Turrets {
				class MainTurret: MainTurret { };
		};
	};
	class gm_m109_base: gm_tracked_Artillery_base {
        class ACE_SelfActions: ACE_SelfActions {};
		class AnimationSources: AnimationSources {};
		class Turrets: Turrets {
				class MainTurret: MainTurret { };
		};
	};

	class gm_m109g_base : gm_m109_base {
        class ACE_SelfActions: ACE_SelfActions {};
		class AnimationSources: AnimationSources {};
		class Turrets: Turrets {
				class MainTurret: MainTurret { };
		};
	};
	class gm_ge_army_m109g_base: gm_m109g_base {
        class ACE_SelfActions: ACE_SelfActions {};
		class AnimationSources: AnimationSources {};
		class Turrets: Turrets {
				class MainTurret: MainTurret { };
		};
	};
	class gm_dk_army_m109_base: gm_m109g_base {
        class ACE_SelfActions: ACE_SelfActions {};
		class AnimationSources: AnimationSources {};
		class Turrets: Turrets {
				class MainTurret: MainTurret { };
		};
	};
	class itc_land_m109g_base: gm_m109g_base {
        class ACE_SelfActions: ACE_SelfActions {};
		class AnimationSources: AnimationSources {};
		class Turrets: Turrets {
				class MainTurret: MainTurret { };
		};
	};

	class itc_land_gm_ge_army_m109g_wdl_base: gm_ge_army_m109g_base {
        class ACE_SelfActions: ACE_SelfActions {};
		class AnimationSources: AnimationSources {};
		class Turrets: Turrets {
				class MainTurret: MainTurret { };
		};
	};

	class itc_land_gm_ge_army_m109g_win_base: gm_ge_army_m109g_base
    {
    	class ACE_SelfActions: ACE_SelfActions {};
		class AnimationSources: AnimationSources {};
		class Turrets: Turrets {
				class MainTurret: MainTurret { };
		};
    };
    class itc_land_gm_ge_army_m109g_wiw_base: gm_ge_army_m109g_base
    {
    	class ACE_SelfActions: ACE_SelfActions {};
		class AnimationSources: AnimationSources {};
		class Turrets: Turrets {
				class MainTurret: MainTurret { };
		};
    };
    class itc_land_gm_ge_army_m109g_oli_base: gm_ge_army_m109g_base
    {
    	class ACE_SelfActions: ACE_SelfActions {};
		class AnimationSources: AnimationSources {};
		class Turrets: Turrets {
				class MainTurret: MainTurret { };
		};
    };
    class itc_land_gm_ge_army_m109g_ols_base: gm_ge_army_m109g_base
    {
    	class ACE_SelfActions: ACE_SelfActions {};
		class AnimationSources: AnimationSources {};
		class Turrets: Turrets {
				class MainTurret: MainTurret { };
		};
    };
    class itc_land_gm_ge_army_m109g_olw_base: gm_ge_army_m109g_base
    {
    	class ACE_SelfActions: ACE_SelfActions {};
		class AnimationSources: AnimationSources {};
		class Turrets: Turrets {
				class MainTurret: MainTurret { };
		};
    };
    class itc_land_gm_ge_army_m109g_des_base: gm_ge_army_m109g_base
    {
    	class ACE_SelfActions: ACE_SelfActions {};
		class AnimationSources: AnimationSources {};
		class Turrets: Turrets {
				class MainTurret: MainTurret { };
		};
    };
    class itc_land_gm_ge_army_m109g_trp_base: gm_ge_army_m109g_base
    {
    	class ACE_SelfActions: ACE_SelfActions {};
		class AnimationSources: AnimationSources {};
		class Turrets: Turrets {
				class MainTurret: MainTurret { };
		};
    };
    class itc_land_gm_ge_army_m109g_un_base: gm_ge_army_m109g_base
    {
    	class ACE_SelfActions: ACE_SelfActions {};
		class AnimationSources: AnimationSources {};
		class Turrets: Turrets {
				class MainTurret: MainTurret { };
		};
    };

	class itc_land_gm_ge_army_m109g_wdl: itc_land_gm_ge_army_m109g_wdl_base {
		displayname = "M109G mod. 0 Paladin 2 (WD) GER";
		scope = 1;
		scopeCurator = 2;
        class ACE_SelfActions: ACE_SelfActions {
            class ITC_Land_SPHammohandler {
                displayName = "Open Ammo Handling Interface";
                condition = "( gunner _target ) == ACE_Player";
                statement = "createDialog 'ITC_Land_SPHammohandler'";
            };
			class ITC_Land_CommanderTablet {
				displayName = "Open Mounted Tablet";
				icon = "\itc_land_tablet\UI\arty-icon.paa";
				condition = "([_target] call itc_land_tablet_fnc_vehicleHasTablet) && (( commander _target ) == ACE_Player)";
				statement = "[_target] call itc_land_tablet_fnc_openVehicleTablet";
			};
		};
		artilleryScanner = 0;
		class itc_land {
  		  loaderType = 1; // semi automatic
			tabletInterfaces[] = {"spg"};
			mountedTablet = "itc_land_tablet_spg";
			class fcs {
				tableList = "g_155";
			};
		};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				turretInfoType = "ITC_Land_RscAltGunnerSightSPH";
				weapons[] = {"itc_land_gm_weap_m126"};
				magazines[] = {
					//	rhs_mag_155mm_m795_28, rhs_mag_155mm_m825a1_2, rhs_mag_155mm_485_2, rhs_mag_155mm_m712_2, rhs_mag_155mm_m731_1, rhs_mag_155mm_raams_1, rhs_mag_155mm_m864_3
					mag_24("itc_land_m109hex"),
					mag_4("itc_land_m109hex"),
					mag_5("itc_land_m109smo"),
					mag_5("itc_land_m109ill"),
					mag_2("itc_land_m109icm"),
					"itc_land_m109map",
					"itc_land_m109mat",
					mag_2("itc_land_m109pgm")
				};
				lockWhenVehicleSpeed= 5;
				maxHorizontalRotSpeed = "((360/30)/45)";
			};
		};
		class AnimationSources: AnimationSources {};
	};

	class itc_land_gm_ge_army_m109g_win: itc_land_gm_ge_army_m109g_wdl {
		displayname = "M109G mod. 0 Paladin 2 (WD) WIN";
	};
	class itc_land_gm_ge_army_m109g_wiw: itc_land_gm_ge_army_m109g_wdl {
		displayname = "M109G mod. 0 Paladin 2 (WD) WIW";
	};
	class itc_land_gm_ge_army_m109g_oli: itc_land_gm_ge_army_m109g_wdl {
		displayname = "M109G mod. 0 Paladin 2 (WD) OLI";
	};
	class itc_land_gm_ge_army_m109g_ols: itc_land_gm_ge_army_m109g_wdl {
		displayname = "M109G mod. 0 Paladin 2 (WD) OLS";
	};

	class itc_land_gm_ge_army_m109g_olw: itc_land_gm_ge_army_m109g_wdl {
		displayname = "M109G mod. 0 Paladin 2 (WD) OLW";
	};
	class itc_land_gm_ge_army_m109g_des: itc_land_gm_ge_army_m109g_wdl {
		displayname = "M109G mod. 0 Paladin 2 (WD) DES";
	};
	class itc_land_gm_ge_army_m109g_trp: itc_land_gm_ge_army_m109g_wdl {
		displayname = "M109G mod. 0 Paladin 2 (WD) TRP";
	};
	class itc_land_gm_ge_army_m109g_un: itc_land_gm_ge_army_m109g_wdl {
		displayname = "M109G mod. 0 Paladin 2 (WD) UN";
	};

	class itc_land_gm_dk_army_m109: gm_dk_army_m109_base {
		displayname = "M109 mod. 0 Paladin 2 (WD) DK";
		scopeCurator = 2;
        class ACE_SelfActions: ACE_SelfActions {
            class ITC_Land_SPHammohandler {
                displayName = "Open Ammo Handling Interface";
                condition = "( gunner _target ) == ACE_Player";
                statement = "createDialog 'ITC_Land_SPHammohandler'";
            };
			class ITC_Land_CommanderTablet {
				displayName = "Open Mounted Tablet";
				icon = "\itc_land_tablet\UI\arty-icon.paa";
				condition = "([_target] call itc_land_tablet_fnc_vehicleHasTablet) && (( commander _target ) == ACE_Player)";
				statement = "[_target] call itc_land_tablet_fnc_openVehicleTablet";
			};
		};
		artilleryScanner = 0;
		class itc_land {
  		  loaderType = 1; // semi automatic
			tabletInterfaces[] = {"spg"};
			mountedTablet = "itc_land_tablet_spg";
			class fcs {
				tableList = "g_155";
			};
		};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				turretInfoType = "ITC_Land_RscAltGunnerSightSPH";
				weapons[] = {"itc_land_gm_weap_m126"};
				magazines[] = {
					//	rhs_mag_155mm_m795_28, rhs_mag_155mm_m825a1_2, rhs_mag_155mm_485_2, rhs_mag_155mm_m712_2, rhs_mag_155mm_m731_1, rhs_mag_155mm_raams_1, rhs_mag_155mm_m864_3
					mag_24("itc_land_m109hex"),
					mag_4("itc_land_m109hex"),
					mag_5("itc_land_m109smo"),
					mag_5("itc_land_m109ill"),
					mag_2("itc_land_m109icm"),
					"itc_land_m109map",
					"itc_land_m109mat",
					mag_2("itc_land_m109pgm")
				};
				lockWhenVehicleSpeed= 5;
				maxHorizontalRotSpeed = "((360/30)/45)";
			};
		};
		class AnimationSources: AnimationSources {};
	};
};
