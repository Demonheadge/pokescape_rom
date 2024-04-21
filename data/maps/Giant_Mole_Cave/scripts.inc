Giant_Mole_Cave_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Giant_Mole_Cave_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_TRANSITION, Giant_Mole_Cave_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Giant_Mole_Cave_MapScripts_MAP_SCRIPT_ON_LOAD:
	call GIANTMOLE_STATE
	return

Giant_Mole_Cave_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 3
	return


GIANTMOLE_STATE::
	switch VAR_GIANTMOLE_STATE
	case 0, GIANTMOLE_STATE_2
	case 1, GIANTMOLE_STATE_3
	case 2, GIANTMOLE_STATE_4
	case 3, GIANTMOLE_STATE_5
	case 4, GIANTMOLE_STATE_6
	case 5, GIANTMOLE_STATE_7
	case 6, GIANTMOLE_STATE_8
	case 7, GIANTMOLE_STATE_9
	case 8, GIANTMOLE_STATE_10
	case 9, GIANTMOLE_STATE_11
	case 10, GIANTMOLE_STATE_12
	case 11, GIANTMOLE_STATE_13
	return

GIANTMOLE_STATE_2:
	removeobject 2
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	removeobject 7
	removeobject 8
	removeobject 9
	removeobject 10
	removeobject 11
	clearflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_4
	setflag FLAG_TEMP_5
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_7
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_9
	setflag FLAG_TEMP_A
	setflag FLAG_TEMP_B
	return

GIANTMOLE_STATE_3:
	removeobject 1
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	removeobject 7
	removeobject 8
	removeobject 9
	removeobject 10
	removeobject 11
	setflag FLAG_TEMP_1
	clearflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_4
	setflag FLAG_TEMP_5
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_7
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_9
	setflag FLAG_TEMP_A
	setflag FLAG_TEMP_B
	return

GIANTMOLE_STATE_4:
	removeobject 1
	removeobject 2
	removeobject 4
	removeobject 5
	removeobject 6
	removeobject 7
	removeobject 8
	removeobject 9
	removeobject 10
	removeobject 11
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	clearflag FLAG_TEMP_3
	setflag FLAG_TEMP_4
	setflag FLAG_TEMP_5
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_7
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_9
	setflag FLAG_TEMP_A
	setflag FLAG_TEMP_B
	return

GIANTMOLE_STATE_5:
	removeobject 1
	removeobject 2
	removeobject 3
	removeobject 5
	removeobject 6
	removeobject 7
	removeobject 8
	removeobject 9
	removeobject 10
	removeobject 11
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	clearflag FLAG_TEMP_4
	setflag FLAG_TEMP_5
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_7
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_9
	setflag FLAG_TEMP_A
	setflag FLAG_TEMP_B
	return

GIANTMOLE_STATE_6:
	removeobject 1
	removeobject 2
	removeobject 3
	removeobject 4
	removeobject 6
	removeobject 7
	removeobject 8
	removeobject 9
	removeobject 10
	removeobject 11
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_4
	clearflag FLAG_TEMP_5
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_7
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_9
	setflag FLAG_TEMP_A
	setflag FLAG_TEMP_B
	return

GIANTMOLE_STATE_7:
	removeobject 1
	removeobject 2
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 7
	removeobject 8
	removeobject 9
	removeobject 10
	removeobject 11
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_4
	setflag FLAG_TEMP_5
	clearflag FLAG_TEMP_6
	setflag FLAG_TEMP_7
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_9
	setflag FLAG_TEMP_A
	setflag FLAG_TEMP_B
	return

GIANTMOLE_STATE_8:
	removeobject 1
	removeobject 2
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	removeobject 8
	removeobject 9
	removeobject 10
	removeobject 11
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_4
	setflag FLAG_TEMP_5
	setflag FLAG_TEMP_6
	clearflag FLAG_TEMP_7
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_9
	setflag FLAG_TEMP_A
	setflag FLAG_TEMP_B
	return

GIANTMOLE_STATE_9:
	removeobject 1
	removeobject 2
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	removeobject 7
	removeobject 9
	removeobject 10
	removeobject 11
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_4
	setflag FLAG_TEMP_5
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_7
	clearflag FLAG_TEMP_8
	setflag FLAG_TEMP_9
	setflag FLAG_TEMP_A
	setflag FLAG_TEMP_B
	return

GIANTMOLE_STATE_10:
	removeobject 1
	removeobject 2
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	removeobject 7
	removeobject 8
	removeobject 10
	removeobject 11
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_4
	setflag FLAG_TEMP_5
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_7
	setflag FLAG_TEMP_8
	clearflag FLAG_TEMP_9
	setflag FLAG_TEMP_A
	setflag FLAG_TEMP_B
	return

