Falador_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Falador_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_TRANSITION, Falador_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Falador_MapScripts_MAP_SCRIPT_ON_LOAD:
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Falador_MapScripts_MAP_SCRIPT_ON_LOAD_2
	call OPENWORLD_STATE_FALADOR
Falador_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	call MODTIMBO_STATE
	return

Falador_MapScripts_MAP_SCRIPT_ON_LOAD_2:
	call FALADOR_QUEST_STATE
	goto Falador_MapScripts_MAP_SCRIPT_ON_LOAD_1

Falador_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Falador_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	call OPENWORLD_STATE_FALADOR
	call HIDDEN_GROTTO_RESET
	return

Falador_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	call FALADOR_QUEST_STATE
	call HIDDEN_GROTTO_RESET
	return


OPENWORLD_STATE_FALADOR::
	setflag FLAG_TEMP_2
	setmetatile 24, 6, 609, 0
	setmetatile 24, 7, 617, 0
	setmetatile 25, 6, 609, 0
	special DrawWholeMapView
	removeobject 40
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_1F
	setflag FLAG_TEMP_1D
	removeobject 37
	removeobject 38
	removeobject 39
	removeobject 27
	return


MODTIMBO_STATE::
	switch VAR_POKESCAPE_MODTIMBO_STATE
	case 0, MODTIMBO_STATE_2
	case 1, MODTIMBO_STATE_3
	return

MODTIMBO_STATE_2:
	removeobject 5
	setflag FLAG_MOD_TIMBO
	return

MODTIMBO_STATE_3:
	setmetatile 44, 5, 593, 1
	setmetatile 44, 6, 15, 1
	special DrawWholeMapView
	removeobject 5
	setflag FLAG_MOD_TIMBO
	return


ITEM_FALADOR_1::
	finditem ITEM_ADAMANT_POUCH
	end


ITEM_FALADOR_2::
	finditem ITEM_TM26_KINGS_SHIELD
	end


FALADOR_SIGN::
	lock
	msgbox FALADOR_SIGN_Text_0
	waitmessage
	hidenamebox
	release
	end


FALADOR_MINES_SIGN::
	lock
	msgbox FALADOR_MINES_SIGN_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_STATUE::
	lock
	msgbox NPC_FALADOR_STATUE_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_STATUE_1::
	lock
	msgbox NPC_FALADOR_STATUE_1_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_DOG::
	lock
	faceplayer
	namebox NPC_FALADOR_DOG_Text_0
	msgbox NPC_FALADOR_DOG_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_NPC_1::
	lock
	faceplayer
	msgbox NPC_FALADOR_NPC_1_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_GUARD_1::
	lock
	faceplayer
	namebox NPC_FALADOR_GUARD_1_Text_0
	msgbox NPC_FALADOR_GUARD_1_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_GUARD_2::
	lock
	faceplayer
	namebox NPC_FALADOR_GUARD_1_Text_0
	msgbox NPC_FALADOR_GUARD_2_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_GUARD_3::
	lock
	faceplayer
	namebox NPC_FALADOR_GUARD_1_Text_0
	msgbox NPC_FALADOR_GUARD_3_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_NPC_2::
	lock
	faceplayer
	msgbox NPC_FALADOR_NPC_2_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_NPC_3::
	lock
	faceplayer
	msgbox NPC_FALADOR_NPC_3_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_NPC_4::
	lock
	faceplayer
	msgbox NPC_FALADOR_NPC_4_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_GUARD_4::
	lock
	faceplayer
	namebox NPC_FALADOR_GUARD_1_Text_0
	msgbox NPC_FALADOR_GUARD_4_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_GUARD_5::
	lock
	faceplayer
	namebox NPC_FALADOR_GUARD_1_Text_0
	msgbox NPC_FALADOR_GUARD_5_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_GUARD_6::
	lock
	faceplayer
	namebox NPC_FALADOR_GUARD_1_Text_0
	msgbox NPC_FALADOR_GUARD_6_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_GUARD_7::
	lock
	faceplayer
	namebox NPC_FALADOR_GUARD_1_Text_0
	msgbox NPC_FALADOR_GUARD_7_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_WHITEKNIGHT_1::
	lock
	faceplayer
	namebox NPC_FALADOR_WHITEKNIGHT_1_Text_0
	msgbox NPC_FALADOR_WHITEKNIGHT_1_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_WHITEKNIGHT_2::
	lock
	faceplayer
	namebox NPC_FALADOR_WHITEKNIGHT_1_Text_0
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 120
	goto_if_le NPC_FALADOR_WHITEKNIGHT_2_4
NPC_FALADOR_WHITEKNIGHT_2_3:
	msgbox NPC_FALADOR_WHITEKNIGHT_2_Text_1
NPC_FALADOR_WHITEKNIGHT_2_1:
	waitmessage
	hidenamebox
	release
	end

NPC_FALADOR_WHITEKNIGHT_2_2:
	msgbox NPC_FALADOR_WHITEKNIGHT_2_Text_0
	goto NPC_FALADOR_WHITEKNIGHT_2_1

NPC_FALADOR_WHITEKNIGHT_2_4:
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq NPC_FALADOR_WHITEKNIGHT_2_2
	goto NPC_FALADOR_WHITEKNIGHT_2_3


NPC_FALADOR_WHITEKNIGHT_3::
	lock
	faceplayer
	namebox NPC_FALADOR_WHITEKNIGHT_1_Text_0
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 120
	goto_if_le NPC_FALADOR_WHITEKNIGHT_3_4
NPC_FALADOR_WHITEKNIGHT_3_3:
	msgbox NPC_FALADOR_WHITEKNIGHT_3_Text_1
NPC_FALADOR_WHITEKNIGHT_3_1:
	waitmessage
	hidenamebox
	release
	end

NPC_FALADOR_WHITEKNIGHT_3_2:
	msgbox NPC_FALADOR_WHITEKNIGHT_3_Text_0
	goto NPC_FALADOR_WHITEKNIGHT_3_1

NPC_FALADOR_WHITEKNIGHT_3_4:
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq NPC_FALADOR_WHITEKNIGHT_3_2
	goto NPC_FALADOR_WHITEKNIGHT_3_3


