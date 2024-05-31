Falador_Castleyard_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Falador_Castleyard_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Falador_Castleyard_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Falador_Castleyard_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	call OPENWORLD_STATE_FALADORCASTLE
	return

Falador_Castleyard_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	goto FALADORCASTLE_QUEST_STATE
	return


OPENWORLD_STATE_FALADORCASTLE::
	removeobject 11
	removeobject 12
	removeobject 1
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	return


FALADORCASTLE_QUEST_STATE::
	switch VAR_POKESCAPE_FALADOR_STATE
	case 1, FALADORCASTLE_QUEST_STATE_2
	case 3, FALADORCASTLE_QUEST_STATE_3
	case 4, FALADORCASTLE_QUEST_STATE_4
	case 5, FALADORCASTLE_QUEST_STATE_4
	return

FALADORCASTLE_QUEST_STATE_2:
	removeobject 1
	removeobject 12
	setflag FLAG_TEMP_1
	setobjectxyperm 11, 11, 15
	setobjectmovementtype 11, MOVEMENT_TYPE_LOOK_AROUND
	setobjectxyperm 3, 10, 11
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_UP
	setobjectxyperm 13, 11, 11
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_UP
	return

FALADORCASTLE_QUEST_STATE_3:
	setobjectxyperm 11, 11, 14
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_UP
	setobjectxyperm 12, 10, 13
	setobjectmovementtype 12, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 1, 12, 13
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	return

FALADORCASTLE_QUEST_STATE_4:
	removeobject 11
	removeobject 12
	removeobject 1
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	return


NPC_FALADORCASTLE_QUEST_PART_1::
	lock
	namebox NPC_FALADORCASTLE_QUEST_PART_1_Text_0
	msgbox NPC_FALADORCASTLE_QUEST_PART_1_Text_1
	closemessage
	hidenamebox
	applymovement 12, FALADORCASTLE_MOVEMENT_1
	waitmovement 0
	namebox NPC_FALADORCASTLE_QUEST_PART_1_Text_0
	msgbox NPC_FALADORCASTLE_QUEST_PART_1_Text_2
	closemessage
	hidenamebox
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 10
	goto_if_eq NPC_FALADORCASTLE_QUEST_PART_1_2
	applymovement 12, FALADORCASTLE_MOVEMENT_2
	applymovement 1, FALADORCASTLE_MOVEMENT_3
	applymovement OBJ_EVENT_ID_PLAYER, FALADORCASTLE_MOVEMENT_11
	waitmovement 0
NPC_FALADORCASTLE_QUEST_PART_1_1:
	removeobject 1
	removeobject 12
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_3
	applymovement 11, FALADORCASTLE_MOVEMENT_4
	waitmovement 0
	namebox NPC_FALADORCASTLE_QUEST_PART_1_Text_3
	msgbox NPC_FALADORCASTLE_QUEST_PART_1_Text_4
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, FALADORCASTLE_MOVEMENT_5
	waitmovement 0
	setvar VAR_POKESCAPE_FALADOR_STATE, 2
	release
	end

NPC_FALADORCASTLE_QUEST_PART_1_2:
	applymovement 12, FALADORCASTLE_MOVEMENT_2
	applymovement 1, FALADORCASTLE_MOVEMENT_3
	waitmovement 0
	goto NPC_FALADORCASTLE_QUEST_PART_1_1


FALADORCASTLE_MOVEMENT_1:
	walk_up
	walk_right
	delay_8
	step_end

FALADORCASTLE_MOVEMENT_2:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

FALADORCASTLE_MOVEMENT_3:
	walk_left
	walk_up
	walk_up
	walk_up
	step_end

FALADORCASTLE_MOVEMENT_4:
	face_up
	walk_left
	walk_up
	walk_up
	step_end

FALADORCASTLE_MOVEMENT_5:
	walk_up
	step_end

FALADORCASTLE_MOVEMENT_11:
	delay_8
	lock_facing_direction
	walk_left
	step_end

NPC_FALADORCASTLE_QUEST_PART_2::
	lock
	namebox NPC_FALADORCASTLE_QUEST_PART_1_Text_3
	msgbox NPC_FALADORCASTLE_QUEST_PART_2_Text_0
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, FALADORCASTLE_MOVEMENT_5
	waitmovement 0
	release
	end


NPC_FALADORCASTLE_QUEST_AMIK_CHAT::
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_QUEST_PART_1_Text_3
	msgbox NPC_FALADORCASTLE_QUEST_PART_2_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT::
	compare VAR_POKESCAPE_GAMEMODE_STATE, 1
	goto_if_eq NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_2
	switch VAR_POKESCAPE_FALADOR_STATE
	case 0, NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_6
	case 1, NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_6
	case 2, NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_6
	case 3, NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_6
	case 4, NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_7
	case 5, NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_7
NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_1:
	closemessage
	hidenamebox
	release
	end

NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_2:
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_Text_0
	msgbox NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_Text_1
	goto NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_1

NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_6:
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_Text_0
	msgbox NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_Text_2
	goto NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_1

NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_7:
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_Text_0
	msgbox NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_Text_1
	goto NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_1


NPC_FALADORCASTLE_KNIGHT_CHAT_2::
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_Text_0
	msgbox NPC_FALADORCASTLE_KNIGHT_CHAT_2_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_FALADORCASTLE_KNIGHT_CHAT_3::
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_Text_0
	msgbox NPC_FALADORCASTLE_KNIGHT_CHAT_3_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_FALADORCASTLE_QUEST_PART_4_1::
	applymovement OBJ_EVENT_ID_PLAYER, FALADORCASTLE_MOVEMENT_6
	waitmovement 0
	goto NPC_FALADORCASTLE_QUEST_PART_4
	return


NPC_FALADORCASTLE_QUEST_PART_4_2::
	applymovement OBJ_EVENT_ID_PLAYER, FALADORCASTLE_MOVEMENT_7
	waitmovement 0
	goto NPC_FALADORCASTLE_QUEST_PART_4
	return


