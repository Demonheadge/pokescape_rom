Draynor_Manor_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Draynor_Manor_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_TRANSITION, Draynor_Manor_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Draynor_Manor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Draynor_Manor_MapScripts_MAP_SCRIPT_ON_LOAD:
	call WizardsTower_DraynorManor_STATE
	return

Draynor_Manor_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 1
	return

Draynor_Manor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_POKESCAPE_WIZARDS_TOWER_STATE, 9, HAM_EVENT_DraynorManor_DOOR_CALL
	.2byte 0


WizardsTower_DraynorManor_STATE::
	switch VAR_POKESCAPE_WIZARDS_TOWER_STATE
	case 0, WizardsTower_DraynorManor_STATE_2
	case 1, WizardsTower_DraynorManor_STATE_2
	case 2, WizardsTower_DraynorManor_STATE_2
	case 3, WizardsTower_DraynorManor_STATE_2
	case 4, WizardsTower_DraynorManor_STATE_2
	case 5, WizardsTower_DraynorManor_STATE_2
	case 6, WizardsTower_DraynorManor_STATE_3
	case 7, WizardsTower_DraynorManor_STATE_4
	case 8, WizardsTower_DraynorManor_STATE_5
	case 9, WizardsTower_DraynorManor_STATE_6
	case 10, WizardsTower_DraynorManor_STATE_7
	case 11, WizardsTower_DraynorManor_STATE_7
	return

WizardsTower_DraynorManor_STATE_2:
	removeobject 1
	setflag FLAG_TEMP_1
	release
	end

WizardsTower_DraynorManor_STATE_3:
	clearflag FLAG_TEMP_1
	addobject 1
	setvar VAR_TEMP_0, 1
	release
	end

WizardsTower_DraynorManor_STATE_4:
	clearflag FLAG_TEMP_1
	addobject 1
	setobjectxyperm 1, 16, 36
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	setvar VAR_TEMP_0, 1
	release
	end

WizardsTower_DraynorManor_STATE_5:
	removeobject 1
	setflag FLAG_TEMP_1
	setvar VAR_TEMP_0, 1
	return

WizardsTower_DraynorManor_STATE_6:
	clearflag FLAG_TEMP_1
	addobject 1
	setobjectxyperm 1, 14, 24
	setvar VAR_TEMP_0, 1
	return

WizardsTower_DraynorManor_STATE_7:
	removeobject 1
	setflag FLAG_TEMP_1
	setvar VAR_TEMP_0, 1
	release
	end


BLOCK_DraynorManor_Trees::
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq BLOCK_DraynorManor_Trees_1
	setvar VAR_TEMP_1, 1
	release
	end

BLOCK_DraynorManor_Trees_1:
	lock
	msgbox BLOCK_DraynorManor_Trees_Text_0
	closemessage
	playse SE_LEDGE
	applymovement OBJ_EVENT_ID_PLAYER, Movement_DraynorManor_Trees
	waitmovement 0
	msgbox BLOCK_DraynorManor_Trees_Text_1
	closemessage
	release
	end


Movement_DraynorManor_Trees:
	jump_down
	step_end

HAM_EVENT_DraynorManor_DOOR_CALL::
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 14
	goto_if_eq HAM_EVENT_DraynorManor_DOOR_CALL_1
	compare VAR_TEMP_1, 15
	goto_if_eq HAM_EVENT_DraynorManor_DOOR_CALL_2
	compare VAR_TEMP_2, 41
	goto_if_eq HAM_EVENT_DraynorManor_DOOR_CALL_3
	call HAM_EVENT_DraynorManor_DOOR_WRONG
	return

HAM_EVENT_DraynorManor_DOOR_CALL_1:
	call HAM_EVENT_DraynorManor_DOOR_LEFT
	return

HAM_EVENT_DraynorManor_DOOR_CALL_2:
	call HAM_EVENT_DraynorManor_DOOR_RIGHT
	return

HAM_EVENT_DraynorManor_DOOR_CALL_3:
	clearflag FLAG_TEMP_1
	addobject 1
	setobjectxyperm 1, 21, 36
	setobjectxy 1, 21, 36
	call HAM_EVENT_DraynorManor_DOOR_WHITEOUT
	return


HAM_EVENT_DraynorManor_DOOR_LEFT::
	applymovement 1, Ariane_DraynorManor_5
	waitmovement 0
	namebox HAM_EVENT_DraynorManor_DOOR_LEFT_Text_0
	msgbox HAM_EVENT_DraynorManor_DOOR_LEFT_Text_1
	goto HAM_EVENT_DraynorManor_Ariane_1
	return


HAM_EVENT_DraynorManor_DOOR_RIGHT::
	applymovement 1, Ariane_DraynorManor_7
	waitmovement 0
	applymovement 1, Ariane_DraynorManor_5
	waitmovement 0
	namebox HAM_EVENT_DraynorManor_DOOR_LEFT_Text_0
	msgbox HAM_EVENT_DraynorManor_DOOR_LEFT_Text_1
	goto HAM_EVENT_DraynorManor_Ariane_1
	return