NPC_FALADOR_NPC_11::
	lock
	faceplayer
	msgbox NPC_FALADOR_NPC_11_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_NPC_12::
	lock
	faceplayer
	msgbox NPC_FALADOR_NPC_12_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_MINER_1::
	faceplayer
	msgbox NPC_FALADOR_MINER_1_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_MINER_2::
	lock
	faceplayer
	msgbox NPC_FALADOR_MINER_2_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_DWARF_1::
	faceplayer
	msgbox NPC_FALADOR_DWARF_1_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_DWARF_2::
	faceplayer
	msgbox NPC_FALADOR_DWARF_2_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_SMITHER::
	lock
	faceplayer
	msgbox NPC_FALADOR_SMITHER_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_WOODCUTTER::
	lock
	faceplayer
	msgbox NPC_FALADOR_WOODCUTTER_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_ESTATE_AGENT::
	lock
	faceplayer
	namebox NPC_FALADOR_ESTATE_AGENT_Text_0
	msgbox NPC_FALADOR_ESTATE_AGENT_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_WORKMAN::
	lock
	faceplayer
	namebox NPC_FALADOR_WORKMAN_Text_0
	msgbox NPC_FALADOR_WORKMAN_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_APPRENTICE::
	lock
	faceplayer
	namebox NPC_FALADOR_APPRENTICE_Text_0
	msgbox NPC_FALADOR_APPRENTICE_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq NPC_FALADOR_APPRENTICE_2
NPC_FALADOR_APPRENTICE_1:
	msgbox NPC_FALADOR_APPRENTICE_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq NPC_FALADOR_APPRENTICE_5
NPC_FALADOR_APPRENTICE_4:
	checkmoney 5000, 0
	compare VAR_RESULT, 0
	goto_if_eq NPC_FALADOR_APPRENTICE_8
	msgbox NPC_FALADOR_APPRENTICE_Text_4
	hidenamebox
	call GiveMon_FALADOR_ANICHAIR
	removemoney 5000, 0
	namebox NPC_FALADOR_APPRENTICE_Text_0
	msgbox NPC_FALADOR_APPRENTICE_Text_5
	waitmessage
	hidenamebox
	release
	end

NPC_FALADOR_APPRENTICE_2:
	goto NPC_FALADOR_APPRENTICE_NO
	goto NPC_FALADOR_APPRENTICE_1

NPC_FALADOR_APPRENTICE_5:
	goto NPC_FALADOR_APPRENTICE_NO
	goto NPC_FALADOR_APPRENTICE_4

NPC_FALADOR_APPRENTICE_8:
	msgbox NPC_FALADOR_APPRENTICE_Text_3
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_APPRENTICE_NO::
	msgbox NPC_FALADOR_APPRENTICE_NO_Text_0
	closemessage
	hidenamebox
	release
	end


GiveMon_FALADOR_ANICHAIR::
	setvar VAR_TEMP_1, SPECIES_ANICHAIR
	givemon SPECIES_ANICHAIR, 20, ITEM_NONE
	compare VAR_RESULT, 0
	goto_if_eq GiveMon_FALADOR_SendParty_ANICHAIR
	compare VAR_RESULT, 1
	goto_if_eq GiveMon_FALADOR_SendPC_ANICHAIR
	goto Common_EventScript_NoMoreRoomForPokemon
	end


GiveMon_FALADOR_SendParty_ANICHAIR::
	call GiveMon_FALADOR_ReceivedFanfare_ANICHAIR
	msgbox GiveMon_FALADOR_SendParty_ANICHAIR_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq GiveMon_FALADOR_Received_ANICHAIR
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto GiveMon_FALADOR_Received_ANICHAIR
	end


GiveMon_FALADOR_SendPC_ANICHAIR::
	call GiveMon_FALADOR_ReceivedFanfare_ANICHAIR
	msgbox GiveMon_FALADOR_SendParty_ANICHAIR_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq GiveMon_FALADOR_TransferredToPC_ANICHAIR
	call Common_EventScript_NameReceivedBoxMon
	goto GiveMon_FALADOR_TransferredToPC_ANICHAIR
	end


GiveMon_FALADOR_TransferredToPC_ANICHAIR::
	call Common_EventScript_TransferredToPC
	goto GiveMon_FALADOR_Received_ANICHAIR
	end


GiveMon_FALADOR_ReceivedFanfare_ANICHAIR::
	bufferspeciesname 1, SPECIES_ANICHAIR
	playfanfare MUS_OBTAIN_ITEM
	msgbox GiveMon_FALADOR_ReceivedFanfare_ANICHAIR_Text_0
	waitmessage
	waitfanfare
	bufferspeciesname 0, SPECIES_ANICHAIR
	return


GiveMon_FALADOR_Received_ANICHAIR::
	releaseall
	return


NPC_FALADOR_HAIRDRESSER::
	lock
	faceplayer
	namebox NPC_FALADOR_HAIRDRESSER_Text_0
	goto_if_unset FLAG_HAIRDRESSER, NPC_FALADOR_HAIRDRESSER_2
	msgbox NPC_FALADOR_HAIRDRESSER_Text_8
	closemessage
	hidenamebox
	release
	end

NPC_FALADOR_HAIRDRESSER_2:
	msgbox NPC_FALADOR_HAIRDRESSER_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_FALADOR_HAIRDRESSER_6
	msgbox NPC_FALADOR_HAIRDRESSER_Text_7
	closemessage
	hidenamebox
NPC_FALADOR_HAIRDRESSER_5:
	release
	end

NPC_FALADOR_HAIRDRESSER_6:
	msgbox NPC_FALADOR_HAIRDRESSER_Text_2
	closemessage
	hidenamebox
	trainerbattle_no_intro TRAINER_FALADOR_HAIRDRESSER, NPC_FALADOR_HAIRDRESSER_Text_3
	namebox NPC_FALADOR_HAIRDRESSER_Text_0
	msgbox NPC_FALADOR_HAIRDRESSER_Text_4
	msgbox NPC_FALADOR_HAIRDRESSER_Text_5
	hidenamebox
	setflag FLAG_HAIRDRESSER
	giveitem ITEM_RING_OF_WEALTH, 1
	namebox NPC_FALADOR_HAIRDRESSER_Text_0
	msgbox NPC_FALADOR_HAIRDRESSER_Text_6
	closemessage
	hidenamebox
	goto NPC_FALADOR_HAIRDRESSER_5


