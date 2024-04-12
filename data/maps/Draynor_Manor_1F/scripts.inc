Draynor_Manor_1F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Draynor_Manor_1F_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_TRANSITION, Draynor_Manor_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Draynor_Manor_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Draynor_Manor_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
	call DraynorManor_Lever_STATE
	call STORYMODE_STATE_DRAYNORMANOR_1F
	return

Draynor_Manor_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 1
	return

Draynor_Manor_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_POKESCAPE_WIZARDS_TOWER_STATE, 7, HAM_EVENT_DRAYNORMANOR_1F
	map_script_2 VAR_TEMP_B, 1, HAM_EVENT_DRAYNORMANOR_1F
	.2byte 0


STORYMODE_STATE_DRAYNORMANOR_1F::
	checkfollower
	compare VAR_RESULT, 0
	goto_if_ne STORYMODE_STATE_DRAYNORMANOR_1F_2
	removeobject 17
	setflag FLAG_TEMP_1F
STORYMODE_STATE_DRAYNORMANOR_1F_1:
	switch VAR_POKESCAPE_WIZARDS_TOWER_STATE
	case 8, STORYMODE_STATE_DRAYNORMANOR_1F_7
STORYMODE_STATE_DRAYNORMANOR_1F_5:
	return

STORYMODE_STATE_DRAYNORMANOR_1F_2:
	setvar VAR_TEMP_A, 1
	goto STORYMODE_STATE_DRAYNORMANOR_1F_1

STORYMODE_STATE_DRAYNORMANOR_1F_7:
	checkfollower
	compare VAR_RESULT, 0
	goto_if_eq STORYMODE_STATE_DRAYNORMANOR_1F_8
	goto STORYMODE_STATE_DRAYNORMANOR_1F_5

STORYMODE_STATE_DRAYNORMANOR_1F_8:
	addobject 17
	clearflag FLAG_TEMP_1F
	setvar VAR_TEMP_B, 1
	goto STORYMODE_STATE_DRAYNORMANOR_1F_5


HAM_EVENT_DRAYNORMANOR_1F::
	lockall
	switch VAR_POKESCAPE_WIZARDS_TOWER_STATE
	case 7, HAM_EVENT_DRAYNORMANOR_1F_3
	case 8, HAM_EVENT_DRAYNORMANOR_1F_4
HAM_EVENT_DRAYNORMANOR_1F_1:
	release
	return

HAM_EVENT_DRAYNORMANOR_1F_3:
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 24
	goto_if_eq HAM_EVENT_DRAYNORMANOR_1F_6
	compare VAR_TEMP_1, 25
	goto_if_eq HAM_EVENT_DRAYNORMANOR_1F_7
HAM_EVENT_DRAYNORMANOR_1F_5:
	setobjectmovementtype 17, MOVEMENT_TYPE_FACE_UP
	applymovement OBJ_EVENT_ID_PLAYER, Movement_DraynorManor_Entry_1
	waitmovement 0
	delay 32
	playse SE_DOOR
	addobject 17
	clearflag FLAG_TEMP_1F
	delay 32
	applymovement 17, Movement_DraynorManor_Entry_2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_DOWN
	waitmovement 0
	namebox HAM_EVENT_DRAYNORMANOR_1F_Text_0
	msgbox HAM_EVENT_DRAYNORMANOR_1F_Text_1
	closemessage
	hidenamebox
	applymovement 17, Movement_DraynorManor_Entry_4
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_LEFT
	waitmovement 0
	msgbox HAM_EVENT_DRAYNORMANOR_1F_Text_2
	hidenamebox
	applymovement 6, Movement_DraynorManor_Entry_Rat
	playmoncry SPECIES_RAT_NORMAL_FORM, 1
	namebox HAM_EVENT_DRAYNORMANOR_1F_Text_3
	msgbox HAM_EVENT_DRAYNORMANOR_1F_Text_4
	waitmovement 0
	removeobject 6
	setflag FLAG_TEMP_19
	waitmoncry
	playse SE_LEDGE
	applymovement 17, MOVEMENT_EXCLAMATIONMARK_JUMP_UP
	waitmovement 0
	namebox HAM_EVENT_DRAYNORMANOR_1F_Text_0
	msgbox HAM_EVENT_DRAYNORMANOR_1F_Text_5
	applymovement 17, Movement_DraynorManor_Entry_5
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_DOWN
	waitmovement 0
	msgbox HAM_EVENT_DRAYNORMANOR_1F_Text_6
	closemessage
	hidenamebox
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 8
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 25
	playfanfare MUS_OBTAIN_SYMBOL
	msgbox HAM_EVENT_DRAYNORMANOR_1F_Text_7
	waitfanfare
	closemessage
	hidenamebox
	loadword 0, FOLLOWING_Ariane
	setfollower 17, 0x80
	setvar VAR_TEMP_A, 1
	goto HAM_EVENT_DRAYNORMANOR_1F_1

