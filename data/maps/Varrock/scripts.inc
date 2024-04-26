Varrock_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Varrock_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Varrock_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 16
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Varrock_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	call HIDDEN_GROTTO_RESET
	return

Varrock_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	call HIDDEN_GROTTO_RESET
	return


VARROCK_SEWERS_SIGNPOST::
	msgbox VARROCK_SEWERS_SIGNPOST_Text_0
	closemessage
	release
	end


VARROCK_SIGNPOST::
	msgbox VARROCK_SIGNPOST_Text_0
	closemessage
	release
	end


VARROCKGYM_SIGNPOST::
	msgbox VARROCKGYM_SIGNPOST_Text_0
	closemessage
	release
	end


VARROCK_Gypsy_Aris_SIGNPOST::
	msgbox VARROCK_Gypsy_Aris_SIGNPOST_Text_0
	closemessage
	release
	end


VARROCK_SCAMMER::
	faceplayer
	namebox VARROCK_SCAMMER_Text_0
	msgbox VARROCK_SCAMMER_Text_1
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_GUARD_0::
	faceplayer
	namebox VARROCK_NPC_GUARD_0_Text_0
	msgbox VARROCK_NPC_GUARD_0_Text_1
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_RUNEARMOUR::
	faceplayer
	msgbox VARROCK_NPC_RUNEARMOUR_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_Trader1::
	msgbox VARROCK_NPC_Trader1_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_Trader2::
	msgbox VARROCK_NPC_Trader2_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_Firemaker::
	faceplayer
	msgbox VARROCK_NPC_Firemaker_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_Guard1::
	faceplayer
	namebox VARROCK_NPC_GUARD_0_Text_0
	msgbox VARROCK_NPC_Guard1_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_Guard2::
	faceplayer
	namebox VARROCK_NPC_GUARD_0_Text_0
	msgbox VARROCK_NPC_Guard2_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_CLEANER::
	faceplayer
	namebox VARROCK_CLEANER_Text_0
	msgbox VARROCK_CLEANER_Text_1
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_Guard3::
	faceplayer
	namebox VARROCK_NPC_GUARD_0_Text_0
	msgbox VARROCK_NPC_Guard3_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_Archaeologist::
	faceplayer
	namebox VARROCK_NPC_Archaeologist_Text_0
	msgbox VARROCK_NPC_Archaeologist_Text_1
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_Quester::
	faceplayer
	namebox VARROCK_NPC_Quester_Text_0
	msgbox VARROCK_NPC_Quester_Text_1
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_Willough::
	faceplayer
	namebox VARROCK_NPC_Willough_Text_0
	msgbox VARROCK_NPC_Willough_Text_1
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_Shilop::
	faceplayer
	namebox VARROCK_NPC_Shilop_Text_0
	msgbox VARROCK_NPC_Shilop_Text_1
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_Baraek::
	faceplayer
	namebox VARROCK_NPC_Baraek_Text_0
	msgbox VARROCK_NPC_Baraek_Text_1
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_MAN_1::
	faceplayer
	msgbox VARROCK_NPC_MAN_1_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_MAN_2::
	faceplayer
	msgbox VARROCK_NPC_MAN_2_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_Halen::
	faceplayer
	namebox VARROCK_NPC_Halen_Text_0
	msgbox VARROCK_NPC_Halen_Text_1
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_Halen2::
	faceplayer
	msgbox VARROCK_NPC_Halen2_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_BronzeGuy::
	faceplayer
	msgbox VARROCK_NPC_BronzeGuy_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_Guard_5::
	faceplayer
	namebox VARROCK_NPC_GUARD_0_Text_0
	msgbox VARROCK_NPC_Guard_5_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_Guard_6::
	namebox VARROCK_NPC_GUARD_0_Text_0
	msgbox VARROCK_NPC_Guard_6_Text_0
	namebox VARROCK_NPC_Guard_6_Text_1
	msgbox VARROCK_NPC_Guard_6_Text_2
	namebox VARROCK_NPC_GUARD_0_Text_0
	msgbox VARROCK_NPC_Guard_6_Text_3
	namebox VARROCK_NPC_Guard_6_Text_1
	msgbox VARROCK_NPC_Guard_6_Text_4
	namebox VARROCK_NPC_GUARD_0_Text_0
	msgbox VARROCK_NPC_Guard_6_Text_5
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_Ranger::
	faceplayer
	namebox VARROCK_NPC_Ranger_Text_0
	msgbox VARROCK_NPC_Ranger_Text_1
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_THUG_1::
	faceplayer
	msgbox VARROCK_NPC_THUG_1_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_THUG_2::
	faceplayer
	msgbox VARROCK_NPC_THUG_2_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_THUG_3::
	faceplayer
	msgbox VARROCK_NPC_THUG_3_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_NOOB_1::
	faceplayer
	msgbox VARROCK_NPC_NOOB_1_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_PRIEST::
	faceplayer
	msgbox VARROCK_NPC_PRIEST_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_GUARD_7::
	faceplayer
	namebox VARROCK_NPC_GUARD_0_Text_0
	msgbox VARROCK_NPC_GUARD_7_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_10::
	faceplayer
	msgbox VARROCK_NPC_10_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_11::
	faceplayer
	msgbox VARROCK_NPC_11_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_12::
	faceplayer
	namebox VARROCK_NPC_12_Text_0
	msgbox VARROCK_NPC_12_Text_1
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_13::
	faceplayer
	namebox VARROCK_NPC_13_Text_0
	msgbox VARROCK_NPC_13_Text_1
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_14::
	faceplayer
	namebox VARROCK_NPC_GUARD_0_Text_0
	msgbox VARROCK_NPC_14_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_15::
	faceplayer
	namebox VARROCK_NPC_GUARD_0_Text_0
	msgbox VARROCK_NPC_15_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_Romeo::
	faceplayer
	namebox VARROCK_NPC_Romeo_Text_0
	msgbox VARROCK_NPC_Romeo_Text_1
	closemessage
	hidenamebox
	release
	end


VARROCK_URI::
	lock
	faceplayer
	namebox VARROCK_URI_Text_0
	msgbox VARROCK_URI_Text_1
	closemessage
	hidenamebox
	giveitem ITEM_ITEMFINDER
	namebox VARROCK_URI_Text_0
	msgbox VARROCK_URI_Text_2
	closemessage
	hidenamebox
	fadescreen FADE_TO_BLACK
	setflag FLAG_URI_ITEMFINDER
	removeobject VAR_LAST_TALKED
	fadescreen FADE_FROM_BLACK
	release
	end


