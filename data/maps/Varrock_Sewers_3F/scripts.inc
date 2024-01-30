Varrock_Sewers_3F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Varrock_Sewers_3F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Varrock_Sewers_3F_MapScripts_MAP_SCRIPT_ON_LOAD:
	call Randomise_VarrockSewer_3F_Spawns
	call VARROCK_SEWERS_3F_STATE
	return


VARROCK_SEWERS_3F_STATE::
	goto_if_set FLAG_DG_DOOR_VARROCK_SEWERS, VARROCK_SEWERS_3F_STATE_2
VARROCK_SEWERS_3F_STATE_1:
	return

VARROCK_SEWERS_3F_STATE_2:
	setmetatile 2, 25, 121, 0
	special DrawWholeMapView
	goto VARROCK_SEWERS_3F_STATE_1


Randomise_VarrockSewer_3F_Spawns::
	random 2
	compare VAR_RESULT, 1
	goto_if_eq Randomise_VarrockSewer_3F_Spawns_2
Randomise_VarrockSewer_3F_Spawns_1:
	random 2
	compare VAR_RESULT, 1
	goto_if_eq Randomise_VarrockSewer_3F_Spawns_5
Randomise_VarrockSewer_3F_Spawns_4:
	random 2
	compare VAR_RESULT, 1
	goto_if_eq Randomise_VarrockSewer_3F_Spawns_8
Randomise_VarrockSewer_3F_Spawns_7:
	random 2
	compare VAR_RESULT, 1
	goto_if_eq Randomise_VarrockSewer_3F_Spawns_11
Randomise_VarrockSewer_3F_Spawns_10:
	random 2
	compare VAR_RESULT, 1
	goto_if_eq Randomise_VarrockSewer_3F_Spawns_14
Randomise_VarrockSewer_3F_Spawns_13:
	random 2
	compare VAR_RESULT, 1
	goto_if_eq Randomise_VarrockSewer_3F_Spawns_17
Randomise_VarrockSewer_3F_Spawns_16:
	special DrawWholeMapView
	return

Randomise_VarrockSewer_3F_Spawns_2:
	setmetatile 34, 1, 726, 1
	setvar VAR_TEMP_0, 1
	goto Randomise_VarrockSewer_3F_Spawns_1

Randomise_VarrockSewer_3F_Spawns_5:
	setmetatile 31, 1, 726, 1
	setvar VAR_TEMP_1, 1
	goto Randomise_VarrockSewer_3F_Spawns_4

Randomise_VarrockSewer_3F_Spawns_8:
	setmetatile 38, 17, 726, 1
	setvar VAR_TEMP_2, 1
	goto Randomise_VarrockSewer_3F_Spawns_7

Randomise_VarrockSewer_3F_Spawns_11:
	setmetatile 23, 15, 726, 1
	setvar VAR_TEMP_3, 1
	goto Randomise_VarrockSewer_3F_Spawns_10

Randomise_VarrockSewer_3F_Spawns_14:
	setmetatile 19, 15, 726, 1
	setvar VAR_TEMP_4, 1
	goto Randomise_VarrockSewer_3F_Spawns_13

Randomise_VarrockSewer_3F_Spawns_17:
	setmetatile 24, 24, 726, 1
	setvar VAR_TEMP_5, 1
	goto Randomise_VarrockSewer_3F_Spawns_16


DUNGEONEERING_DOOR_VarrockSewers::
	goto_if_unset FLAG_DG_DOOR_VARROCK_SEWERS, DUNGEONEERING_DOOR_VarrockSewers_2
	msgbox DUNGEONEERING_DOOR_VarrockSewers_Text_2
	closemessage
DUNGEONEERING_DOOR_VarrockSewers_1:
	release
	end

DUNGEONEERING_DOOR_VarrockSewers_2:
	msgbox DUNGEONEERING_DOOR_VarrockSewers_Text_0, MSGBOX_YESNO
	closemessage
	compare VAR_RESULT, 0
	goto_if_ne DUNGEONEERING_DOOR_VarrockSewers_5
	goto DUNGEONEERING_DOOR_VarrockSewers_1

DUNGEONEERING_DOOR_VarrockSewers_5:
	playse SE_SWITCH
	waitse
	delay 30
	setmetatile 2, 25, 121, 0
	special DrawWholeMapView
	playse SE_ICE_BREAK
	msgbox DUNGEONEERING_DOOR_VarrockSewers_Text_1
	closemessage
	setflag FLAG_DG_DOOR_VARROCK_SEWERS
	goto DUNGEONEERING_DOOR_VarrockSewers_1