HAM_EVENT_DRAYNORMANOR_1F_4:
	applymovement OBJ_EVENT_ID_PLAYER, Movement_DraynorManor_Entry_3
	waitmovement 0
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 24
	goto_if_eq HAM_EVENT_DRAYNORMANOR_1F_11
	compare VAR_TEMP_1, 25
	goto_if_eq HAM_EVENT_DRAYNORMANOR_1F_12
HAM_EVENT_DRAYNORMANOR_1F_10:
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_RIGHT
	waitmovement 0
	namebox HAM_EVENT_DRAYNORMANOR_1F_Text_0
	msgbox HAM_EVENT_DRAYNORMANOR_1F_Text_8
	hidenamebox
	playfanfare MUS_OBTAIN_SYMBOL
	msgbox HAM_EVENT_DRAYNORMANOR_1F_Text_7
	waitfanfare
	closemessage
	hidenamebox
	loadword 0, FOLLOWING_Ariane
	setfollower 17, 0x80
	setvar VAR_TEMP_A, 1
	setvar VAR_TEMP_B, 0
	goto HAM_EVENT_DRAYNORMANOR_1F_1

HAM_EVENT_DRAYNORMANOR_1F_6:
	setobjectxyperm 17, 24, 22
	goto HAM_EVENT_DRAYNORMANOR_1F_5

HAM_EVENT_DRAYNORMANOR_1F_7:
	setobjectxyperm 17, 25, 22
	goto HAM_EVENT_DRAYNORMANOR_1F_5

HAM_EVENT_DRAYNORMANOR_1F_11:
	applymovement 17, MOVEMENT_WALKLEFT
	waitmovement 0
	applymovement 17, MOVEMENT_WALKLEFT
	waitmovement 0
	goto HAM_EVENT_DRAYNORMANOR_1F_10

HAM_EVENT_DRAYNORMANOR_1F_12:
	applymovement 17, MOVEMENT_WALKLEFT
	waitmovement 0
	goto HAM_EVENT_DRAYNORMANOR_1F_10


Movement_DraynorManor_Entry_1:
	walk_slow_up
	walk_slow_up
	step_end

Movement_DraynorManor_Entry_2:
	delay_16
	walk_slow_up
	step_end

Movement_DraynorManor_Entry_3:
	walk_slow_up
	step_end

Movement_DraynorManor_Entry_4:
	walk_left
	walk_up
	face_player
	step_end

Movement_DraynorManor_Entry_5:
	walk_faster_down
	walk_faster_right
	face_player
	step_end

MOVEMENT_EXCLAMATIONMARK_JUMP_LEFT:
	emote_exclamation_mark
	jump_in_place_left
	step_end

MOVEMENT_EXCLAMATIONMARK_JUMP_UP:
	emote_exclamation_mark
	jump_in_place_up
	step_end

Movement_DraynorManor_Entry_Rat:
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	step_end

FOLLOWING_Ariane::
	namebox HAM_EVENT_DRAYNORMANOR_1F_Text_0
	facefollower
	random 9
	switch VAR_RESULT
	case 0, FOLLOWING_Ariane_3
	case 1, FOLLOWING_Ariane_4
	case 2, FOLLOWING_Ariane_5
	case 3, FOLLOWING_Ariane_6
	case 4, FOLLOWING_Ariane_7
	case 5, FOLLOWING_Ariane_8
	case 6, FOLLOWING_Ariane_9
	case 7, FOLLOWING_Ariane_10
	case 8, FOLLOWING_Ariane_11
FOLLOWING_Ariane_1:
	hidenamebox
	closemessage
	release
	end

FOLLOWING_Ariane_3:
	msgbox FOLLOWING_Ariane_Text_0
	goto FOLLOWING_Ariane_1

FOLLOWING_Ariane_4:
	msgbox FOLLOWING_Ariane_Text_1
	goto FOLLOWING_Ariane_1

FOLLOWING_Ariane_5:
	msgbox FOLLOWING_Ariane_Text_2
	goto FOLLOWING_Ariane_1

FOLLOWING_Ariane_6:
	msgbox FOLLOWING_Ariane_Text_3
	playse SE_LEDGE
	applymovement 17, MOVEMENT_EXCLAMATIONMARK_JUMP_UP
	waitmovement 0
	msgbox FOLLOWING_Ariane_Text_4
	goto FOLLOWING_Ariane_1

