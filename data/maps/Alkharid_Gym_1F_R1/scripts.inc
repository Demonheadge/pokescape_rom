Alkharid_Gym_1F_R1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Alkharid_Gym_1F_R1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Alkharid_Gym_1F_R1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 11
	call ALKHARID_GYM_ROOMS_STATE
	call ALKHARID_GYM_NPCS_POST_GYM_1F_1R
	return


ALKHARID_GYM_NPCS_POST_GYM_1F_1R::
	switch VAR_POKESCAPE_ALKHARID_GYM_QUEST
	case 30, ALKHARID_GYM_NPCS_POST_GYM_1F_1R_3
ALKHARID_GYM_NPCS_POST_GYM_1F_1R_1:
	return

ALKHARID_GYM_NPCS_POST_GYM_1F_1R_3:
	setobjectxyperm 2, 2, 4
	setobjectmovementtype 2, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
	goto ALKHARID_GYM_NPCS_POST_GYM_1F_1R_1


GYM_NPC_3::
	lock
	faceplayer
	goto_if_unset FLAG_ALKHARIDGYM_2, GYM_NPC_3_2
GYM_NPC_3_1:
	goto_if_set FLAG_BADGE04_GET, GYM_NPC_3_5
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 0
	goto_if_eq GYM_NPC_3_10
	msgbox GYM_NPC_3_Text_8
GYM_NPC_3_9:
	release
	end

GYM_NPC_3_2:
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 15
	goto_if_eq GYM_NPC_3_7
	goto GYM_NPC_3_1

GYM_NPC_3_5:
	msgbox GYM_NPC_3_Text_6
	release
	end

GYM_NPC_3_7:
	call CHECK_IF_ALI
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 20
	goto_if_eq GYM_NPC_3_14
	applymovement 3, Movement_AlkharidGym_NPC_3
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_DOWN
	waitmovement 0
	namebox GYM_NPC_3_Text_1
	msgbox GYM_NPC_3_Text_2
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_ALKHARID_GYM_TRAINER_2, GYM_NPC_3_Text_3
	namebox GYM_NPC_3_Text_1
	msgbox GYM_NPC_3_Text_5
	closemessage
	hidenamebox
	setflag FLAG_ALKHARIDGYM_2
	applymovement 3, MOVEMENT_WALK_DOWN
	waitmovement 0
	applymovement 3, MOVEMENT_FACE_UP
	waitmovement 0
	release
	end

GYM_NPC_3_10:
	msgbox GYM_NPC_3_Text_7
	goto GYM_NPC_3_9

GYM_NPC_3_14:
	msgbox GYM_NPC_3_Text_0
	hidenamebox
	closemessage
	applymovement VAR_LAST_TALKED, Movement_AlkharidGym_TELEPORT
	delay 30
	removeobject VAR_LAST_TALKED
	addobject 1
	clearflag FLAG_TEMP_6
	applymovement 3, Movement_AlkharidGym_NPC_3
	applymovement 1, Movement_AlkharidGym_NPC_3_Ali
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_DOWN
	waitmovement 0
	namebox GYM_NPC_3_Text_1
	msgbox GYM_NPC_3_Text_2
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_ALKHARID_GYM_TRAINER_2, GYM_NPC_3_Text_3
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq GYM_NPC_3_17
	msgbox GYM_NPC_3_Text_4
	closemessage
	hidenamebox
	applymovement 3, MOVEMENT_WALK_DOWN
	waitmovement 0
	applymovement 3, MOVEMENT_FACE_UP
	waitmovement 0
	release
	end

GYM_NPC_3_17:
	setvar VAR_POKESCAPE_ALKHARID_GYM_QUEST, 0
	end


GYM_NPC_4::
	lock
	faceplayer
	goto_if_unset FLAG_ALKHARIDGYM_2, GYM_NPC_4_2
GYM_NPC_4_1:
	goto_if_set FLAG_BADGE04_GET, GYM_NPC_4_5
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 0
	goto_if_eq GYM_NPC_4_10
	msgbox GYM_NPC_3_Text_8
GYM_NPC_4_9:
	release
	end

GYM_NPC_4_2:
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 15
	goto_if_eq GYM_NPC_4_7
	goto GYM_NPC_4_1

GYM_NPC_4_5:
	msgbox GYM_NPC_3_Text_6
	release
	end

GYM_NPC_4_7:
	call CHECK_IF_ALI
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 20
	goto_if_eq GYM_NPC_4_14
	applymovement 2, Movement_AlkharidGym_NPC_4
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_DOWN
	waitmovement 0
	namebox GYM_NPC_3_Text_1
	msgbox GYM_NPC_3_Text_2
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_ALKHARID_GYM_TRAINER_2, GYM_NPC_3_Text_3
	namebox GYM_NPC_3_Text_1
	msgbox GYM_NPC_3_Text_5
	closemessage
	hidenamebox
	setflag FLAG_ALKHARIDGYM_2
	applymovement 2, Movement_AlkharidGym_moveafterbattle_1
	waitmovement 0
	release
	end

