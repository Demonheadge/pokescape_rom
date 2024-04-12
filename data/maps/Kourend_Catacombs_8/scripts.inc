Kourend_Catacombs_8_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Kourend_Catacombs_8_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Kourend_Catacombs_8_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Kourend_Catacombs_8_MapScripts_MAP_SCRIPT_ON_LOAD:
	call SKOTIZO_CHECK
	return

Kourend_Catacombs_8_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_SLAYER_COMPLETE, 1, SLAYER_TASK_COMPLETE
	.2byte 0


SKOTIZO_CHECK::
	checkitem ITEM_DARK_TOTEM, 1
	compare VAR_RESULT, 0
	goto_if_ne SKOTIZO_CHECK_2
SKOTIZO_CHECK_1:
	compare VAR_TEMP_E, 5
	goto_if_eq SKOTIZO_CHECK_4
	return

SKOTIZO_CHECK_2:
	setflag FLAG_TEMP_A
	removeobject 1
	goto SKOTIZO_CHECK_1

SKOTIZO_CHECK_4:
	clearflag FLAG_TEMP_A
	addobject 1
	setmetatile 9, 4, 673, 0
	setmetatile 10, 4, 673, 0
	setmetatile 11, 4, 673, 0
	setmetatile 9, 5, 673, 0
	setmetatile 10, 5, 673, 0
	setmetatile 11, 5, 673, 0
	special DrawWholeMapView
	return


SKOTIZO_TRIGGER::
	compare VAR_TEMP_E, 5
	goto_if_eq SKOTIZO_TRIGGER_2
	checkitem ITEM_DARK_TOTEM, 1
	compare VAR_RESULT, 0
	goto_if_ne SKOTIZO_TRIGGER_5
	release
	end

SKOTIZO_TRIGGER_2:
	release
	end

SKOTIZO_TRIGGER_5:
	lock
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_UP
	waitmovement 0
	msgbox SKOTIZO_TRIGGER_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne SKOTIZO_TRIGGER_8
SKOTIZO_TRIGGER_7:
	closemessage
	release
	end

SKOTIZO_TRIGGER_8:
	msgbox SKOTIZO_TRIGGER_Text_1
	closemessage
	delay 30
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 4
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 60
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 4
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 60
	fadescreen FADE_TO_WHITE
	clearflag FLAG_TEMP_A
	addobject 1
	setmetatile 9, 4, 673, 0
	setmetatile 10, 4, 673, 0
	setmetatile 11, 4, 673, 0
	setmetatile 9, 5, 673, 0
	setmetatile 10, 5, 673, 0
	setmetatile 11, 5, 673, 0
	special DrawWholeMapView
	playse SE_ICE_BREAK
	fadescreen FADE_FROM_WHITE
	msgbox SKOTIZO_TRIGGER_Text_2
	closemessage
	goto ENCOUNTER_SKOTIZO
	goto SKOTIZO_TRIGGER_7


ENCOUNTER_SKOTIZO::
	lock
	namebox ENCOUNTER_SKOTIZO_Text_0
	playmoncry SPECIES_URSARING, 0
	msgbox ENCOUNTER_SKOTIZO_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_SKOTIZO, 70, ITEM_NONE
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_SKOTIZO_3
	case B_OUTCOME_CAUGHT, ENCOUNTER_SKOTIZO_4
	case B_OUTCOME_RAN, ENCOUNTER_SKOTIZO_5
	case B_OUTCOME_PLAYER_TELEPORTED, ENCOUNTER_SKOTIZO_6
ENCOUNTER_SKOTIZO_1:
	release
	end

ENCOUNTER_SKOTIZO_3:
	fadescreen FADE_TO_BLACK
	removeitem ITEM_DARK_TOTEM, 1
	msgbox ENCOUNTER_SKOTIZO_Text_2
	closemessage
	setflag FLAG_TEMP_A
	removeobject 1
	fadescreen FADE_FROM_BLACK
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_KOUREND_SLAYER
	compare VAR_RESULT, 0
	goto_if_eq ENCOUNTER_SKOTIZO_8