NPC_FALADORCASTLE_QUEST_PART_4::
	namebox NPC_FALADORCASTLE_QUEST_PART_4_Text_0
	msgbox NPC_FALADORCASTLE_QUEST_PART_4_Text_1
	closemessage
	hidenamebox
	applymovement 1, FALADORCASTLE_MOVEMENT_8
	applymovement 12, FALADORCASTLE_MOVEMENT_9
	waitmovement 0
	namebox NPC_FALADORCASTLE_QUEST_PART_4_Text_2
	msgbox NPC_FALADORCASTLE_QUEST_PART_4_Text_3
	closemessage
	hidenamebox
	namebox NPC_FALADORCASTLE_QUEST_PART_4_Text_0
	msgbox NPC_FALADORCASTLE_QUEST_PART_4_Text_4
	closemessage
	hidenamebox
	applymovement 11, FALADORCASTLE_MOVEMENT_10
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, FALADORCASTLE_MOVEMENT_8
	waitmovement 0
	namebox NPC_FALADORCASTLE_QUEST_PART_4_Text_2
	msgbox NPC_FALADORCASTLE_QUEST_PART_4_Text_5
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, FALADORCASTLE_MOVEMENT_9
	waitmovement 0
	namebox NPC_FALADORCASTLE_QUEST_PART_4_Text_6
	msgbox NPC_FALADORCASTLE_QUEST_PART_4_Text_7
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, FALADORCASTLE_MOVEMENT_12
	waitmovement 0
	applymovement 1, FALADORCASTLE_MOVEMENT_10
	applymovement 12, FALADORCASTLE_MOVEMENT_10
	waitmovement 0
	removeobject 11
	removeobject 12
	removeobject 1
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	setvar VAR_POKESCAPE_FALADOR_STATE, 4
	applymovement 5, FALADORCASTLE_MOVEMENT_SQUIREQUEST1
	waitmovement 0
	namebox NPC_FALADORCASTLE_QUEST_PART_4_Text_8
	msgbox NPC_FALADORCASTLE_QUEST_PART_4_Text_9
	closemessage
	hidenamebox
	applymovement 5, FALADORCASTLE_MOVEMENT_SQUIREQUEST2
	waitmovement 0
	setvar VAR_POKESCAPE_FALADOR_GYM_QUEST, 5
	playbgm MUS_PS_GYM, 0
	release
	end


FALADORCASTLE_MOVEMENT_6:
	walk_right
	walk_down
	step_end

FALADORCASTLE_MOVEMENT_7:
	walk_down
	step_end

FALADORCASTLE_MOVEMENT_8:
	face_left
	step_end

FALADORCASTLE_MOVEMENT_9:
	face_right
	step_end

FALADORCASTLE_MOVEMENT_10:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

FALADORCASTLE_MOVEMENT_12:
	face_down
	step_end

FALADORCASTLE_MOVEMENT_SQUIREQUEST1:
	walk_left
	walk_left
	walk_up
	step_end

FALADORCASTLE_MOVEMENT_SQUIREQUEST2:
	walk_down
	walk_right
	walk_right
	face_left
	step_end

NPC_FALADORCASTLE_GYM_SIRTHEO::
	trainerbattle_single TRAINER_FALADOR_GYM_1, NPC_FALADORCASTLE_GYM_SIRTHEO_Text_0, NPC_FALADORCASTLE_GYM_SIRTHEO_Text_1
	namebox NPC_FALADORCASTLE_QUEST_PART_4_Text_6
	goto_if_unset FLAG_BADGE02_GET, NPC_FALADORCASTLE_GYM_SIRTHEO_2
	msgbox NPC_FALADORCASTLE_GYM_SIRTHEO_Text_4
NPC_FALADORCASTLE_GYM_SIRTHEO_1:
	hidenamebox
	closemessage
	end

NPC_FALADORCASTLE_GYM_SIRTHEO_2:
	msgbox NPC_FALADORCASTLE_GYM_SIRTHEO_Text_2
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq NPC_FALADORCASTLE_GYM_SIRTHEO_5
	goto NPC_FALADORCASTLE_GYM_SIRTHEO_1

NPC_FALADORCASTLE_GYM_SIRTHEO_5:
	msgbox NPC_FALADORCASTLE_GYM_SIRTHEO_Text_3
	goto NPC_FALADORCASTLE_GYM_SIRTHEO_1


NPC_FALADORCASTLE_GYM_TRAINER_2::
	trainerbattle_single TRAINER_FALADOR_GYM_2, NPC_FALADORCASTLE_GYM_TRAINER_2_Text_0, NPC_FALADORCASTLE_GYM_TRAINER_2_Text_1
	namebox NPC_FALADORCASTLE_GYM_TRAINER_2_Text_2
	goto_if_unset FLAG_BADGE02_GET, NPC_FALADORCASTLE_GYM_TRAINER_2_2
	msgbox NPC_FALADORCASTLE_GYM_TRAINER_2_Text_4
NPC_FALADORCASTLE_GYM_TRAINER_2_1:
	hidenamebox
	closemessage
	end

NPC_FALADORCASTLE_GYM_TRAINER_2_2:
	msgbox NPC_FALADORCASTLE_GYM_TRAINER_2_Text_3
	goto NPC_FALADORCASTLE_GYM_TRAINER_2_1


NPC_FALADORCASTLE_GYM_TRAINER_3::
	trainerbattle_single TRAINER_FALADOR_GYM_3, NPC_FALADORCASTLE_GYM_TRAINER_3_Text_0, NPC_FALADORCASTLE_GYM_TRAINER_3_Text_1
	namebox NPC_FALADORCASTLE_GYM_TRAINER_3_Text_2
	goto_if_unset FLAG_BADGE02_GET, NPC_FALADORCASTLE_GYM_TRAINER_3_2
	msgbox NPC_FALADORCASTLE_GYM_TRAINER_3_Text_4
NPC_FALADORCASTLE_GYM_TRAINER_3_1:
	hidenamebox
	closemessage
	end

NPC_FALADORCASTLE_GYM_TRAINER_3_2:
	msgbox NPC_FALADORCASTLE_GYM_TRAINER_3_Text_3
	goto NPC_FALADORCASTLE_GYM_TRAINER_3_1