VARROCKSTORE_NPC_1::
	faceplayer
	namebox VARROCKSTORE_NPC_1_Text_0
	msgbox VARROCKSTORE_NPC_1_Text_1
	closemessage
	hidenamebox
	release
	end


VARROCKSTORE_NPC_2::
	faceplayer
	namebox VARROCKSTORE_NPC_2_Text_0
	msgbox VARROCKSTORE_NPC_2_Text_1
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_PALACE_GUARD_1::
	faceplayer
	namebox VARROCK_NPC_GUARD_0_Text_0
	msgbox VARROCK_NPC_PALACE_GUARD_1_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_PALACE_GUARD_2::
	faceplayer
	namebox VARROCK_NPC_GUARD_0_Text_0
	msgbox VARROCK_NPC_PALACE_GUARD_2_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_PALACE_GUARD_3::
	faceplayer
	namebox VARROCK_NPC_GUARD_0_Text_0
	msgbox VARROCK_NPC_PALACE_GUARD_3_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_PALACE_GUARD_4::
	faceplayer
	namebox VARROCK_NPC_GUARD_0_Text_0
	msgbox VARROCK_NPC_PALACE_GUARD_4_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_Thessalia::
	faceplayer
	namebox VARROCK_NPC_Thessalia_Text_0
	msgbox VARROCK_NPC_Thessalia_Text_1
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_ThessaliaGrandma::
	faceplayer
	msgbox VARROCK_NPC_ThessaliaGrandma_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_SWORDSHOP_1::
	faceplayer
	msgbox VARROCK_NPC_SWORDSHOP_1_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_SWORDSHOP_2::
	faceplayer
	msgbox VARROCK_NPC_SWORDSHOP_2_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_SWORDSHOP_3::
	faceplayer
	msgbox VARROCK_NPC_SWORDSHOP_3_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_SWORDSHOP_4::
	faceplayer
	msgbox VARROCK_NPC_SWORDSHOP_4_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_TeaSalesman::
	lock
	faceplayer
	namebox VARROCK_NPC_TeaSalesman_Text_0
	msgbox VARROCK_NPC_TeaSalesman_Text_1
	waitmessage
	hidenamebox
	pokemart TeaSalesmanVarrock
	msgbox VARROCK_NPC_TeaSalesman_Text_2
	release
	end


    .align 2
TeaSalesmanVarrock:
    .2byte ITEM_REPEL_TEA_1
    .2byte ITEM_REPEL_TEA_2
    .2byte ITEM_REPEL_TEA_3
    .2byte ITEM_NONE
    release
    end

VARROCK_NPC_Apothecary::
	lock
	faceplayer
	namebox VARROCK_NPC_Apothecary_Text_0
	msgbox VARROCK_NPC_Apothecary_Text_1
	waitmessage
	hidenamebox
	pokemart ApothecaryVarrock
	msgbox VARROCK_NPC_TeaSalesman_Text_2
	release
	end


    .align 2
ApothecaryVarrock:
    .2byte ITEM_POTION_HP
    .2byte ITEM_POTION_ATT
    .2byte ITEM_POTION_DEF
    .2byte ITEM_POTION_SPATT
	.2byte ITEM_POTION_SPDEF
	.2byte ITEM_POTION_SPEED
    .2byte ITEM_NONE
    release
    end

TRIGGER_BLOCK_ROUTE38::
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq TRIGGER_BLOCK_ROUTE38_1
	setvar VAR_TEMP_0, 1
	release
	return

TRIGGER_BLOCK_ROUTE38_1:
	lock
	namebox VARROCK_NPC_GUARD_0_Text_0
	msgbox TRIGGER_BLOCK_ROUTE38_Text_0
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_LEFT
	waitmovement 0
	setvar VAR_TEMP_0, 1
	release
	end


NPC_VARROCKGUARD_BLOCKADE_1::
	lock
	faceplayer
	namebox VARROCK_NPC_GUARD_0_Text_0
	msgbox TRIGGER_BLOCK_ROUTE38_Text_0
	goto_if_set FLAG_BADGE03_GET, NPC_VARROCKGUARD_BLOCKADE_1_2
	hidenamebox
	closemessage
	release
	end

NPC_VARROCKGUARD_BLOCKADE_1_2:
	msgbox NPC_VARROCKGUARD_BLOCKADE_1_Text_0
	hidenamebox
	closemessage
	release
	end


NPC_ARCHAEOLOGIST_BLOCKADE_1::
	lock
	faceplayer
	namebox VARROCK_NPC_Archaeologist_Text_0
	msgbox NPC_ARCHAEOLOGIST_BLOCKADE_1_Text_0
	goto_if_set FLAG_BADGE07_GET, NPC_ARCHAEOLOGIST_BLOCKADE_1_2
	hidenamebox
	closemessage
	release
	end

NPC_ARCHAEOLOGIST_BLOCKADE_1_2:
	msgbox NPC_ARCHAEOLOGIST_BLOCKADE_1_Text_1
	hidenamebox
	closemessage
	release
	end


BATTLE_Varrock_Max::
	lock
	faceplayer
	namebox BATTLE_Varrock_Max_Text_0
	msgbox BATTLE_Varrock_Max_Text_1
	hidenamebox
	release
	end


NPC_Varrock_MaxRock::
	msgbox NPC_Varrock_MaxRock_Text_0
	hidenamebox
	release
	end


BATTLE_Soffan_and_Quo::
	trainerbattle_single TRAINER_Soffan_and_Quo, BATTLE_Soffan_and_Quo_Text_0, BATTLE_Soffan_and_Quo_Text_0
	msgbox BATTLE_Soffan_and_Quo_Text_0
	hidenamebox
	release
	end


NPC_VANNAKA::
	faceplayer
	namebox NPC_VANNAKA_Text_0
	msgbox NPC_VANNAKA_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_SLAYERMASTERLIST::
	msgbox NPC_SLAYERMASTERLIST_Text_0
	msgbox NPC_SLAYERMASTERLIST_Text_1
	msgbox NPC_SLAYERMASTERLIST_Text_2
	closemessage
	release
	end