ENCOUNTER_SKOTIZO_7:
	call RESET_KOUREND_CATACOMBS
	closemessage
	end

ENCOUNTER_SKOTIZO_4:
	fadescreen FADE_TO_BLACK
	removeitem ITEM_DARK_TOTEM, 1
	msgbox ENCOUNTER_SKOTIZO_Text_2
	closemessage
	setflag FLAG_TEMP_A
	removeobject 1
	fadescreen FADE_FROM_BLACK
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_KOUREND_SLAYER
	compare VAR_RESULT, 0
	goto_if_eq ENCOUNTER_SKOTIZO_11
ENCOUNTER_SKOTIZO_10:
	call RESET_KOUREND_CATACOMBS
	closemessage
	end

ENCOUNTER_SKOTIZO_5:
	msgbox ENCOUNTER_SKOTIZO_Text_3
	closemessage
	setvar VAR_TEMP_E, 5
	goto ENCOUNTER_SKOTIZO_1

ENCOUNTER_SKOTIZO_6:
	msgbox ENCOUNTER_SKOTIZO_Text_4
	closemessage
	setvar VAR_TEMP_E, 5
	goto ENCOUNTER_SKOTIZO_1

ENCOUNTER_SKOTIZO_8:
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_KOUREND_SLAYER
	goto ENCOUNTER_SKOTIZO_7

ENCOUNTER_SKOTIZO_11:
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_KOUREND_SLAYER
	goto ENCOUNTER_SKOTIZO_10


RESET_KOUREND_CATACOMBS::
	clearflag FLAG_ITEM_REPEATABLE_ITEM_1
	clearflag FLAG_ITEM_REPEATABLE_ITEM_2
	clearflag FLAG_ITEM_REPEATABLE_ITEM_3
	clearflag FLAG_ITEM_REPEATABLE_ITEM_4
	clearflag FLAG_ITEM_REPEATABLE_ITEM_5
	clearflag FLAG_ITEM_REPEATABLE_ITEM_6
	clearflag FLAG_ITEM_REPEATABLE_ITEM_7
	clearflag FLAG_ITEM_REPEATABLE_ITEM_8
	clearflag FLAG_ITEM_REPEATABLE_ITEM_9
	clearflag FLAG_ITEM_REPEATABLE_ITEM_10
	clearflag FLAG_HIDDEN_ITEM_TEMP_1
	clearflag FLAG_HIDDEN_ITEM_TEMP_2
	clearflag FLAG_HIDDEN_ITEM_TEMP_3
	clearflag FLAG_HIDDEN_ITEM_TEMP_4
	clearflag FLAG_HIDDEN_ITEM_TEMP_5
	clearflag FLAG_HIDDEN_ITEM_TEMP_6
	clearflag FLAG_HIDDEN_ITEM_TEMP_7
	clearflag FLAG_HIDDEN_ITEM_TEMP_8
	clearflag FLAG_HIDDEN_ITEM_TEMP_9
	clearflag FLAG_HIDDEN_ITEM_TEMP_10
	clearflag FLAG_HIDDEN_ITEM_TEMP_11
	clearflag FLAG_HIDDEN_ITEM_TEMP_12
	clearflag FLAG_HIDDEN_ITEM_TEMP_13
	clearflag FLAG_HIDDEN_ITEM_TEMP_14
	clearflag FLAG_HIDDEN_ITEM_TEMP_15
	clearflag FLAG_HIDDEN_ITEM_TEMP_16
	clearflag FLAG_HIDDEN_ITEM_TEMP_17
	clearflag FLAG_HIDDEN_ITEM_TEMP_18
	clearflag FLAG_HIDDEN_ITEM_TEMP_19
	clearflag FLAG_HIDDEN_ITEM_TEMP_20
	return


