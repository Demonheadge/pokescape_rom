Draynor_Manor_Crypt_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Draynor_Manor_Crypt_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_TRANSITION, Draynor_Manor_Crypt_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Draynor_Manor_Crypt_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Draynor_Manor_Crypt_MapScripts_MAP_SCRIPT_ON_LOAD:
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Draynor_Manor_Crypt_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Draynor_Manor_Crypt_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	goto WizardsTower_DraynorManor_Crypt_STATE
	return

Draynor_Manor_Crypt_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 1
	compare VAR_POKESCAPE_GAMEMODE_STATE, 1
	goto_if_eq Draynor_Manor_Crypt_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Draynor_Manor_Crypt_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	call OPENWORLD_STATE_DRAYNORMANOR_CRYPT
	return

Draynor_Manor_Crypt_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_0, 0, EVENT_HAM_DRAYNORMANOR_CRYPT
	.2byte 0


OPENWORLD_STATE_DRAYNORMANOR_CRYPT::
	removeobject 2
	removeobject 1
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	return


WizardsTower_DraynorManor_Crypt_STATE::
	switch VAR_POKESCAPE_WIZARDS_TOWER_STATE
	case 0, WizardsTower_DraynorManor_Crypt_STATE_2
	case 1, WizardsTower_DraynorManor_Crypt_STATE_2
	case 2, WizardsTower_DraynorManor_Crypt_STATE_2
	case 3, WizardsTower_DraynorManor_Crypt_STATE_2
	case 4, WizardsTower_DraynorManor_Crypt_STATE_2
	case 5, WizardsTower_DraynorManor_Crypt_STATE_2
	case 6, WizardsTower_DraynorManor_Crypt_STATE_2
	case 7, WizardsTower_DraynorManor_Crypt_STATE_2
	case 8, WizardsTower_DraynorManor_Crypt_STATE_2
	case 9, WizardsTower_DraynorManor_Crypt_STATE_3
	case 10, WizardsTower_DraynorManor_Crypt_STATE_3
	case 11, WizardsTower_DraynorManor_Crypt_STATE_3
	return

WizardsTower_DraynorManor_Crypt_STATE_2:
	release
	end

WizardsTower_DraynorManor_Crypt_STATE_3:
	removeobject 2
	removeobject 1
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setvar VAR_TEMP_0, 1
	release
	end


EVENT_HAM_DRAYNORMANOR_CRYPT::
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq EVENT_HAM_DRAYNORMANOR_CRYPT_1
	setvar VAR_TEMP_0, 1
	return

EVENT_HAM_DRAYNORMANOR_CRYPT_1:
	lock
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_DraynorManorCrypt_PLAYER_1
	waitmovement 0
	playbgm MUS_PS_ENCOUNTER_HAM, 1
	namebox EVENT_HAM_DRAYNORMANOR_CRYPT_Text_0
	msgbox EVENT_HAM_DRAYNORMANOR_CRYPT_Text_1
	hidenamebox
	closemessage
	applymovement 1, MOVEMENT_DraynorManorCrypt_COUNT_1
	playse SE_WALL_HIT
	applymovement 2, MOVEMENT_DraynorManorCrypt_HAM_1
	waitmovement 0
	namebox EVENT_HAM_DRAYNORMANOR_CRYPT_Text_2
	msgbox EVENT_HAM_DRAYNORMANOR_CRYPT_Text_3
	hidenamebox
	closemessage
	namebox EVENT_HAM_DRAYNORMANOR_CRYPT_Text_0
	msgbox EVENT_HAM_DRAYNORMANOR_CRYPT_Text_4
	hidenamebox
	closemessage
	applymovement 2, MOVEMENT_DraynorManorCrypt_HAM_2
	applymovement 1, MOVEMENT_DraynorManorCrypt_COUNT_2
	delay 6
	waitmovement 1
	waitmovement 2
	applymovement 1, MOVEMENT_DraynorManorCrypt_COUNT_3
	playse SE_WALL_HIT
	applymovement 2, MOVEMENT_DraynorManorCrypt_HAM_3
	waitmovement 2
	namebox EVENT_HAM_DRAYNORMANOR_CRYPT_Text_0
	msgbox EVENT_HAM_DRAYNORMANOR_CRYPT_Text_5
	hidenamebox
	closemessage
	applymovement 1, MOVEMENT_DraynorManorCrypt_COUNT_4
	waitmovement 0
	delay 16
	namebox EVENT_HAM_DRAYNORMANOR_CRYPT_Text_0
	msgbox EVENT_HAM_DRAYNORMANOR_CRYPT_Text_6
	hidenamebox
	closemessage
	applymovement 2, MOVEMENT_DraynorManorCrypt_HAM_4
	trainerbattle_no_intro TRAINER_DRAYNOR_MANOR_COUNT_DRAYNOR, EVENT_HAM_DRAYNORMANOR_CRYPT_Text_7
	setflag FLAG_TEMP_1
	removeobject 2
	namebox EVENT_HAM_DRAYNORMANOR_CRYPT_Text_0
	msgbox EVENT_HAM_DRAYNORMANOR_CRYPT_Text_8
	closemessage
	hidenamebox
	applymovement 1, MOVEMENT_DraynorManorCrypt_COUNT_5
	waitmovement 0
	namebox EVENT_HAM_DRAYNORMANOR_CRYPT_Text_0
	msgbox EVENT_HAM_DRAYNORMANOR_CRYPT_Text_9
	closemessage
	hidenamebox
	applymovement 1, MOVEMENT_DraynorManorCrypt_COUNT_6
	delay 16
	fadescreen FADE_TO_BLACK
	removeobject 1
	setflag FLAG_TEMP_2
	savebgm MUS_DUMMY
	fadedefaultbgm
	waitmovement 0
	delay 16
	fadescreen FADE_FROM_BLACK
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 9
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 30
	setvar VAR_TEMP_0, 1
	release
	end