NPC_FALADORCASTLE_GYM_TRAINER_4::
	trainerbattle_single TRAINER_FALADOR_GYM_4, NPC_FALADORCASTLE_GYM_TRAINER_4_Text_0, NPC_FALADORCASTLE_GYM_TRAINER_4_Text_1
	namebox NPC_FALADORCASTLE_GYM_TRAINER_4_Text_2
	goto_if_unset FLAG_BADGE02_GET, NPC_FALADORCASTLE_GYM_TRAINER_4_2
	msgbox NPC_FALADORCASTLE_GYM_TRAINER_4_Text_4
NPC_FALADORCASTLE_GYM_TRAINER_4_1:
	hidenamebox
	closemessage
	end

NPC_FALADORCASTLE_GYM_TRAINER_4_2:
	msgbox NPC_FALADORCASTLE_GYM_TRAINER_4_Text_3
	goto NPC_FALADORCASTLE_GYM_TRAINER_4_1


NPC_FALADORCASTLE_GYM_SIRAMIKVARZE::
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_QUEST_PART_4_Text_0
	goto_if_unset FLAG_BADGE02_GET, NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_2
	msgbox NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_Text_7
	hidenamebox
	release
	end

NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_2:
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_5
NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_4:
	msgbox NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_Text_1
	hidenamebox
	trainerbattle_no_intro TRAINER_FALADOR_GYM_AMIKVARZE, NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_Text_2
	msgbox NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_Text_3
	playfanfare MUS_PS_QUEST_COMPLETE
	msgbox NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_Text_4
	waitfanfare
	waitmessage
	msgbox NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_Text_5
	hidenamebox
	giveitem ITEM_TM07, 1
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_ShowBagIsFull
	namebox NPC_FALADORCASTLE_QUEST_PART_4_Text_0
	msgbox NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_Text_6
	closemessage
	hidenamebox
	setvar VAR_POKESCAPE_FALADOR_STATE, 5
	setflag FLAG_BADGE02_GET
	addvar VAR_GAMEMODE_LEVEL_SCALING, 1
	call SetGymTrainers_FALADOR
	setvar VAR_POKESCAPE_FALADOR_GYM_QUEST, 10
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_8
NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_7:
	release
	end

NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_5:
	msgbox NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_Text_0
	closemessage
	goto NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_4

NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_8:
	goto QUEST_FALADORCASTLE_GYM_SIRTHEO
	goto NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_7


QUEST_FALADORCASTLE_GYM_SIRTHEO::
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 120
	addobject 4
	clearflag FLAG_TEMP_1F
	applymovement 4, movement_faladorCastle_sirtheo
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_DOWN
	waitmovement 0
	namebox NPC_FALADORCASTLE_QUEST_PART_4_Text_6
	msgbox QUEST_FALADORCASTLE_GYM_SIRTHEO_Text_0
	closemessage
	hidenamebox
	warp MAP_FALADOR_CASTLE_3F, 3, 0, 0
	release
	end


movement_faladorCastle_sirtheo:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

SetGymTrainers_FALADOR::
	settrainerflag TRAINER_FALADOR_GYM_1
	settrainerflag TRAINER_FALADOR_GYM_2
	settrainerflag TRAINER_FALADOR_GYM_3
	settrainerflag TRAINER_FALADOR_GYM_4
	settrainerflag TRAINER_FALADOR_GYM_5
	return


NPC_FALADORCASTLE_GYM_SIRTIFFY::
	lock
	namebox NPC_FALADORCASTLE_GYM_SIRTIFFY_Text_0
	msgbox NPC_FALADORCASTLE_GYM_SIRTIFFY_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_FALADORCASTLE_GYM_SIROWEN::
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_QUEST_PART_4_Text_2
	msgbox NPC_FALADORCASTLE_GYM_SIROWEN_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_FALADORCASTLE_GYM_SirRentee::
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_GYM_SirRentee_Text_0
	msgbox NPC_FALADORCASTLE_GYM_SirRentee_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_FALADORCASTLE_GYM_Ambassador_Spanfipple::
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_GYM_Ambassador_Spanfipple_Text_0
	msgbox NPC_FALADORCASTLE_GYM_Ambassador_Spanfipple_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_FALADORCASTLE_GYM_HAM::
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_GYM_HAM_Text_0
	msgbox NPC_FALADORCASTLE_GYM_HAM_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_FALADORCASTLE_GYM_BLACKKNIGHT::
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_GYM_BLACKKNIGHT_Text_0
	msgbox NPC_FALADORCASTLE_GYM_BLACKKNIGHT_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_FALADORCASTLE_WHITEKNIGHT_1::
	switch VAR_POKESCAPE_FALADOR_STATE
	case 4, NPC_FALADORCASTLE_WHITEKNIGHT_1_2
	case 5, NPC_FALADORCASTLE_WHITEKNIGHT_1_3
	return

NPC_FALADORCASTLE_WHITEKNIGHT_1_2:
	lock
	faceplayer
	msgbox NPC_FALADORCASTLE_WHITEKNIGHT_1_Text_0
	hidenamebox
	closemessage
	release
	end

NPC_FALADORCASTLE_WHITEKNIGHT_1_3:
	lock
	faceplayer
	msgbox NPC_FALADORCASTLE_WHITEKNIGHT_1_Text_1
	hidenamebox
	closemessage
	release
	end


NPC_FALADORCASTLE_WHITEKNIGHT_2::
	switch VAR_POKESCAPE_FALADOR_STATE
	case 4, NPC_FALADORCASTLE_WHITEKNIGHT_2_2
	case 5, NPC_FALADORCASTLE_WHITEKNIGHT_2_3
	return

NPC_FALADORCASTLE_WHITEKNIGHT_2_2:
	lock
	faceplayer
	msgbox NPC_FALADORCASTLE_WHITEKNIGHT_2_Text_0
	hidenamebox
	closemessage
	release
	end

NPC_FALADORCASTLE_WHITEKNIGHT_2_3:
	lock
	faceplayer
	msgbox NPC_FALADORCASTLE_WHITEKNIGHT_2_Text_1
	hidenamebox
	closemessage
	release
	end


NPC_FALADORCASTLE_WHITEKNIGHT_3::
	trainerbattle_single TRAINER_FALADOR_GYM_5, NPC_FALADORCASTLE_WHITEKNIGHT_3_Text_0, NPC_FALADORCASTLE_WHITEKNIGHT_3_Text_1
	namebox NPC_FALADORCASTLE_WHITEKNIGHT_3_Text_2
	goto_if_unset FLAG_BADGE02_GET, NPC_FALADORCASTLE_WHITEKNIGHT_3_2
	msgbox NPC_FALADORCASTLE_WHITEKNIGHT_3_Text_4