NPC_VARROCK_PILLORY_GUARD::
	lock
	faceplayer
	namebox NPC_VARROCK_PILLORY_GUARD_Text_0
	msgbox NPC_VARROCK_PILLORY_GUARD_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_VARROCK_PILLORY_MUGGER::
	lock
	faceplayer
	namebox NPC_VARROCK_PILLORY_MUGGER_Text_0
	msgbox NPC_VARROCK_PILLORY_MUGGER_Text_1
	closemessage
	hidenamebox
	release
	end


GAMEMODE_MONSTER_OR_POKEMON_SCRIPT::
	faceplayer
	msgbox GAMEMODE_MONSTER_OR_POKEMON_SCRIPT_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne GAMEMODE_MONSTER_OR_POKEMON_SCRIPT_2
GAMEMODE_MONSTER_OR_POKEMON_SCRIPT_1:
	release
	end

GAMEMODE_MONSTER_OR_POKEMON_SCRIPT_2:
	msgbox GAMEMODE_MONSTER_OR_POKEMON_SCRIPT_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne GAMEMODE_MONSTER_OR_POKEMON_SCRIPT_5
	msgbox GAMEMODE_MONSTER_OR_POKEMON_SCRIPT_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne GAMEMODE_MONSTER_OR_POKEMON_SCRIPT_7
	goto GAMEMODE_MONSTER_OR_POKEMON_SCRIPT_1

GAMEMODE_MONSTER_OR_POKEMON_SCRIPT_5:
	setflag FLAG_GAMEMODE_MONSTER_SPAWN
	closemessage
	end

GAMEMODE_MONSTER_OR_POKEMON_SCRIPT_7:
	setflag FLAG_GAMEMODE_MONSTER_SPAWN
	closemessage
	end


EDIT_LEVEL_SCALING::
	faceplayer
	buffernumberstring 0, VAR_GAMEMODE_LEVEL_SCALING
	msgbox EDIT_LEVEL_SCALING_Text_0
	msgbox EDIT_LEVEL_SCALING_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne EDIT_LEVEL_SCALING_2
EDIT_LEVEL_SCALING_1:
	release
	end

EDIT_LEVEL_SCALING_2:
	msgbox EDIT_LEVEL_SCALING_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne EDIT_LEVEL_SCALING_5
	msgbox EDIT_LEVEL_SCALING_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne EDIT_LEVEL_SCALING_8
	msgbox EDIT_LEVEL_SCALING_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne EDIT_LEVEL_SCALING_10
	goto EDIT_LEVEL_SCALING_1

EDIT_LEVEL_SCALING_5:
	addvar VAR_GAMEMODE_LEVEL_SCALING, 1
	closemessage
	end

EDIT_LEVEL_SCALING_8:
	subvar VAR_GAMEMODE_LEVEL_SCALING, 1
	closemessage
	end

EDIT_LEVEL_SCALING_10:
	setvar VAR_GAMEMODE_LEVEL_SCALING, 0
	closemessage
	end


NPC_VARROCK_GERTRUDE::
	lock
	faceplayer
	namebox NPC_VARROCK_GERTRUDE_Text_0
	goto_if_unset FLAG_RECIEVED_KITTEN, NPC_VARROCK_GERTRUDE_2
	msgbox NPC_VARROCK_GERTRUDE_Text_8
NPC_VARROCK_GERTRUDE_1:
	closemessage
	hidenamebox
	release
	end

NPC_VARROCK_GERTRUDE_2:
	msgbox NPC_VARROCK_GERTRUDE_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_VARROCK_GERTRUDE_5
	msgbox NPC_VARROCK_GERTRUDE_Text_7
	goto NPC_VARROCK_GERTRUDE_1

NPC_VARROCK_GERTRUDE_5:
	msgbox NPC_VARROCK_GERTRUDE_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_VARROCK_GERTRUDE_8
	msgbox NPC_VARROCK_GERTRUDE_Text_6
	goto NPC_VARROCK_GERTRUDE_1

NPC_VARROCK_GERTRUDE_8:
	trainerbattle_no_intro TRAINER_GERTRUDE, NPC_VARROCK_GERTRUDE_Text_3
	msgbox NPC_VARROCK_GERTRUDE_Text_4
	call GiveMon_VARROCK_KITTEN
	setflag FLAG_RECIEVED_KITTEN
	msgbox NPC_VARROCK_GERTRUDE_Text_5
	goto NPC_VARROCK_GERTRUDE_1


NPC_VARROCK_PHILOP::
	lock
	faceplayer
	namebox NPC_VARROCK_PHILOP_Text_0
	msgbox NPC_VARROCK_PHILOP_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_VARROCK_KANEL::
	lock
	faceplayer
	namebox NPC_VARROCK_KANEL_Text_0
	msgbox NPC_VARROCK_KANEL_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_VARROCK_CAT_INFO::
	msgbox NPC_VARROCK_CAT_INFO_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_VARROCK_CAT_INFO_2
NPC_VARROCK_CAT_INFO_1:
	closemessage
	release
	end

NPC_VARROCK_CAT_INFO_2:
	msgbox NPC_VARROCK_CAT_INFO_Text_1
	goto NPC_VARROCK_CAT_INFO_1


NPC_ROUTE18_MAN::
	lock
	faceplayer
	msgbox NPC_ROUTE18_MAN_Text_0
	closemessage
	hidenamebox
	release
	end


GiveMon_VARROCK_KITTEN::
	setvar VAR_TEMP_1, SPECIES_KITTEN
	giveshinymon SPECIES_KITTEN, 10, ITEM_WOOLBALL, 0
	compare VAR_RESULT, 0
	goto_if_eq GiveMon_VARROCK_SendParty_KITTEN
	compare VAR_RESULT, 1
	goto_if_eq GiveMon_VARROCK_SendPC_KITTEN
	goto Common_EventScript_NoMoreRoomForPokemon
	end


GiveMon_VARROCK_SendParty_KITTEN::
	call GiveMon_VARROCK_ReceivedFanfare_KITTEN
	msgbox GiveMon_VARROCK_SendParty_KITTEN_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq GiveMon_VARROCK_Received_KITTEN
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto GiveMon_VARROCK_Received_KITTEN
	end


GiveMon_VARROCK_SendPC_KITTEN::
	call GiveMon_VARROCK_ReceivedFanfare_KITTEN
	msgbox GiveMon_VARROCK_SendParty_KITTEN_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq GiveMon_VARROCK_TransferredToPC_KITTEN
	call Common_EventScript_NameReceivedBoxMon
	goto GiveMon_VARROCK_TransferredToPC_KITTEN
	end