FOLLOWING_Ariane_7:
	msgbox FOLLOWING_Ariane_Text_5
	goto FOLLOWING_Ariane_1

FOLLOWING_Ariane_8:
	msgbox FOLLOWING_Ariane_Text_6
	goto FOLLOWING_Ariane_1

FOLLOWING_Ariane_9:
	msgbox FOLLOWING_Ariane_Text_7
	goto FOLLOWING_Ariane_1

FOLLOWING_Ariane_10:
	msgbox FOLLOWING_Ariane_Text_8
	goto FOLLOWING_Ariane_1

FOLLOWING_Ariane_11:
	msgbox FOLLOWING_Ariane_Text_9
	goto FOLLOWING_Ariane_1


TRIGGER_ARIANE_DRAYNORMANOR_1F_1::
	facefollower
	namebox HAM_EVENT_DRAYNORMANOR_1F_Text_0
	msgbox TRIGGER_ARIANE_DRAYNORMANOR_1F_1_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne TRIGGER_ARIANE_DRAYNORMANOR_1F_1_1
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_UP
	applymovement OBJ_EVENT_ID_FOLLOWER, MOVEMENT_WALK_UP
	waitmovement 0
	return

TRIGGER_ARIANE_DRAYNORMANOR_1F_1_1:
	msgbox TRIGGER_ARIANE_DRAYNORMANOR_1F_1_Text_1
	closemessage
	hidenamebox
	setvar VAR_TEMP_A, 0
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 24
	goto_if_eq TRIGGER_ARIANE_DRAYNORMANOR_1F_1_5
	compare VAR_TEMP_1, 25
	goto_if_eq TRIGGER_ARIANE_DRAYNORMANOR_1F_1_6
TRIGGER_ARIANE_DRAYNORMANOR_1F_1_4:
	destroyfollower
	return

TRIGGER_ARIANE_DRAYNORMANOR_1F_1_5:
	warp MAP_DRAYNOR_MANOR, 0, 0, 0
	goto TRIGGER_ARIANE_DRAYNORMANOR_1F_1_4

TRIGGER_ARIANE_DRAYNORMANOR_1F_1_6:
	warp MAP_DRAYNOR_MANOR, 1, 0, 0
	goto TRIGGER_ARIANE_DRAYNORMANOR_1F_1_4


TRIGGER_ARIANE_DRAYNORMANOR_1F_2::
	checkfollower
	compare VAR_RESULT, 0
	goto_if_ne TRIGGER_ARIANE_DRAYNORMANOR_1F_2_2
TRIGGER_ARIANE_DRAYNORMANOR_1F_2_1:
	release
	end

TRIGGER_ARIANE_DRAYNORMANOR_1F_2_2:
	facefollower
	playse SE_LEDGE
	applymovement OBJ_EVENT_ID_FOLLOWER, MOVEMENT_EXCLAMATIONMARK_JUMP_LEFT
	waitmovement 0
	namebox HAM_EVENT_DRAYNORMANOR_1F_Text_0
	msgbox TRIGGER_ARIANE_DRAYNORMANOR_1F_2_Text_0
	closemessage
	hidenamebox
	setvar VAR_TEMP_C, 1
	goto TRIGGER_ARIANE_DRAYNORMANOR_1F_2_1


TRIGGER_ARIANE_DRAYNORMANOR_1F_3::
	checkfollower
	compare VAR_RESULT, 0
	goto_if_ne TRIGGER_ARIANE_DRAYNORMANOR_1F_3_2
TRIGGER_ARIANE_DRAYNORMANOR_1F_3_1:
	release
	end

TRIGGER_ARIANE_DRAYNORMANOR_1F_3_2:
	delay 32
	applymovement OBJ_EVENT_ID_FOLLOWER, MOVEMENT_FACE_LEFT
	waitmovement 0
	delay 32
	facefollower
	namebox HAM_EVENT_DRAYNORMANOR_1F_Text_0
	msgbox TRIGGER_ARIANE_DRAYNORMANOR_1F_3_Text_0
	closemessage
	hidenamebox
	setvar VAR_TEMP_E, 1
	goto TRIGGER_ARIANE_DRAYNORMANOR_1F_3_1


TRIGGER_ARIANE_DRAYNORMANOR_1F_4::
	checkfollower
	compare VAR_RESULT, 0
	goto_if_ne TRIGGER_ARIANE_DRAYNORMANOR_1F_4_2
TRIGGER_ARIANE_DRAYNORMANOR_1F_4_1:
	release
	end