NPC_FALADORCASTLE_WHITEKNIGHT_3_1:
	hidenamebox
	closemessage
	release
	end

NPC_FALADORCASTLE_WHITEKNIGHT_3_2:
	msgbox NPC_FALADORCASTLE_WHITEKNIGHT_3_Text_3
	goto NPC_FALADORCASTLE_WHITEKNIGHT_3_1


NPC_FALADORCASTLE_WHITEKNIGHT_4::
	lock
	faceplayer
	msgbox NPC_FALADORCASTLE_WHITEKNIGHT_4_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_FALADORCASTLE_WHITEKNIGHT_5::
	lock
	faceplayer
	msgbox NPC_FALADORCASTLE_WHITEKNIGHT_5_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_FALADORCASTLE_WHITEKNIGHT_6::
	lock
	faceplayer
	msgbox NPC_FALADORCASTLE_WHITEKNIGHT_6_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_FALADORCASTLE_GUARD_1::
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_GUARD_1_Text_0
	msgbox NPC_FALADORCASTLE_GUARD_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_FALADORCASTLE_WHITEKNIGHT_7::
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_WHITEKNIGHT_7_Text_0
	msgbox NPC_FALADORCASTLE_WHITEKNIGHT_7_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_FALADORCASTLE_WHITEKNIGHT_8::
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_WHITEKNIGHT_7_Text_0
	msgbox NPC_FALADORCASTLE_WHITEKNIGHT_8_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_FALADORCASTLE_WHITEKNIGHT_9::
	trainerbattle_single TRAINER_FALADOR_GYM_6, NPC_FALADORCASTLE_WHITEKNIGHT_9_Text_0, NPC_FALADORCASTLE_WHITEKNIGHT_9_Text_1
	namebox NPC_FALADORCASTLE_WHITEKNIGHT_9_Text_2
	goto_if_unset FLAG_BADGE02_GET, NPC_FALADORCASTLE_WHITEKNIGHT_9_2
	msgbox NPC_FALADORCASTLE_WHITEKNIGHT_9_Text_4
NPC_FALADORCASTLE_WHITEKNIGHT_9_1:
	hidenamebox
	closemessage
	release
	end

NPC_FALADORCASTLE_WHITEKNIGHT_9_2:
	msgbox NPC_FALADORCASTLE_WHITEKNIGHT_9_Text_3
	goto NPC_FALADORCASTLE_WHITEKNIGHT_9_1


NPC_FALADORCASTLE_WHITEKNIGHT_10::
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_WHITEKNIGHT_7_Text_0
	msgbox NPC_FALADORCASTLE_WHITEKNIGHT_10_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_FALADORCASTLE_WHITEKNIGHT_11::
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_WHITEKNIGHT_7_Text_0
	msgbox NPC_FALADORCASTLE_WHITEKNIGHT_11_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_FALADORCASTLE_WHITEKNIGHT_12::
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_WHITEKNIGHT_7_Text_0
	msgbox NPC_FALADORCASTLE_WHITEKNIGHT_12_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_FALADORCASTLE_WHITEKNIGHT_13::
	switch VAR_POKESCAPE_FALADOR_STATE
	case 4, NPC_FALADORCASTLE_WHITEKNIGHT_13_2
	case 5, NPC_FALADORCASTLE_WHITEKNIGHT_13_3
	return

NPC_FALADORCASTLE_WHITEKNIGHT_13_2:
	lock
	faceplayer
	msgbox NPC_FALADORCASTLE_WHITEKNIGHT_13_Text_0
	hidenamebox
	closemessage
	release
	end

NPC_FALADORCASTLE_WHITEKNIGHT_13_3:
	lock
	faceplayer
	msgbox NPC_FALADORCASTLE_WHITEKNIGHT_13_Text_1
	hidenamebox
	closemessage
	release
	end


NPC_FALADORCASTLE_WHITEKNIGHT_14::
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_WHITEKNIGHT_7_Text_0
	msgbox NPC_FALADORCASTLE_WHITEKNIGHT_14_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_FALADORCASTLE_GUARD_3::
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_GUARD_3_Text_0
	msgbox NPC_FALADORCASTLE_GUARD_3_Text_1
	closemessage
	hidenamebox
	release
	end


BOOK_FALADORCASTLE_GUARD_INFO::
	lock
	msgbox BOOK_FALADORCASTLE_GUARD_INFO_Text_0
	closemessage
	hidenamebox
	release
	end


SIGN_BLURITE_CUPBOARD::
	lock
	msgbox SIGN_BLURITE_CUPBOARD_Text_0
	closemessage
	hidenamebox
	release
	end


BOOK_FALADORCASTLE_SIRVYVIN::
	lock
	msgbox BOOK_FALADORCASTLE_SIRVYVIN_Text_0
	closemessage
	hidenamebox
	release
	end


BOOK_CRANDOR::
	lock
	msgbox BOOK_CRANDOR_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_FALADORCASTLE_COOK::
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_COOK_Text_0
	msgbox NPC_FALADORCASTLE_COOK_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_ROUTE23_DWARF_ROCKS::
	lock
	faceplayer
	namebox NPC_ROUTE23_DWARF_ROCKS_Text_0
	msgbox NPC_ROUTE23_DWARF_ROCKS_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_ROUTE24_DORIC::
	lock
	faceplayer
	namebox NPC_ROUTE24_DORIC_Text_0
	msgbox NPC_ROUTE24_DORIC_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_FALADORCASTLE_SQUIRE::
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_QUEST_PART_4_Text_8
	compare VAR_POKESCAPE_FALADOR_GYM_QUEST, 10
	goto_if_le NPC_FALADORCASTLE_SQUIRE_2
	msgbox NPC_FALADORCASTLE_SQUIRE_Text_1
NPC_FALADORCASTLE_SQUIRE_1:
	closemessage
	hidenamebox
	release
	end

NPC_FALADORCASTLE_SQUIRE_2:
	msgbox NPC_FALADORCASTLE_SQUIRE_Text_0
	goto NPC_FALADORCASTLE_SQUIRE_1