GiveMon_VARROCK_TransferredToPC_KITTEN::
	call Common_EventScript_TransferredToPC
	goto GiveMon_VARROCK_Received_KITTEN
	end


GiveMon_VARROCK_ReceivedFanfare_KITTEN::
	bufferspeciesname 1, SPECIES_KITTEN
	playfanfare MUS_OBTAIN_ITEM
	msgbox GiveMon_VARROCK_ReceivedFanfare_KITTEN_Text_0
	waitmessage
	waitfanfare
	bufferspeciesname 0, SPECIES_KITTEN
	return


GiveMon_VARROCK_Received_KITTEN::
	releaseall
	return


NPC_GOODIEBAG::
	lock
	faceplayer
	namebox NPC_GOODIEBAG_Text_0
	msgbox NPC_GOODIEBAG_Text_1
	goto_if_unset FLAG_UNUSED_0x93D, NPC_GOODIEBAG_2
	msgbox NPC_GOODIEBAG_Text_6
NPC_GOODIEBAG_1:
	msgbox NPC_GOODIEBAG_Text_7
	hidenamebox
	closemessage
	release
	end

NPC_GOODIEBAG_2:
	msgbox NPC_GOODIEBAG_Text_2
	msgbox NPC_GOODIEBAG_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_GOODIEBAG_5
	msgbox NPC_GOODIEBAG_Text_5
	hidenamebox
	closemessage
	release
	end

NPC_GOODIEBAG_5:
	setflag FLAG_UNUSED_0x93D
	msgbox NPC_GOODIEBAG_Text_4
	hidenamebox
	call GIVE_RANDOM_ITEM_28
	goto NPC_GOODIEBAG_1


GIVE_RANDOM_ITEM_28::
	random 28
	switch VAR_RESULT
	case 0, GIVE_RANDOM_ITEM_28_3
	case 1, GIVE_RANDOM_ITEM_28_4
	case 2, GIVE_RANDOM_ITEM_28_5
	case 3, GIVE_RANDOM_ITEM_28_6
	case 4, GIVE_RANDOM_ITEM_28_7
	case 5, GIVE_RANDOM_ITEM_28_8
	case 6, GIVE_RANDOM_ITEM_28_9
	case 7, GIVE_RANDOM_ITEM_28_10
	case 8, GIVE_RANDOM_ITEM_28_11
	case 9, GIVE_RANDOM_ITEM_28_12
	case 10, GIVE_RANDOM_ITEM_28_13
	case 11, GIVE_RANDOM_ITEM_28_14
	case 12, GIVE_RANDOM_ITEM_28_15
	case 13, GIVE_RANDOM_ITEM_28_16
	case 14, GIVE_RANDOM_ITEM_28_17
	case 15, GIVE_RANDOM_ITEM_28_18
	case 16, GIVE_RANDOM_ITEM_28_19
	case 17, GIVE_RANDOM_ITEM_28_20
	case 18, GIVE_RANDOM_ITEM_28_21
	case 19, GIVE_RANDOM_ITEM_28_22
	case 20, GIVE_RANDOM_ITEM_28_23
	case 21, GIVE_RANDOM_ITEM_28_24
	case 22, GIVE_RANDOM_ITEM_28_25
	case 23, GIVE_RANDOM_ITEM_28_26
	case 24, GIVE_RANDOM_ITEM_28_27
	case 25, GIVE_RANDOM_ITEM_28_28
	case 26, GIVE_RANDOM_ITEM_28_29
	case 27, GIVE_RANDOM_ITEM_28_30
GIVE_RANDOM_ITEM_28_1:
	return

GIVE_RANDOM_ITEM_28_3:
	giveitem ITEM_FLAX, 6
	goto GIVE_RANDOM_ITEM_28_1

GIVE_RANDOM_ITEM_28_4:
	giveitem ITEM_SPIRIT_SHARD, 2
	goto GIVE_RANDOM_ITEM_28_1

GIVE_RANDOM_ITEM_28_5:
	giveitem ITEM_PRAYER_POTION, 1
	goto GIVE_RANDOM_ITEM_28_1

GIVE_RANDOM_ITEM_28_6:
	giveitem ITEM_LAMP_SPATT, 1
	goto GIVE_RANDOM_ITEM_28_1

GIVE_RANDOM_ITEM_28_7:
	giveitem ITEM_STAT_BEER, 1
	goto GIVE_RANDOM_ITEM_28_1

GIVE_RANDOM_ITEM_28_8:
	giveitem ITEM_CRYSTAL_POUCH, 1
	goto GIVE_RANDOM_ITEM_28_1

GIVE_RANDOM_ITEM_28_9:
	giveitem ITEM_PURPLE_SWEETS, 1
	goto GIVE_RANDOM_ITEM_28_1

GIVE_RANDOM_ITEM_28_10:
	giveitem ITEM_CHOCOLATE_CAKE, 1
	goto GIVE_RANDOM_ITEM_28_1

GIVE_RANDOM_ITEM_28_11:
	giveitem ITEM_MINT_CAKE, 1
	goto GIVE_RANDOM_ITEM_28_1

GIVE_RANDOM_ITEM_28_12:
	giveitem ITEM_HWEEN_MASK, 1
	goto GIVE_RANDOM_ITEM_28_1

GIVE_RANDOM_ITEM_28_13:
	giveitem ITEM_EMPTY_BUCKET, 1
	goto GIVE_RANDOM_ITEM_28_1

GIVE_RANDOM_ITEM_28_14:
	giveitem ITEM_DRAGON_SCIMITAR, 1
	goto GIVE_RANDOM_ITEM_28_1

GIVE_RANDOM_ITEM_28_15:
	giveitem ITEM_ELEMENTAL_POUCH, 5
	goto GIVE_RANDOM_ITEM_28_1

GIVE_RANDOM_ITEM_28_16:
	giveitem ITEM_BLACK_POUCH, 15
	goto GIVE_RANDOM_ITEM_28_1

GIVE_RANDOM_ITEM_28_17:
	giveitem ITEM_NORMAL_POUCH, 20
	goto GIVE_RANDOM_ITEM_28_1

GIVE_RANDOM_ITEM_28_18:
	giveitem ITEM_SPIRIT_CHARM, 1
	goto GIVE_RANDOM_ITEM_28_1

GIVE_RANDOM_ITEM_28_19:
	giveitem ITEM_GODRABBITFOOT, 1
	goto GIVE_RANDOM_ITEM_28_1