GYM_NPC_4_10:
	msgbox GYM_NPC_4_Text_0
	goto GYM_NPC_4_9

GYM_NPC_4_14:
	msgbox GYM_NPC_3_Text_0
	hidenamebox
	closemessage
	applymovement VAR_LAST_TALKED, Movement_AlkharidGym_TELEPORT
	delay 30
	removeobject VAR_LAST_TALKED
	addobject 1
	clearflag FLAG_TEMP_6
	applymovement 2, Movement_AlkharidGym_NPC_4
	applymovement 1, Movement_AlkharidGym_NPC_4_Ali
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_LEFT
	waitmovement 0
	namebox GYM_NPC_3_Text_1
	msgbox GYM_NPC_3_Text_2
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_ALKHARID_GYM_TRAINER_2, GYM_NPC_3_Text_3
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq GYM_NPC_4_17
	msgbox GYM_NPC_3_Text_4
	closemessage
	hidenamebox
	applymovement 1, MOVEMENT_WALK_DOWN
	waitmovement 0
	applymovement 1, MOVEMENT_FACE_UP
	waitmovement 0
	release
	end

GYM_NPC_4_17:
	setvar VAR_POKESCAPE_ALKHARID_GYM_QUEST, 0
	end


Movement_AlkharidGym_NPC_3:
	walk_faster_down
	walk_faster_down
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	face_player
	step_end

Movement_AlkharidGym_NPC_3_Ali:
	walk_faster_up
	walk_faster_up
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	face_player
	step_end

Movement_AlkharidGym_NPC_4:
	walk_faster_down
	walk_faster_down
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	face_player
	step_end

Movement_AlkharidGym_NPC_4_Ali:
	delay_16
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	face_player
	step_end

SAFARI_ZONE_WIZARD::
	lock
	faceplayer
	namebox SAFARI_ZONE_WIZARD_Text_0
	msgbox SAFARI_ZONE_WIZARD_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq SAFARI_ZONE_WIZARD_2
	msgbox SAFARI_ZONE_WIZARD_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne SAFARI_ZONE_WIZARD_5
SAFARI_ZONE_WIZARD_4:
	special EnterSafariMode
	msgbox SAFARI_ZONE_WIZARD_Text_5
	closemessage
	hidenamebox
	setvar VAR_SAFARI_ZONE_STATE, 0
	goto SAFARI_ZONE_WIZARD_TELEPORT
	release
	end

SAFARI_ZONE_WIZARD_2:
	msgbox SAFARI_ZONE_WIZARD_Text_2
	closemessage
	hidenamebox
	release
	end

SAFARI_ZONE_WIZARD_5:
	msgbox SAFARI_ZONE_WIZARD_Text_4
	goto SAFARI_ZONE_WIZARD_4


SAFARI_ZONE_WIZARD_TELEPORT::
	addvar VAR_SAFARI_ZONE_STATE, 1
	special SafariModeRestartSteps
	goto SAFARI_ZONE_ALTAR_STATE
	return


SAFARI_ZONE_WIZARD_NEXT_ROUND::
	lockall
	playse SE_DING_DONG
	compare VAR_SAFARI_ZONE_STATE, 6
	goto_if_eq SAFARI_ZONE_WIZARD_NEXT_ROUND_2
	msgbox SAFARI_ZONE_WIZARD_NEXT_ROUND_Text_1
SAFARI_ZONE_WIZARD_NEXT_ROUND_1:
	waitmessage
	waitbuttonpress
	releaseall
	goto SAFARI_ZONE_WIZARD_TELEPORT
	return

SAFARI_ZONE_WIZARD_NEXT_ROUND_2:
	msgbox SAFARI_ZONE_WIZARD_NEXT_ROUND_Text_0
	goto SAFARI_ZONE_WIZARD_NEXT_ROUND_1


SAFARI_ZONE_ALTAR_STATE::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Altar_TELEPORT
	waitmovement 0
	switch VAR_SAFARI_ZONE_STATE
	case 0, SAFARI_ZONE_ALTAR_STATE_3
	case 1, SAFARI_ZONE_ALTAR_STATE_4
	case 2, SAFARI_ZONE_ALTAR_STATE_5
	case 3, SAFARI_ZONE_ALTAR_STATE_6
	case 4, SAFARI_ZONE_ALTAR_STATE_7
	case 5, SAFARI_ZONE_ALTAR_STATE_8
	case 6, SAFARI_ZONE_ALTAR_STATE_9
	case 7, SAFARI_ZONE_ALTAR_STATE_10
SAFARI_ZONE_ALTAR_STATE_1:
	release
	end

SAFARI_ZONE_ALTAR_STATE_3:
	msgbox SAFARI_ZONE_ALTAR_STATE_Text_0
	goto SAFARI_ZONE_ALTAR_STATE_1