NPC_FALADOR_HAIRDRESSER_NPC::
	lock
	faceplayer
	msgbox NPC_FALADOR_HAIRDRESSER_NPC_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_HAIRDRESSER_SUOMI::
	lock
	namebox NPC_FALADOR_HAIRDRESSER_SUOMI_Text_0
	msgbox NPC_FALADOR_HAIRDRESSER_SUOMI_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_CASSIE::
	lock
	faceplayer
	namebox NPC_FALADOR_CASSIE_Text_0
	msgbox NPC_FALADOR_CASSIE_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_NPC_10::
	lock
	faceplayer
	namebox NPC_FALADOR_NPC_10_Text_0
	msgbox NPC_FALADOR_NPC_10_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_MYSTERIOUS_OLD_MAN::
	lock
	faceplayer
	namebox NPC_FALADOR_MYSTERIOUS_OLD_MAN_Text_0
	msgbox NPC_FALADOR_MYSTERIOUS_OLD_MAN_Text_1
	msgbox NPC_FALADOR_MYSTERIOUS_OLD_MAN_Text_2
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_SirTiffyCachien::
	lock
	faceplayer
	namebox NPC_FALADOR_SirTiffyCachien_Text_0
	msgbox NPC_FALADOR_SirTiffyCachien_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_HESKEL::
	lock
	faceplayer
	namebox NPC_FALADOR_HESKEL_Text_0
	msgbox NPC_FALADOR_HESKEL_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_NPC_5::
	lock
	faceplayer
	namebox NPC_FALADOR_NPC_5_Text_0
	msgbox NPC_FALADOR_NPC_5_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_NPC_6::
	lock
	faceplayer
	namebox NPC_FALADOR_NPC_6_Text_0
	msgbox NPC_FALADOR_NPC_6_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_Wyson::
	lock
	faceplayer
	namebox NPC_FALADOR_Wyson_Text_0
	msgbox NPC_FALADOR_Wyson_Text_1
	waitmessage
	hidenamebox
	release
	end


Falador_TREE::
	switch VAR_POKESCAPE_MODTIMBO_STATE
	case 0, Falador_TREE_2
	case 1, Falador_TREE_3
	return

Falador_TREE_2:
	lock
	clearflag FLAG_MOD_TIMBO
	addobject 5
	playse SE_LEDGE
	applymovement 5, Movement_FaladorTree_1
	applymovement OBJ_EVENT_ID_PLAYER, Movement_FaladorTree_2
	waitmovement 0
	namebox Falador_TREE_Text_0
	msgbox Falador_TREE_Text_1
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_FALADOR_MODTIMBO, Falador_TREE_Text_2
	fadescreen FADE_TO_BLACK
	setmetatile 44, 5, 593, 1
	setmetatile 44, 6, 15, 1
	special DrawWholeMapView
	removeobject 5
	setflag FLAG_MOD_TIMBO
	fadescreen FADE_FROM_BLACK
	msgbox Falador_TREE_Text_3
	giveitem ITEM_TINDERBOX, 1
	setvar VAR_POKESCAPE_MODTIMBO_STATE, 1
	release
	end

Falador_TREE_3:
	msgbox Falador_TREE_Text_4
	closemessage
	end


Movement_FaladorTree_1:
	jump_special_down
	step_end

Movement_FaladorTree_2:
	lock_facing_direction
	walk_fast_down
	unlock_facing_direction
	face_up
	step_end

NPC_FALADOR_NPC_8::
	lock
	faceplayer
	namebox NPC_FALADOR_NPC_10_Text_0
	msgbox NPC_FALADOR_NPC_10_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_NPC_7::
	lock
	faceplayer
	namebox NPC_FALADOR_NPC_5_Text_0
	msgbox NPC_FALADOR_NPC_7_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_GENERALSTORE_NPC::
	lock
	faceplayer
	namebox NPC_FALADOR_GUARD_1_Text_0
	msgbox NPC_FALADOR_GENERALSTORE_NPC_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_BANK_NPC_1::
	lock
	faceplayer
	namebox NPC_FALADOR_GUARD_1_Text_0
	msgbox NPC_FALADOR_BANK_NPC_1_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_GEMSTORE_NPC_1::
	lock
	faceplayer
	msgbox NPC_FALADOR_GEMSTORE_NPC_1_Text_0
	waitmessage
	hidenamebox
	release
	end


HERQUIN_DIARY::
	msgbox HERQUIN_DIARY_Text_0
	closemessage
	end


NPC_FALADOR_GEMSTORE_OWNER::
	lock
	faceplayer
	namebox NPC_FALADOR_GEMSTORE_OWNER_Text_0
	msgbox NPC_FALADOR_GEMSTORE_OWNER_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_BANK_NPC_2::
	lock
	faceplayer
	msgbox NPC_FALADOR_BANK_NPC_2_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_BANK_NPC_3::
	lock
	faceplayer
	namebox NPC_FALADOR_WHITEKNIGHT_1_Text_0
	msgbox NPC_FALADOR_BANK_NPC_3_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_HOUSE_NPC_1::
	lock
	faceplayer
	msgbox NPC_FALADOR_HOUSE_NPC_1_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_HOUSE_NPC_2::
	lock
	faceplayer
	msgbox NPC_FALADOR_HOUSE_NPC_2_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_NPC_9::
	lock
	faceplayer
	msgbox NPC_FALADOR_NPC_9_Text_0
	waitmessage
	hidenamebox
	release
	end


FALADOR_QUEST_STATE::
	goto_if_unset FLAG_BADGE02_GET, FALADOR_QUEST_STATE_2
FALADOR_QUEST_STATE_1:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 114
	goto_if_lt FALADOR_QUEST_STATE_5
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 115
	goto_if_eq FALADOR_QUEST_STATE_6
	setflag FLAG_TEMP_1F
	removeobject 43
	setflag FLAG_TEMP_1D
	removeobject 49
	removeobject 50
	removeobject 51
	removeobject 52