GIVE_RANDOM_ITEM_28_20:
	giveitem ITEM_CABBAGE, 1
	goto GIVE_RANDOM_ITEM_28_1

GIVE_RANDOM_ITEM_28_21:
	giveitem ITEM_PURPLE_SWEETS, 5
	goto GIVE_RANDOM_ITEM_28_1

GIVE_RANDOM_ITEM_28_22:
	giveitem ITEM_CABBAGE, 1
	goto GIVE_RANDOM_ITEM_28_1

GIVE_RANDOM_ITEM_28_23:
	giveitem ITEM_PARTY_HAT, 1
	goto GIVE_RANDOM_ITEM_28_1

GIVE_RANDOM_ITEM_28_24:
	giveitem ITEM_GODSWORD, 1
	goto GIVE_RANDOM_ITEM_28_1

GIVE_RANDOM_ITEM_28_25:
	giveitem ITEM_CABBAGE, 1
	goto GIVE_RANDOM_ITEM_28_1

GIVE_RANDOM_ITEM_28_26:
	giveitem ITEM_DRAGON_POUCH, 1
	goto GIVE_RANDOM_ITEM_28_1

GIVE_RANDOM_ITEM_28_27:
	giveitem ITEM_GRANITE_MAUL, 1
	goto GIVE_RANDOM_ITEM_28_1

GIVE_RANDOM_ITEM_28_28:
	giveitem ITEM_DRAGON_CLAWS, 1
	goto GIVE_RANDOM_ITEM_28_1

GIVE_RANDOM_ITEM_28_29:
	giveitem ITEM_BREAD, 1
	goto GIVE_RANDOM_ITEM_28_1

GIVE_RANDOM_ITEM_28_30:
	giveitem ITEM_CABBAGE, 5
	goto GIVE_RANDOM_ITEM_28_1


VARROCK_POTIONSTORE_BOOK::
	msgbox VARROCK_POTIONSTORE_BOOK_Text_0
	closemessage
	release
	end


ITEM_VARROCK_POTIONSTORE::
	finditem ITEM_POTION_ATT
	end


ITEM_VARROCK_CLOTHESSTORE::
	finditem ITEM_ELEMENTAL_POUCH
	end


VARROCK_NPC_FROGEELBURGER::
	faceplayer
	msgbox VARROCK_NPC_FROGEELBURGER_Text_0
	closemessage
	hidenamebox
	checkitem ITEM_FROGEEL_BURGER, 1
	compare VAR_RESULT, 0
	goto_if_ne VARROCK_NPC_FROGEELBURGER_2
VARROCK_NPC_FROGEELBURGER_1:
	release
	end

VARROCK_NPC_FROGEELBURGER_2:
	msgbox VARROCK_NPC_FROGEELBURGER_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne VARROCK_NPC_FROGEELBURGER_4
	goto VARROCK_NPC_FROGEELBURGER_1

VARROCK_NPC_FROGEELBURGER_4:
	removeitem ITEM_FROGEEL_BURGER, 1
	addmoney 20000, 0
	playse SE_SHOP
	msgbox VARROCK_NPC_FROGEELBURGER_Text_2
	closemessage
	hidenamebox
	goto VARROCK_NPC_FROGEELBURGER_1


VARROCK_NPC_WondertradeHint::
	faceplayer
	msgbox VARROCK_NPC_WondertradeHint_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_SEWERS_SIGNPOST_Text_0:
	.string "Sewers - Watch out for rats.$"

VARROCK_SIGNPOST_Text_0:
	.string "Varrock, the trade centre of the\n"
	.string "Gielinor.$"

VARROCKGYM_SIGNPOST_Text_0:
	.string "Varrock Gym.$"

VARROCK_Gypsy_Aris_SIGNPOST_Text_0:
	.string "My tent was destroyed by some\n"
	.string "adventurers having MvM battles in the\l"
	.string "square and is awaiting repair.\p"
	.string "I've moved to a small house in north\n"
	.string "Varrock for the time being.\l"
	.string "-Gypsy Aris.$"

VARROCK_SCAMMER_Text_0:
	.string "Suspicious Man$"

VARROCK_SCAMMER_Text_1:
	.string "Pssst, give me your monster, I'll trim it\n"
	.string "for you.$"

VARROCK_NPC_GUARD_0_Text_0:
	.string "Guard$"

VARROCK_NPC_GUARD_0_Text_1:
	.string "Are you here to challenge the king to an\n"
	.string "MvM battle?\p"
	.string "Keep going north from here you will find\n"
	.string "him in the Palace.$"

VARROCK_NPC_RUNEARMOUR_Text_0:
	.string "I am thinking about getting a new\n"
	.string "sword, but they do not seem to be\l"
	.string "selling any Rune items.$"

VARROCK_NPC_Trader1_Text_0:
	.string "I heard you can trade your monsters\n"
	.string "with others at the Grand Exchange.\p"
	.string "Is that true?$"

VARROCK_NPC_Trader2_Text_0:
	.string "You can trade monsters at Grand\n"
	.string "Exchange with others.\p"
	.string "The only downside is that I've heard it\n"
	.string "is a hassle to set up a trade and you\l"
	.string "have to know people.$"

VARROCK_NPC_Firemaker_Text_0:
	.string "A long line of fires is the best way to\n"
	.string "train the Firemaking skill.$"

VARROCK_NPC_Guard1_Text_0:
	.string "We had an incident the other month\n"
	.string "which was caused by an MvM battle\l"
	.string "getting out of hand.\p"
	.string "For some reason an adventurer thought\n"
	.string "it would be a good idea to unleash a\l"
	.string "Dragon in the square.\p"
	.string "So now we are on duty to make sure no\n"
	.string "more damages come to other buildings.$"

VARROCK_NPC_Guard2_Text_0:
	.string "Welcome to Varrock.\p"
	.string "If you are here to challenge the King to\n"
	.string "an MvM gym battle, then you can find\l"
	.string "him at the palace in the middle of town.$"

VARROCK_CLEANER_Text_0:
	.string "Cleaner$"

VARROCK_CLEANER_Text_1:
	.string "Sweeping the streets is hard work but\n"
	.string "someone needs to keep this town clean.$"

VARROCK_NPC_Guard3_Text_0:
	.string "I sure could use a cup of tea…$"

VARROCK_NPC_Archaeologist_Text_0:
	.string "Archaeologist$"

