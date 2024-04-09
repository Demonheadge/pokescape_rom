#ifndef GUARD_CONSTANTS_QUESTS_H
#define GUARD_CONSTANTS_QUESTS_H

//questmenu scripting command params
#define QUEST_MENU_OPEN                 0   //opens the quest menu (questId = 0)
#define QUEST_MENU_UNLOCK_QUEST         1   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_SET_ACTIVE           2   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_SET_REWARD           3   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_COMPLETE_QUEST       4   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_CHECK_UNLOCKED       5   //checks if questId has been unlocked. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_INACTIVE       6 //check if a questID is inactive. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_ACTIVE         7   //checks if questId has been unlocked. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_REWARD         8  //checks if questId is in Reward state. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_COMPLETE       9   //checks if questId has been completed. Returns result to gSpecialVar_Result
#define QUEST_MENU_BUFFER_QUEST_NAME    10   //buffers a quest name to gStringVar1

// quest number defines
#define QUEST_COOKS_ASSISTANT           0   //COOKS ASSISTANT.
#define QUEST_RUNE_MYSTERIES            1   //RUNE MYSTERIES
#define QUEST_ERNEST_THE_CHICKEN        2   //ERNEST THE CHICKEN
#define QUEST_KOUREND_SLAYER            3   //DARK TOTEM
#define QUEST_ARTFIGHT_JATIZSO          4   //QUEST_ARTFIGHT_JATIZSO
#define QUEST_ARTFIGHT_NEITIZNOT        5
#define QUEST_COUNT                     (QUEST_KOUREND_SLAYER + 1)

#define SUB_QUEST_1          0
#define SUB_QUEST_2          1
#define SUB_QUEST_3          2
#define SUB_QUEST_4          3
#define SUB_QUEST_5          4
#define SUB_QUEST_6          5
#define SUB_QUEST_7          6
#define SUB_QUEST_8          7
#define SUB_QUEST_9          8
#define SUB_QUEST_10         9
#define SUB_QUEST_11        10
#define SUB_QUEST_12        11
#define SUB_QUEST_13        12
#define SUB_QUEST_14        13
#define SUB_QUEST_15        14
#define SUB_QUEST_16        15
#define SUB_QUEST_17        16
#define SUB_QUEST_18        17
#define SUB_QUEST_19        18
#define SUB_QUEST_20        19
#define SUB_QUEST_21        20
#define SUB_QUEST_22        21
#define SUB_QUEST_23        22
#define SUB_QUEST_24        23
#define SUB_QUEST_25        24
#define SUB_QUEST_26        25
#define SUB_QUEST_27        26
#define SUB_QUEST_28        27
#define SUB_QUEST_29        28
#define SUB_QUEST_30        29
#define SUB_QUEST_RUNEMYSTERIES_1        30
#define SUB_QUEST_RUNEMYSTERIES_2        31
#define SUB_QUEST_RUNEMYSTERIES_3        32

#define QUEST_ARTFIGHT_JATIZSO_SUB_COUNT        5
#define QUEST_ARTFIGHT_NEITIZNOT_SUB_COUNT      5
#define QUEST_ERNEST_THE_CHICKEN_SUB_COUNT      3
#define QUEST_COOKS_ASSISTANT_SUB_COUNT         3
#define QUEST_KOUREND_SLAYER_SUB_COUNT          3
#define QUEST_RUNE_MYSTERIES_SUB_COUNT          3


#define SUB_QUEST_COUNT (QUEST_COOKS_ASSISTANT_SUB_COUNT + QUEST_RUNE_MYSTERIES_SUB_COUNT + QUEST_KOUREND_SLAYER_SUB_COUNT + QUEST_ARTFIGHT_JATIZSO_SUB_COUNT + QUEST_ARTFIGHT_NEITIZNOT_SUB_COUNT + QUEST_ERNEST_THE_CHICKEN_SUB_COUNT)

#define QUEST_ARRAY_COUNT (SUB_QUEST_COUNT > QUEST_COUNT ? SUB_QUEST_COUNT : QUEST_COUNT)
#endif // GUARD_CONSTANTS_QUESTS_H