GIANTMOLE_STATE_11:
	removeobject 1
	removeobject 2
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	removeobject 7
	removeobject 8
	removeobject 9
	removeobject 11
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_4
	setflag FLAG_TEMP_5
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_7
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_9
	clearflag FLAG_TEMP_A
	setflag FLAG_TEMP_B
	return

GIANTMOLE_STATE_12:
	removeobject 1
	removeobject 2
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	removeobject 7
	removeobject 8
	removeobject 9
	removeobject 10
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_4
	setflag FLAG_TEMP_5
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_7
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_9
	setflag FLAG_TEMP_A
	clearflag FLAG_TEMP_B
	return

GIANTMOLE_STATE_13:
	removeobject 1
	removeobject 2
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	removeobject 7
	removeobject 8
	removeobject 9
	removeobject 10
	removeobject 11
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_4
	setflag FLAG_TEMP_5
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_7
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_9
	setflag FLAG_TEMP_A
	setflag FLAG_TEMP_B
	return


NPC_GIANT_MOLE::
	lock
	fadescreen FADE_TO_BLACK
	msgbox NPC_GIANT_MOLE_Text_0
	switch VAR_GIANTMOLE_STATE
	case 0, NPC_GIANT_MOLE_3
	case 1, NPC_GIANT_MOLE_4
	case 2, NPC_GIANT_MOLE_5
	case 3, NPC_GIANT_MOLE_6
	case 4, NPC_GIANT_MOLE_7
	case 5, NPC_GIANT_MOLE_8
	case 6, NPC_GIANT_MOLE_9
	case 7, NPC_GIANT_MOLE_10
	case 8, NPC_GIANT_MOLE_11
	case 9, NPC_GIANT_MOLE_12
NPC_GIANT_MOLE_1:
	closemessage
	call GIANTMOLE_STATE
	fadescreen FADE_FROM_BLACK
	release
	end

NPC_GIANT_MOLE_3:
	setvar VAR_GIANTMOLE_STATE, 1
	goto NPC_GIANT_MOLE_1

NPC_GIANT_MOLE_4:
	setvar VAR_GIANTMOLE_STATE, 2
	goto NPC_GIANT_MOLE_1

NPC_GIANT_MOLE_5:
	setvar VAR_GIANTMOLE_STATE, 3
	goto NPC_GIANT_MOLE_1

NPC_GIANT_MOLE_6:
	setvar VAR_GIANTMOLE_STATE, 4
	goto NPC_GIANT_MOLE_1

NPC_GIANT_MOLE_7:
	setvar VAR_GIANTMOLE_STATE, 5
	goto NPC_GIANT_MOLE_1

NPC_GIANT_MOLE_8:
	setvar VAR_GIANTMOLE_STATE, 6
	goto NPC_GIANT_MOLE_1

NPC_GIANT_MOLE_9:
	setvar VAR_GIANTMOLE_STATE, 7
	goto NPC_GIANT_MOLE_1

NPC_GIANT_MOLE_10:
	setvar VAR_GIANTMOLE_STATE, 8
	goto NPC_GIANT_MOLE_1

NPC_GIANT_MOLE_11:
	setvar VAR_GIANTMOLE_STATE, 9
	goto NPC_GIANT_MOLE_1

NPC_GIANT_MOLE_12:
	setvar VAR_GIANTMOLE_STATE, 10
	goto NPC_GIANT_MOLE_1


ENCOUNTER_GIANT_MOLE::
	lock
	namebox ENCOUNTER_GIANT_MOLE_Text_0
	playmoncry SPECIES_EKANS, 0
	msgbox ENCOUNTER_GIANT_MOLE_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_GIANT_MOLE, 30, ITEM_NONE
	special BattleSetup_StartLegendaryBattle
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_GIANT_MOLE_2
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_GIANT_MOLE_3
	end

ENCOUNTER_GIANT_MOLE_2:
	fadescreen FADE_TO_BLACK
	setvar VAR_GIANTMOLE_STATE, 0
	setflag FLAG_TEMP_B
	removeobject 11
	fadescreen FADE_FROM_BLACK
	closemessage
	end

ENCOUNTER_GIANT_MOLE_3:
	fadescreen FADE_TO_BLACK
	setvar VAR_GIANTMOLE_STATE, 11
	setflag FLAG_TEMP_B
	removeobject 11
	fadescreen FADE_FROM_BLACK
	closemessage
	end


NPC_GIANT_MOLE_Text_0:
	.string "As you approach the Giant Mole, it digs\n"
	.string "away…$"

ENCOUNTER_GIANT_MOLE_Text_0:
	.string "GIANT MOLE$"

ENCOUNTER_GIANT_MOLE_Text_1:
	.string "SNEEEEEE!$"