ENCOUNTER_ABYSSAL_DEMON::
	lock
	faceplayer
	namebox ENCOUNTER_ABYSSAL_DEMON_Text_0
	playmoncry SPECIES_URSARING, 0
	msgbox ENCOUNTER_ABYSSAL_DEMON_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	specialvar VAR_RESULT, GetCurrentMap
	compare VAR_RESULT, MAP_ABYSSAL_REALM_1
	goto_if_eq ENCOUNTER_ABYSSAL_DEMON_2
	setwildbattle SPECIES_ABYSSAL_DEMON_FORM, 50, ITEM_NONE
ENCOUNTER_ABYSSAL_DEMON_1:
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_ABYSSAL_DEMON_7
	case B_OUTCOME_CAUGHT, ENCOUNTER_ABYSSAL_DEMON_8
ENCOUNTER_ABYSSAL_DEMON_5:
	release
	end

ENCOUNTER_ABYSSAL_DEMON_2:
	setwildbattle SPECIES_ABYSSAL_DEMON_FORM, 25, ITEM_NONE
	goto ENCOUNTER_ABYSSAL_DEMON_1

ENCOUNTER_ABYSSAL_DEMON_7:
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_ABYSSAL_DEMON_5

ENCOUNTER_ABYSSAL_DEMON_8:
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_ABYSSAL_DEMON_5


ENCOUNTER_SLIME::
	lock
	faceplayer
	namebox ENCOUNTER_SLIME_Text_0
	playmoncry SPECIES_URSARING, 0
	msgbox ENCOUNTER_SLIME_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	specialvar VAR_RESULT, GetCurrentMap
	compare VAR_RESULT, MAP_KOUREND_CATACOMBS_4
	goto_if_eq ENCOUNTER_SLIME_2
	compare VAR_RESULT, MAP_KOUREND_CATACOMBS_3
	goto_if_eq ENCOUNTER_SLIME_3
	setwildbattle SPECIES_CAVE_SLIME, 20, ITEM_NONE
ENCOUNTER_SLIME_1:
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_SLIME_9
	case B_OUTCOME_CAUGHT, ENCOUNTER_SLIME_10
ENCOUNTER_SLIME_7:
	release
	end

ENCOUNTER_SLIME_2:
	setwildbattle SPECIES_JELLY_WARPED_FORM, 50, ITEM_NONE
	goto ENCOUNTER_SLIME_1

ENCOUNTER_SLIME_3:
	setwildbattle SPECIES_JELLY_NORMAL_FORM, 50, ITEM_NONE
	goto ENCOUNTER_SLIME_1

ENCOUNTER_SLIME_9:
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_SLIME_7

ENCOUNTER_SLIME_10:
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_SLIME_7


ENCOUNTER_ROCKCRAB::
	lock
	namebox ENCOUNTER_ROCKCRAB_Text_0
	playmoncry SPECIES_URSARING, 0
	msgbox ENCOUNTER_ROCKCRAB_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	specialvar VAR_RESULT, GetCurrentMap
	compare VAR_RESULT, MAP_KOUREND_CATACOMBS_3
	goto_if_eq ENCOUNTER_ROCKCRAB_2
	compare VAR_RESULT, MAP_KOUREND_CATACOMBS_4
	goto_if_eq ENCOUNTER_ROCKCRAB_2
	setwildbattle SPECIES_ROCK_CRAB_NORMAL_FORM, 20, ITEM_NONE
ENCOUNTER_ROCKCRAB_1:
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_ROCKCRAB_9
	case B_OUTCOME_CAUGHT, ENCOUNTER_ROCKCRAB_10
ENCOUNTER_ROCKCRAB_7:
	release
	end

ENCOUNTER_ROCKCRAB_2:
	setwildbattle SPECIES_ROCK_CRAB_GIANT_SAND_FORM, 50, ITEM_NONE
	goto ENCOUNTER_ROCKCRAB_1

ENCOUNTER_ROCKCRAB_9:
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_ROCKCRAB_7