FALADOR_QUEST_STATE_4:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 111
	goto_if_eq FALADOR_QUEST_STATE_11
FALADOR_QUEST_STATE_10:
	switch VAR_POKESCAPE_FALADOR_STATE
	case 0, FALADOR_QUEST_STATE_14
	case 1, FALADOR_QUEST_STATE_14
	case 2, FALADOR_QUEST_STATE_15
	case 3, FALADOR_QUEST_STATE_15
	case 4, FALADOR_QUEST_STATE_15
	case 5, FALADOR_QUEST_STATE_16
	return

FALADOR_QUEST_STATE_2:
	setflag FLAG_MITHRILMAN2
	goto FALADOR_QUEST_STATE_1

FALADOR_QUEST_STATE_5:
	clearflag FLAG_TEMP_1F
	addobject 43
	setvar VAR_TEMP_F, 1
	goto FALADOR_QUEST_STATE_4

FALADOR_QUEST_STATE_6:
	setflag FLAG_TEMP_1E
	removeobject 15
	setflag FLAG_TEMP_1D
	removeobject 49
	removeobject 50
	removeobject 51
	removeobject 52
	goto FALADOR_QUEST_STATE_4

FALADOR_QUEST_STATE_11:
	setflag FLAG_TEMP_1D
	removeobject 49
	removeobject 50
	removeobject 51
	removeobject 52
	setvar VAR_TEMP_F, 1
	goto FALADOR_QUEST_STATE_10

FALADOR_QUEST_STATE_14:
	return

FALADOR_QUEST_STATE_15:
	removeobject 40
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_1F
	return

FALADOR_QUEST_STATE_16:
	setflag FLAG_TEMP_2
	setmetatile 24, 6, 609, 0
	setmetatile 24, 7, 617, 0
	setmetatile 25, 6, 609, 0
	special DrawWholeMapView
	removeobject 40
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_1F
	removeobject 37
	removeobject 38
	removeobject 39
	removeobject 27
	return


TRIGGER_QUEST_WALK_SIROWEN::
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FALADOR_WALK_UP
	applymovement 49, movement_falador_walk_sirtheo
	applymovement 50, movement_falador_walk_sirowen
	applymovement 51, movement_falador_walk_other
	applymovement 52, movement_falador_walk_sirowen
	waitmovement 0
	setflag FLAG_TEMP_1D
	removeobject 49
	removeobject 50
	removeobject 51
	removeobject 52
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 111
	release
	end


MOVEMENT_FALADOR_WALK_UP:
	walk_up
	walk_up
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_up
	delay_16
	delay_16
	face_right
	step_end

movement_falador_walk_sirowen:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

movement_falador_walk_sirtheo:
	delay_16
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

movement_falador_walk_other:
	delay_16
	delay_16
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

NPC_FALADOR_BLOCK_GUARD_1::
	lock
	faceplayer
	namebox NPC_FALADOR_BLOCK_GUARD_1_Text_0
	msgbox NPC_FALADOR_BLOCK_GUARD_1_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_BLOCK_GUARD_2::
	lock
	faceplayer
	namebox NPC_FALADOR_BLOCK_GUARD_1_Text_0
	msgbox NPC_FALADOR_BLOCK_GUARD_2_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_BLOCK_MERCHANT::
	lock
	faceplayer
	namebox NPC_FALADOR_BLOCK_MERCHANT_Text_0
	msgbox NPC_FALADOR_BLOCK_MERCHANT_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_BLOCK_KNIGHT::
	lock
	faceplayer
	namebox NPC_FALADOR_BLOCK_KNIGHT_Text_0
	msgbox NPC_FALADOR_BLOCK_KNIGHT_Text_1
	waitmessage
	hidenamebox
	release
	end


FALADOR_QUEST_STATE_CHANGER::
	switch VAR_POKESCAPE_FALADOR_STATE
	case 0, FALADOR_QUEST_STATE_CHANGER_2
	case 1, FALADOR_QUEST_STATE_CHANGER_3
	case 2, FALADOR_QUEST_STATE_CHANGER_4
	case 3, FALADOR_QUEST_STATE_CHANGER_5
	case 4, FALADOR_QUEST_STATE_CHANGER_6
	case 5, FALADOR_QUEST_STATE_CHANGER_7
	return

FALADOR_QUEST_STATE_CHANGER_2:
	msgbox FALADOR_QUEST_STATE_CHANGER_Text_0
	setvar VAR_POKESCAPE_FALADOR_STATE, 1
	closemessage
	return

FALADOR_QUEST_STATE_CHANGER_3:
	msgbox FALADOR_QUEST_STATE_CHANGER_Text_1
	setvar VAR_POKESCAPE_FALADOR_STATE, 2
	closemessage
	return

FALADOR_QUEST_STATE_CHANGER_4:
	msgbox FALADOR_QUEST_STATE_CHANGER_Text_2
	setvar VAR_POKESCAPE_FALADOR_STATE, 3
	closemessage
	return

FALADOR_QUEST_STATE_CHANGER_5:
	msgbox FALADOR_QUEST_STATE_CHANGER_Text_3
	setvar VAR_POKESCAPE_FALADOR_STATE, 4
	closemessage
	return

FALADOR_QUEST_STATE_CHANGER_6:
	msgbox FALADOR_QUEST_STATE_CHANGER_Text_4
	setvar VAR_POKESCAPE_FALADOR_STATE, 5
	closemessage
	return

FALADOR_QUEST_STATE_CHANGER_7:
	msgbox FALADOR_QUEST_STATE_CHANGER_Text_5
	setvar VAR_POKESCAPE_FALADOR_STATE, 0
	closemessage
	return


TRIGGER_FALADOR_CASTLE::
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq TRIGGER_FALADOR_CASTLE_2
TRIGGER_FALADOR_CASTLE_1:
	release
	end

TRIGGER_FALADOR_CASTLE_2:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 114
	goto_if_lt TRIGGER_FALADOR_CASTLE_4
	goto TRIGGER_FALADOR_CASTLE_1

