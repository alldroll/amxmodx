
#ifndef NS_CONST_H
#define NS_CONST_H



// Offsets (used in NPData.cpp)

#define      OFFSET_WIN_RESOURCES		1816	//454 * 4
#define      OFFSET_LIN_RESOURCES		1836	//459 * 4

#define      OFFSET_WIN_WEAPDMG			400		//100 * 4
#define      OFFSET_LIN_WEAPDMG			420		//105 * 4

#define      OFFSET_WIN_WEAPRANGE		396		//99 * 4
#define      OFFSET_LIN_WEAPRANGE		416		//104 * 4

#define      OFFSET_WIN_WEAPCLIP		364		//91 * 4
#define      OFFSET_LIN_WEAPCLIP		384		//96 * 4

#define      OFFSET_WIN_HIVE_TRAIT		6220	//1555 * 4
#define      OFFSET_LIN_HIVE_TRAIT		6240	//1560 * 4

#define      OFFSET_WIN_SCORE			6556	//1639 * 4
#define      OFFSET_LIN_SCORE			6576	//1644 * 4

#define      OFFSET_WIN_EXP				6480	//1620 * 4
#define      OFFSET_LIN_EXP				6500	//1625 * 4

#define      OFFSET_WIN_POINTS			6488	//1622 * 4
#define      OFFSET_LIN_POINTS			6508	//1627 * 4

#define      OFFSET_WIN_AMMO_LMG		1116	//279 * 4
#define      OFFSET_LIN_AMMO_LMG		1136	//284 * 4

#define      OFFSET_WIN_AMMO_PISTOL		1120	//280 * 4
#define      OFFSET_LIN_AMMO_PISTOL		1140	//285 * 4

#define      OFFSET_WIN_AMMO_SHOTGUN	1124	//281 * 4
#define      OFFSET_LIN_AMMO_SHOTGUN	1144	//286 * 4

#define      OFFSET_WIN_AMMO_HMG		1128	//282 * 4
#define      OFFSET_LIN_AMMO_HMG		1148	//287 * 4

#define      OFFSET_WIN_AMMO_GL			1132	//283 * 4
#define      OFFSET_LIN_AMMO_GL			1152	//288 * 4

#define      OFFSET_WIN_AMMO_HG			1136	//284 * 4
#define      OFFSET_LIN_AMMO_HG			1156	//289 * 4

#define      OFFSET_WIN_DEATHS			1380	//345 * 4
#define      OFFSET_LIN_DEATHS			1400	//349 * 4

#define      OFFSET_WIN_STRUCTOWNER		324		//81 * 4
#define      OFFSET_LIN_STRUCTOWNER		344		//86 * 4