HAM_EVENT_DraynorManor_Ariane_1::
	msgbox HAM_EVENT_DraynorManor_Ariane_1_Text_0
	closemessage
	hidenamebox
	applymovement 1, Ariane_DraynorManor_6
	waitmovement 0
	removeobject 1
	setflag FLAG_TEMP_1
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 10
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 100
	end


HAM_EVENT_DraynorManor_DOOR_WRONG::
	applymovement 1, Ariane_DraynorManor_7
	waitmovement 0
	applymovement 1, Ariane_DraynorManor_5
	waitmovement 0
	applymovement 1, Ariane_DraynorManor_8
	waitmovement 0
	namebox HAM_EVENT_DraynorManor_DOOR_LEFT_Text_0
	msgbox HAM_EVENT_DraynorManor_DOOR_WRONG_Text_0
	closemessage
	hidenamebox
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Ariane_DraynorManor_10
	waitmovement 0
	namebox HAM_EVENT_DraynorManor_DOOR_LEFT_Text_0
	msgbox HAM_EVENT_DraynorManor_Ariane_1_Text_0
	closemessage
	hidenamebox
	applymovement 1, Ariane_DraynorManor_9
	waitmovement 0
	removeobject 1
	setflag FLAG_TEMP_1
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 10
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 100
	end


HAM_EVENT_DraynorManor_DOOR_WHITEOUT::
	applymovement 1, Ariane_DraynorManor_11
	waitmovement 0
	namebox HAM_EVENT_DraynorManor_DOOR_LEFT_Text_0
	msgbox HAM_EVENT_DraynorManor_DOOR_WHITEOUT_Text_0
	msgbox HAM_EVENT_DraynorManor_Ariane_1_Text_0
	closemessage
	hidenamebox
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 20
	goto_if_eq HAM_EVENT_DraynorManor_DOOR_WHITEOUT_2
	compare VAR_TEMP_1, 21
	goto_if_eq HAM_EVENT_DraynorManor_DOOR_WHITEOUT_3
HAM_EVENT_DraynorManor_DOOR_WHITEOUT_1:
	removeobject 1
	setflag FLAG_TEMP_1
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 10
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 100
	end

HAM_EVENT_DraynorManor_DOOR_WHITEOUT_2:
	applymovement 1, Ariane_DraynorManor_11
	waitmovement 0
	goto HAM_EVENT_DraynorManor_DOOR_WHITEOUT_1

HAM_EVENT_DraynorManor_DOOR_WHITEOUT_3:
	applymovement 1, MOVEMENT_WALKLEFT
	waitmovement 0
	applymovement 1, Ariane_DraynorManor_11
	waitmovement 0
	goto HAM_EVENT_DraynorManor_DOOR_WHITEOUT_1


Ariane_DraynorManor_5:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Ariane_DraynorManor_6:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Ariane_DraynorManor_7:
	walk_right
	step_end

Ariane_DraynorManor_8:
	walk_up
	walk_right
	delay_16
	delay_16
	step_end

Ariane_DraynorManor_9:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Ariane_DraynorManor_10:
	emote_question_mark
	face_up
	delay_16
	face_right
	delay_16
	face_down
	step_end

Ariane_DraynorManor_11:
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

HAM_EVENT_DraynorManor_MAIN_1::
	lock
	namebox HAM_EVENT_DraynorManor_DOOR_LEFT_Text_0
	msgbox HAM_EVENT_DraynorManor_MAIN_1_Text_0
	hidenamebox
	closemessage
	applymovement 1, Ariane_DraynorManor_1
	waitmovement 0
	opendoor 14, 17
	waitdooranim
	msgbox HAM_EVENT_DraynorManor_MAIN_1_Text_1
	playSE SE_LEDGE
	applymovement 1, Ariane_DraynorManor_2
	waitmovement 0
	return


HAM_EVENT_DraynorManor_MAIN_2::
	closedoor 14, 17
	waitdooranim
	waitmovement 0
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 7
	setobjectxyperm 1, 16, 36
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	release
	end


HAM_EVENT_DraynorManor_TRIGGER_1::
	call HAM_EVENT_DraynorManor_MAIN_1
	msgbox HAM_EVENT_DraynorManor_TRIGGER_1_Text_0
	hidenamebox
	closemessage
	applymovement 1, Ariane_DraynorManor_3
	goto HAM_EVENT_DraynorManor_MAIN_2
	return


HAM_EVENT_DraynorManor_TRIGGER_2::
	call HAM_EVENT_DraynorManor_MAIN_1
	msgbox HAM_EVENT_DraynorManor_TRIGGER_1_Text_0
	hidenamebox
	closemessage
	applymovement 1, Ariane_DraynorManor_3
	playse SE_WALL_HIT
	applymovement OBJ_EVENT_ID_PLAYER, Ariane_DraynorManor_4
	waitmovement 1
	goto HAM_EVENT_DraynorManor_MAIN_2
	return