FALADOR_GYM_1::
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 10
	goto_if_eq FALADOR_GYM_1_2
	compare VAR_TEMP_1, 11
	goto_if_eq FALADOR_GYM_1_3
	compare VAR_TEMP_1, 12
	goto_if_eq FALADOR_GYM_1_4
FALADOR_GYM_1_1:
	waitmovement 0
	namebox NPC_FALADORCASTLE_QUEST_PART_4_Text_8
	msgbox FALADOR_GYM_1_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq FALADOR_GYM_1_9
	msgbox NPC_FALADORCASTLE_SQUIRE_Text_0
	closemessage
	hidenamebox
	setvar VAR_POKESCAPE_FALADOR_GYM_QUEST, 5
	return

FALADOR_GYM_1_2:
	goto FALADOR_GYM_1_1

FALADOR_GYM_1_3:
	applymovement 5, FALADORCASTLE_MOVEMENT_SQUIRE_2
	goto FALADOR_GYM_1_1

FALADOR_GYM_1_4:
	applymovement 5, FALADORCASTLE_MOVEMENT_SQUIRE_3
	goto FALADOR_GYM_1_1

FALADOR_GYM_1_9:
	msgbox FALADOR_GYM_1_Text_1
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_UP
	waitmovement 0
	compare VAR_TEMP_1, 11
	goto_if_eq FALADOR_GYM_1_12
	compare VAR_TEMP_1, 12
	goto_if_eq FALADOR_GYM_1_13
FALADOR_GYM_1_11:
	waitmovement 0
	return

FALADOR_GYM_1_12:
	applymovement 5, FALADORCASTLE_MOVEMENT_SQUIRE_2r
	goto FALADOR_GYM_1_11

FALADOR_GYM_1_13:
	applymovement 5, FALADORCASTLE_MOVEMENT_SQUIRE_3r
	goto FALADOR_GYM_1_11


FALADORCASTLE_MOVEMENT_SQUIRE_2:
	walk_left
	step_end

FALADORCASTLE_MOVEMENT_SQUIRE_3:
	walk_left
	walk_left
	step_end

FALADORCASTLE_MOVEMENT_SQUIRE_2r:
	walk_right
	step_end

FALADORCASTLE_MOVEMENT_SQUIRE_3r:
	walk_right
	walk_right
	step_end

NPC_FALADORCASTLE_KNIGHT_9::
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_WHITEKNIGHT_7_Text_0
	msgbox NPC_FALADORCASTLE_KNIGHT_9_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_FALADORCASTLE_GUARD_2::
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_GUARD_1_Text_0
	msgbox NPC_FALADORCASTLE_GUARD_2_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_FALADORCASTLE_QUESTER::
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_QUESTER_Text_0
	msgbox NPC_FALADORCASTLE_QUESTER_Text_1
	closemessage
	hidenamebox
	release
	end


ITEM_FALADOR_CASTLE_1::
	finditem ITEM_FIRE_RUNE
	end


NPC_FALADORCASTLE_QUEST_PART_1_Text_0:
	.string "SIR OWEN$"

NPC_FALADORCASTLE_QUEST_PART_1_Text_1:
	.string "Right away sir.$"

NPC_FALADORCASTLE_QUEST_PART_1_Text_2:
	.string "With me Theo.$"

NPC_FALADORCASTLE_QUEST_PART_1_Text_3:
	.string "SIR AMIK VARZE$"

NPC_FALADORCASTLE_QUEST_PART_1_Text_4:
	.string "Oh sorry, I am not accepting\n"
	.string "challengers today.\p"
	.string "There has been a disturbance within the\n"
	.string "Dwarven mines, which has my top\l"
	.string "priority.\p"
	.string "So sadly I will not be able to accept\n"
	.string "your battle until after this matter is\l"
	.string "resolved.$"

NPC_FALADORCASTLE_QUEST_PART_2_Text_0:
	.string "The sooner the disturbance within the\n"
	.string "Dwarven mines is sorted out, the\l"
	.string "sooner we can have a gym battle$"

NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_Text_0:
	.string "WHITE KNIGHT$"

NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_Text_1:
	.string "Welcome to the Falador Castle!$"

NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_Text_2:
	.string "Sorry but the castle is closed for all\n"
	.string "MvM Championship participants, until\l"
	.string "the disturbance within the Dwarven\l"
	.string "mines is resolved.\p"
	.string "Which also means do not go poking\n"
	.string "around the mines in the north east of\l"
	.string "town, past the Party Room.\p"
	.string "We don't want you getting in danger.$"

NPC_FALADORCASTLE_KNIGHT_CHAT_2_Text_0:
	.string "Are you an MvM challenger?\p"
	.string "Our castle was designed to confuse\n"
	.string "intruders and we decided to use that\l"
	.string "for our gym challenge too.$"

NPC_FALADORCASTLE_KNIGHT_CHAT_3_Text_0:
	.string "Up or Down, Left or Right.\p"
	.string "Our Castle will confuse even the most\n"
	.string "smartest Black Knights.$"

NPC_FALADORCASTLE_QUEST_PART_4_Text_0:
	.string "Sir Amik Varze$"

NPC_FALADORCASTLE_QUEST_PART_4_Text_1:
	.string "Thank you for the report.$"

NPC_FALADORCASTLE_QUEST_PART_4_Text_2:
	.string "Sir Owen$"

NPC_FALADORCASTLE_QUEST_PART_4_Text_3:
	.string "Aha, nice timing!\p"
	.string "This is the challenger I spoke about.$"

NPC_FALADORCASTLE_QUEST_PART_4_Text_4:
	.string "I am grateful for your assistance\n"
	.string "within the mines.\p"
	.string "Have you considered joining the white\n"
	.string "knights?\p"
	.string "Ah but I am getting ahead of myself,\n"
	.string "you mentioned you wished to challenge\l"
	.string "me to a battle.\p"
	.string "I know you've already proved yourself\n"
	.string "within the mines but one more challenge\l"
	.string "lays before you.\p"
	.string "Find me within the castle, I shall be\n"
	.string "waiting.\p"
	.string "Good luck!$"