enum
{
   MASK_NONE = 0,
   MASK_SIGHTED = 1,
   MASK_DETECTED = 2,
   MASK_BUILDABLE = 4,
   MASK_BASEBUILD0 = 8,      // Base build slot #0
   MASK_WEAPONS1 = 8,      // Marine weapons 1
   MASK_CARAPACE = 8,      // Alien carapace
   MASK_WEAPONS2 = 16,      // Marines weapons 2
   MASK_REGENERATION = 16,      // Alien regeneration
   MASK_BASEBUILD1 = 16,      // Base build slot #1
   MASK_WEAPONS3 = 32,      // Marine weapons 3
   MASK_REDEMPTION = 32,      // Alien redemption
   MASK_BASEBUILD2 = 32,      // Base build slot #2
   MASK_ARMOR1 = 64,      // Marine armor 1
   MASK_CELERITY = 64,      // Alien celerity
   MASK_BASEBUILD3 = 64,      // Base build slot #3
   MASK_ARMOR2 = 128,      // Marine armor 2
   MASK_ADRENALINE = 128,      // Alien adrenaline
   MASK_BASEBUILD4 = 128,      // Base build slot #4
   MASK_ARMOR3 = 256,      // Marine armor 3
   MASK_SILENCE = 256,      // Alien silence
   MASK_BASEBUILD5 = 256,      // Base build slot #5
   MASK_JETPACK = 512,      // Marine jetpacks
   MASK_CLOAKING = 512,      // Alien cloaking
   MASK_BASEBUILD6 = 512,      // Base build slot #6
   MASK_FOCUS = 1024,      // Alien focus
   MASK_MOTION = 1024,      // Marine motion tracking
   MASK_BASEBUILD7 = 1024,      // Base build slot #7
   MASK_SCENTOFFEAR = 2048,   // Alien scent of fear
   MASK_DEFENSE2 = 4096,      // Defense level 2
   MASK_DEFENSE3 = 8192,      // Defense level 3
   MASK_ELECTRICITY = 8192,   // Electricy
   MASK_MOVEMENT2 = 16384,      // Movement level 2,
   MASK_MOVEMENT3 = 32768,      // Movement level 3
   MASK_HEAVYARMOR = 32768,   // Marine heavy armor
   MASK_SENSORY2 = 65536,      // Sensory level 2
   MASK_SENSORY3 = 131072,      // Sensory level 3
   MASK_ALIEN_MOVEMENT = 262144,   // Onos is charging
   MASK_WALLSTICKING = 524288,   // Flag for wall-sticking
   MASK_PRIMALSCREAM = 1048576,   // Alien is in range of active primal scream
   MASK_UMBRA = 2097152,      // In umbra
   MASK_DIGESTING = 4194304,   // When set on a visible player, player is digesting.  When set on invisible player, player is being digested
   MASK_RECYCLING = 8388608,   // Building is recycling
   MASK_TOPDOWN = 16777216,   // Commander view
   MASK_PLAYER_STUNNED = 33554432,   // Player has been stunned by stomp
   MASK_ENSNARED = 67108864,   // Webbed
   MASK_ALIEN_EMBRYO = 134217728,      //268435456,   // Gestating
   MASK_SELECTABLE = 268435456,      //536870912,   // ???
   MASK_PARASITED = 536870912,         //1073741824,   // Parasite flag
   MASK_SENSORY_NEARBY = 1073741824   //2147483648   // Sensory chamber in range
};

typedef enum
{
	AVH_USER3_NONE = 0,
	AVH_USER3_MARINE_PLAYER,
	AVH_USER3_COMMANDER_PLAYER,
	AVH_USER3_ALIEN_PLAYER1,
	AVH_USER3_ALIEN_PLAYER2,
	AVH_USER3_ALIEN_PLAYER3,
	AVH_USER3_ALIEN_PLAYER4,
	AVH_USER3_ALIEN_PLAYER5,
	AVH_USER3_ALIEN_EMBRYO,
	AVH_USER3_SPAWN_TEAMONE,
	AVH_USER3_SPAWN_TEAMTWO,
	AVH_USER3_PARTICLE_ON,				// only valid for AvHParticleEntity: entindex as int in fuser1, template index stored in fuser2
	AVH_USER3_PARTICLE_OFF,				// only valid for AvHParticleEntity: particle system handle in fuser1
	AVH_USER3_WELD,						// float progress (0 - 100) stored in fuser1
	AVH_USER3_ALPHA,					// fuser1 indicates how much alpha this entity toggles to in commander mode, fuser2 for players
	AVH_USER3_MARINEITEM,				// Something a friendly marine can pick up
	AVH_USER3_WAYPOINT,
	AVH_USER3_HIVE,
	AVH_USER3_NOBUILD,
	AVH_USER3_USEABLE,
	AVH_USER3_AUDIO_ON,
	AVH_USER3_AUDIO_OFF,
	AVH_USER3_FUNC_RESOURCE,
	AVH_USER3_COMMANDER_STATION,
	AVH_USER3_TURRET_FACTORY, 
	AVH_USER3_ARMORY, 
	AVH_USER3_ADVANCED_ARMORY,
	AVH_USER3_ARMSLAB,
	AVH_USER3_PROTOTYPE_LAB, 
	AVH_USER3_OBSERVATORY,
	AVH_USER3_CHEMLAB,
	AVH_USER3_MEDLAB,
	AVH_USER3_NUKEPLANT,
	AVH_USER3_TURRET,
	AVH_USER3_SIEGETURRET,
	AVH_USER3_RESTOWER,
	AVH_USER3_PLACEHOLDER,
	AVH_USER3_INFANTRYPORTAL,
	AVH_USER3_NUKE,
	AVH_USER3_BREAKABLE,
	AVH_USER3_UMBRA,
	AVH_USER3_PHASEGATE,
	AVH_USER3_DEFENSE_CHAMBER,
	AVH_USER3_MOVEMENT_CHAMBER,
	AVH_USER3_OFFENSE_CHAMBER,
	AVH_USER3_SENSORY_CHAMBER,
	AVH_USER3_ALIENRESTOWER,
	AVH_USER3_HEAVY,
	AVH_USER3_JETPACK,
	AVH_USER3_ADVANCED_TURRET_FACTORY,
	AVH_USER3_SPAWN_READYROOM,
	AVH_USER3_CLIENT_COMMAND,
	AVH_USER3_FUNC_ILLUSIONARY,
	AVH_USER3_MENU_BUILD,
	AVH_USER3_MENU_BUILD_ADVANCED,
	AVH_USER3_MENU_ASSIST,
	AVH_USER3_MENU_EQUIP,
	AVH_USER3_MINE,
	AVH_USER3_MAX
} AvHUser3;