TRIGGER_ARIANE_DRAYNORMANOR_1F_4_2:
	facefollower
	namebox HAM_EVENT_DRAYNORMANOR_1F_Text_0
	msgbox TRIGGER_ARIANE_DRAYNORMANOR_1F_4_Text_0
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_DOWN
	applymovement OBJ_EVENT_ID_FOLLOWER, MOVEMENT_WALK_DOWN
	waitmovement 0
	goto TRIGGER_ARIANE_DRAYNORMANOR_1F_4_1


TRIGGER_ARIANE_DRAYNORMANOR_1F_5::
	checkfollower
	compare VAR_RESULT, 0
	goto_if_ne TRIGGER_ARIANE_DRAYNORMANOR_1F_5_2
TRIGGER_ARIANE_DRAYNORMANOR_1F_5_1:
	release
	end

TRIGGER_ARIANE_DRAYNORMANOR_1F_5_2:
	facefollower
	namebox HAM_EVENT_DRAYNORMANOR_1F_Text_0
	msgbox TRIGGER_ARIANE_DRAYNORMANOR_1F_5_Text_0
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_RIGHT
	applymovement OBJ_EVENT_ID_FOLLOWER, MOVEMENT_WALK_RIGHT
	waitmovement 0
	setvar VAR_TEMP_9, 1
	goto TRIGGER_ARIANE_DRAYNORMANOR_1F_5_1


TRIGGER_ARIANE_DRAYNORMANOR_1F_6::
	checkfollower
	compare VAR_RESULT, 0
	goto_if_ne TRIGGER_ARIANE_DRAYNORMANOR_1F_6_2
TRIGGER_ARIANE_DRAYNORMANOR_1F_6_1:
	release
	end

TRIGGER_ARIANE_DRAYNORMANOR_1F_6_2:
	facefollower
	namebox HAM_EVENT_DRAYNORMANOR_1F_Text_0
	msgbox TRIGGER_ARIANE_DRAYNORMANOR_1F_6_Text_0
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_FOLLOWER, MOVEMENT_WALK_RIGHT
	waitmovement 0
	facefollower
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_LEFT
	delay 32
	setvar VAR_TEMP_9, 1
	warp MAP_DRAYNOR_MANOR_CRYPT, 0, 0, 0
	destroyfollower
	goto TRIGGER_ARIANE_DRAYNORMANOR_1F_6_1


DraynorManor_Lever_STATE::
	switch VAR_POKESCAPE_DRAYNORMANOR_LEVER_STATE
	case 0, DraynorManor_Lever_STATE_2
	case 1, DraynorManor_Lever_STATE_3
	return

DraynorManor_Lever_STATE_2:
	setmetatile 7, 17, 602, 1
	setmetatile 7, 18, 602, 1
	setmetatile 7, 19, 602, 1
	setmetatile 7, 20, 602, 1
	setmetatile 7, 21, 602, 1
	setmetatile 8, 17, 604, 1
	setmetatile 8, 18, 604, 1
	setmetatile 8, 19, 604, 1
	setmetatile 8, 20, 604, 1
	setmetatile 8, 21, 604, 1
	special DrawWholeMapView
	return

DraynorManor_Lever_STATE_3:
	setmetatile 7, 17, 570, 1
	setmetatile 7, 18, 578, 1
	setmetatile 7, 19, 586, 1
	setmetatile 7, 20, 516, 0
	setmetatile 7, 21, 594, 1
	setmetatile 8, 17, 572, 1
	setmetatile 8, 18, 580, 1
	setmetatile 8, 19, 588, 1
	setmetatile 8, 20, 516, 0
	setmetatile 8, 21, 596, 1
	special DrawWholeMapView
	return


SIGN_DRAYNORMANOR_LEVER_1::
	switch VAR_POKESCAPE_DRAYNORMANOR_LEVER_STATE
	case 0, SIGN_DRAYNORMANOR_LEVER_1_2
	case 1, SIGN_DRAYNORMANOR_LEVER_1_3
	return

SIGN_DRAYNORMANOR_LEVER_1_2:
	lock
	msgbox SIGN_DRAYNORMANOR_LEVER_1_Text_0
	setmetatile 7, 17, 570, 1
	setmetatile 7, 18, 578, 1
	setmetatile 7, 19, 586, 1
	setmetatile 7, 20, 516, 0
	setmetatile 7, 21, 594, 1
	setmetatile 8, 17, 572, 1
	setmetatile 8, 18, 580, 1
	setmetatile 8, 19, 588, 1
	setmetatile 8, 20, 516, 0
	setmetatile 8, 21, 596, 1
	special DrawWholeMapView
	setvar VAR_POKESCAPE_DRAYNORMANOR_LEVER_STATE, 1
	release
	end