NPC_FALADORCASTLE_QUEST_PART_4_Text_5:
	.string "Good luck challenger and thank you\n"
	.string "again for your assistance.$"

NPC_FALADORCASTLE_QUEST_PART_4_Text_6:
	.string "Sir Theodore$"

NPC_FALADORCASTLE_QUEST_PART_4_Text_7:
	.string "Thank you and I will see you soon!$"

NPC_FALADORCASTLE_QUEST_PART_4_Text_8:
	.string "Squire$"

NPC_FALADORCASTLE_QUEST_PART_4_Text_9:
	.string "I couldn't help but over hear that you\n"
	.string "are here for the Gym Challenge.\p"
	.string "I have some information that might be\n"
	.string "useful to you.\p"
	.string "For this gym challenge you must\n"
	.string "navigate your way through Falador\l"
	.string "Castle and locate Sir Amik Varze.\p"
	.string "It sounds simple right?\p"
	.string "Well it is very easy to get lost, so be\n"
	.string "sure to ask some of the White Knights\l"
	.string "for directions.\p"
	.string "Good luck challenger!$"

NPC_FALADORCASTLE_GYM_SIRTHEO_Text_0:
	.string "This is Falador Castle, and we are the\n"
	.string "White Knights that protect the\l"
	.string "Kingdom.\p"
	.string "Do you have what it takes to defeat\n"
	.string "us?!$"

NPC_FALADORCASTLE_GYM_SIRTHEO_Text_1:
	.string "As expected.$"

NPC_FALADORCASTLE_GYM_SIRTHEO_Text_2:
	.string "You have the strength of a White\n"
	.string "Knight.\p"
	.string "Good luck navigating the castle.$"

NPC_FALADORCASTLE_GYM_SIRTHEO_Text_3:
	.string "Also thank you again for your\n"
	.string "assistance in the mines.$"

NPC_FALADORCASTLE_GYM_SIRTHEO_Text_4:
	.string "Look at you!\p"
	.string "Have you considered becoming a White\n"
	.string "Knight like myself?$"

NPC_FALADORCASTLE_GYM_TRAINER_2_Text_0:
	.string "Stop right there!\p"
	.string "Behold my ducks!$"

NPC_FALADORCASTLE_GYM_TRAINER_2_Text_1:
	.string "My dream is to one day be a duck.$"

NPC_FALADORCASTLE_GYM_TRAINER_2_Text_2:
	.string "Sir Emony$"

NPC_FALADORCASTLE_GYM_TRAINER_2_Text_3:
	.string "Sir Amik is just down this hallway.\p"
	.string "But why go battle him when you can\n"
	.string "battle me and my ducks again?$"

NPC_FALADORCASTLE_GYM_TRAINER_2_Text_4:
	.string "The other White Knights make fun of me\n"
	.string "for having a full team of Ducks but you\l"
	.string "have to admit they are pretty strong.$"

NPC_FALADORCASTLE_GYM_TRAINER_3_Text_0:
	.string "Careful where you are going there.\p"
	.string "You would not want to stumble into an\n"
	.string "ambush would you?$"

NPC_FALADORCASTLE_GYM_TRAINER_3_Text_1:
	.string "Not on my watch.$"

NPC_FALADORCASTLE_GYM_TRAINER_3_Text_2:
	.string "Sir Pryce$"

NPC_FALADORCASTLE_GYM_TRAINER_3_Text_3:
	.string "Sir Amik may or may not be down this\n"
	.string "hallway.$"

NPC_FALADORCASTLE_GYM_TRAINER_3_Text_4:
	.string "The White knights have to be silent\n"
	.string "above all.\p"
	.string "Sir Amik Vaze tends to have horrible\n"
	.string "hangovers.$"

NPC_FALADORCASTLE_GYM_TRAINER_4_Text_0:
	.string "To get to Sir Amik you will have to get\n"
	.string "through me!$"

NPC_FALADORCASTLE_GYM_TRAINER_4_Text_1:
	.string "Guess I wasn't that hard to get past.$"

NPC_FALADORCASTLE_GYM_TRAINER_4_Text_2:
	.string "Sir Loin$"

NPC_FALADORCASTLE_GYM_TRAINER_4_Text_3:
	.string "Guess I wasn't that hard to get past.\p"
	.string "Good luck finding Sir Amik.\p"
	.string "This castle was designed to confuse\n"
	.string "intruders.$"

NPC_FALADORCASTLE_GYM_TRAINER_4_Text_4:
	.string "This castle was designed to confuse\n"
	.string "intruders.$"

NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_Text_0:
	.string "Well done getting here and once again,\n"
	.string "thank you for earlier within the mines.\p"
	.string "Anyway enough informal chatting…$"

NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_Text_1:
	.string "Welcome to Falador Castle.\p"
	.string "I, Sir Amik Varze am the Falador Gym\n"
	.string "Leader.\p"
	.string "I will be your opponent for this match.\p"
	.string "Are you ready?$"

NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_Text_2:
	.string "Count me impressed, have you\n"
	.string "considered joining the White Knights?$"

NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_Text_3:
	.string "I am impressed!\p"
	.string "You have shown me so much potential I\n"
	.string "must give you this badge.$"

NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_Text_4:
	.string "{PLAYER} received the Falador BADGE\n"
	.string "from Sir Amik Varze.$"

NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_Text_5:
	.string "Also have this, it is my favourite move.$"

NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_Text_6:
	.string "That move is called Razor Shell, it is a\n"
	.string "very sharp move.\p"
	.string "Hopefully it will help you on your\n"
	.string "journey.$"

NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_Text_7:
	.string "I recommend that you make your way to\n"
	.string "Al Kharid or Varrock for your next MvM\l"
	.string "gym challenge.\p"
	.string "Unless you would like to become a white\n"
	.string "knight instead?$"

QUEST_FALADORCASTLE_GYM_SIRTHEO_Text_0:
	.string "{PLAYER}.\n"
	.string "Sir Amik Varze.\p"
	.string "Sir Owen has requested your assistance\n"
	.string "in the interrogation chamber.\p"
	.string "If you would kindly follow me.$"

NPC_FALADORCASTLE_GYM_SIRTIFFY_Text_0:
	.string "Sir Tif$"

