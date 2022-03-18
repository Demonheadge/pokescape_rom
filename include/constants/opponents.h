#ifndef GUARD_CONSTANTS_OPPONENTS_H
#define GUARD_CONSTANTS_OPPONENTS_H

#define TRAINER_NONE                          0
#define TRAINER_MAGGIE            			  1
//route 1
#define TRAINER_GOBLIN_1_ROUTE1			      2
#define TRAINER_GOBLIN_2_ROUTE1				  3
#define TRAINER_GOBLIN_3_ROUTE1               4
#define TRAINER_FARMER_ROUTE1                 5
#define TRAINER_RSN_ROUTE1					  6
//mill lane mill
#define TRAINER_TRAINER2_MILLLANEMILL                   7
#define TRAINER_TRAINER3_MILLLANEMILL                   8
#define TRAINER_TRAINER4_MILLLANEMILL                   9
#define TRAINER_MILLIE_MILLER_MILLLANEMILL                   10
//route 12
#define TRAINER_GOBLIN_4_ROUTE12              11
#define TRAINER_GOBLIN_5_ROUTE12              12
#define TRAINER_GOBLIN_6_ROUTE12              13
#define TRAINER_GOBLIN_7_ROUTE12              14
#define TRAINER_RSN_ROUTE12                   15
//route 4
#define TRAINER_SCAMMER_ROUTE4                16
#define TRAINER_FARMER_ROUTE4                 17
#define TRAINER_MUGGER_ROUTE4                 18
//route 6
#define TRAINER_MUGGER_ROUTE6                 19

//lumbridge castle gym

#define TRAINER_LUMBRIDGE_GYM1                20
#define TRAINER_LUMBRIDGE_GYM2                21
#define TRAINER_LUMBRIDGE_GYM3                22
#define TRAINER_LUMBRIDGE_GYM4                23
#define TRAINER_DUKE                          24

//lumbridge swamp
#define TRAINER_MUGGER_LUM_SWAMP              25
#define TRAINER_SKELETON_LUM_SWAMP            26
#define TRAINER_RSN_LUM_SWAMP                 27

#define TRAINER_MITHRILMAN1                      28
#define TRAINER_MITHRILMAN2                      29
#define TRAINER_MITHRILMAN3                      30
#define TRAINER_MITHRILMAN4                      31
#define TRAINER_MITHRILMAN5                      32
#define TRAINER_MITHRILMAN6                      33
#define TRAINER_MITHRILMAN7                      34
#define TRAINER_MITHRILMAN8                      35
#define TRAINER_MITHRILMAN9                      36
#define TRAINER_MITHRILMAN10                     37

#define TRAINER_TRAINER1_MILLLANEMILL            38
#define TRAINER_KARAMJAVOLCANO_HAM_ADMIN_PATTY        39
#define TRAINER_KARAMJAVOLCANO_HAM_GRUNT_1        40
#define TRAINER_KARAMJAVOLCANO_HAM_GRUNT_2      41 
#define TRAINER_KARAMJAVOLCANO_HAM_GRUNT_3      42
#define TRAINER_KARAMJAVOLCANO_HAM_GRUNT_4      43
#define TRAINER_KARAMJAVOLCANO_HAM_GRUNT_5      44
#define TRAINER_KARAMJAVOLCANO_HAM_GRUNT_6      45
#define TRAINER_KARAMJAVOLCANO_SKELETON_1      46
#define TRAINER_DRAYNOR_MANOR_COUNT_DRAYNOR      47
#define TRAINER_GOBLIN_4_ROUTE1               48
#define TRAINER_ROUTE2_TRAINER_1               49
#define TRAINER_ROUTE2_TRAINER_2               51
#define TRAINER_ROUTE2_TRAINER_3               52
#define TRAINER_ROUTE2_TRAINER_4               53
#define TRAINER_ROUTE2_TRAINER_5               54
#define TRAINER_ROUTE2_TRAINER_6               55
#define TRAINER_ROUTE2_TRAINER_7               56
#define TRAINER_LUM_SWAMP_GRASSTEETH                 57
#define TRAINER_WIZARDSTOWER_TRAINER_1               58
#define TRAINER_WIZARDSTOWER_TRAINER_2               59
#define TRAINER_WIZARDSTOWER_TRAINER_3               60
#define TRAINER_WIZARDSTOWER_TRAINER_4               61
#define TRAINER_WIZARDSTOWER_TRAINER_MYRTLE          62
#define TRAINER_DRAYNOR_MANOR_SKELETON_1          63
#define TRAINER_DRAYNOR_MANOR_SKELETON_2          64
#define TRAINER_DRAYNOR_MANOR_TRAINER_3          65
#define TRAINER_DRAYNOR_MANOR_SKELETON_4          66
#define TRAINER_DRAYNOR_MANOR_SKELETON_5          67
#define TRAINER_DRAYNOR_MANOR_SKELETON_6          68
#define TRAINER_DRAYNOR_MANOR_SKELETON_7          69
#define TRAINER_DRAYNOR_MANOR_SKELETON_8          70
#define TRAINER_ROUTE3_TRAINER_1                  71
//ROUTE 5
#define TRAINER_ROUTE5_CAPTAINTOCK                72
#define TRAINER_ROUTE5_WOODCUTTER                 73
//ROUTE10
#define TRAINER_ROUTE10_MONK                    74
#define TRAINER_ROUTE10_GOBLIN_1                75
#define TRAINER_ROUTE10_GOBLIN_2                76
//ROUTE8
#define TRAINER_ROUTE8_THEIF                    77
#define TRAINER_ROUTE8_NOOB                    78
#define TRAINER_ROUTE8_DnD                    79
#define TRAINER_ROUTE8_MINER_1                    80
#define TRAINER_ROUTE8_WOODCUTTER                    81
#define TRAINER_ROUTE8_MINER_2                    82
#define TRAINER_ROUTE8_WIZARD_AIR                    83
#define TRAINER_ROUTE8_WIZARD_WATER                    84
#define TRAINER_ROUTE8_WIZARD_EARTH                    85
#define TRAINER_ROUTE8_WIZARD_FIRE                    86
#define TRAINER_ROUTE8_WIZARD_MALIGNIUS_MORTIFER                    87
//ROUTE 9
#define TRAINER_ROUTE9_GOBLIN_1                    88
#define TRAINER_ROUTE9_GOBLIN_2                    89
#define TRAINER_ROUTE9_GOBLIN_3                    90
#define TRAINER_ROUTE9_GOBLIN_4                    91
#define TRAINER_ROUTE9_CHEF                   92
#define TRAINER_ROUTE9_MUGGER                   93
#define TRAINER_ROUTE9_GUTHIX_WIZARD                   94
#define TRAINER_ROUTE9_MINER_1                   95
#define TRAINER_ROUTE9_MINER_2                   96
//route12
#define TRAINER_ROUTE11_QUESTER                   97
#define TRAINER_ROUTE11_PIRATE                   98
#define TRAINER_ROUTE11_SAILOR                   99
#define TRAINER_ROUTE11_PvMer                   100
#define TRAINER_ROUTE11_GRACEFUL                   101



// NOTE: Because each Trainer uses a flag to determine when they are defeated, there is only space for 9 additional trainers before trainer flag space overflows
//       More space can be made by shifting flags around in constants/flags.h or changing how trainer flags are handled
//       MAX_TRAINERS_COUNT can be increased but will take up additional saveblock space

#define TRAINERS_COUNT                      806
#define MAX_TRAINERS_COUNT                  864

#endif  // GUARD_CONSTANTS_OPPONENTS_H