SIGN_DRAYNORMANOR_LEVER_1_3:
	lock
	msgbox SIGN_DRAYNORMANOR_LEVER_1_Text_0
	setmetatile 7, 17, 602, 1
	setmetatile 7, 18, 602, 1
	setmetatile 7, 19, 602, 1
	setmetatile 7, 20, 602, 1
	setmetatile 7, 21, 602, 1
	setmetatile 8, 17, 604, 1
	setmetatile 8, 18, 604, 1
	setmetatile 8, 19, 604, 1
	setmetatile 8, 20, 604, 1
	setmetatile 8, 21, 604, 1
	special DrawWholeMapView
	setvar VAR_POKESCAPE_DRAYNORMANOR_LEVER_STATE, 0
	release
	end


NPC_DraynorManor_LEVER_A::
	msgbox NPC_DraynorManor_LEVER_A_Text_0
	closemessage
	setmetatile 17, 16, 516, 0
	special DrawWholeMapView
	end


NPC_DraynorManor_LEVER_B::
	msgbox NPC_DraynorManor_LEVER_A_Text_0
	closemessage
	setmetatile 11, 10, 516, 0
	special DrawWholeMapView
	end


NPC_DraynorManor_LEVER_C::
	msgbox NPC_DraynorManor_LEVER_A_Text_0
	closemessage
	setmetatile 11, 16, 516, 0
	special DrawWholeMapView
	end


NPC_DraynorManor_LEVER_D::
	msgbox NPC_DraynorManor_LEVER_A_Text_0
	closemessage
	setmetatile 8, 13, 516, 0
	setmetatile 14, 7, 516, 0
	special DrawWholeMapView
	end


NPC_DraynorManor_LEVER_E::
	msgbox NPC_DraynorManor_LEVER_A_Text_0
	closemessage
	setmetatile 14, 13, 516, 0
	setmetatile 8, 7, 516, 0
	special DrawWholeMapView
	end


NPC_DraynorManor_LEVER_F::
	msgbox NPC_DraynorManor_LEVER_A_Text_0
	closemessage
	setmetatile 4, 10, 516, 0
	setmetatile 8, 19, 516, 0
	special DrawWholeMapView
	end


NPC_DraynorManor_LEVER_G::
	msgbox NPC_DraynorManor_LEVER_A_Text_0
	closemessage
	setmetatile 8, 19, 516, 0
	special DrawWholeMapView
	end


NPC_DraynorManor_Ava::
	lock
	faceplayer
	namebox NPC_DraynorManor_Ava_Text_0
	compare VAR_POKESCAPE_ERNEST_QUEST_STATE, 1
	goto_if_eq NPC_DraynorManor_Ava_2
	random 5
	switch VAR_RESULT
	case 0, NPC_DraynorManor_Ava_5
	case 1, NPC_DraynorManor_Ava_6
	case 2, NPC_DraynorManor_Ava_7
	case 3, NPC_DraynorManor_Ava_8
	case 4, NPC_DraynorManor_Ava_9
	case 5, NPC_DraynorManor_Ava_10
	return

NPC_DraynorManor_Ava_2:
	checkitem ITEM_OIL_CAN, 1
	compare VAR_RESULT, 0
	goto_if_eq NPC_DraynorManor_Ava_11
	msgbox NPC_DraynorManor_Ava_Text_2
	closemessage
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Ava_5:
	msgbox NPC_DraynorManor_Ava_Text_3
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Ava_6:
	msgbox NPC_DraynorManor_Ava_Text_4
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Ava_7:
	msgbox NPC_DraynorManor_Ava_Text_5
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Ava_8:
	msgbox NPC_DraynorManor_Ava_Text_6
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Ava_9:
	msgbox NPC_DraynorManor_Ava_Text_7
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Ava_10:
	msgbox NPC_DraynorManor_Ava_Text_8
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Ava_11:
	msgbox NPC_DraynorManor_Ava_Text_1
	hidenamebox
	closemessage
	release
	end


NPC_DraynorManor_Quester::
	lock
	faceplayer
	compare VAR_POKESCAPE_DRAYNORMANOR_LEVER_STATE, 1
	goto_if_eq NPC_DraynorManor_Quester_2
	msgbox NPC_DraynorManor_Quester_Text_1
NPC_DraynorManor_Quester_1:
	closemessage
	release
	end

NPC_DraynorManor_Quester_2:
	msgbox NPC_DraynorManor_Quester_Text_0
	goto NPC_DraynorManor_Quester_1


NPC_DraynorManor_Witch::
	lock
	faceplayer
	namebox NPC_DraynorManor_Witch_Text_0
	msgbox NPC_DraynorManor_Witch_Text_1
	hidenamebox
	closemessage
	release
	end