NPC_FALADORCASTLE_GYM_SIRTIFFY_Text_1:
	.string "Can I interest you all in a cup of tea\n"
	.string "before we begin?$"

NPC_FALADORCASTLE_GYM_SIROWEN_Text_0:
	.string "Hello again, these guys won't talk yet.\p"
	.string "But don't worry, we are about to go to\n"
	.string "the interrogation room.\p"
	.string "So we'll get the information out of them\n"
	.string "one way or another.\p"
	.string "In the meantime why not challenge Sir\n"
	.string "Amik Varze to a gym battle.\p"
	.string "That is what you're here for after all\n"
	.string "right?$"

NPC_FALADORCASTLE_GYM_SirRentee_Text_0:
	.string "Sir Rentee$"

NPC_FALADORCASTLE_GYM_SirRentee_Text_1:
	.string "I am the designer of all the Family\n"
	.string "Crests.\p"
	.string "I wanted to make a design for the Badge\n"
	.string "of the Falador Gym too, but Sir Amik\l"
	.string "preferred the design of some 'Stan'\l"
	.string "fella over my design.\p"
	.string "Sigh, guess I could not compete against\n"
	.string "such artistic brilliance.$"

NPC_FALADORCASTLE_GYM_Ambassador_Spanfipple_Text_0:
	.string "Spanfipple$"

NPC_FALADORCASTLE_GYM_Ambassador_Spanfipple_Text_1:
	.string "Earlier I saw the new prisoners.\p"
	.string "They must be bad people, but their Pink\n"
	.string "outfits looked fabulous!\p"
	.string "Much better than all this boring white\n"
	.string "around here.$"

NPC_FALADORCASTLE_GYM_HAM_Text_0:
	.string "H.A.M Member$"

NPC_FALADORCASTLE_GYM_HAM_Text_1:
	.string "We will not tell you anything!$"

NPC_FALADORCASTLE_GYM_BLACKKNIGHT_Text_0:
	.string "Black Knight$"

NPC_FALADORCASTLE_GYM_BLACKKNIGHT_Text_1:
	.string "Buzz off, you and those White Knights\n"
	.string "make my blood boil.$"

NPC_FALADORCASTLE_WHITEKNIGHT_1_Text_0:
	.string "If you are looking for Amik then you\n"
	.string "should probably head back inside.$"

NPC_FALADORCASTLE_WHITEKNIGHT_1_Text_1:
	.string "Those Black Knights really grind my\n"
	.string "gears, one of these days we will rid\l"
	.string "them.$"

NPC_FALADORCASTLE_WHITEKNIGHT_2_Text_0:
	.string "Turn around, no Sir Amik this way.$"

NPC_FALADORCASTLE_WHITEKNIGHT_2_Text_1:
	.string "We are the order for order.$"

NPC_FALADORCASTLE_WHITEKNIGHT_3_Text_0:
	.string "Hello my name is Sir Amik Varze.\p"
	.string "Just kidding!$"

NPC_FALADORCASTLE_WHITEKNIGHT_3_Text_1:
	.string "I got you for a second didn't I?$"

NPC_FALADORCASTLE_WHITEKNIGHT_3_Text_2:
	.string "Sir Ving$"

NPC_FALADORCASTLE_WHITEKNIGHT_3_Text_3:
	.string "Sir Amik is inside just down the corridor\n"
	.string "next door to our torture chamber.$"

NPC_FALADORCASTLE_WHITEKNIGHT_3_Text_4:
	.string "Our enemy are the Black Knights.\p"
	.string "They call themselves Kinshra though.$"

NPC_FALADORCASTLE_WHITEKNIGHT_4_Text_0:
	.string "There used to be a chicken on the\n"
	.string "courtyard but some adventurer caught\l"
	.string "it.\p"
	.string "I kinda miss her.$"

NPC_FALADORCASTLE_WHITEKNIGHT_5_Text_0:
	.string "Many of my fellow Knights somehow have\n"
	.string "puns for their names.\p"
	.string "However they are completely oblivious\n"
	.string "to this.$"

NPC_FALADORCASTLE_WHITEKNIGHT_6_Text_0:
	.string "Keeping this Castle clean is a lot of\n"
	.string "work…\p"
	.string "But it is even harder navigating it.$"

NPC_FALADORCASTLE_GUARD_1_Text_0:
	.string "Guard$"

NPC_FALADORCASTLE_GUARD_1_Text_1:
	.string "Its a steep learning curve, but one day\n"
	.string "I will become a White Knight.$"

NPC_FALADORCASTLE_WHITEKNIGHT_7_Text_0:
	.string "White Knight$"

NPC_FALADORCASTLE_WHITEKNIGHT_7_Text_1:
	.string "We trained this guard to be a White\n"
	.string "Knight wrong on purpose, as a joke.$"

NPC_FALADORCASTLE_WHITEKNIGHT_8_Text_0:
	.string "I need a friend, want to come with me to\n"
	.string "the Rising Sun Inn after work?$"

NPC_FALADORCASTLE_WHITEKNIGHT_9_Text_0:
	.string "Looks like someone is a little lost,\n"
	.string "don't worry though I'll put you to rest.$"

NPC_FALADORCASTLE_WHITEKNIGHT_9_Text_1:
	.string "Wow, I got wiped!\p"
	.string "At least I will respawn here.$"

NPC_FALADORCASTLE_WHITEKNIGHT_9_Text_2:
	.string "Sir ???$"

NPC_FALADORCASTLE_WHITEKNIGHT_9_Text_3:
	.string "If you are tired of searching for Sir\n"
	.string "Amik Varze, might I suggest taking a\l"
	.string "rest?$"

NPC_FALADORCASTLE_WHITEKNIGHT_9_Text_4:
	.string "This is where us White Knights sleep.\p"
	.string "We spend many hours chatting about our\n"
	.string "knight names wondering who actually\l"
	.string "comes up with them.$"

NPC_FALADORCASTLE_WHITEKNIGHT_10_Text_0:
	.string "This is our living quaters.\p"
	.string "I should probably put up a barrier up to\n"
	.string "stop MvM challengers from coming in.$"