TRIGGER_FALADOR_CASTLE_4:
	lock
	applymovement 10, Movement_InteractFACEPLAYER
	applymovement 9, Movement_InteractFACEPLAYER
	waitmovement 0
	namebox NPC_FALADOR_WHITEKNIGHT_1_Text_0
	msgbox TRIGGER_FALADOR_CASTLE_Text_0
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, movement_lock_walk_up
	waitmovement 0
	release
	goto TRIGGER_FALADOR_CASTLE_1


movement_lock_walk_up:
	lock_facing_direction
	walk_up
	step_end

NPC_FALADOR_STORY_WHITE_KNIGHT_1::
	lock
	faceplayer
	namebox NPC_FALADOR_WHITEKNIGHT_1_Text_0
	msgbox NPC_FALADOR_STORY_WHITE_KNIGHT_1_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_STORY_WHITE_KNIGHT_2::
	lock
	faceplayer
	namebox NPC_FALADOR_WHITEKNIGHT_1_Text_0
	msgbox NPC_FALADOR_STORY_WHITE_KNIGHT_2_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_STORY_WHITE_KNIGHT_3::
	lock
	faceplayer
	namebox NPC_FALADOR_WHITEKNIGHT_1_Text_0
	msgbox NPC_FALADOR_STORY_WHITE_KNIGHT_3_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_STORY_WHITE_KNIGHT_4::
	lock
	faceplayer
	namebox NPC_FALADOR_WHITEKNIGHT_1_Text_0
	msgbox NPC_FALADOR_NPC_10_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_STORY_WHITE_KNIGHT_5::
	lock
	faceplayer
	namebox NPC_FALADOR_WHITEKNIGHT_1_Text_0
	msgbox NPC_FALADOR_STORY_WHITE_KNIGHT_5_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_STORY_WHITE_KNIGHT_6::
	lock
	faceplayer
	namebox NPC_FALADOR_WHITEKNIGHT_1_Text_0
	msgbox NPC_FALADOR_STORY_WHITE_KNIGHT_6_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_STORY_WHITE_KNIGHT_7::
	lock
	faceplayer
	namebox NPC_FALADOR_WHITEKNIGHT_1_Text_0
	msgbox NPC_FALADOR_STORY_WHITE_KNIGHT_7_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_STORY_WHITE_KNIGHT_8::
	lock
	faceplayer
	namebox NPC_FALADOR_WHITEKNIGHT_1_Text_0
	msgbox NPC_FALADOR_STORY_WHITE_KNIGHT_8_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_PARTYROOM_PETE::
	lock
	faceplayer
	namebox NPC_FALADOR_PARTYROOM_PETE_Text_0
	msgbox NPC_FALADOR_PARTYROOM_PETE_Text_1
	msgbox NPC_FALADOR_PARTYROOM_PETE_Text_2
	msgbox NPC_FALADOR_PARTYROOM_PETE_Text_3
	msgbox NPC_FALADOR_PARTYROOM_PETE_Text_4
	msgbox NPC_FALADOR_PARTYROOM_PETE_Text_5
	msgbox NPC_FALADOR_PARTYROOM_PETE_Text_6
	waitmessage
	hidenamebox
	release
	end


FALADOR_SIGN_Text_0:
	.string "Falador, home of the White Knights.$"

FALADOR_MINES_SIGN_Text_0:
	.string "Dwarven Mines.$"

NPC_FALADOR_STATUE_Text_0:
	.string "It is a statue of Saradomin.$"

NPC_FALADOR_STATUE_1_Text_0:
	.string "It is a statue of Saradomin.\p"
	.string "There appears to be some scribble on\n"
	.string "the statue.\p"
	.string "It reads, BOW TO THE GREAT ONE.$"

NPC_FALADOR_DOG_Text_0:
	.string "DALMATION$"

NPC_FALADOR_DOG_Text_1:
	.string "RUFF!$"

NPC_FALADOR_NPC_1_Text_0:
	.string "Have you heard about the Mining &\n"
	.string "Smithing rework?$"

NPC_FALADOR_GUARD_1_Text_0:
	.string "Guard$"

NPC_FALADOR_GUARD_1_Text_1:
	.string "I am so thankful I was assigned to\n"
	.string "guard the south gate!\p"
	.string "I heard that the north gate guys don't\n"
	.string "even last half a day.$"

NPC_FALADOR_GUARD_2_Text_0:
	.string "Stop right there you criminal scum.\p"
	.string "…\p"
	.string "I am very sorry about that.\p"
	.string "I really needed to catch a criminal for\n"
	.string "a promotion.\p"
	.string "If you see a criminal please send them\n"
	.string "my way.$"

NPC_FALADOR_GUARD_3_Text_0:
	.string "Stand and deliver!\p"
	.string "Wait, that is the wrong line.\p"
	.string "Sorry, I am new to this job.$"

NPC_FALADOR_NPC_2_Text_0:
	.string "You should always stock up on items to\n"
	.string "heal your party.\p"
	.string "Cakes and beer are a safe bet.$"

NPC_FALADOR_NPC_3_Text_0:
	.string "I used an air rune on my frog, and it\n"
	.string "evolved differently from what I\l"
	.string "thought it would.\p"
	.string "Maybe there are more of these types of\n"
	.string "evolutions out there?$"

NPC_FALADOR_NPC_4_Text_0:
	.string "Gnome cocktails are very useful.\p"
	.string "They increase your monsters stats.$"

NPC_FALADOR_GUARD_4_Text_0:
	.string "Falador is a nice city, the white\n"
	.string "knights keeps us safe.\p"
	.string "Stay vigilant adventurer.$"

NPC_FALADOR_GUARD_5_Text_0:
	.string "While most guards prefer to use a sword\n"
	.string "or monster to keep order in Falador, I\l"
	.string "prefer my crossbow.\p"
	.string "That way people if people attack me\n"
	.string "from behind a obstacle I do not have to\l"
	.string "stand still and accept my fate.$"

NPC_FALADOR_GUARD_6_Text_0:
	.string "This statue shows our god of choice.\p"
	.string "Saradomin the god of wisdom.\p"
	.string "Please do show your respect.$"

NPC_FALADOR_GUARD_7_Text_0:
	.string "The guard looks nervous, you wonder\n"
	.string "why…$"

NPC_FALADOR_WHITEKNIGHT_1_Text_0:
	.string "White Knight$"

