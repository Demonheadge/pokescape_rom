Route47_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route47_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route47_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 6
	call PENGUIN_EVENT
	return


ENCOUNTER_PENGUIN_ROCK_ROUTE47::
	lock
	faceplayer
	namebox ENCOUNTER_PENGUIN_ROCK_ROUTE47_Text_0
	playmoncry SPECIES_PENGUIN_DISGUISE_ROCK_FORM, 0
	msgbox ENCOUNTER_PENGUIN_ROCK_ROUTE47_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_PENGUIN_DISGUISE_ROCK_FORM, 30, ITEM_NONE
	dowildbattle
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_PENGUIN_ROCK_ROUTE47_2
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_PENGUIN_ROCK_ROUTE47_2
ENCOUNTER_PENGUIN_ROCK_ROUTE47_1:
	end

ENCOUNTER_PENGUIN_ROCK_ROUTE47_2:
	fadescreen FADE_TO_BLACK
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_9
	removeobject 1
	removeobject 2
	savebgm MUS_DUMMY
	fadedefaultbgm
	fadescreen FADE_FROM_BLACK
	closemessage
	goto ENCOUNTER_PENGUIN_ROCK_ROUTE47_1


BATTLE_ROUTE_47_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE_47_TRAINER_1, BATTLE_ROUTE_47_TRAINER_1_Text_0, BATTLE_ROUTE_47_TRAINER_1_Text_1
	namebox BATTLE_ROUTE_47_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE_47_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE_47_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE_47_TRAINER_2, BATTLE_ROUTE_47_TRAINER_2_Text_0, BATTLE_ROUTE_47_TRAINER_2_Text_1
	namebox BATTLE_ROUTE_47_TRAINER_2_Text_2
	msgbox BATTLE_ROUTE_47_TRAINER_2_Text_1
	hidenamebox
	release
	end


ROUTE47_ARCHAEOLOGIST::
	faceplayer
	namebox ROUTE47_ARCHAEOLOGIST_Text_0
	msgbox ROUTE47_ARCHAEOLOGIST_Text_1
	closemessage
	hidenamebox
	release
	end


DUNGEON_SIGN::
	lock
	faceplayer
	msgbox DUNGEON_SIGN_Text_0
	release
	end


ENCOUNTER_PENGUIN_ROCK_ROUTE47_Text_0:
	.string "Penguin$"

ENCOUNTER_PENGUIN_ROCK_ROUTE47_Text_1:
	.string "Noot! Noot!$"

BATTLE_ROUTE_47_TRAINER_1_Text_0:
	.string "This place belongs to the dark wizards.\n"
	.string "Begone outsider!$"

BATTLE_ROUTE_47_TRAINER_1_Text_1:
	.string "Or just ignore my warning completely.\n"
	.string "Rude.$"

BATTLE_ROUTE_47_TRAINER_1_Text_2:
	.string "Magnus$"

BATTLE_ROUTE_47_TRAINER_2_Text_0:
	.string "Stop right there! Not another step\n"
	.string "adventurer$"

BATTLE_ROUTE_47_TRAINER_2_Text_1:
	.string "Why do you not listen to me? Begone!\n"
	.string "Shoo!$"

BATTLE_ROUTE_47_TRAINER_2_Text_2:
	.string "Mognus$"

ROUTE47_ARCHAEOLOGIST_Text_0:
	.string "Archaeologist$"

ROUTE47_ARCHAEOLOGIST_Text_1:
	.string "I heard that people were going crazy\n"
	.string "killing each other for spades out here.\p"
	.string "Surely that must mean there's some\n"
	.string "buried ruins or treasure out here,\l"
	.string "right?\p"
	.string "Why else would anybody want spades..?$"

DUNGEON_SIGN_Text_0:
	.string "With all the demonic symbols on the\n"
	.string "floor nearby, you decide not to go down\l"
	.string "the ladder.\p"
	.string "The last thing you need right now is to\n"
	.string "be turned into a blood sacrifice.$"