NPC_DraynorManor_Chair::
	lock
	msgbox NPC_DraynorManor_Chair_Text_0
	hidenamebox
	closemessage
	release
	end


NPC_DraynorManor_Skeleton_1::
	lock
	faceplayer
	namebox NPC_DraynorManor_Skeleton_1_Text_0
	msgbox NPC_DraynorManor_Skeleton_1_Text_1
	hidenamebox
	closemessage
	release
	end


BATTLE_DRAYNORMANOR_Trainer_1::
	trainerbattle_single TRAINER_DRAYNOR_MANOR_SKELETON_1, BATTLE_DRAYNORMANOR_Trainer_1_Text_0, BATTLE_DRAYNORMANOR_Trainer_1_Text_1
	msgbox BATTLE_DRAYNORMANOR_Trainer_1_Text_1
	hidenamebox
	release
	end


BATTLE_DRAYNORMANOR_Trainer_2::
	trainerbattle_single TRAINER_DRAYNOR_MANOR_SKELETON_2, BATTLE_DRAYNORMANOR_Trainer_2_Text_0, BATTLE_DRAYNORMANOR_Trainer_2_Text_1
	namebox BATTLE_DRAYNORMANOR_Trainer_2_Text_2
	msgbox BATTLE_DRAYNORMANOR_Trainer_2_Text_3
	hidenamebox
	release
	end


BATTLE_DRAYNORMANOR_Trainer_3::
	trainerbattle_single TRAINER_DRAYNOR_MANOR_TRAINER_3, BATTLE_DRAYNORMANOR_Trainer_3_Text_0, BATTLE_DRAYNORMANOR_Trainer_3_Text_1
	namebox BATTLE_DRAYNORMANOR_Trainer_3_Text_2
	msgbox BATTLE_DRAYNORMANOR_Trainer_3_Text_1
	hidenamebox
	release
	end


BATTLE_DRAYNORMANOR_Trainer_4::
	trainerbattle_single TRAINER_DRAYNOR_MANOR_SKELETON_4, BATTLE_DRAYNORMANOR_Trainer_4_Text_0, BATTLE_DRAYNORMANOR_Trainer_4_Text_1
	msgbox BATTLE_DRAYNORMANOR_Trainer_4_Text_1
	hidenamebox
	release
	end


BATTLE_DRAYNORMANOR_Trainer_5::
	trainerbattle_single TRAINER_DRAYNOR_MANOR_SKELETON_5, BATTLE_DRAYNORMANOR_Trainer_5_Text_0, BATTLE_DRAYNORMANOR_Trainer_5_Text_1
	msgbox BATTLE_DRAYNORMANOR_Trainer_5_Text_1
	hidenamebox
	release
	end


BATTLE_DRAYNORMANOR_Trainer_6::
	trainerbattle_single TRAINER_DRAYNOR_MANOR_SKELETON_6, BATTLE_DRAYNORMANOR_Trainer_6_Text_0, BATTLE_DRAYNORMANOR_Trainer_6_Text_1
	msgbox BATTLE_DRAYNORMANOR_Trainer_6_Text_1
	hidenamebox
	release
	end


BATTLE_DRAYNORMANOR_Trainer_7::
	trainerbattle_single TRAINER_DRAYNOR_MANOR_SKELETON_7, BATTLE_DRAYNORMANOR_Trainer_7_Text_0, BATTLE_DRAYNORMANOR_Trainer_7_Text_1
	msgbox BATTLE_DRAYNORMANOR_Trainer_7_Text_1
	hidenamebox
	release
	end


BATTLE_DRAYNORMANOR_Trainer_8::
	trainerbattle_single TRAINER_DRAYNOR_MANOR_SKELETON_8, BATTLE_DRAYNORMANOR_Trainer_8_Text_0, BATTLE_DRAYNORMANOR_Trainer_8_Text_1
	msgbox BATTLE_DRAYNORMANOR_Trainer_8_Text_2
	hidenamebox
	release
	end


HAM_EVENT_DRAYNORMANOR_1F_Text_0:
	.string "Ariane$"

HAM_EVENT_DRAYNORMANOR_1F_Text_1:
	.string "…{PAUSE 32}…{PAUSE 32}…\n"
	.string "He… Hey you…\p"
	.string "Can… can we go together?$"

HAM_EVENT_DRAYNORMANOR_1F_Text_2:
	.string "Pssh!\p"
	.string "I'm not scared, what do you take me for?$"

HAM_EVENT_DRAYNORMANOR_1F_Text_3:
	.string "Rat$"