NPC_DraynorManor_RESETEVENT::
	lock
	faceplayer
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 7
	msgbox NPC_DraynorManor_RESETEVENT_Text_0
	hidenamebox
	closemessage
	release
	end


MOVEMENT_DraynorManorCrypt_PLAYER_1:
	walk_slow_left
	walk_slow_up
	step_end

MOVEMENT_DraynorManorCrypt_COUNT_1:
	walk_in_place_fast_down
	step_end

MOVEMENT_DraynorManorCrypt_HAM_1:
	lock_facing_direction
	walk_faster_down
	unlock_facing_direction
	step_end

MOVEMENT_DraynorManorCrypt_HAM_2:
	face_right
	lock_facing_direction
	walk_slow_left
	unlock_facing_direction
	step_end

MOVEMENT_DraynorManorCrypt_COUNT_2:
	walk_down
	walk_down
	delay_2
	face_left
	step_end

MOVEMENT_DraynorManorCrypt_HAM_3:
	lock_facing_direction
	walk_faster_left
	walk_faster_left
	unlock_facing_direction
	step_end

MOVEMENT_DraynorManorCrypt_COUNT_3:
	walk_in_place_fast_left
	step_end

MOVEMENT_DraynorManorCrypt_COUNT_4:
	face_player
	step_end

MOVEMENT_DraynorManorCrypt_COUNT_5:
	face_left
	delay_16
	delay_16
	delay_16
	face_player
	step_end

MOVEMENT_DraynorManorCrypt_COUNT_6:
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	step_end

MOVEMENT_DraynorManorCrypt_HAM_4:
	walk_slow_down
	walk_slow_right
	walk_slow_down
	walk_slow_right
	set_invisible
	walk_down
	set_invisible
	walk_slow_right
	walk_slow_right
	step_end

NPC_DraynorManor_CountCoffin::
	lock
	faceplayer
	msgbox NPC_DraynorManor_CountCoffin_Text_0
	hidenamebox
	closemessage
	release
	end


EVENT_HAM_DRAYNORMANOR_CRYPT_Text_0:
	.string "COUNT DRAYNOR$"

EVENT_HAM_DRAYNORMANOR_CRYPT_Text_1:
	.string "You dare enter my home and cause a\n"
	.string "racket!?\p"
	.string "I will not tolerate this!$"

EVENT_HAM_DRAYNORMANOR_CRYPT_Text_2:
	.string "H.A.M GRUNT$"

EVENT_HAM_DRAYNORMANOR_CRYPT_Text_3:
	.string "Urgh…$"

EVENT_HAM_DRAYNORMANOR_CRYPT_Text_4:
	.string "I'm not done with you yet!$"

EVENT_HAM_DRAYNORMANOR_CRYPT_Text_5:
	.string "…$"

EVENT_HAM_DRAYNORMANOR_CRYPT_Text_6:
	.string "Another one!\p"
	.string "I guess I will have to deal with you as\n"
	.string "well!$"

EVENT_HAM_DRAYNORMANOR_CRYPT_Text_7:
	.string "Urgh!\n"
	.string "Right through the heart!$"

EVENT_HAM_DRAYNORMANOR_CRYPT_Text_8:
	.string "…{PAUSE 15}\p"
	.string "You may be the victor, but I still have\n"
	.string "strength left in me!\p"
	.string "…{PAUSE 15} …{PAUSE 15}\p"
	.string "Oh, you are here to capture the pink\n"
	.string "man?$"

EVENT_HAM_DRAYNORMANOR_CRYPT_Text_9:
	.string "Hmmm… The pink man seems to have fled\n"
	.string "during our battle.\p"
	.string "Sorry about that, I wouldn't think he\n"
	.string "has gotten that far.\p"
	.string "I'm going back to bed, please don't\n"
	.string "disturb me again.$"

NPC_DraynorManor_RESETEVENT_Text_0:
	.string "VAR SET TO 7$"

NPC_DraynorManor_CountCoffin_Text_0:
	.string "Shhh…{PAUSE 15} The Count is sleeping.$"