NPC_FALADOR_WHITEKNIGHT_1_Text_1:
	.string "South from here is the Falador castle\n"
	.string "home to the White Knights.\p"
	.string "Are you interested in becoming a White\n"
	.string "Knight?$"

NPC_FALADOR_WHITEKNIGHT_2_Text_0:
	.string "Sorry the Gym is closed until the\n"
	.string "disturbance at the Dwarven Mines are\l"
	.string "resolved.\p"
	.string "Huh?\n"
	.string "You want to know where the Dwarven\l"
	.string "Mines are?\p"
	.string "They are underneath us!\p"
	.string "If you go to the east of town there you\n"
	.string "can find a small shack which leads to\l"
	.string "the mines.$"

NPC_FALADOR_WHITEKNIGHT_2_Text_1:
	.string "Past this bridge is Falador Castle!\p"
	.string "Which is also the gym location for the\n"
	.string "MvM Championships.$"

NPC_FALADOR_WHITEKNIGHT_3_Text_0:
	.string "Sorry but the gym is closed for a very\n"
	.string "important mission.\p"
	.string "In the meantime you should go visit the\n"
	.string "Party room in the east of town.\p"
	.string "It looks like a big castle, you cannot\n"
	.string "miss it.$"

NPC_FALADOR_WHITEKNIGHT_3_Text_1:
	.string "Sir Amik Varze is our town's gym leader.$"

NPC_FALADOR_NPC_11_Text_0:
	.string "After I finish work today I might walk\n"
	.string "around Falador Park.$"

NPC_FALADOR_NPC_12_Text_0:
	.string "I cannot seem to light a fire on these\n"
	.string "flowers.\p"
	.string "It's not that I don't want to, it's just\n"
	.string "some kind of magic not letting me.$"

NPC_FALADOR_MINER_1_Text_0:
	.string "I am mining coal to get enough money\n"
	.string "for a better pickaxe.\p"
	.string "Then I can mine coal faster to get an\n"
	.string "even better pickaxe.$"

NPC_FALADOR_MINER_2_Text_0:
	.string "This is so much work, but someone has to\n"
	.string "do it otherwise we will never see it\l"
	.string "finished.$"

NPC_FALADOR_DWARF_1_Text_0:
	.string "If you are wanting to access the\n"
	.string "Dwarven Mines.\p"
	.string "You can do so by entering the building\n"
	.string "next door to the Party Room, north of\l"
	.string "here.$"

NPC_FALADOR_DWARF_2_Text_0:
	.string "Sorry to inconvenience you but the\n"
	.string "entrance to the underground mines is\l"
	.string "currently unavailable due to the\l"
	.string "rework.$"

NPC_FALADOR_SMITHER_Text_0:
	.string "We are currently in the middle of\n"
	.string "expanding the Mining Guild.\p"
	.string "We are also going to be clearing this\n"
	.string "plot of land to put a Smithing Guild\l"
	.string "here.$"

NPC_FALADOR_WOODCUTTER_Text_0:
	.string "Chop, chop, chop!\p"
	.string "Goodbye trees, hello Smithing Guild!$"

NPC_FALADOR_ESTATE_AGENT_Text_0:
	.string "Estate Agent$"

NPC_FALADOR_ESTATE_AGENT_Text_1:
	.string "Hello, it would appear that you are\n"
	.string "looking for a house? I am most sorry\l"
	.string "but there is no menagerie big enough to\l"
	.string "fit your needs. I will get in touch with\l"
	.string "you if the situation changes.$"

NPC_FALADOR_WORKMAN_Text_0:
	.string "Workman$"

NPC_FALADOR_WORKMAN_Text_1:
	.string "I wish my useless apprentice would\n"
	.string "hurry up and finish our order for\l"
	.string "Varrock.$"

NPC_FALADOR_APPRENTICE_Text_0:
	.string "Apprentice$"

NPC_FALADOR_APPRENTICE_Text_1:
	.string "Ayyee!\p"
	.string "After I finished making this chair it\n"
	.string "came to life!\p"
	.string "I do not suppose you want to buy it\n"
	.string "from me, do you?\p"
	.string "I need to cover the cost of materials\n"
	.string "and I do not think a living chair will\l"
	.string "make our client happy…$"

NPC_FALADOR_APPRENTICE_Text_2:
	.string "Thank you so much!\p"
	.string "Let me just calculate the\n"
	.string "total…{PAUSE 15}…{PAUSE 15}…{PAUSE 15}Alright!\p"
	.string "So that comes to 5000gp.\p"
	.string "Is this okay with you?$"

NPC_FALADOR_APPRENTICE_Text_3:
	.string "…{PAUSE 32}…{PAUSE 32} Uh…\p"
	.string "{PAUSE 32}You do not have enough money.$"

NPC_FALADOR_APPRENTICE_Text_4:
	.string "Thank you! You are a lifesaver!$"

NPC_FALADOR_APPRENTICE_Text_5:
	.string "WHAT?!\p"
	.string "HOW!?\p"
	.string "I accidentally made another living\n"
	.string "chair!$"

NPC_FALADOR_APPRENTICE_NO_Text_0:
	.string "Urk!\p"
	.string "No problem, who would want a living chair\n"
	.string "anyway.$"

GiveMon_FALADOR_SendParty_ANICHAIR_Text_0:
	.string "Would you like to give your monster a\n"
	.string "nickname?$"

GiveMon_FALADOR_ReceivedFanfare_ANICHAIR_Text_0:
	.string "{PLAYER} obtained a {STR_VAR_2}.$"

NPC_FALADOR_HAIRDRESSER_Text_0:
	.string "Hairdresser$"

NPC_FALADOR_HAIRDRESSER_Text_1:
	.string "You want a haircut?$"

NPC_FALADOR_HAIRDRESSER_Text_2:
	.string "Well, first you will have to battle me.$"

NPC_FALADOR_HAIRDRESSER_Text_3:
	.string "Oh no, my chinchompas!$"

NPC_FALADOR_HAIRDRESSER_Text_4:
	.string "Why would you faint all my chinchompas.\p"
	.string "Now who will run the wheel to make the\n"
	.string "sign outside spin.\p"
	.string "My business is ruined!$"