SCURRIUS_TRIGGER::
	lock
	compare VAR_SCURRIUS, 4
	goto_if_eq SCURRIUS_TRIGGER_2
	msgbox SCURRIUS_TRIGGER_Text_1
	closemessage
	delay 1
	playmoncry SPECIES_URSARING, 0
	msgbox SCURRIUS_TRIGGER_Text_2
	waitmoncry
	closemessage
	delay 1
	msgbox SCURRIUS_TRIGGER_Text_3
	checkitem ITEM_SCURRIUS_CHEESE, 1
	compare VAR_RESULT, 0
	goto_if_ne SCURRIUS_TRIGGER_5
	msgbox SCURRIUS_TRIGGER_Text_7
SCURRIUS_TRIGGER_4:
	closemessage
	release
	end

SCURRIUS_TRIGGER_2:
	msgbox SCURRIUS_TRIGGER_Text_0
	closemessage
	release
	end

SCURRIUS_TRIGGER_5:
	msgbox SCURRIUS_TRIGGER_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne SCURRIUS_TRIGGER_8
	goto SCURRIUS_TRIGGER_4

SCURRIUS_TRIGGER_8:
	compare VAR_SCURRIUS, 1
	goto_if_eq SCURRIUS_TRIGGER_10
	compare VAR_SCURRIUS, 2
	goto_if_eq SCURRIUS_TRIGGER_10
	compare VAR_SCURRIUS, 3
	goto_if_eq SCURRIUS_TRIGGER_10
	msgbox SCURRIUS_TRIGGER_Text_6
	goto SCURRIUS_TRIGGER_4

SCURRIUS_TRIGGER_10:
	msgbox SCURRIUS_TRIGGER_Text_5
	goto ENCOUNTER_SCURRIUS
	goto SCURRIUS_TRIGGER_4


SCURRIUS_CAULDRON::
	msgbox SCURRIUS_CAULDRON_Text_0
	compare VAR_SCURRIUS, 1
	goto_if_eq SCURRIUS_CAULDRON_2
	compare VAR_SCURRIUS, 2
	goto_if_eq SCURRIUS_CAULDRON_2
	compare VAR_SCURRIUS, 3
	goto_if_eq SCURRIUS_CAULDRON_2
	checkitem ITEM_SCURRIUS_CHEESE, 1
	compare VAR_RESULT, 0
	goto_if_ne SCURRIUS_CAULDRON_9
SCURRIUS_CAULDRON_8:
	closemessage
	release
	end

SCURRIUS_CAULDRON_2:
	closemessage
	release
	end

SCURRIUS_CAULDRON_9:
	msgbox SCURRIUS_CAULDRON_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne SCURRIUS_CAULDRON_11
	goto SCURRIUS_CAULDRON_8

SCURRIUS_CAULDRON_11:
	msgbox SCURRIUS_CAULDRON_Text_2
	multichoicedefault 1, 0, MULTI_SCURRIUS, 0, 0
	switch VAR_RESULT
	case 0, SCURRIUS_CAULDRON_15
	case 1, SCURRIUS_CAULDRON_16
	case 2, SCURRIUS_CAULDRON_17
SCURRIUS_CAULDRON_13:
	msgbox SCURRIUS_CAULDRON_Text_6
	goto SCURRIUS_CAULDRON_8

SCURRIUS_CAULDRON_15:
	msgbox SCURRIUS_CAULDRON_Text_3
	setvar VAR_SCURRIUS, 1
	goto SCURRIUS_CAULDRON_13

SCURRIUS_CAULDRON_16:
	msgbox SCURRIUS_CAULDRON_Text_4
	setvar VAR_SCURRIUS, 2
	goto SCURRIUS_CAULDRON_13

SCURRIUS_CAULDRON_17:
	msgbox SCURRIUS_CAULDRON_Text_5
	setvar VAR_SCURRIUS, 3
	goto SCURRIUS_CAULDRON_13


ENCOUNTER_SCURRIUS::
	lock
	namebox ENCOUNTER_SCURRIUS_Text_0
	playmoncry SPECIES_URSARING, 0
	msgbox SCURRIUS_TRIGGER_Text_2
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	compare VAR_SCURRIUS, 1
	goto_if_eq ENCOUNTER_SCURRIUS_2
	compare VAR_SCURRIUS, 2
	goto_if_eq ENCOUNTER_SCURRIUS_3
	compare VAR_SCURRIUS, 3
	goto_if_eq ENCOUNTER_SCURRIUS_4
ENCOUNTER_SCURRIUS_1:
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_SCURRIUS_10
	case B_OUTCOME_CAUGHT, ENCOUNTER_SCURRIUS_11
	case B_OUTCOME_RAN, ENCOUNTER_SCURRIUS_12
	case B_OUTCOME_PLAYER_TELEPORTED, ENCOUNTER_SCURRIUS_13
ENCOUNTER_SCURRIUS_8:
	release
	end

ENCOUNTER_SCURRIUS_2:
	setwildbattle SPECIES_SCURRIUS_MELEE_FORM, 30, ITEM_NONE
	goto ENCOUNTER_SCURRIUS_1

