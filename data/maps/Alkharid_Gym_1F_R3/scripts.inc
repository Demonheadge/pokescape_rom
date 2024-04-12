Alkharid_Gym_1F_R3_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Alkharid_Gym_1F_R3_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Alkharid_Gym_1F_R3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 11
	call ALKHARID_GYM_ROOMS_STATE
	call ALKHARID_GYM_NPCS_POST_GYM_2F_1R
	return


ALKHARID_GYM_NPCS_POST_GYM_1F_3R::
	switch VAR_POKESCAPE_ALKHARID_GYM_QUEST
	case 30, ALKHARID_GYM_NPCS_POST_GYM_1F_3R_3
ALKHARID_GYM_NPCS_POST_GYM_1F_3R_1:
	return

ALKHARID_GYM_NPCS_POST_GYM_1F_3R_3:
	setobjectxyperm 2, 7, 6
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
	goto ALKHARID_GYM_NPCS_POST_GYM_1F_3R_1


ALKHARID_GYM_ROOMS_STATE::
	switch VAR_POKESCAPE_ALKHARID_GYM_QUEST
	case 0, ALKHARID_GYM_ROOMS_STATE_3
	case 5, ALKHARID_GYM_ROOMS_STATE_4
	case 10, ALKHARID_GYM_ROOMS_STATE_5
	case 15, ALKHARID_GYM_ROOMS_STATE_6
	case 20, ALKHARID_GYM_ROOMS_STATE_7
	case 30, ALKHARID_GYM_ROOMS_STATE_8
ALKHARID_GYM_ROOMS_STATE_1:
	return

ALKHARID_GYM_ROOMS_STATE_3:
	removeobject 1
	setflag FLAG_TEMP_6
	goto ALKHARID_GYM_ROOMS_STATE_1

ALKHARID_GYM_ROOMS_STATE_4:
	removeobject 1
	setflag FLAG_TEMP_6
	goto ALKHARID_GYM_ROOMS_STATE_1

ALKHARID_GYM_ROOMS_STATE_5:
	removeobject 1
	setflag FLAG_TEMP_6
	goto ALKHARID_GYM_ROOMS_STATE_1

ALKHARID_GYM_ROOMS_STATE_6:
	removeobject 1
	setflag FLAG_TEMP_6
	goto ALKHARID_GYM_ROOMS_STATE_1

ALKHARID_GYM_ROOMS_STATE_7:
	removeobject 1
	setflag FLAG_TEMP_6
	goto ALKHARID_GYM_ROOMS_STATE_1

ALKHARID_GYM_ROOMS_STATE_8:
	removeobject 1
	setflag FLAG_TEMP_6
	goto ALKHARID_GYM_ROOMS_STATE_1


GYM_NPC_1::
	lock
	faceplayer
	goto_if_unset FLAG_ALKHARIDGYM_1, GYM_NPC_1_2
GYM_NPC_1_1:
	goto_if_set FLAG_BADGE04_GET, GYM_NPC_1_5
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 0
	goto_if_eq GYM_NPC_1_10
	msgbox GYM_NPC_1_Text_8
GYM_NPC_1_9:
	release
	end

GYM_NPC_1_2:
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 15
	goto_if_eq GYM_NPC_1_7
	goto GYM_NPC_1_1

GYM_NPC_1_5:
	msgbox GYM_NPC_1_Text_6
	release
	end

GYM_NPC_1_7:
	call CHECK_IF_ALI
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 20
	goto_if_eq GYM_NPC_1_14
	applymovement 3, Movement_AlkharidGym_NPC_1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_RIGHT
	waitmovement 0
	namebox GYM_NPC_1_Text_1
	msgbox GYM_NPC_1_Text_2
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_ALKHARID_GYM_TRAINER_1, GYM_NPC_1_Text_3
	namebox GYM_NPC_1_Text_1
	msgbox GYM_NPC_1_Text_5
	closemessage
	hidenamebox
	setflag FLAG_ALKHARIDGYM_1
	release
	end

GYM_NPC_1_10:
	msgbox GYM_NPC_1_Text_7
	goto GYM_NPC_1_9

GYM_NPC_1_14:
	msgbox GYM_NPC_1_Text_0
	hidenamebox
	closemessage
	applymovement VAR_LAST_TALKED, Movement_AlkharidGym_TELEPORT
	delay 30
	removeobject VAR_LAST_TALKED
	addobject 1
	clearflag FLAG_TEMP_6
	applymovement 3, Movement_AlkharidGym_NPC_1
	applymovement 1, Movement_AlkharidGym_NPC_1_Ali
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_RIGHT
	waitmovement 0
	namebox GYM_NPC_1_Text_1
	msgbox GYM_NPC_1_Text_2
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_ALKHARID_GYM_TRAINER_1, GYM_NPC_1_Text_3
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq GYM_NPC_1_17
	msgbox GYM_NPC_1_Text_4
	closemessage
	hidenamebox
	applymovement 1, MOVEMENT_WALK_DOWN
	waitmovement 0
	applymovement 1, MOVEMENT_FACE_UP
	waitmovement 0
	release
	end