VARROCK_NPC_Archaeologist_Text_1:
	.string "I recently excavated a relic which\n"
	.string "appears to be from a long lost city.\p"
	.string "We put it on display in the museum.$"

VARROCK_NPC_Quester_Text_0:
	.string "Quester$"

VARROCK_NPC_Quester_Text_1:
	.string "I wanted to go on a quest but was told I\n"
	.string "did not have enough Kudos.\p"
	.string "I do not get it, do they want help or\n"
	.string "not?$"

VARROCK_NPC_Willough_Text_0:
	.string "Willough$"

VARROCK_NPC_Willough_Text_1:
	.string "Our mum sent us to town to tell Fluffs\n"
	.string "to come home but now she is stuck up on\l"
	.string "the castle wall and refuses to come\l"
	.string "down.$"

VARROCK_NPC_Shilop_Text_0:
	.string "Shilop$"

VARROCK_NPC_Shilop_Text_1:
	.string "Here kitty, kitty!\p"
	.string "Fluffs come down lets go home!$"

VARROCK_NPC_Baraek_Text_0:
	.string "Baraek$"

VARROCK_NPC_Baraek_Text_1:
	.string "I am selling newspapers 50GP each.\p"
	.string "Are you interested in one?$"

VARROCK_NPC_MAN_1_Text_0:
	.string "Some monsters can evolve if they are in\n"
	.string "different areas of the Gielinor.\p"
	.string "We call them regional variants.\p"
	.string "An example would be the Chickens we\n"
	.string "have here in Varrock differ greatly\l"
	.string "compared to those in Lumbridge and\l"
	.string "Karamja.$"

VARROCK_NPC_MAN_2_Text_0:
	.string "You know how adventurers use potions\n"
	.string "to help boost their stats while\l"
	.string "fighting?\p"
	.string "Well the same can be done with\n"
	.string "monsters!\p"
	.string "Next time you are at a store you should\n"
	.string "pick some up, they can come in handy.$"

VARROCK_NPC_Halen_Text_0:
	.string "Haig Halen$"

VARROCK_NPC_Halen_Text_1:
	.string "Very sorry, but we are closed right now.$"

VARROCK_NPC_Halen2_Text_0:
	.string "Honestly I think this is a joke.$"

VARROCK_NPC_BronzeGuy_Text_0:
	.string "There are Pigeons everywhere here.\p"
	.string "Surely they must be useful for\n"
	.string "something right?$"

VARROCK_NPC_Guard_5_Text_0:
	.string "The southern trail holds a lot of\n"
	.string "danger.\p"
	.string "Please be careful of bears and other\n"
	.string "perils.$"

VARROCK_NPC_Guard_6_Text_0:
	.string "Yes the castle is to the north.$"

VARROCK_NPC_Guard_6_Text_1:
	.string "Dwarf$"

VARROCK_NPC_Guard_6_Text_2:
	.string "And the cart system goes to the\n"
	.string "castle?$"

VARROCK_NPC_Guard_6_Text_3:
	.string "No, it goes to the Grand Exchange.$"

VARROCK_NPC_Guard_6_Text_4:
	.string "Ok but where is the castle then?$"

VARROCK_NPC_Guard_6_Text_5:
	.string "Ugh…$"

VARROCK_NPC_Ranger_Text_0:
	.string "Ranger$"

VARROCK_NPC_Ranger_Text_1:
	.string "Sometimes the best teacher is defeat.\p"
	.string "If you lose a battle think about how to\n"
	.string "change your team to adapt to the\l"
	.string "opponents strategy.$"

VARROCK_NPC_THUG_1_Text_0:
	.string "You are in the wrong neighborhood.\p"
	.string "Get out before I make you stand and\n"
	.string "deliver.$"

VARROCK_NPC_THUG_2_Text_0:
	.string "The criminal justice system is balanced\n"
	.string "on a knives edge, we thugs bring the\l"
	.string "knives and the guards gets us on the\l"
	.string "edge of the city.$"

VARROCK_NPC_THUG_3_Text_0:
	.string "Once I get these lobsters all burnt and\n"
	.string "good, the Grand Exchange wont know\l"
	.string "what hit them.$"

VARROCK_NPC_NOOB_1_Text_0:
	.string "I am meeting a friend up north past the\n"
	.string "border, he told me to bring my best\l"
	.string "items and money so they could see\l"
	.string "them.$"

VARROCK_NPC_PRIEST_Text_0:
	.string "Would you like to partake in the\n"
	.string "ceremony?$"

VARROCK_NPC_GUARD_7_Text_0:
	.string "Past this is the Wilderness, it is a\n"
	.string "lawless place and I can not in good\l"
	.string "conscience allow you to go there\l"
	.string "without a stern warning.\p"
	.string "Be careful.$"

VARROCK_NPC_10_Text_0:
	.string "They say the king is a surprisingly\n"
	.string "strong monster trainer.\p"
	.string "But his wife prefers tending to her\n"
	.string "garden than indulging in his hobby.$"

VARROCK_NPC_11_Text_0:
	.string "Dont dig for treasure chests, you have\n"
	.string "been warned.$"

VARROCK_NPC_12_Text_0:
	.string "Skiller$"

VARROCK_NPC_12_Text_1:
	.string "I should stop by Aubury's Rune Shop and\n"
	.string "grab some Runes to evolve my Monsters.$"

VARROCK_NPC_13_Text_0:
	.string "Charlie$"

VARROCK_NPC_13_Text_1:
	.string "Life is hard.\p"
	.string "Spare some cash?$"

VARROCK_NPC_14_Text_0:
	.string "Purple Sweets are really yum!\p"
	.string "I know it is a waste eating them myself\n"
	.string "but I cannot help it.$"

VARROCK_NPC_15_Text_0:
	.string "Do you enjoy farming as much as me?\p"
	.string "Be sure to make good friends with the\n"
	.string "Strange Plants.\p"
	.string "But keep them away from Dark types.$"

VARROCK_NPC_Romeo_Text_0:
	.string "Romeo$"

VARROCK_NPC_Romeo_Text_1:
	.string "Juliet, where art thou!$"

VARROCK_URI_Text_0:
	.string "Uri$"

VARROCK_URI_Text_1:
	.string "Do you like solving puzzles?\p"
	.string "Finding unexpected goodies?\p"
	.string "Well say no more!\p"
	.string "These items…{PAUSE 32} are…{PAUSE 32} for…{PAUSE 32} you!$"