ENCOUNTER_ROCKCRAB_10:
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_ROCKCRAB_7


ENCOUNTER_DRAGON_BLACK::
	lock
	namebox ENCOUNTER_DRAGON_BLACK_Text_0
	playmoncry SPECIES_URSARING, 0
	msgbox ENCOUNTER_DRAGON_BLACK_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_DRAGON_BLACK_FORM, 50, ITEM_NONE
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_DRAGON_BLACK_3
	case B_OUTCOME_CAUGHT, ENCOUNTER_DRAGON_BLACK_4
ENCOUNTER_DRAGON_BLACK_1:
	release
	end

ENCOUNTER_DRAGON_BLACK_3:
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_DRAGON_BLACK_1

ENCOUNTER_DRAGON_BLACK_4:
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_DRAGON_BLACK_1


ENCOUNTER_DRAGON_RED::
	lock
	namebox ENCOUNTER_DRAGON_BLACK_Text_0
	playmoncry SPECIES_URSARING, 0
	msgbox ENCOUNTER_DRAGON_BLACK_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_DRAGON_RED_FORM, 50, ITEM_NONE
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_DRAGON_RED_3
	case B_OUTCOME_CAUGHT, ENCOUNTER_DRAGON_RED_4
ENCOUNTER_DRAGON_RED_1:
	release
	end

ENCOUNTER_DRAGON_RED_3:
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_DRAGON_RED_1

ENCOUNTER_DRAGON_RED_4:
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_DRAGON_RED_1


ENCOUNTER_DRAGON_BLUE::
	lock
	namebox ENCOUNTER_DRAGON_BLACK_Text_0
	playmoncry SPECIES_URSARING, 0
	msgbox ENCOUNTER_DRAGON_BLACK_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_DRAGON_BLUE_FORM, 50, ITEM_NONE
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_DRAGON_BLUE_3
	case B_OUTCOME_CAUGHT, ENCOUNTER_DRAGON_BLUE_4
ENCOUNTER_DRAGON_BLUE_1:
	release
	end

ENCOUNTER_DRAGON_BLUE_3:
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_DRAGON_BLUE_1

ENCOUNTER_DRAGON_BLUE_4:
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_DRAGON_BLUE_1


ENCOUNTER_DRAGON_GREEN::
	lock
	namebox ENCOUNTER_DRAGON_BLACK_Text_0
	playmoncry SPECIES_URSARING, 0
	msgbox ENCOUNTER_DRAGON_BLACK_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_DRAGON_GREEN_FORM, 50, ITEM_NONE
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_DRAGON_GREEN_3
	case B_OUTCOME_CAUGHT, ENCOUNTER_DRAGON_GREEN_4
ENCOUNTER_DRAGON_GREEN_1:
	release
	end

ENCOUNTER_DRAGON_GREEN_3:
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_DRAGON_GREEN_1

ENCOUNTER_DRAGON_GREEN_4:
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_DRAGON_GREEN_1


ENCOUNTER_BASILISK::
	lock
	namebox ENCOUNTER_BASILISK_Text_0
	playmoncry SPECIES_URSARING, 0
	msgbox ENCOUNTER_BASILISK_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_BASILISK_KNIGHT_FORM, 50, ITEM_NONE
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_BASILISK_3
	case B_OUTCOME_CAUGHT, ENCOUNTER_BASILISK_4
ENCOUNTER_BASILISK_1:
	release
	end

ENCOUNTER_BASILISK_3:
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_BASILISK_1

ENCOUNTER_BASILISK_4:
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_BASILISK_1


