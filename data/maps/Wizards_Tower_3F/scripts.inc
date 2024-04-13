Wizards_Tower_3F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Wizards_Tower_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Wizards_Tower_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto LESSERDEMON_STATE
	return


LESSERDEMON_STATE::
	switch VAR_POKESCAPE_LESSERDEMON_STATE
	case 0, LESSERDEMON_STATE_2
	case 1, LESSERDEMON_STATE_3
	case 2, LESSERDEMON_STATE_4
	return

LESSERDEMON_STATE_2:
	end

LESSERDEMON_STATE_3:
	clearflag FLAG_TEMP_A
	addobject 1
	end

LESSERDEMON_STATE_4:
	setflag FLAG_TEMP_A
	removeobject 1
	end


NPC_WIZARDSTOWER_LESSERDEMON_GATE::
	compare VAR_POKESCAPE_LESSERDEMON_STATE, 0
	goto_if_eq NPC_WIZARDSTOWER_LESSERDEMON_GATE_1
	msgbox NPC_WIZARDSTOWER_LESSERDEMON_GATE_Text_3
	closemessage
	release
	end

NPC_WIZARDSTOWER_LESSERDEMON_GATE_1:
	lock
	msgbox NPC_WIZARDSTOWER_LESSERDEMON_GATE_Text_0
	namebox NPC_WIZARDSTOWER_LESSERDEMON_GATE_Text_1
	playmoncry SPECIES_EKANS, 0
	msgbox NPC_WIZARDSTOWER_LESSERDEMON_GATE_Text_2
	waitmoncry
	hidenamebox
	closemessage
	release
	end


ENCOUNTER_LESSERDEMON::
	lock
	faceplayer
	namebox NPC_WIZARDSTOWER_LESSERDEMON_GATE_Text_1
	playmoncry SPECIES_DEMON_LESSER_OSRS_FORM, 0
	msgbox ENCOUNTER_LESSERDEMON_Text_0
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_DEMON_LESSER_OSRS_FORM, 15, ITEM_NONE
	dowildbattle
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_LESSERDEMON_2
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_LESSERDEMON_3
	end

ENCOUNTER_LESSERDEMON_2:
	fadescreen FADE_TO_BLACK
	setvar VAR_POKESCAPE_LESSERDEMON_STATE, 1
	setflag FLAG_TEMP_A
	removeobject 1
	fadescreen FADE_FROM_BLACK
	closemessage
	end

ENCOUNTER_LESSERDEMON_3:
	fadescreen FADE_TO_BLACK
	setvar VAR_POKESCAPE_LESSERDEMON_STATE, 2
	setflag FLAG_TEMP_A
	removeobject 1
	fadescreen FADE_FROM_BLACK
	closemessage
	end


NPC_WIZARDSTOWER_LESSERDEMON_GATE_Text_0:
	.string "As you approach the gate the Demon\n"
	.string "attacks you!$"

NPC_WIZARDSTOWER_LESSERDEMON_GATE_Text_1:
	.string "Lesser Demon$"

NPC_WIZARDSTOWER_LESSERDEMON_GATE_Text_2:
	.string "RAOUGH!$"

NPC_WIZARDSTOWER_LESSERDEMON_GATE_Text_3:
	.string "As you approach the gate…\p"
	.string "{PAUSE 15}…{PAUSE 15}…{PAUSE 15}…\p"
	.string "Nothing interesting happens…$"

ENCOUNTER_LESSERDEMON_Text_0:
	.string "GWARAKU!$"