HAM_EVENT_DRAYNORMANOR_1F_Text_4:
	.string "Squeeek!$"

HAM_EVENT_DRAYNORMANOR_1F_Text_5:
	.string "Eeek!$"

HAM_EVENT_DRAYNORMANOR_1F_Text_6:
	.string "Okay, maybe I am a little scared…\p"
	.string "You lead the way.$"

HAM_EVENT_DRAYNORMANOR_1F_Text_7:
	.string "ARIANE JOINS THE PARTY!$"

HAM_EVENT_DRAYNORMANOR_1F_Text_8:
	.string "…{PAUSE 32}…{PAUSE 32}…\n"
	.string "He… Hey you came back…\p"
	.string "Can… can we please go together?\p"
	.string "I'm scared.$"

FOLLOWING_Ariane_Text_0:
	.string "This place is 2spooky4me!$"

FOLLOWING_Ariane_Text_1:
	.string "Where do you think the pink guy went?$"

FOLLOWING_Ariane_Text_2:
	.string "Hey mine name is Ariane, what is yours?\p"
	.string "…{PAUSE 32}{PLAYER}?\n"
	.string "That's a cute name.$"

FOLLOWING_Ariane_Text_3:
	.string "You know what?\p"
	.string "With you here this place isn't as scary.$"

FOLLOWING_Ariane_Text_4:
	.string "EEK!\n"
	.string "What was that!?$"

FOLLOWING_Ariane_Text_5:
	.string "What's with all of these weird-looking\n"
	.string "chickens around the place?$"

FOLLOWING_Ariane_Text_6:
	.string "We haven't checked the basement yet,\n"
	.string "we should look there.$"

FOLLOWING_Ariane_Text_7:
	.string "Did…{PAUSE 32} that armour just move?!$"

FOLLOWING_Ariane_Text_8:
	.string "How can anyone even live here…$"

FOLLOWING_Ariane_Text_9:
	.string "Eeek!\p"
	.string "I think I just saw a ghost!$"

TRIGGER_ARIANE_DRAYNORMANOR_1F_1_Text_0:
	.string "What are you doing?\p"
	.string "That guy is still in here somewhere.\p"
	.string "Wait you aren't going to leave me here\n"
	.string "are you?$"

TRIGGER_ARIANE_DRAYNORMANOR_1F_1_Text_1:
	.string "Eeek!!$"

TRIGGER_ARIANE_DRAYNORMANOR_1F_2_Text_0:
	.string "Eeek!!\p"
	.string "Did that chair just move?!$"

TRIGGER_ARIANE_DRAYNORMANOR_1F_3_Text_0:
	.string "I hear noises coming from the basement,\n"
	.string "lets go look!$"

TRIGGER_ARIANE_DRAYNORMANOR_1F_4_Text_0:
	.string "I doubt he would be outside.\p"
	.string "Lets go look elsewhere.$"

TRIGGER_ARIANE_DRAYNORMANOR_1F_5_Text_0:
	.string "As mysterious as this is, we are looking\n"
	.string "for the pink man.\p"
	.string "Not some lever side quest.$"

TRIGGER_ARIANE_DRAYNORMANOR_1F_6_Text_0:
	.string "Uh…{PAUSE 32} Actually on second thoughts I'll\n"
	.string "stay up here.\p"
	.string "You check down there without me.$"

SIGN_DRAYNORMANOR_LEVER_1_Text_0:
	.string "You pull a hidden lever!$"

NPC_DraynorManor_LEVER_A_Text_0:
	.string "You pull the lever and hear a gate open.$"

NPC_DraynorManor_Ava_Text_0:
	.string "Ava$"

NPC_DraynorManor_Ava_Text_1:
	.string "Oil Can?\p"
	.string "Last time I used it was to oil up my bed\n"
	.string "to stop it from creeking.\p"
	.string "Where did I leave it?\p"
	.string "Uh…{PAUSE 32}… I believe I left it in the basement\n"
	.string "over there.\p"
	.string "So if you want it you will have to go get\n"
	.string "it.$"

NPC_DraynorManor_Ava_Text_2:
	.string "Hey you found the Oil Can!\p"
	.string "My bed is starting to creek again, can I\n"
	.string "use it before you go haha.$"

NPC_DraynorManor_Ava_Text_3:
	.string "I think the walls are watching me…$"

NPC_DraynorManor_Ava_Text_4:
	.string "Who thought it was a good idea to put\n"
	.string "piranhas in the fountain…\p"
	.string "It is no where near big enough!$"

NPC_DraynorManor_Ava_Text_5:
	.string "If you see any animated chairs…\p"
	.string "I assure you, it was not my fault.$"