ENCOUNTER_GREATER_DEMON::
	lock
	faceplayer
	namebox ENCOUNTER_GREATER_DEMON_Text_0
	playmoncry SPECIES_EKANS, 0
	msgbox ENCOUNTER_GREATER_DEMON_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	specialvar VAR_RESULT, GetCurrentMap
	compare VAR_RESULT, MAP_KOUREND_CATACOMBS_2
	goto_if_eq ENCOUNTER_GREATER_DEMON_2
	compare VAR_RESULT, MAP_KOUREND_CATACOMBS_3
	goto_if_eq ENCOUNTER_GREATER_DEMON_3
	compare VAR_RESULT, MAP_KOUREND_CATACOMBS_7
	goto_if_eq ENCOUNTER_GREATER_DEMON_4
	setwildbattle SPECIES_DEMON_GREATER_OSRS_FORM, 25, ITEM_NONE
ENCOUNTER_GREATER_DEMON_1:
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_GREATER_DEMON_11
	case B_OUTCOME_CAUGHT, ENCOUNTER_GREATER_DEMON_12
ENCOUNTER_GREATER_DEMON_9:
	release
	end

ENCOUNTER_GREATER_DEMON_2:
	setwildbattle SPECIES_DEMON_GREATER_OSRS_FORM, 50, ITEM_NONE
	goto ENCOUNTER_GREATER_DEMON_1

ENCOUNTER_GREATER_DEMON_3:
	setwildbattle SPECIES_DEMON_GREATER_TONGUE_FORM, 50, ITEM_NONE
	goto ENCOUNTER_GREATER_DEMON_1

ENCOUNTER_GREATER_DEMON_4:
	setwildbattle SPECIES_DEMON_GREATER_BLACK_FORM, 50, ITEM_NONE
	goto ENCOUNTER_GREATER_DEMON_1

ENCOUNTER_GREATER_DEMON_11:
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_GREATER_DEMON_9

ENCOUNTER_GREATER_DEMON_12:
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_GREATER_DEMON_9


SKOTIZO_TRIGGER_Text_0:
	.string "The Dark Totem in your backpack starts\n"
	.string "to react to the crystal.\p"
	.string "Would you like to use it?$"

SKOTIZO_TRIGGER_Text_1:
	.string "The Totem and the crystal begin to\n"
	.string "shake.$"

SKOTIZO_TRIGGER_Text_2:
	.string "The crystal shatters and reveals a\n"
	.string "giant monster!$"

ENCOUNTER_SKOTIZO_Text_0:
	.string "SKOTIZO$"

ENCOUNTER_SKOTIZO_Text_1:
	.string "ROOOARR!$"

ENCOUNTER_SKOTIZO_Text_2:
	.string "You feel the catacombs shake and\n"
	.string "tremble as the Dark Totem shatters\l"
	.string "into pieces.\p"
	.string "The air feels renewed.$"

ENCOUNTER_SKOTIZO_Text_3:
	.string "Skotizo just stands there staring at\n"
	.string "you menacingly.$"

ENCOUNTER_SKOTIZO_Text_4:
	.string "Skotizo is in disbelief you just\n"
	.string "teleported away from battle.$"

ENCOUNTER_ABYSSAL_DEMON_Text_0:
	.string "ABYSSAL DEMON$"

ENCOUNTER_ABYSSAL_DEMON_Text_1:
	.string "WIZZZLE!$"

ENCOUNTER_SLIME_Text_0:
	.string "SLIME$"

ENCOUNTER_SLIME_Text_1:
	.string "GLOOOP! GOOP!$"

ENCOUNTER_ROCKCRAB_Text_0:
	.string "ROCK CRAB$"

ENCOUNTER_ROCKCRAB_Text_1:
	.string "SNIP SNIP!$"

ENCOUNTER_DRAGON_BLACK_Text_0:
	.string "DRAGON$"

ENCOUNTER_DRAGON_BLACK_Text_1:
	.string "RAWR!$"

ENCOUNTER_BASILISK_Text_0:
	.string "BASILISK$"

ENCOUNTER_BASILISK_Text_1:
	.string "KYARROOW!$"

ENCOUNTER_GREATER_DEMON_Text_0:
	.string "GREATER DEMON$"

ENCOUNTER_GREATER_DEMON_Text_1:
	.string "RAOUGH!$"