VARROCK_URI_Text_2:
	.string "Hidden treasures lay everywhere!\p"
	.string "Until we meet again!$"

VARROCKSTORE_NPC_1_Text_0:
	.string "Noob$"

VARROCKSTORE_NPC_1_Text_1:
	.string "I probably should buy one of each\n"
	.string "Cocktail.\p"
	.string "That way I can heal any status effects.$"

VARROCKSTORE_NPC_2_Text_0:
	.string "Man$"

VARROCKSTORE_NPC_2_Text_1:
	.string "When catching monsters some pouches\n"
	.string "are better than others.\p"
	.string "For example a Mystic Pouch works really\n"
	.string "well on Fairy-Type Monsters.$"

VARROCK_NPC_PALACE_GUARD_1_Text_0:
	.string "Our king specialises in Fairy-Type\n"
	.string "monsters.\p"
	.string "But don't tell anyone I told you that.$"

VARROCK_NPC_PALACE_GUARD_2_Text_0:
	.string "There are hidden items all over the\n"
	.string "place.\p"
	.string "I should really invest in an ItemFinder\n"
	.string "set.$"

VARROCK_NPC_PALACE_GUARD_3_Text_0:
	.string "King Roald is one of the MvM Leaders.\p"
	.string "You can find him in the Castle.$"

VARROCK_NPC_PALACE_GUARD_4_Text_0:
	.string "Be careful not to let your monsters\n"
	.string "faint.\p"
	.string "I heard horror stories about some\n"
	.string "monsters evolving into undead\l"
	.string "versions of themselves.$"

VARROCK_NPC_Thessalia_Text_0:
	.string "Thessalia$"

VARROCK_NPC_Thessalia_Text_1:
	.string "Hello, I can change your outfit for you.\p"
	.string "But you will have to come back later.$"

VARROCK_NPC_ThessaliaGrandma_Text_0:
	.string "Zzz…$"

VARROCK_NPC_SWORDSHOP_1_Text_0:
	.string "Sorry, all of my Weapons are out of\n"
	.string "stock at the moment.$"

VARROCK_NPC_SWORDSHOP_2_Text_0:
	.string "I came to buy a Dragon Scimitar to\n"
	.string "power up my Monsters Dragon-Type\l"
	.string "moves.\p"
	.string "But they don't have any in stock.$"

VARROCK_NPC_SWORDSHOP_3_Text_0:
	.string "Did you know a Mithril Scimitar boosts\n"
	.string "the Attack stat for monsters that are\l"
	.string "not yet evolved.$"

VARROCK_NPC_SWORDSHOP_4_Text_0:
	.string "Today is my day off.$"

VARROCK_NPC_TeaSalesman_Text_0:
	.string "Tea Salesman$"

VARROCK_NPC_TeaSalesman_Text_1:
	.string "Selling Tea is my passion.\p"
	.string "Follow your passion and life will reward\n"
	.string "you.\p"
	.string "Anyway, are you in need of some high\n"
	.string "qualitea?$"

VARROCK_NPC_TeaSalesman_Text_2:
	.string "Thank you, come again!$"

VARROCK_NPC_Apothecary_Text_0:
	.string "Apothecary$"

VARROCK_NPC_Apothecary_Text_1:
	.string "Welcome to my Potion store!\p"
	.string "How may I help you?$"

TRIGGER_BLOCK_ROUTE38_Text_0:
	.string "Sorry, by order of the King only those\n"
	.string "who have obtained the Varrock Badge\l"
	.string "may pass here.$"

NPC_VARROCKGUARD_BLOCKADE_1_Text_0:
	.string "You have the Varrock Badge!\p"
	.string "You may pass, but be cautious.\p"
	.string "Dangerous Monsters lurk beyond here.$"

NPC_ARCHAEOLOGIST_BLOCKADE_1_Text_0:
	.string "Stop!\p"
	.string "Please wait awhile, we recently\n"
	.string "uncovered some mysterious ruins within\l"
	.string "our digsite.\p"
	.string "We are in the middle of excavating them\n"
	.string "and cannot risk being disturbed.$"

NPC_ARCHAEOLOGIST_BLOCKADE_1_Text_1:
	.string "You should see it!\p"
	.string "The city of Senntisten has been found!$"

BATTLE_Varrock_Max_Text_0:
	.string "Max$"

BATTLE_Varrock_Max_Text_1:
	.string "Come back and talk to me once you have\n"
	.string "achieved something great.$"

NPC_Varrock_MaxRock_Text_0:
	.string "It is a massive rock!\p"
	.string "It appears to be alive.$"

BATTLE_Soffan_and_Quo_Text_0:
	.string "…$"

NPC_VANNAKA_Text_0:
	.string "Vannaka$"

NPC_VANNAKA_Text_1:
	.string "My name is Vannaka I have the honour of\n"
	.string "being a Gym Leader for the MvM\l"
	.string "Championships and I am also apart of\l"
	.string "Slayer Masters.$"

NPC_SLAYERMASTERLIST_Text_0:
	.string "It is a list containing all of the Slayer\n"
	.string "Masters.$"

NPC_SLAYERMASTERLIST_Text_1:
	.string "Vannaka - Arrav Badge.\p"
	.string "Turael - Keiper Badge.\p"
	.string "Duradel - Bwana Badge.\p"
	.string "Chaeldar - Grisial Badge.\p"
	.string "Mazchna - Sanguine Badge.\p"
	.string "Krystilla - Forinthry Badge.\p"
	.string "Nieve - Umesco Badge.\p"
	.string "Konar - Kaal Badge.$"

NPC_SLAYERMASTERLIST_Text_2:
	.string "After obtaining all Slayer Master\n"
	.string "Badges you will then be eligible to\l"
	.string "participate in the… …\p"
	.string "The page is torn.$"

NPC_VARROCK_PILLORY_GUARD_Text_0:
	.string "Pillory Guard$"

NPC_VARROCK_PILLORY_GUARD_Text_1:
	.string "If I catch you stealing from anybody in\n"
	.string "the city, you'll end up locked away in\l"
	.string "here like this delinquent!$"

NPC_VARROCK_PILLORY_MUGGER_Text_0:
	.string "Mugger$"

NPC_VARROCK_PILLORY_MUGGER_Text_1:
	.string "Argh! My fingers are so numb from all\n"
	.string "the pickpocketing I've been doing that\l"
	.string "I can't pick this damn lock to escape...$"