ENCOUNTER_SCURRIUS_3:
	setwildbattle SPECIES_SCURRIUS_RANGED_FORM, 30, ITEM_NONE
	goto ENCOUNTER_SCURRIUS_1

ENCOUNTER_SCURRIUS_4:
	setwildbattle SPECIES_SCURRIUS_MAGIC_FORM, 30, ITEM_NONE
	goto ENCOUNTER_SCURRIUS_1

ENCOUNTER_SCURRIUS_10:
	fadescreen FADE_TO_BLACK
	removeitem ITEM_SCURRIUS_CHEESE, 1
	setvar VAR_SCURRIUS, 4
	msgbox ENCOUNTER_SCURRIUS_Text_1
	closemessage
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_SCURRIUS_8

ENCOUNTER_SCURRIUS_11:
	fadescreen FADE_TO_BLACK
	removeitem ITEM_SCURRIUS_CHEESE, 1
	setvar VAR_SCURRIUS, 4
	msgbox ENCOUNTER_SCURRIUS_Text_1
	closemessage
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_SCURRIUS_8

ENCOUNTER_SCURRIUS_12:
	msgbox ENCOUNTER_SCURRIUS_Text_2
	closemessage
	goto ENCOUNTER_SCURRIUS_8

ENCOUNTER_SCURRIUS_13:
	msgbox ENCOUNTER_SCURRIUS_Text_3
	closemessage
	goto ENCOUNTER_SCURRIUS_8


DUNGEONEERING_DOOR_VarrockSewers_Text_0:
	.string "It appears to be a mysterious door.\p"
	.string "Would you like to try and pry it open?$"

DUNGEONEERING_DOOR_VarrockSewers_Text_1:
	.string "The door opens.$"

DUNGEONEERING_DOOR_VarrockSewers_Text_2:
	.string "The door is already open.$"

SCURRIUS_TRIGGER_Text_0:
	.string "You hear many little rat sounds coming\n"
	.string "from within.$"

SCURRIUS_TRIGGER_Text_1:
	.string "As you approach the wall you hear a loud\n"
	.string "growl.$"

SCURRIUS_TRIGGER_Text_2:
	.string "SKREAWROOWL!$"

SCURRIUS_TRIGGER_Text_3:
	.string "The monster seems to be hungry.$"

SCURRIUS_TRIGGER_Text_4:
	.string "Would you like to give it the cheese in\n"
	.string "your backpack?$"

SCURRIUS_TRIGGER_Text_5:
	.string "The stench of the cheese makes the\n"
	.string "Monster feral!\p"
	.string "It goobles up the cheese then attacks!$"

SCURRIUS_TRIGGER_Text_6:
	.string "The Monster is displeased by the\n"
	.string "cheese and turns away.\p"
	.string "Maybe there is a way to make it smell\n"
	.string "more appealing.$"

SCURRIUS_TRIGGER_Text_7:
	.string "Maybe it wants some cheese.$"

SCURRIUS_CAULDRON_Text_0:
	.string "Smells good.\p"
	.string "There are a bunch of ingredients\n"
	.string "scattered around the cauldron.$"

SCURRIUS_CAULDRON_Text_1:
	.string "The cheese in your backpack reacts to\n"
	.string "the cauldron, it wants to be dunked in.\p"
	.string "Would you like to dunk the cheese?$"

SCURRIUS_CAULDRON_Text_2:
	.string "The cheese happily swims around in the\n"
	.string "soup.\p"
	.string "But it seems to want something grater.\p"
	.string "You notice the ingredients next to the\n"
	.string "cauldron and decide to put one in.\p"
	.string "Which ingredient do you choose?$"

SCURRIUS_CAULDRON_Text_3:
	.string "You sprinkle the Cave Fungus into the\n"
	.string "cauldron.$"

SCURRIUS_CAULDRON_Text_4:
	.string "As you sprinkle the Glowing Moss into\n"
	.string "the cauldron a Moss Giant stares at\l"
	.string "you from across the room.$"

SCURRIUS_CAULDRON_Text_5:
	.string "You pour the smelly Brown Water into\n"
	.string "the cauldron.$"

SCURRIUS_CAULDRON_Text_6:
	.string "The cheese is looking a bit blue.\p"
	.string "You scoop the cheese out of the\n"
	.string "cauldron, it smells foul!\p"
	.string "You put it away in your backpack.$"

ENCOUNTER_SCURRIUS_Text_0:
	.string "SCURRIUS$"

ENCOUNTER_SCURRIUS_Text_1:
	.string "You feel the catacombs shake and\n"
	.string "tremble as the Dark Totem shatters\l"
	.string "into pieces.\p"
	.string "The air feels renewed.$"

ENCOUNTER_SCURRIUS_Text_2:
	.string "Scurrius is displeased.$"

ENCOUNTER_SCURRIUS_Text_3:
	.string "Scurrius is in disbelief you just\n"
	.string "teleported away from battle.$"