Ariane_DraynorManor_1:
	walk_up
	step_end

Ariane_DraynorManor_2:
	jump_in_place_up
	step_end

Ariane_DraynorManor_3:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_right
	walk_faster_right
	step_end

Ariane_DraynorManor_4:
	slide_right
	face_down
	step_end

HAM_EVENT_DraynorManor_Ariane::
	lock
	faceplayer
	namebox HAM_EVENT_DraynorManor_DOOR_LEFT_Text_0
	msgbox HAM_EVENT_DraynorManor_Ariane_Text_0
	hidenamebox
	closemessage
	release
	end


ENCOUNTER_DeadTree_1::
	compare VAR_TEMP_A, 1
	goto_if_eq ENCOUNTER_DeadTree_1_1
	lock
	call ENCOUNTER_DeadTree
	setvar VAR_TEMP_A, 1
	release
	end

ENCOUNTER_DeadTree_1_1:
	end


ENCOUNTER_DeadTree_2::
	compare VAR_TEMP_B, 1
	goto_if_eq ENCOUNTER_DeadTree_2_1
	call ENCOUNTER_DeadTree
	setvar VAR_TEMP_B, 1
	release
	end

ENCOUNTER_DeadTree_2_1:
	end


ENCOUNTER_DeadTree_3::
	compare VAR_TEMP_C, 1
	goto_if_eq ENCOUNTER_DeadTree_3_1
	call ENCOUNTER_DeadTree
	setvar VAR_TEMP_C, 1
	release
	end

ENCOUNTER_DeadTree_3_1:
	end


ENCOUNTER_DeadTree_4::
	compare VAR_TEMP_D, 1
	goto_if_eq ENCOUNTER_DeadTree_4_1
	call ENCOUNTER_DeadTree
	setvar VAR_TEMP_D, 1
	release
	end

ENCOUNTER_DeadTree_4_1:
	end


ENCOUNTER_DeadTree_5::
	compare VAR_TEMP_E, 1
	goto_if_eq ENCOUNTER_DeadTree_5_1
	call ENCOUNTER_DeadTree
	setvar VAR_TEMP_E, 1
	release
	end

ENCOUNTER_DeadTree_5_1:
	end


ENCOUNTER_DeadTree_6::
	compare VAR_TEMP_F, 1
	goto_if_eq ENCOUNTER_DeadTree_6_1
	call ENCOUNTER_DeadTree
	setvar VAR_TEMP_F, 1
	release
	end

ENCOUNTER_DeadTree_6_1:
	end


ENCOUNTER_DeadTree::
	lock
	playse SE_LEDGE
	applymovement OBJ_EVENT_ID_PLAYER, DeadTree_PlayerMovement1
	waitmovement 0
	msgbox ENCOUNTER_DeadTree_Text_0
	closemessage
	setwildbattle SPECIES_DEAD_TREE, 15, ITEM_NONE
	dowildbattle
	return


DeadTree_PlayerMovement1:
	emote_exclamation_mark
	lock_facing_direction
	jump_in_place_down
	delay_16
	unlock_facing_direction
	step_end

BLOCK_DraynorManor_Trees_Text_0:
	.string "As you get close to the Manor some\n"
	.string "trees swipe at you!$"

BLOCK_DraynorManor_Trees_Text_1:
	.string "The trees are not letting you pass.$"

HAM_EVENT_DraynorManor_DOOR_LEFT_Text_0:
	.string "Ariane$"

HAM_EVENT_DraynorManor_DOOR_LEFT_Text_1:
	.string "There you are!$"

HAM_EVENT_DraynorManor_Ariane_1_Text_0:
	.string "I gave chase to that guy but he\n"
	.string "escaped…\p"
	.string "I'm heading back to report to Sedridor.\p"
	.string "Thanks for you assistance.\p"
	.string "Come visit me at the tower sometime!$"

HAM_EVENT_DraynorManor_DOOR_WRONG_Text_0:
	.string "Hey {PLAYER} is that you over there?$"

HAM_EVENT_DraynorManor_DOOR_WHITEOUT_Text_0:
	.string "What?!\p"
	.string "{PLAYER}! How did you get here?!\p"
	.string "Urgh nevermind that!$"

HAM_EVENT_DraynorManor_MAIN_1_Text_0:
	.string "Did he seriously have to go inside this\n"
	.string "creepy place!$"

HAM_EVENT_DraynorManor_MAIN_1_Text_1:
	.string "EEEEEEK!$"

HAM_EVENT_DraynorManor_TRIGGER_1_Text_0:
	.string "I…{PAUSE 15} I…{PAUSE 15} I cannot do this!!$"

HAM_EVENT_DraynorManor_Ariane_Text_0:
	.string "I can not do this!\p"
	.string "That manor is 2sp00ky4me!$"

ENCOUNTER_DeadTree_Text_0:
	.string "The tree attacked!$"
