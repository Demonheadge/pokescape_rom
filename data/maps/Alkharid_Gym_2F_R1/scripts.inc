Alkharid_Gym_2F_R1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Alkharid_Gym_2F_R1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Alkharid_Gym_2F_R1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 11
	call ALKHARID_GYM_ROOMS_STATE
	call ALKHARID_GYM_NPCS_POST_GYM_2F_1R
	return


ALKHARID_GYM_NPCS_POST_GYM_2F_1R::
	switch VAR_POKESCAPE_ALKHARID_GYM_QUEST
	case 30, ALKHARID_GYM_NPCS_POST_GYM_2F_1R_3
ALKHARID_GYM_NPCS_POST_GYM_2F_1R_1:
	return

ALKHARID_GYM_NPCS_POST_GYM_2F_1R_3:
	setobjectxyperm 2, 2, 4
	setobjectmovementtype 2, MOVEMENT_TYPE_WANDER_AROUND
	setobjectxyperm 3, 12, 5
	setobjectmovementtype 2, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
	goto ALKHARID_GYM_NPCS_POST_GYM_2F_1R_1


GYM_NPC_5::
	lock
	faceplayer
	goto_if_unset FLAG_ALKHARIDGYM_3, GYM_NPC_5_2
GYM_NPC_5_1:
	goto_if_set FLAG_BADGE04_GET, GYM_NPC_5_5
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 0
	goto_if_eq GYM_NPC_5_10
	msgbox GYM_NPC_5_Text_8
GYM_NPC_5_9:
	release
	end

GYM_NPC_5_2:
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 15
	goto_if_eq GYM_NPC_5_7
	goto GYM_NPC_5_1

GYM_NPC_5_5:
	msgbox GYM_NPC_5_Text_6
	release
	end

GYM_NPC_5_7:
	call CHECK_IF_ALI
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 20
	goto_if_eq GYM_NPC_5_14
	applymovement 3, Movement_AlkharidGym_NPC_5
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_UP
	waitmovement 0
	namebox GYM_NPC_5_Text_1
	msgbox GYM_NPC_5_Text_2
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_ALKHARID_GYM_TRAINER_3, GYM_NPC_5_Text_3
	namebox GYM_NPC_5_Text_1
	msgbox GYM_NPC_5_Text_5
	closemessage
	hidenamebox
	setflag FLAG_ALKHARIDGYM_3
	release
	end

GYM_NPC_5_10:
	msgbox GYM_NPC_5_Text_7
	goto GYM_NPC_5_9

GYM_NPC_5_14:
	msgbox GYM_NPC_5_Text_0
	hidenamebox
	closemessage
	applymovement VAR_LAST_TALKED, Movement_AlkharidGym_TELEPORT
	delay 30
	removeobject VAR_LAST_TALKED
	addobject 1
	clearflag FLAG_TEMP_6
	applymovement 3, Movement_AlkharidGym_NPC_5
	applymovement 1, Movement_AlkharidGym_NPC_5_Ali
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_UP
	waitmovement 0
	namebox GYM_NPC_5_Text_1
	msgbox GYM_NPC_5_Text_2
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_ALKHARID_GYM_TRAINER_3, GYM_NPC_5_Text_3
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq GYM_NPC_5_17
	msgbox GYM_NPC_5_Text_4
	closemessage
	hidenamebox
	applymovement 3, MOVEMENT_WALK_LEFT
	waitmovement 0
	applymovement 3, MOVEMENT_FACE_RIGHT
	waitmovement 0
	release
	end

GYM_NPC_5_17:
	setvar VAR_POKESCAPE_ALKHARID_GYM_QUEST, 0
	end


GYM_NPC_6::
	lock
	faceplayer
	goto_if_unset FLAG_ALKHARIDGYM_3, GYM_NPC_6_2
GYM_NPC_6_1:
	goto_if_set FLAG_BADGE04_GET, GYM_NPC_6_5
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 0
	goto_if_eq GYM_NPC_6_10
	msgbox GYM_NPC_5_Text_8
GYM_NPC_6_9:
	release
	end

GYM_NPC_6_2:
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 15
	goto_if_eq GYM_NPC_6_7
	goto GYM_NPC_6_1

GYM_NPC_6_5:
	msgbox GYM_NPC_5_Text_6
	release
	end

GYM_NPC_6_7:
	call CHECK_IF_ALI
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 20
	goto_if_eq GYM_NPC_6_14
	applymovement 2, Movement_AlkharidGym_NPC_6
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_DOWN
	waitmovement 0
	namebox GYM_NPC_5_Text_1
	msgbox GYM_NPC_5_Text_2
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_ALKHARID_GYM_TRAINER_3, GYM_NPC_5_Text_3
	namebox GYM_NPC_5_Text_1
	msgbox GYM_NPC_5_Text_5
	closemessage
	hidenamebox
	setflag FLAG_ALKHARIDGYM_3
	release
	end

GYM_NPC_6_10:
	msgbox GYM_NPC_5_Text_7
	goto GYM_NPC_6_9

GYM_NPC_6_14:
	msgbox GYM_NPC_5_Text_0
	hidenamebox
	closemessage
	applymovement VAR_LAST_TALKED, Movement_AlkharidGym_TELEPORT
	delay 30
	removeobject VAR_LAST_TALKED
	addobject 1
	clearflag FLAG_TEMP_6
	applymovement 2, Movement_AlkharidGym_NPC_6
	applymovement 1, Movement_AlkharidGym_NPC_6_Ali
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_DOWN
	waitmovement 0
	namebox GYM_NPC_5_Text_1
	msgbox GYM_NPC_5_Text_2
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_ALKHARID_GYM_TRAINER_3, GYM_NPC_5_Text_3
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq GYM_NPC_6_17
	msgbox GYM_NPC_5_Text_4
	closemessage
	hidenamebox
	applymovement 1, MOVEMENT_WALK_DOWN
	waitmovement 0
	applymovement 1, MOVEMENT_FACE_UP
	waitmovement 0
	release
	end

GYM_NPC_6_17:
	setvar VAR_POKESCAPE_ALKHARID_GYM_QUEST, 0
	end


Movement_AlkharidGym_NPC_5:
	walk_faster_down
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_down
	walk_faster_down
	face_player
	step_end

Movement_AlkharidGym_NPC_5_Ali:
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_down
	walk_faster_down
	face_player
	step_end

Movement_AlkharidGym_NPC_6:
	walk_faster_up
	walk_faster_up
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_up
	face_player
	step_end

Movement_AlkharidGym_NPC_6_Ali:
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_up
	face_player
	step_end

GYM_NPC_5_Text_0:
	.string "Guards help me as I make my escape!$"

GYM_NPC_5_Text_1:
	.string "Warrior$"

GYM_NPC_5_Text_2:
	.string "Brother, I will help thee with this\n"
	.string "infidel!$"

GYM_NPC_5_Text_3:
	.string "Consider that a warning!$"

GYM_NPC_5_Text_4:
	.string "You have defeated us!\p"
	.string "But the Prince has made his escape so\n"
	.string "we have done our jobs.$"

GYM_NPC_5_Text_5:
	.string "You have defeated us!\p"
	.string "But the Prince is still somewhere\n"
	.string "around the Palace.$"

GYM_NPC_5_Text_6:
	.string "Hello congrats on beating the gym.$"

GYM_NPC_5_Text_7:
	.string "Hello.$"

GYM_NPC_5_Text_8:
	.string "We use our lives to protect our prince.$"