NPC_FALADOR_HAIRDRESSER_Text_5:
	.string "Take this, and never return.\n"
	.string "Also you get no haircut.$"

NPC_FALADOR_HAIRDRESSER_Text_6:
	.string "Please leave.\p"
	.string "For the good of my business.$"

NPC_FALADOR_HAIRDRESSER_Text_7:
	.string "Out of my way then, can you not see I\n"
	.string "have hair to cut?$"

NPC_FALADOR_HAIRDRESSER_Text_8:
	.string "What more do you want!\p"
	.string "Get out!$"

NPC_FALADOR_HAIRDRESSER_NPC_Text_0:
	.string "Today im really feeling the dragoon\n"
	.string "hairstyle.\p"
	.string "It will fix my love life for sure.$"

NPC_FALADOR_HAIRDRESSER_SUOMI_Text_0:
	.string "SUOMI$"

NPC_FALADOR_HAIRDRESSER_SUOMI_Text_1:
	.string "What, do you think this is my natural\n"
	.string "hair colour?\p"
	.string "I have to dye my hair every few weeks\n"
	.string "to keep it this purple.$"

NPC_FALADOR_CASSIE_Text_0:
	.string "Cassie$"

NPC_FALADOR_CASSIE_Text_1:
	.string "Sorry, I just sold my quota of shields\n"
	.string "for today. You cannot let monsters\l"
	.string "equip shields anyway.$"

NPC_FALADOR_NPC_10_Text_0:
	.string "$"

NPC_FALADOR_NPC_10_Text_1:
	.string "Is it still there?! I do not want to\n"
	.string "leave my house unless it is gone! What?\l"
	.string "It is just a spiderling? I do not\l"
	.string "believe you, it is a monster! Stop\l"
	.string "trying to trick me!$"

NPC_FALADOR_MYSTERIOUS_OLD_MAN_Text_0:
	.string "Mysterious Old Man$"

NPC_FALADOR_MYSTERIOUS_OLD_MAN_Text_1:
	.string "Oh hello again {PLAYER}. I am here to\n"
	.string "visit Falador in attempt to open these\l"
	.string "strange cubes. Here you have one$"

NPC_FALADOR_MYSTERIOUS_OLD_MAN_Text_2:
	.string "If you figure out how to open it please\n"
	.string "get in contact with me again.$"

NPC_FALADOR_SirTiffyCachien_Text_0:
	.string "Sir Tiffy Cachien$"

NPC_FALADOR_SirTiffyCachien_Text_1:
	.string "I enjoy spending my time here at the\n"
	.string "park sitting on this bench.$"

NPC_FALADOR_HESKEL_Text_0:
	.string "Heskel$"

NPC_FALADOR_HESKEL_Text_1:
	.string "I wish someone would take over for me,\n"
	.string "it has been days since I had my last\l"
	.string "break.$"

NPC_FALADOR_NPC_5_Text_0:
	.string "Gardener$"

NPC_FALADOR_NPC_5_Text_1:
	.string "It is really hard tending to these\n"
	.string "gardens.\p"
	.string "My farming level is way too low.$"

NPC_FALADOR_NPC_6_Text_0:
	.string "Garden Supplier$"

NPC_FALADOR_NPC_6_Text_1:
	.string "If you are here to buy bagged trees to\n"
	.string "sell them for a higher price, I regret\l"
	.string "to inform you that I have increased\l"
	.string "the prices.$"

NPC_FALADOR_Wyson_Text_0:
	.string "Wyson$"

NPC_FALADOR_Wyson_Text_1:
	.string "I heard some rumours about a giant mole\n"
	.string "living somewhere in this area, and that\l"
	.string "interacting with an object would get\l"
	.string "you to it.\p"
	.string "I am too scared to find out how though.$"

Falador_TREE_Text_0:
	.string "Mod Timbo$"

Falador_TREE_Text_1:
	.string "Oh no, you caught me!!\p"
	.string "I was planning to chop down this tree\n"
	.string "but it appears I must chop you down\l"
	.string "first!$"

Falador_TREE_Text_2:
	.string "You saw nothing!$"

Falador_TREE_Text_3:
	.string "Despite winning the battle Timbo\n"
	.string "appears to have chopped down the tree\l"
	.string "anyway.\p"
	.string "There is something next to the stump.\p"
	.string "Looks like he dropped it in a rush.$"

Falador_TREE_Text_4:
	.string "TIIIIMBOOOOOOOOO!$"

NPC_FALADOR_NPC_7_Text_0:
	.string "Maybe they will one day rework farming.\n"
	.string "A man can dream.$"

NPC_FALADOR_GENERALSTORE_NPC_Text_0:
	.string "Even if your monsters get stronger, it\n"
	.string "never hurts to have some healing items\l"
	.string "ready for when you are in a pinch.$"

NPC_FALADOR_BANK_NPC_1_Text_0:
	.string "You can only carry six monsters.\p"
	.string "Make sure to cover all your bases with\n"
	.string "those six.$"

NPC_FALADOR_GEMSTORE_NPC_1_Text_0:
	.string "They say the gems from this store\n"
	.string "comes all the way from Shilo Village.\p"
	.string "That's all the way over in Karamja!$"

HERQUIN_DIARY_Text_0:
	.string "The gem deliveries aren't arriving from\n"
	.string "Shilo anymore.\p"
	.string "I wonder if some of the natives\n"
	.string "attacked my drivers on their way here.\p"
	.string "I hope they are okay.\p"
	.string "I wonder if the dwarves in the mines\n"
	.string "nearby can provide me with any gems in\l"
	.string "the meantime..$"

NPC_FALADOR_GEMSTORE_OWNER_Text_0:
	.string "Herquin$"

NPC_FALADOR_GEMSTORE_OWNER_Text_1:
	.string "Welcome!\p"
	.string "I am very sorry but the shipment of\n"
	.string "gems is still on hold and there is\l"
	.string "nothing else I can sell you.\p"
	.string "Please come again another time.$"

NPC_FALADOR_BANK_NPC_2_Text_0:
	.string "I got wiped out by Sir Amik.\p"
	.string "Guess my monsters just weren't strong\n"
	.string "enough.$"