SAFARI_ZONE_ALTAR_STATE_4:
	warp MAP_AIR_ALTAR, 0, 0, 0
	goto SAFARI_ZONE_ALTAR_STATE_1

SAFARI_ZONE_ALTAR_STATE_5:
	warp MAP_MIND_ALTAR, 0, 0, 0
	goto SAFARI_ZONE_ALTAR_STATE_1

SAFARI_ZONE_ALTAR_STATE_6:
	warp MAP_WATER_ALTAR, 0, 0, 0
	goto SAFARI_ZONE_ALTAR_STATE_1

SAFARI_ZONE_ALTAR_STATE_7:
	warp MAP_EARTH_ALTAR, 0, 0, 0
	goto SAFARI_ZONE_ALTAR_STATE_1

SAFARI_ZONE_ALTAR_STATE_8:
	warp MAP_FIRE_ALTAR, 0, 0, 0
	goto SAFARI_ZONE_ALTAR_STATE_1

SAFARI_ZONE_ALTAR_STATE_9:
	warp MAP_BODY_ALTAR, 0, 0, 0
	goto SAFARI_ZONE_ALTAR_STATE_1

SAFARI_ZONE_ALTAR_STATE_10:
	setvar VAR_SAFARI_ZONE_STATE, 0
	special ExitSafariMode
	warp MAP_ABYSSAL_REALM_1, 11, 0, 0
	goto SAFARI_ZONE_ALTAR_STATE_1


Movement_Altar_TELEPORT:
	fly_up
	step_end

ITEM_SAFARI_ZONE_POUCH::
	playse MUS_OBTAIN_ITEM
	removeobject VAR_LAST_TALKED
	msgbox ITEM_SAFARI_ZONE_POUCH_Text_0
	delay 60
	closemessage
	special SafariModeIncreasePouches
	end


POKESCAPE_CURRENT_VERSION::
	msgbox POKESCAPE_CURRENT_VERSION_Text_0
	closemessage
	end


GYM_NPC_3_Text_0:
	.string "Guards help me as I make my escape!$"

GYM_NPC_3_Text_1:
	.string "Warrior$"

GYM_NPC_3_Text_2:
	.string "Brother, I will help thee with this\n"
	.string "infidel!$"

GYM_NPC_3_Text_3:
	.string "Consider that a warning!$"

GYM_NPC_3_Text_4:
	.string "You have defeated us!\p"
	.string "But the Prince has made his escape so\n"
	.string "we have done our jobs.$"

GYM_NPC_3_Text_5:
	.string "You have defeated us!\p"
	.string "But the Prince is still somewhere\n"
	.string "around the Palace.$"

GYM_NPC_3_Text_6:
	.string "Hello congrats on beating the gym.$"

GYM_NPC_3_Text_7:
	.string "Hello.$"

GYM_NPC_3_Text_8:
	.string "We use our lives to protect our prince.$"

GYM_NPC_4_Text_0:
	.string "Hello this is the gym.$"

SAFARI_ZONE_WIZARD_Text_0:
	.string "Dark Wizard$"

SAFARI_ZONE_WIZARD_Text_1:
	.string "Welcome to the Abyss.\p"
	.string "I wish you wouldn't bother me.\p"
	.string "But seeing as you are here…\p"
	.string "Care to play a little game?$"

SAFARI_ZONE_WIZARD_Text_2:
	.string "Come back if you change your mind.$"

SAFARI_ZONE_WIZARD_Text_3:
	.string "Would you like some info?$"

SAFARI_ZONE_WIZARD_Text_4:
	.string "I will teleport you to different Altars\n"
	.string "across the world.\p"
	.string "I would like you to capture some\n"
	.string "creatures so I can discover more about\l"
	.string "the Abyss.\p"
	.string "But considering how unstable the Abyss\n"
	.string "is I can only keep you in each plane of\l"
	.string "existance for a certain amount of time.\p"
	.string "Proably about 100 steps.$"

SAFARI_ZONE_WIZARD_Text_5:
	.string "I will now Teleport you.\p"
	.string "Senventior disthine molenko!$"

SAFARI_ZONE_WIZARD_NEXT_ROUND_Text_0:
	.string "Time's up!\p"
	.string "You are being teleported back to the\n"
	.string "Abyss.$"

SAFARI_ZONE_WIZARD_NEXT_ROUND_Text_1:
	.string "Time's up!\p"
	.string "You are being teleported to the next\n"
	.string "Altar…$"

SAFARI_ZONE_ALTAR_STATE_Text_0:
	.string "ERROR, You are currently not able to\n"
	.string "teleport to any Altar.$"

ITEM_SAFARI_ZONE_POUCH_Text_0:
	.string "You found extra Pouches!$"

POKESCAPE_CURRENT_VERSION_Text_0:
	.string "PokeScape Version 1.5.3$"
