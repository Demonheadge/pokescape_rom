Route26_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route26_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route26_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 3
	call WEATHER_CHANGE_ROUTE_SNOW
	call PENGUIN_EVENT
	return


ENCOUNTER_PENGUIN_BOX_ROUTE26::
	lock
	faceplayer
	namebox ENCOUNTER_PENGUIN_BOX_ROUTE26_Text_0
	playmoncry SPECIES_PENGUIN_DISGUISE_BOX_FORM, 0
	msgbox ENCOUNTER_PENGUIN_BOX_ROUTE26_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_PENGUIN_DISGUISE_BOX_FORM, 15, ITEM_NONE
	dowildbattle
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_PENGUIN_BOX_ROUTE26_2
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_PENGUIN_BOX_ROUTE26_2
ENCOUNTER_PENGUIN_BOX_ROUTE26_1:
	end

ENCOUNTER_PENGUIN_BOX_ROUTE26_2:
	fadescreen FADE_TO_BLACK
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_9
	removeobject 11
	removeobject 12
	savebgm MUS_DUMMY
	fadedefaultbgm
	fadescreen FADE_FROM_BLACK
	closemessage
	goto ENCOUNTER_PENGUIN_BOX_ROUTE26_1


SIGN_ROUTE26::
	lock
	msgbox SIGN_ROUTE26_Text_0
	release
	end


BATTLE_ROUTE26_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE26_TRAINER_1, BATTLE_ROUTE26_TRAINER_1_Text_0, BATTLE_ROUTE26_TRAINER_1_Text_1
	namebox BATTLE_ROUTE26_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE26_TRAINER_1_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE26_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE26_TRAINER_2, BATTLE_ROUTE26_TRAINER_2_Text_0, BATTLE_ROUTE26_TRAINER_2_Text_1
	namebox BATTLE_ROUTE26_TRAINER_2_Text_2
	msgbox BATTLE_ROUTE26_TRAINER_2_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE26_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE26_TRAINER_3, BATTLE_ROUTE26_TRAINER_3_Text_0, BATTLE_ROUTE26_TRAINER_3_Text_1
	namebox BATTLE_ROUTE26_TRAINER_3_Text_2
	msgbox BATTLE_ROUTE26_TRAINER_3_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE26_TRAINER_4::
	trainerbattle_single TRAINER_ROUTE26_TRAINER_4, BATTLE_ROUTE26_TRAINER_4_Text_0, BATTLE_ROUTE26_TRAINER_4_Text_1
	namebox BATTLE_ROUTE26_TRAINER_4_Text_2
	msgbox BATTLE_ROUTE26_TRAINER_4_Text_3
	hidenamebox
	release
	end


ROUTE26_SUPER_PRAYER_POTION::
	finditem ITEM_SUPER_PRAYER_POTION
	end


ROUTE26_ADAMANT_POUCH::
	finditem ITEM_ADAMANT_POUCH
	end


ENCOUNTER_PENGUIN_BOX_ROUTE26_Text_0:
	.string "Penguin$"

ENCOUNTER_PENGUIN_BOX_ROUTE26_Text_1:
	.string "Noot! Noot!$"

SIGN_ROUTE26_Text_0:
	.string "NORTH to ICE MOUNTAIN\p"
	.string "SOUTH to the DWARVEN MINES$"

BATTLE_ROUTE26_TRAINER_1_Text_0:
	.string "Hey!\p"
	.string "Too many humans have been coming here\n"
	.string "and disturbing us when are just trying\l"
	.string "to earn a living!\p"
	.string "I won't let you do the same!$"

BATTLE_ROUTE26_TRAINER_1_Text_1:
	.string "Eek! You're strong.$"

BATTLE_ROUTE26_TRAINER_1_Text_2:
	.string "Omril$"

BATTLE_ROUTE26_TRAINER_1_Text_3:
	.string "Please don't disturb our village.$"

BATTLE_ROUTE26_TRAINER_2_Text_0:
	.string "Beware of landslides!\p"
	.string "But for now you should beware of me!$"

BATTLE_ROUTE26_TRAINER_2_Text_1:
	.string "You came crashing down on me like a\n"
	.string "landslide.$"

BATTLE_ROUTE26_TRAINER_2_Text_2:
	.string "Elkot$"

BATTLE_ROUTE26_TRAINER_2_Text_3:
	.string "We've had no many earthquakes and\n"
	.string "landslides lately we're not sure what\l"
	.string "are actually causing them.\p"
	.string "Maybe something deep within the mines?$"

BATTLE_ROUTE26_TRAINER_3_Text_0:
	.string "Out of my way, I am on a quest for the\n"
	.string "Guildmaster of the Champions Guild!$"

BATTLE_ROUTE26_TRAINER_3_Text_1:
	.string "Maybe I need a stronger team before\n"
	.string "trying to take on this quest…$"

BATTLE_ROUTE26_TRAINER_3_Text_2:
	.string "4TheL0re$"

BATTLE_ROUTE26_TRAINER_4_Text_0:
	.string "I was told that there are the ruins of\n"
	.string "an ancient civilisation buried around\l"
	.string "here.\p"
	.string "It will be my discovery, not yours!$"

BATTLE_ROUTE26_TRAINER_4_Text_1:
	.string "Oh.. Well maybe we could share the\n"
	.string "credit instead if we find it?$"

BATTLE_ROUTE26_TRAINER_4_Text_2:
	.string "Gerald$"

BATTLE_ROUTE26_TRAINER_4_Text_3:
	.string "Supposedly the cavern I am searching\n"
	.string "for was one the hall of the Imcando\l"
	.string "dwarves.\p"
	.string "I don't think there are any of them left\n"
	.string "alive now.$"