GYM_NPC_1_17:
	setvar VAR_POKESCAPE_ALKHARID_GYM_QUEST, 0
	end


GYM_NPC_2::
	lock
	faceplayer
	goto_if_unset FLAG_ALKHARIDGYM_1, GYM_NPC_2_2
GYM_NPC_2_1:
	goto_if_set FLAG_BADGE04_GET, GYM_NPC_2_5
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 0
	goto_if_eq GYM_NPC_2_10
	msgbox GYM_NPC_1_Text_8
GYM_NPC_2_9:
	release
	end

GYM_NPC_2_2:
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 15
	goto_if_eq GYM_NPC_2_7
	goto GYM_NPC_2_1

GYM_NPC_2_5:
	msgbox GYM_NPC_1_Text_6
	release
	end

GYM_NPC_2_7:
	call CHECK_IF_ALI
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 20
	goto_if_eq GYM_NPC_2_14
	applymovement 2, Movement_AlkharidGym_NPC_2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_LEFT
	waitmovement 0
	namebox GYM_NPC_1_Text_1
	msgbox GYM_NPC_1_Text_2
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_ALKHARID_GYM_TRAINER_1, GYM_NPC_1_Text_3
	namebox GYM_NPC_1_Text_1
	msgbox GYM_NPC_1_Text_5
	closemessage
	hidenamebox
	setflag FLAG_ALKHARIDGYM_1
	applymovement 2, Movement_AlkharidGym_moveafterbattle_1
	waitmovement 0
	release
	end

GYM_NPC_2_10:
	msgbox GYM_NPC_2_Text_0
	goto GYM_NPC_2_9

GYM_NPC_2_14:
	msgbox GYM_NPC_1_Text_0
	hidenamebox
	closemessage
	applymovement VAR_LAST_TALKED, Movement_AlkharidGym_TELEPORT
	delay 30
	removeobject VAR_LAST_TALKED
	addobject 1
	clearflag FLAG_TEMP_6
	applymovement 2, Movement_AlkharidGym_NPC_2
	applymovement 1, Movement_AlkharidGym_NPC_2_Ali
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_LEFT
	waitmovement 0
	namebox GYM_NPC_1_Text_1
	msgbox GYM_NPC_1_Text_2
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_ALKHARID_GYM_TRAINER_1, GYM_NPC_1_Text_3
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq GYM_NPC_2_17
	msgbox GYM_NPC_1_Text_4
	closemessage
	hidenamebox
	applymovement 2, Movement_AlkharidGym_moveafterbattle_1
	applymovement 1, Movement_AlkharidGym_moveafterbattle_2
	waitmovement 0
	release
	end

GYM_NPC_2_17:
	setvar VAR_POKESCAPE_ALKHARID_GYM_QUEST, 0
	end


Movement_AlkharidGym_NPC_1:
	walk_faster_up
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	step_end

Movement_AlkharidGym_NPC_1_Ali:
	walk_faster_up
	walk_faster_left
	walk_faster_left
	face_player
	step_end

Movement_AlkharidGym_NPC_2:
	walk_faster_down
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	step_end

Movement_AlkharidGym_NPC_2_Ali:
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_right
	face_player
	step_end

Movement_AlkharidGym_TELEPORT:
	fly_up
	step_end

Movement_AlkharidGym_moveafterbattle_1:
	walk_left
	walk_up
	face_down
	step_end

Movement_AlkharidGym_moveafterbattle_2:
	walk_left
	walk_down
	face_up
	step_end

GYM_NPC_1_Text_0:
	.string "Guards help me as I make my escape!$"

GYM_NPC_1_Text_1:
	.string "Warrior$"

GYM_NPC_1_Text_2:
	.string "Brother, I will help thee with this\n"
	.string "infidel!$"

GYM_NPC_1_Text_3:
	.string "Consider that a warning!$"

GYM_NPC_1_Text_4:
	.string "You have defeated us!\p"
	.string "But the Prince has made his escape so\n"
	.string "we have done our jobs.$"

GYM_NPC_1_Text_5:
	.string "You have defeated us!\p"
	.string "But the Prince is still somewhere\n"
	.string "around the Palace.$"

GYM_NPC_1_Text_6:
	.string "Hello congrats on beating the gym.$"

GYM_NPC_1_Text_7:
	.string "Hello.$"

GYM_NPC_1_Text_8:
	.string "We use our lives to protect our prince.$"

GYM_NPC_2_Text_0:
	.string "Hello this is the gym.$"