NPC_DraynorManor_Ava_Text_6:
	.string "I'm overjoyed with my new mattress!\p"
	.string "It almost feels like I'm being consumed\n"
	.string "by a fluffy…{PAUSE 15}{PAUSE 15} undead…{PAUSE 15}{PAUSE 15} zombie…{PAUSE 15}\l"
	.string "chicken…?$"

NPC_DraynorManor_Ava_Text_7:
	.string "If only there were more trainers\n"
	.string "gullible enough to travel across the\l"
	.string "land searching far and wide for my\l"
	.string "questionable research.$"

NPC_DraynorManor_Ava_Text_8:
	.string "EEK!\n"
	.string "A HUMAN…!\p"
	.string "…Sorry…{PAUSE 15} I have spent way too much time\n"
	.string "here, I'm not used to seeing corporeal\l"
	.string "beings.$"

NPC_DraynorManor_Quester_Text_0:
	.string "Did you find the hidden switch?\p"
	.string "Where was it?!$"

NPC_DraynorManor_Quester_Text_1:
	.string "I heard there was a hidden switch\n"
	.string "somewhere in this room but I am yet to\l"
	.string "find it.$"

NPC_DraynorManor_Witch_Text_0:
	.string "Witch$"

NPC_DraynorManor_Witch_Text_1:
	.string "I have so much poison in my kitchen\n"
	.string "cupboards!\p"
	.string "I don't think a blueberry special will\n"
	.string "save you from how toxic that stuff is!$"

NPC_DraynorManor_Chair_Text_0:
	.string "It's a chair.$"

NPC_DraynorManor_Skeleton_1_Text_0:
	.string "Skeleton$"

NPC_DraynorManor_Skeleton_1_Text_1:
	.string "I would really like to play the piano.\p"
	.string "But I have nobody to play with.$"

BATTLE_DRAYNORMANOR_Trainer_1_Text_0:
	.string "The skeleton stares deep into your\n"
	.string "eyes before it challenges you to a\l"
	.string "battle.$"

BATTLE_DRAYNORMANOR_Trainer_1_Text_1:
	.string "The skeleton stares intently into your\n"
	.string "eyes but refuses to move.$"

BATTLE_DRAYNORMANOR_Trainer_2_Text_0:
	.string "Do not steal the Rubber Tube!$"

BATTLE_DRAYNORMANOR_Trainer_2_Text_1:
	.string "Oh you want to return it?$"

BATTLE_DRAYNORMANOR_Trainer_2_Text_2:
	.string "McBoneFace$"

BATTLE_DRAYNORMANOR_Trainer_2_Text_3:
	.string "You are going to return the Rubber Tube\n"
	.string "to Oddenstein?\p"
	.string "Sure go for it.$"

BATTLE_DRAYNORMANOR_Trainer_3_Text_0:
	.string "Fear me and my monsters!$"

BATTLE_DRAYNORMANOR_Trainer_3_Text_1:
	.string "Ahhh!\p"
	.string "I fear you and your monsters!$"

BATTLE_DRAYNORMANOR_Trainer_3_Text_2:
	.string "Dark Wizard$"

BATTLE_DRAYNORMANOR_Trainer_4_Text_0:
	.string "Boo!$"

BATTLE_DRAYNORMANOR_Trainer_4_Text_1:
	.string "The skeleton is giggling at your\n"
	.string "previous reaction.$"

BATTLE_DRAYNORMANOR_Trainer_5_Text_0:
	.string "The skeleton strikes a menacing pose.$"

BATTLE_DRAYNORMANOR_Trainer_5_Text_1:
	.string "The skeleton stands perfectly still in\n"
	.string "a menacing pose.$"

BATTLE_DRAYNORMANOR_Trainer_6_Text_0:
	.string "The skeleton looks like it forgot what\n"
	.string "it was about to say.$"

BATTLE_DRAYNORMANOR_Trainer_6_Text_1:
	.string "The skeleton remembered, but the\n"
	.string "chance to say it is lost.$"

BATTLE_DRAYNORMANOR_Trainer_7_Text_0:
	.string "The skeleton loses an arm walking\n"
	.string "towards you.$"

BATTLE_DRAYNORMANOR_Trainer_7_Text_1:
	.string "The skeleton is franticly looking for\n"
	.string "his arm.$"

BATTLE_DRAYNORMANOR_Trainer_8_Text_0:
	.string "…$"

BATTLE_DRAYNORMANOR_Trainer_8_Text_1:
	.string "…………Hi.$"

BATTLE_DRAYNORMANOR_Trainer_8_Text_2:
	.string "………………Hi.$"