NPC_FALADOR_BANK_NPC_3_Text_0:
	.string "Back in the day a lot of people crowded\n"
	.string "up here and in the park yelling\l"
	.string "colourful words and screaming at each\l"
	.string "other to get attention.\p"
	.string "I really miss it.$"

NPC_FALADOR_HOUSE_NPC_1_Text_0:
	.string "Dinner will be ready soon, will you be\n"
	.string "joining us?$"

NPC_FALADOR_HOUSE_NPC_2_Text_0:
	.string "I don't know you but I am telling you,\n"
	.string "run!\p"
	.string "It is too late for me but you can still\n"
	.string "run before the dinner is ready!\p"
	.string "Help…$"

NPC_FALADOR_NPC_9_Text_0:
	.string "Did you know part of the Dwarven Mines\n"
	.string "are right underneath us!\p"
	.string "It is scary just thinking about it.$"

NPC_FALADOR_BLOCK_GUARD_1_Text_0:
	.string "GUARD$"

NPC_FALADOR_BLOCK_GUARD_1_Text_1:
	.string "We've been informed that this shipment\n"
	.string "may contain Karmajan Rum.\p"
	.string "You should inform Sir Amik Varze right\n"
	.string "away!$"

NPC_FALADOR_BLOCK_GUARD_2_Text_0:
	.string "Please stand back while we search\n"
	.string "these wares.\p"
	.string "While waiting you should visit the White\n"
	.string "Knights Castle.$"

NPC_FALADOR_BLOCK_MERCHANT_Text_0:
	.string "MERCHANT$"

NPC_FALADOR_BLOCK_MERCHANT_Text_1:
	.string "Why did that guy have to say I was\n"
	.string "carrying suspicious goods…$"

NPC_FALADOR_BLOCK_KNIGHT_Text_0:
	.string "KNIGHT$"

NPC_FALADOR_BLOCK_KNIGHT_Text_1:
	.string "There have been reports of a\n"
	.string "distrubance in these mines.\p"
	.string "Sir Owen and Sir Theodore have both\n"
	.string "gone ahead to investigate.$"

FALADOR_QUEST_STATE_CHANGER_Text_0:
	.string "FALADORSTATE isnow 1$"

FALADOR_QUEST_STATE_CHANGER_Text_1:
	.string "FALADORSTATE isnow 2$"

FALADOR_QUEST_STATE_CHANGER_Text_2:
	.string "FALADORSTATE isnow 3$"

FALADOR_QUEST_STATE_CHANGER_Text_3:
	.string "FALADORSTATE isnow 4$"

FALADOR_QUEST_STATE_CHANGER_Text_4:
	.string "FALADORSTATE isnow 5$"

FALADOR_QUEST_STATE_CHANGER_Text_5:
	.string "FALADORSTATE isnow 0$"

TRIGGER_FALADOR_CASTLE_Text_0:
	.string "Sorry, but you cannot enter the gym\n"
	.string "right now.$"

NPC_FALADOR_STORY_WHITE_KNIGHT_1_Text_0:
	.string "We are conducting an operation within\n"
	.string "the Dwarven Mines.\p"
	.string "Please stay clear of the area for your\n"
	.string "safety.$"

NPC_FALADOR_STORY_WHITE_KNIGHT_2_Text_0:
	.string "Man, I wish I was assigned the job to\n"
	.string "guard the party room.\p"
	.string "Instead I was assigned to guard the\n"
	.string "bank.\p"
	.string "Oh? You're wondering why were are on\n"
	.string "high alert?\p"
	.string "That's because there have been some\n"
	.string "issues in the Dwarven Mines as of late.\p"
	.string "The entrance is right next door to the\n"
	.string "party room actually.$"

NPC_FALADOR_STORY_WHITE_KNIGHT_3_Text_0:
	.string "Adventurer!\p"
	.string "Welcome to Falador!\p"
	.string "The MvM gym is located in Falador castle\n"
	.string "south of the main square.$"

NPC_FALADOR_STORY_WHITE_KNIGHT_5_Text_0:
	.string "I have been assigned to this position.\p"
	.string "Please do not get in my way.$"

NPC_FALADOR_STORY_WHITE_KNIGHT_6_Text_0:
	.string "Sir Owen and Sir Theodore have gone\n"
	.string "further into the mines.$"

NPC_FALADOR_STORY_WHITE_KNIGHT_7_Text_0:
	.string "For this to happen at the same time as\n"
	.string "the disturbance in the mines something\l"
	.string "must be wrong.$"

NPC_FALADOR_STORY_WHITE_KNIGHT_8_Text_0:
	.string "I have been assigned to guard the\n"
	.string "party room while the mission at the\l"
	.string "dwarven mines takes place.\p"
	.string "But man I wish I could go in, it sounds\n"
	.string "like they're having so much fun in\l"
	.string "there.$"

NPC_FALADOR_PARTYROOM_PETE_Text_0:
	.string "Party Pete$"

NPC_FALADOR_PARTYROOM_PETE_Text_1:
	.string "Yo, yo, yo!\p"
	.string "I am Party Pete\p"
	.string "This is the party hoouseee!\p"
	.string "Are you in the mood to get down and\n"
	.string "groooveee?$"

NPC_FALADOR_PARTYROOM_PETE_Text_2:
	.string "Radical man!\p"
	.string "Vibe check and stuff dog!\p"
	.string "Lets get down and boogee!$"

NPC_FALADOR_PARTYROOM_PETE_Text_3:
	.string "Yeeah, yeeeah!\p"
	.string "The White Knights of Falador!$"

NPC_FALADOR_PARTYROOM_PETE_Text_4:
	.string "What's this!?\p"
	.string "The creators of PokeScape have shown\n"
	.string "that they too like to Party with the\l"
	.string "best!$"

NPC_FALADOR_PARTYROOM_PETE_Text_5:
	.string "Oh no it's H.A.M!\p"
	.string "Attention everyone this is a H.A.M\n"
	.string "attack, time to get down!$"

NPC_FALADOR_PARTYROOM_PETE_Text_6:
	.string "You can only dream to have an afro like\n"
	.string "mine.\p"
	.string "Party hard enough you might get one.$"