NPC_FALADORCASTLE_WHITEKNIGHT_11_Text_0:
	.string "THANK YOU!\p"
	.string "The other White Knights told me to go\n"
	.string "hide somewhere in the castle where no\l"
	.string "one would look.\p"
	.string "We made a bet that if I was found then\n"
	.string "drinks would be on them!\p"
	.string "I cannot wait to tell them someone\n"
	.string "found me!\p"
	.string "…\p"
	.string "… But…\p"
	.string "How do I give them proof that you found\n"
	.string "me?\p"
	.string "…\p"
	.string "…\p"
	.string "Wait did they just want to get rid of\n"
	.string "me?!$"

NPC_FALADORCASTLE_WHITEKNIGHT_12_Text_0:
	.string "Hello, this is where you can enlist as a\n"
	.string "guard of Falador.\p"
	.string "Oh?\n"
	.string "Not interested?\p"
	.string "Well come back anytime, we always have\n"
	.string "openings!$"

NPC_FALADORCASTLE_WHITEKNIGHT_13_Text_0:
	.string "You would think Sir Amik Varze would be\n"
	.string "here in the throne room wouldn't you?\p"
	.string "Well sorry to burst your bubble, but he\n"
	.string "isn't here.$"

NPC_FALADORCASTLE_WHITEKNIGHT_13_Text_1:
	.string "King Vallance?\p"
	.string "Yeh, he is still alive and kicking.\p"
	.string "We try our best to keep the bucket away\n"
	.string "from him.$"

NPC_FALADORCASTLE_WHITEKNIGHT_14_Text_0:
	.string "Well this is just one big mess.\p"
	.string "Where am I meant to take these\n"
	.string "cabbages?\p"
	.string "Urgh, I'm so lost man.$"

NPC_FALADORCASTLE_GUARD_3_Text_0:
	.string "Falador Guard$"

NPC_FALADORCASTLE_GUARD_3_Text_1:
	.string "I just signed up and was assigned my\n"
	.string "first shift at the north gate!\p"
	.string "I cannot wait to tell my wife and kids\n"
	.string "the good news!$"

BOOK_FALADORCASTLE_GUARD_INFO_Text_0:
	.string "It is a book containing a list of all of\n"
	.string "the recently enlisted Guards.\p"
	.string "Page.9420\p"
	.string "Paul Gower, Age: 32 Seconds.\l"
	.string "Andrew Gower, Age: 54 Seconds.\l"
	.string "Ian Gower, Age: 15 Seconds.\p"
	.string "Wait, are these how many seconds they\n"
	.string "lasted as a guard?$"

SIGN_BLURITE_CUPBOARD_Text_0:
	.string "It looks like there was once a picture\n"
	.string "in the cupboard but someone must of\l"
	.string "taken it.$"

BOOK_FALADORCASTLE_SIRVYVIN_Text_0:
	.string "To my fellow knights, there have been\n"
	.string "rumours of sightings of the Kinshra\l"
	.string "around Ice Mountain.\p"
	.string "I will return once my mission is\n"
	.string "complete.\l"
	.string "--Sir Vyvin.\p"
	.string "P.S. Someone tell my squire that he\n"
	.string "doesn't need to keep greeting\l"
	.string "everyone who enters the castle.$"

BOOK_CRANDOR_Text_0:
	.string "It's a book about the Isle of Crandor.\p"
	.string "Read it?$"

NPC_FALADORCASTLE_COOK_Text_0:
	.string "Cook$"

NPC_FALADORCASTLE_COOK_Text_1:
	.string "Never try cooking with Runes!\p"
	.string "I tried it once and the food come to\n"
	.string "life!\p"
	.string "What did I cook?\p"
	.string "Uh, I think it was some Anchovies.$"

NPC_ROUTE23_DWARF_ROCKS_Text_0:
	.string "DWARF$"

NPC_ROUTE23_DWARF_ROCKS_Text_1:
	.string "If only those goblins did not steal our\n"
	.string "pickaxe supplies.\p"
	.string "Then I could easily clear this\n"
	.string "rockslide.$"

NPC_ROUTE24_DORIC_Text_0:
	.string "DORIC$"

NPC_ROUTE24_DORIC_Text_1:
	.string "Hello traveller, I was wondering if you\n"
	.string "could get me some Iron ore.\p"
	.string "You see, suddenly all ya human-folk are\n"
	.string "obsessed with Ironman mode and I want\l"
	.string "in.{PAUSE 15}\p"
	.string "What does that mean I have to get it\n"
	.string "myself?\p"
	.string "Nonsense!\p"
	.string "Stop kidding around and get this old\n"
	.string "dwarf some iron ore.\p"
	.string "I will reward you of course!$"

NPC_FALADORCASTLE_SQUIRE_Text_0:
	.string "For this gym challenge you must\n"
	.string "navigate your way through Falador\l"
	.string "Castle and locate Sir Amik Varze.\p"
	.string "It sounds simple right?\p"
	.string "Well what are you waiting for, good luck\n"
	.string "challenger!$"

NPC_FALADORCASTLE_SQUIRE_Text_1:
	.string "Sorry I cannot chat.\p"
	.string "I have to go find Sir Vyvin's sword.$"

FALADOR_GYM_1_Text_0:
	.string "Greetings, are you here for an MvM\n"
	.string "Championship challenge?$"

FALADOR_GYM_1_Text_1:
	.string "Sorry, but if you are not here for a Gym\n"
	.string "Challenge then you must leave.\p"
	.string "Sir Vyvin said no one may enter unless\n"
	.string "they are on offical White Knights\l"
	.string "business or a Gym Challenger.$"

NPC_FALADORCASTLE_KNIGHT_9_Text_0:
	.string "This is the interrogation chamber.\p"
	.string "Other knights call it the torture\n"
	.string "chamber, although I wish they\l"
	.string "wouldn't…$"

NPC_FALADORCASTLE_GUARD_2_Text_0:
	.string "I am so lost.\p"
	.string "I was meant to be meeting Sir Vyvin like\n"
	.string "five minutes ago for a meeting.$"

NPC_FALADORCASTLE_QUESTER_Text_0:
	.string "Quester$"

NPC_FALADORCASTLE_QUESTER_Text_1:
	.string "I figured I would come ask for a quest\n"
	.string "at Falador Castle, but it seems there\l"
	.string "are only quests avaliable for White\l"
	.string "Knights.\p"
	.string "Maybe I should become one.$"