GAMEMODE_MONSTER_OR_POKEMON_SCRIPT_Text_0:
	.string "EDIT GAMEMODE?$"

GAMEMODE_MONSTER_OR_POKEMON_SCRIPT_Text_1:
	.string "SPAWN POKEMON?$"

GAMEMODE_MONSTER_OR_POKEMON_SCRIPT_Text_2:
	.string "SPAWN MONSTERS?$"

EDIT_LEVEL_SCALING_Text_0:
	.string "Level Scaling is: {STR_VAR_1}$"

EDIT_LEVEL_SCALING_Text_1:
	.string "EDIT LEVEL SCALING?$"

EDIT_LEVEL_SCALING_Text_2:
	.string "ADD +1\n"
	.string "LEVEL SCALING?$"

EDIT_LEVEL_SCALING_Text_3:
	.string "SUBTRACT -1\n"
	.string "LEVEL SCALING?$"

EDIT_LEVEL_SCALING_Text_4:
	.string "SET 0\n"
	.string "LEVEL SCALING?$"

NPC_VARROCK_GERTRUDE_Text_0:
	.string "Gertrude$"

NPC_VARROCK_GERTRUDE_Text_1:
	.string "Oh hello there sweety.\p"
	.string "Would you be interested in a kitten?$"

NPC_VARROCK_GERTRUDE_Text_2:
	.string "Well I cannot just give you one.\p"
	.string "I need to make sure you are a\n"
	.string "responsible pet owner first.\p"
	.string "Is it alright if I test you?$"

NPC_VARROCK_GERTRUDE_Text_3:
	.string "You have beaten my bitty kitties!$"

NPC_VARROCK_GERTRUDE_Text_4:
	.string "You pass the test with flying colours.\p"
	.string "Here I would like you to have this kitty.$"

NPC_VARROCK_GERTRUDE_Text_5:
	.string "Please look after it.$"

NPC_VARROCK_GERTRUDE_Text_6:
	.string "Come back if you change your mind.$"

NPC_VARROCK_GERTRUDE_Text_7:
	.string "Oh, but they are really cute.$"

NPC_VARROCK_GERTRUDE_Text_8:
	.string "How is that Kitten I gave you going?\p"
	.string "I hope it is well.$"

NPC_VARROCK_PHILOP_Text_0:
	.string "Philop$"

NPC_VARROCK_PHILOP_Text_1:
	.string "Mum says that Fluffs is her favourite\n"
	.string "of all the kitties.$"

NPC_VARROCK_KANEL_Text_0:
	.string "Kanel$"

NPC_VARROCK_KANEL_Text_1:
	.string "Meow.$"

NPC_VARROCK_CAT_INFO_Text_0:
	.string "It is a Bookcase filled with tons of\n"
	.string "information about cats.\p"
	.string "Would you like to read it?$"

NPC_VARROCK_CAT_INFO_Text_1:
	.string "It is commonly known that a Kitten can\n"
	.string "evolve into a Cat by levelling it up.\p"
	.string "But a Cat can evolve into many other\n"
	.string "forms from there.\p"
	.string "Some cats can evolve from having\n"
	.string "specific types of monsters in the\l"
	.string "party, such as PSYCHIC types & some\l"
	.string "rats.\p"
	.string "Other cats can evolve by using a\n"
	.string "certain Rune on them.\p"
	.string "But don't let them REST all the time\n"
	.string "otherwise they may get lazy.\p"
	.string "And even the closest of bonds may\n"
	.string "cause a cat to get a bit too overgrown.$"

NPC_ROUTE18_MAN_Text_0:
	.string "Over the road here is Gertrude's house.\p"
	.string "If you like cats then I think you should\n"
	.string "pay her a visit.\p"
	.string "If I was not busy sitting on this bench\n"
	.string "I would pay her a visit myself.$"

GiveMon_VARROCK_SendParty_KITTEN_Text_0:
	.string "Would you like to give your monster a\n"
	.string "nickname?$"

GiveMon_VARROCK_ReceivedFanfare_KITTEN_Text_0:
	.string "{PLAYER} obtained a {STR_VAR_2}.$"

NPC_GOODIEBAG_Text_0:
	.string "NightmareRH$"

NPC_GOODIEBAG_Text_1:
	.string "Hooba, Hubba, Hubba!$"

NPC_GOODIEBAG_Text_2:
	.string "Oh my goodness!\n"
	.string "It's time for a new daily giveaway!$"

NPC_GOODIEBAG_Text_3:
	.string "Would you like a Goodie from the Goodie\n"
	.string "bag!?$"

NPC_GOODIEBAG_Text_4:
	.string "Hooba, hooba hoo!\p"
	.string "This goodie is for hooba you!$"

NPC_GOODIEBAG_Text_5:
	.string "Don't be a bunghole.\p"
	.string "Just take the Goodies.$"

NPC_GOODIEBAG_Text_6:
	.string "I have already given you a Goodie\n"
	.string "today.$"

NPC_GOODIEBAG_Text_7:
	.string "You should come back tomorrow for\n"
	.string "another Goodie.$"

VARROCK_POTIONSTORE_BOOK_Text_0:
	.string "Using potions in battle allow your\n"
	.string "stats to temporarily be boosted.\p"
	.string "The strength of a potion determines\n"
	.string "how much stats are boosted by.\p"
	.string "Regular potions boost stats by 2\n"
	.string "levels.\p"
	.string "Super Potions boosts stats by 3 levels.\p"
	.string "Extreme potions boosts stats by 5\n"
	.string "levels.$"

VARROCK_NPC_FROGEELBURGER_Text_0:
	.string "{COLOR BLUE}cyan:wave: Buying Frogeel Burgers 20k\n"
	.string "ea!$"

VARROCK_NPC_FROGEELBURGER_Text_1:
	.string "Oh my!\p"
	.string "Is that a Frogeel burger I smell?!\p"
	.string "May I buy it off you for 20k gp?$"

VARROCK_NPC_FROGEELBURGER_Text_2:
	.string "Thank you, these are delicious!\p"
	.string "If you have any more come back and I'll\n"
	.string "buy them from you.$"

VARROCK_NPC_WondertradeHint_Text_0:
	.string "There is a desk at the Grand Exchange\n"
	.string "that allows you to trade your monsters\l"
	.string "with a stranger.\p"
	.string "It's very useful for those who don't\n"
	.string "have any friends to trade with, like me.$"