enum
{
	WEAPON_NONE = 0,
	WEAPON_CLAWS,
	WEAPON_SPIT,
	WEAPON_SPORES,
	WEAPON_SPIKE,
	WEAPON_BITE,
	WEAPON_BITE2,
	WEAPON_SWIPE,
	WEAPON_WEBSPINNER,
	WEAPON_METABOLIZE,
	WEAPON_PARASITE,
	WEAPON_BLINK,
	WEAPON_DIVINEWIND,
	WEAPON_KNIFE,
	WEAPON_PISTOL,
	WEAPON_LMG,
	WEAPON_SHOTGUN,
	WEAPON_HMG,
	WEAPON_WELDER,
	WEAPON_MINE,
	WEAPON_GRENADE_GUN,
	WEAPON_LEAP,
	WEAPON_CHARGE,
	WEAPON_UMBRA,
	WEAPON_PRIMALSCREAM,
	WEAPON_BILEBOMB,
	WEAPON_ACIDROCKET,
	WEAPON_HEALINGSPRAY,
	WEAPON_GRENADE,
	WEAPON_STOMP,
	WEAPON_DEVOUR,
	WEAPON_MAX
};
enum
{
	PLAYERCLASS_NONE = 0,
	PLAYERCLASS_ALIVE_MARINE,
	PLAYERCLASS_ALIVE_HEAVY_MARINE,
	PLAYERCLASS_ALIVE_LEVEL1,
	PLAYERCLASS_ALIVE_LEVEL2,
	PLAYERCLASS_ALIVE_LEVEL3,
	PLAYERCLASS_ALIVE_LEVEL4,
	PLAYERCLASS_ALIVE_LEVEL5,
	PLAYERCLASS_ALIVE_DIGESTING,
	PLAYERCLASS_ALIVE_GESTATING,
	PLAYERCLASS_DEAD_MARINE,
	PLAYERCLASS_DEAD_ALIEN,
	PLAYERCLASS_COMMANDER,
	PLAYERCLASS_REINFORCING,
	PLAYERCLASS_SPECTATOR
};
enum classes
{
	CLASS_UNKNOWN = 0,
	CLASS_SKULK,
	CLASS_GORGE,
	CLASS_LERK,
	CLASS_FADE,
	CLASS_ONOS,
	CLASS_MARINE,
	CLASS_JETPACK,
	CLASS_HEAVY,
	CLASS_COMMANDER,
	CLASS_GESTATE,
	CLASS_DEAD,
	CLASS_NOTEAM
};


#endif

