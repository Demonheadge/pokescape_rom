Lumbridge_Castle_2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Lumbridge_Castle_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Lumbridge_Castle_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Lumbridge_Castle_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 1
	compare VAR_POKESCAPE_GAMEMODE_STATE, 1
	goto_if_eq Lumbridge_Castle_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Lumbridge_Castle_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	call OPENWORLD_STATE_HIDESTARTERS
	return

Lumbridge_Castle_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_A, 0, Lumbridge_Castle_Introduction
	.2byte 0


OPENWORLD_STATE_HIDESTARTERS::
	removeobject 5
	removeobject 6
	removeobject 7
	setflag FLAG_STARTER1
	setflag FLAG_STARTER2
	setflag FLAG_STARTER3
	return


Lumbridge_Bookshelf::
	lock
	msgbox Lumbridge_Bookshelf_Text_0
	release
	end


Lumbridge_Bookshelf_2::
	lock
	msgbox Lumbridge_Bookshelf_2_Text_0
	release
	end


Lumbridge_Castle_GUARD::
	lock
	faceplayer
	msgbox Lumbridge_Castle_GUARD_Text_0
	release
	end


Lumbridge_Castle_HALLWAY_GUARD::
	lock
	faceplayer
	msgbox Lumbridge_Castle_HALLWAY_GUARD_Text_0
	release
	end


Lumbridge_Castle_HALLWAY_TRIGGER::
	lock
	PlaySE SE_PIN
	applymovement 3, Movement_Lumbridge_Castle_HALLWAY_TRIGGER1
	waitmovement 0
	msgbox Lumbridge_Castle_HALLWAY_TRIGGER_Text_0
	waitmessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Lumbridge_Castle_HALLWAY_TRIGGER2
	applymovement 3, Movement_Lumbridge_Castle_HALLWAY_TRIGGER3
	waitmovement 0
	release
	end


Movement_Lumbridge_Castle_HALLWAY_TRIGGER1:
	emote_exclamation_mark
	face_player
	step_end

Movement_Lumbridge_Castle_HALLWAY_TRIGGER2:
	walk_left
	step_end

Movement_Lumbridge_Castle_HALLWAY_TRIGGER3:
	face_left
	step_end

Lumbridge_Castle_COOKS_TRIGGER::
	compare VAR_POKESCAPE_COOKS_ASSISTANT_QUEST_STATE, 0
	goto_if_eq Lumbridge_Castle_COOKS_TRIGGER_3
Lumbridge_Castle_COOKS_TRIGGER_1:
	release
	end

Lumbridge_Castle_COOKS_TRIGGER_2:
	lock
	PlaySE SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Lumbridge_Castle_COOKS_TRIGGER1
	waitmovement 0
	msgbox Lumbridge_Castle_COOKS_TRIGGER_Text_0
	waitmessage
	msgbox Lumbridge_Castle_COOKS_TRIGGER_Text_1
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Lumbridge_Castle_COOKS_TRIGGER2
	waitmovement 0
	goto Lumbridge_Castle_COOKS_TRIGGER_1

Lumbridge_Castle_COOKS_TRIGGER_3:
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Lumbridge_Castle_COOKS_TRIGGER_2
	goto Lumbridge_Castle_COOKS_TRIGGER_1


Movement_Lumbridge_Castle_COOKS_TRIGGER1:
	emote_exclamation_mark
	step_end

Movement_Lumbridge_Castle_COOKS_TRIGGER2:
	walk_up
	step_end

Lumbridge_Castle_COOKS_TRIGGER_celler::
	compare VAR_POKESCAPE_COOKS_ASSISTANT_QUEST_STATE, 0
	goto_if_eq Lumbridge_Castle_COOKS_TRIGGER_celler_3
Lumbridge_Castle_COOKS_TRIGGER_celler_2:
	release
	end

Lumbridge_Castle_COOKS_TRIGGER_celler_1:
	lock
	PlaySE SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Lumbridge_Castle_COOKS_TRIGGER1
	waitmovement 0
	msgbox Lumbridge_Castle_COOKS_TRIGGER_celler_Text_0
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WALKLEFT
	waitmovement 0
	release
	end

Lumbridge_Castle_COOKS_TRIGGER_celler_3:
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Lumbridge_Castle_COOKS_TRIGGER_celler_1
	goto Lumbridge_Castle_COOKS_TRIGGER_celler_2


Lumbridge_Castle_Introduction::
	compare VAR_POKESCAPE_COOKS_ASSISTANT_QUEST_STATE, 0
	goto_if_eq Lumbridge_Castle_Introduction_3
Lumbridge_Castle_Introduction_1:
	setvar VAR_TEMP_A, 1
	release
	end

Lumbridge_Castle_Introduction_2:
	lockall
	setvar VAR_TEMP_A, 1
	setvar VAR_POKESCAPE_LUMBRIDGE_CASTLE_STATE, 1
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 17
	goto_if_eq Lumbridge_Castle_Introduction_6
	goto RightDoorScript
	goto Lumbridge_Castle_Introduction_1

Lumbridge_Castle_Introduction_3:
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Lumbridge_Castle_Introduction_2
	goto Lumbridge_Castle_Introduction_1

Lumbridge_Castle_Introduction_6:
	goto LeftDoorScript
	goto Lumbridge_Castle_Introduction_1


LeftDoorScript::
	applymovement 9, Movement_Duke
	applymovement 10, Movement_Hans_5
	waitmovement 0
	playse SE_PIN
	applymovement 10, Movement_Hans_2
	waitmovement 0
	namebox LeftDoorScript_Text_0
	msgbox LeftDoorScript_Text_1
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PLAYER_1
	waitmovement 0
	msgbox LeftDoorScript_Text_2
	waitmessage
	hidenamebox
	closemessage
	applymovement 10, Movement_Hans_6
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PLAYER_3
	waitmovement 0
	applymovement 4, Movement_NORMALTREE_1
	waitmovement 0
	namebox LeftDoorScript_Text_0
	msgbox LeftDoorScript_Text_3
	hidenamebox
	applymovement 4, Movement_NORMALTREE_2
	waitmovement 0
	namebox LeftDoorScript_Text_4
	msgbox LeftDoorScript_Text_5
	msgbox LeftDoorScript_Text_6, MSGBOX_YESNO
LeftDoorScript_2:
	compare VAR_RESULT, 1
	goto_if_ne LeftDoorScript_3
	msgbox LeftDoorScript_Text_8
	hidenamebox
	release
	end

LeftDoorScript_3:
	msgbox LeftDoorScript_Text_7, MSGBOX_YESNO
	goto LeftDoorScript_2


RightDoorScript::
	applymovement 9, Movement_Duke
	applymovement 10, Movement_Hans_1
	waitmovement 0
	playse SE_PIN
	applymovement 10, Movement_Hans_2
	waitmovement 0
	namebox LeftDoorScript_Text_0
	msgbox LeftDoorScript_Text_1
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PLAYER_1
	waitmovement 0
	msgbox LeftDoorScript_Text_2
	waitmessage
	hidenamebox
	closemessage
	applymovement 10, Movement_Hans_3
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PLAYER_2
	waitmovement 0
	applymovement 4, Movement_NORMALTREE_1
	waitmovement 0
	namebox LeftDoorScript_Text_0
	msgbox LeftDoorScript_Text_3
	hidenamebox
	applymovement 4, Movement_NORMALTREE_2
	waitmovement 0
	namebox LeftDoorScript_Text_4
	msgbox LeftDoorScript_Text_5
	msgbox LeftDoorScript_Text_6, MSGBOX_YESNO
RightDoorScript_2:
	compare VAR_RESULT, 1
	goto_if_ne RightDoorScript_3
	msgbox LeftDoorScript_Text_8
	hidenamebox
	release
	end

RightDoorScript_3:
	msgbox LeftDoorScript_Text_7, MSGBOX_YESNO
	goto RightDoorScript_2


Lumbridge_Castle_Professor_Normal_Tree_1::
	goto_if_set FLAG_STARTER1, Lumbridge_Castle_Professor_Normal_Tree_1_2
	goto_if_set FLAG_STARTER2, Lumbridge_Castle_Professor_Normal_Tree_1_3
	goto_if_set FLAG_STARTER3, Lumbridge_Castle_Professor_Normal_Tree_1_4
Lumbridge_Castle_Professor_Normal_Tree_1_1:
	namebox LeftDoorScript_Text_4
	msgbox Lumbridge_Castle_Professor_Normal_Tree_1_Text_0
	hidenamebox
	playfanfare MUS_OBTAIN_ITEM
	msgbox Lumbridge_Castle_Professor_Normal_Tree_1_Text_1
	waitfanfare
	namebox LeftDoorScript_Text_4
	msgbox Lumbridge_Castle_Professor_Normal_Tree_1_Text_2
	waitmessage
	hidenamebox
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject 4
	fadescreen FADE_FROM_BLACK
	goto Lumbridge_Castle_Hans_1
	release
	end

Lumbridge_Castle_Professor_Normal_Tree_1_2:
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Starter1
	waitmovement 0
	goto Lumbridge_Castle_Professor_Normal_Tree_1_1

Lumbridge_Castle_Professor_Normal_Tree_1_3:
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Starter2
	waitmovement 0
	goto Lumbridge_Castle_Professor_Normal_Tree_1_1

Lumbridge_Castle_Professor_Normal_Tree_1_4:
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Starter3
	waitmovement 0
	goto Lumbridge_Castle_Professor_Normal_Tree_1_1


Lumbridge_Castle_Professor_Normal_Tree_2::
	lock
	faceplayer
	namebox LeftDoorScript_Text_4
	msgbox Lumbridge_Castle_Professor_Normal_Tree_2_Text_0
	hidenamebox
	release
	end


Lumbridge_Castle_Hans_0::
	lock
	faceplayer
	namebox LeftDoorScript_Text_0
	msgbox Lumbridge_Castle_Hans_0_Text_0
	hidenamebox
	release
	end


Lumbridge_Castle_Hans_1::
	applymovement 10, Movement_Hans_4
	waitmovement 0
	namebox LeftDoorScript_Text_0
	msgbox Lumbridge_Castle_Hans_1_Text_0
	msgbox Lumbridge_Castle_Hans_1_Text_1
	waitmessage
	hidenamebox
	closemessage
	giveitem ITEM_NORMAL_POUCH, 10
	namebox LeftDoorScript_Text_0
	msgbox Lumbridge_Castle_Hans_1_Text_2
	hidenamebox
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject 9
	removeobject 10
	fadescreen FADE_FROM_BLACK
	setflag FLAG_SYS_POKEDEX_GET
	setflag FLAG_SYS_NATIONAL_DEX
	special EnableNationalPokedex
	release
	end


Starter_TRIGGER::
	goto_if_unset FLAG_SYS_POKEMON_GET, Starter_TRIGGER_1
	release
	end

Starter_TRIGGER_1:
	lock
	namebox LeftDoorScript_Text_4
	msgbox Starter_TRIGGER_Text_0
	waitmessage
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Starter_TRIGGER
	waitmovement 0
	release
	return


Movement_Starter_TRIGGER:
	walk_up
	step_end

Movement_Duke:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Movement_Hans_1:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Movement_Hans_2:
	emote_exclamation_mark
	face_player
	delay_16
	walk_down
	step_end

Movement_PLAYER_1:
	walk_in_place_up
	walk_in_place_up
	step_end

Movement_Hans_3:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	step_end

Movement_Hans_5:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Movement_Hans_6:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	step_end

Movement_PLAYER_2:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	face_up
	step_end

Movement_PLAYER_3:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	face_up
	step_end

Movement_NORMALTREE_1:
	face_right
	step_end

Movement_NORMALTREE_2:
	face_player
	step_end

Movement_Hans_4:
	walk_left
	face_player
	step_end

Movement_Starter1:
	walk_right
	face_up
	step_end

Movement_Starter2:
	face_up
	step_end

Movement_Starter3:
	walk_left
	face_up
	step_end

Pouch_Starter1::
	lock
	goto_if_set FLAG_STARTER2, Pouch_Starter1_1
	goto_if_set FLAG_STARTER3, Pouch_Starter1_1
	goto_if_unset FLAG_MEMBERSHIP, Pouch_Starter1_6
	goto_if_set FLAG_MEMBERSHIP, Pouch_Starter1_7
	return

Pouch_Starter1_1:
	msgbox Pouch_Starter1_Text_0
	release
	return

Pouch_Starter1_6:
	lock
	showmonpic SPECIES_GUTHLING, 10, 3
	msgbox Pouch_Starter1_Text_1
	msgbox Pouch_Starter1_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Pouch_Starter1_10
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_GUTHLING, 5, ITEM_NONE
	msgbox Pouch_Starter1_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Pouch_Starter1_17
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	removeobject 5
Pouch_Starter1_16:
	goto Lumbridge_Castle_Professor_Normal_Tree_1
	return

Pouch_Starter1_7:
	lock
	showmonpic SPECIES_ARMALING, 10, 3
	msgbox Pouch_Starter1_Text_4
	msgbox Pouch_Starter1_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Pouch_Starter1_13
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_ARMALING, 5, ITEM_NONE
	msgbox Pouch_Starter1_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Pouch_Starter1_21
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	removeobject 5
Pouch_Starter1_20:
	goto Lumbridge_Castle_Professor_Normal_Tree_1
	return

Pouch_Starter1_10:
	hidemonpic
	release
	return

Pouch_Starter1_13:
	hidemonpic
	release
	return

Pouch_Starter1_17:
	removeobject 5
	hidemonpic
	release
	goto Pouch_Starter1_16

Pouch_Starter1_21:
	removeobject 5
	hidemonpic
	release
	goto Pouch_Starter1_20


Pouch_Starter2::
	lock
	goto_if_set FLAG_STARTER1, Pouch_Starter2_1
	goto_if_set FLAG_STARTER3, Pouch_Starter2_1
	goto_if_unset FLAG_MEMBERSHIP, Pouch_Starter2_6
	goto_if_set FLAG_MEMBERSHIP, Pouch_Starter2_7
	return

Pouch_Starter2_1:
	msgbox Pouch_Starter1_Text_0
	release
	return

Pouch_Starter2_6:
	lock
	showmonpic SPECIES_ZAMLING, 10, 3
	msgbox Pouch_Starter2_Text_0
	msgbox Pouch_Starter1_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Pouch_Starter2_10
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_ZAMLING, 5, ITEM_NONE
	msgbox Pouch_Starter1_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Pouch_Starter2_17
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	removeobject 6
Pouch_Starter2_16:
	goto Lumbridge_Castle_Professor_Normal_Tree_1
	return

Pouch_Starter2_7:
	lock
	showmonpic SPECIES_UNGODLING, 10, 3
	msgbox Pouch_Starter2_Text_1
	msgbox Pouch_Starter1_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Pouch_Starter2_13
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_UNGODLING, 5, ITEM_NONE
	msgbox Pouch_Starter1_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Pouch_Starter2_21
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	removeobject 6
Pouch_Starter2_20:
	goto Lumbridge_Castle_Professor_Normal_Tree_1
	return

Pouch_Starter2_10:
	hidemonpic
	release
	return

Pouch_Starter2_13:
	hidemonpic
	release
	return

Pouch_Starter2_17:
	removeobject 6
	hidemonpic
	release
	goto Pouch_Starter2_16

Pouch_Starter2_21:
	removeobject 6
	hidemonpic
	release
	goto Pouch_Starter2_20


Pouch_Starter3::
	lock
	goto_if_set FLAG_STARTER1, Pouch_Starter3_1
	goto_if_set FLAG_STARTER2, Pouch_Starter3_1
	goto_if_unset FLAG_MEMBERSHIP, Pouch_Starter3_6
	goto_if_set FLAG_MEMBERSHIP, Pouch_Starter3_7
	return

Pouch_Starter3_1:
	msgbox Pouch_Starter1_Text_0
	release
	return

Pouch_Starter3_6:
	lock
	showmonpic SPECIES_SARALING, 10, 3
	msgbox Pouch_Starter3_Text_0
	msgbox Pouch_Starter1_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Pouch_Starter3_10
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_SARALING, 5, ITEM_NONE
	msgbox Pouch_Starter1_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Pouch_Starter3_17
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	removeobject 7
Pouch_Starter3_16:
	goto Lumbridge_Castle_Professor_Normal_Tree_1
	return

Pouch_Starter3_7:
	lock
	showmonpic SPECIES_TUMEKLING, 10, 3
	msgbox Pouch_Starter3_Text_1
	msgbox Pouch_Starter1_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Pouch_Starter3_13
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_TUMEKLING, 5, ITEM_NONE
	msgbox Pouch_Starter1_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Pouch_Starter3_21
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	removeobject 7
Pouch_Starter3_20:
	goto Lumbridge_Castle_Professor_Normal_Tree_1
	return

Pouch_Starter3_10:
	hidemonpic
	release
	return

Pouch_Starter3_13:
	hidemonpic
	release
	return

Pouch_Starter3_17:
	removeobject 7
	hidemonpic
	release
	goto Pouch_Starter3_16

Pouch_Starter3_21:
	removeobject 7
	hidemonpic
	release
	goto Pouch_Starter3_20


QUEST_Cooks_Assistant_STATE::
	lock
	faceplayer
	switch VAR_POKESCAPE_COOKS_ASSISTANT_QUEST_STATE
	case 0, QUEST_Cooks_Assistant_STATE_2
	case 1, QUEST_Cooks_Assistant_STATE_3
	case 2, QUEST_Cooks_Assistant_STATE_4
	case 3, QUEST_Cooks_Assistant_STATE_5
	case 4, QUEST_Cooks_Assistant_STATE_6
	case 5, QUEST_Cooks_Assistant_STATE_6
	return

QUEST_Cooks_Assistant_STATE_2:
	namebox QUEST_Cooks_Assistant_STATE_Text_0
	msgbox QUEST_Cooks_Assistant_STATE_Text_1
	msgbox QUEST_Cooks_Assistant_STATE_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne QUEST_Cooks_Assistant_STATE_7
	namebox QUEST_Cooks_Assistant_STATE_Text_0
	msgbox QUEST_Cooks_Assistant_STATE_Text_6
	hidenamebox
	release
	end

QUEST_Cooks_Assistant_STATE_3:
	namebox QUEST_Cooks_Assistant_STATE_Text_0
	msgbox QUEST_Cooks_Assistant_STATE_Text_7, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne QUEST_Cooks_Assistant_STATE_10
	msgbox QUEST_Cooks_Assistant_STATE_Text_10
	hidenamebox
	release
	end

QUEST_Cooks_Assistant_STATE_4:
	checkitem ITEM_SPECIAL_CAKE, 1
	compare VAR_RESULT, 0
	goto_if_eq QUEST_Cooks_Assistant_STATE_13
	msgbox QUEST_Cooks_Assistant_STATE_Text_12
	removeitem ITEM_SPECIAL_CAKE, 1
	namebox QUEST_Cooks_Assistant_STATE_Text_0
	msgbox QUEST_Cooks_Assistant_STATE_Text_13
	hidenamebox
	closemessage
	setvar VAR_POKESCAPE_COOKS_ASSISTANT_QUEST_STATE, 3
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_COOKS_ASSISTANT
	namebox QUEST_Cooks_Assistant_STATE_Text_0
	msgbox QUEST_Cooks_Assistant_STATE_Text_14
	hidenamebox
	closemessage
	giveitem ITEM_BREAD, 5
	giveitem ITEM_CAKE, 1
	giveitem ITEM_PURPLE_SWEETS, 2
	namebox QUEST_Cooks_Assistant_STATE_Text_0
	msgbox QUEST_Cooks_Assistant_STATE_Text_15
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq QUEST_Cooks_Assistant_STATE_20
QUEST_Cooks_Assistant_STATE_19:
	hidenamebox
	release
	end

QUEST_Cooks_Assistant_STATE_5:
	namebox QUEST_Cooks_Assistant_STATE_Text_0
	compare VAR_POKESCAPE_GAMEMODE_STATE, 1
	goto_if_eq QUEST_Cooks_Assistant_STATE_17
	msgbox QUEST_Cooks_Assistant_STATE_Text_18
	hidenamebox
	release
	end

QUEST_Cooks_Assistant_STATE_6:
	namebox QUEST_Cooks_Assistant_STATE_Text_0
	msgbox QUEST_Cooks_Assistant_STATE_Text_19
	hidenamebox
	release
	end

QUEST_Cooks_Assistant_STATE_7:
	hidenamebox
	startquest QUEST_COOKS_ASSISTANT
	namebox QUEST_Cooks_Assistant_STATE_Text_0
	msgbox QUEST_Cooks_Assistant_STATE_Text_3
	msgbox QUEST_Cooks_Assistant_STATE_Text_4
	giveitem ITEM_MAP
	msgbox QUEST_Cooks_Assistant_STATE_Text_5
	setvar VAR_POKESCAPE_COOKS_ASSISTANT_QUEST_STATE, 1
	hidenamebox
	release
	end

QUEST_Cooks_Assistant_STATE_10:
	msgbox QUEST_Cooks_Assistant_STATE_Text_8
	call CooksAssistant_Check_EGG
	call CooksAssistant_Check_MILK
	call CooksAssistant_Check_FLOUR
	msgbox QUEST_Cooks_Assistant_STATE_Text_9
	setvar VAR_POKESCAPE_COOKS_ASSISTANT_QUEST_STATE, 2
	hidenamebox
	release
	end

QUEST_Cooks_Assistant_STATE_13:
	namebox QUEST_Cooks_Assistant_STATE_Text_0
	msgbox QUEST_Cooks_Assistant_STATE_Text_11
	hidenamebox
	release
	end

QUEST_Cooks_Assistant_STATE_17:
	msgbox QUEST_Cooks_Assistant_STATE_Text_17
	hidenamebox
	release
	end

QUEST_Cooks_Assistant_STATE_20:
	playse SE_PIN
	applymovement 1, COOK_COOKSASSISTANT_1
	waitmovement 0
	msgbox QUEST_Cooks_Assistant_STATE_Text_16
	goto QUEST_Cooks_Assistant_STATE_19


COOK_COOKSASSISTANT_1:
	emote_question_mark
	step_end

CooksAssistant_Check_MILK::
	checkitem ITEM_TOP_QUALITY_MILK, 1
	compare VAR_RESULT, 0
	goto_if_eq CooksAssistant_Check_MILK_1
	msgbox CooksAssistant_Check_MILK_Text_1
	return

CooksAssistant_Check_MILK_1:
	msgbox CooksAssistant_Check_MILK_Text_0
	hidenamebox
	release
	end


CooksAssistant_Check_FLOUR::
	checkitem ITEM_EXTRA_FINE_FLOUR, 1
	compare VAR_RESULT, 0
	goto_if_eq CooksAssistant_Check_FLOUR_1
	msgbox CooksAssistant_Check_FLOUR_Text_1
	return

CooksAssistant_Check_FLOUR_1:
	msgbox CooksAssistant_Check_FLOUR_Text_0
	hidenamebox
	release
	end


CooksAssistant_Check_EGG::
	checkitem ITEM_SUPER_LARGE_EGG, 1
	compare VAR_RESULT, 0
	goto_if_eq CooksAssistant_Check_EGG_1
	msgbox CooksAssistant_Check_EGG_Text_1
	return

CooksAssistant_Check_EGG_1:
	msgbox CooksAssistant_Check_EGG_Text_0
	hidenamebox
	release
	end


QUEST_TRIGGER_BLOCK_COOKSASSISTANT::
	compare VAR_POKESCAPE_GAMEMODE_STATE, 1
	goto_if_eq QUEST_TRIGGER_BLOCK_COOKSASSISTANT_2
	switch VAR_POKESCAPE_COOKS_ASSISTANT_QUEST_STATE
	case 0, QUEST_TRIGGER_BLOCK_COOKSASSISTANT_5
	case 1, QUEST_TRIGGER_BLOCK_COOKSASSISTANT_5
	case 2, QUEST_TRIGGER_BLOCK_COOKSASSISTANT_5
	case 3, QUEST_TRIGGER_BLOCK_COOKSASSISTANT_6
	case 4, QUEST_TRIGGER_BLOCK_COOKSASSISTANT_6
	case 5, QUEST_TRIGGER_BLOCK_COOKSASSISTANT_6
	return

QUEST_TRIGGER_BLOCK_COOKSASSISTANT_2:
	release
	end

QUEST_TRIGGER_BLOCK_COOKSASSISTANT_5:
	lock
	playSE SE_PIN
	applymovement 1, BLOCK_COOKSASSISTANT_1
	waitmovement 0
	namebox QUEST_Cooks_Assistant_STATE_Text_0
	msgbox QUEST_TRIGGER_BLOCK_COOKSASSISTANT_Text_0
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, BLOCK_COOKSASSISTANT_2
	waitmovement 0
	release
	end

QUEST_TRIGGER_BLOCK_COOKSASSISTANT_6:
	release
	end


BLOCK_COOKSASSISTANT_1:
	emote_exclamation_mark
	jump_in_place_left
	step_end

BLOCK_COOKSASSISTANT_2:
	walk_right
	walk_right
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

QUEST_COOKING_RANGE_COOKSASSISTANT::
	lock
	switch VAR_POKESCAPE_COOKS_ASSISTANT_QUEST_STATE
	case 0, QUEST_COOKING_RANGE_COOKSASSISTANT_2
	case 1, QUEST_COOKING_RANGE_COOKSASSISTANT_2
	case 2, QUEST_COOKING_RANGE_COOKSASSISTANT_3
	case 3, QUEST_COOKING_RANGE_COOKSASSISTANT_4
	case 4, QUEST_COOKING_RANGE_COOKSASSISTANT_4
	case 5, QUEST_COOKING_RANGE_COOKSASSISTANT_4
	return

QUEST_COOKING_RANGE_COOKSASSISTANT_2:
	lock
	delay_16
	playSE SE_PIN
	applymovement 1, COOK_COOKSASSISTANT_2
	waitmovement 0
	namebox QUEST_Cooks_Assistant_STATE_Text_0
	msgbox QUEST_COOKING_RANGE_COOKSASSISTANT_Text_0
	hidenamebox
	release
	end

QUEST_COOKING_RANGE_COOKSASSISTANT_3:
	checkitem ITEM_SPECIAL_CAKE, 1
	compare VAR_RESULT, 0
	goto_if_eq QUEST_COOKING_RANGE_COOKSASSISTANT_5
	msgbox QUEST_COOKING_RANGE_COOKSASSISTANT_Text_5
	release
	end

QUEST_COOKING_RANGE_COOKSASSISTANT_4:
	goto COOKING_RANGE
	release
	end

QUEST_COOKING_RANGE_COOKSASSISTANT_5:
	msgbox QUEST_COOKING_RANGE_COOKSASSISTANT_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne QUEST_COOKING_RANGE_COOKSASSISTANT_8
	msgbox QUEST_COOKING_RANGE_COOKSASSISTANT_Text_4
	release
	end

QUEST_COOKING_RANGE_COOKSASSISTANT_8:
	call CooksAssistant_RANGE_Check_EGG
	call CooksAssistant_RANGE_Check_MILK
	call CooksAssistant_RANGE_Check_FLOUR
	removeitem ITEM_SUPER_LARGE_EGG
	removeitem ITEM_TOP_QUALITY_MILK
	removeitem ITEM_EXTRA_FINE_FLOUR
	msgbox QUEST_COOKING_RANGE_COOKSASSISTANT_Text_2
	msgbox QUEST_COOKING_RANGE_COOKSASSISTANT_Text_3
	giveitem ITEM_SPECIAL_CAKE, 1
	release
	end


COOK_COOKSASSISTANT_2:
	emote_exclamation_mark
	jump_in_place_up
	step_end

CooksAssistant_RANGE_Check_MILK::
	checkitem ITEM_TOP_QUALITY_MILK, 1
	compare VAR_RESULT, 0
	goto_if_eq CooksAssistant_RANGE_Check_MILK_1
	return

CooksAssistant_RANGE_Check_MILK_1:
	msgbox CooksAssistant_RANGE_Check_MILK_Text_0
	release
	end


CooksAssistant_RANGE_Check_FLOUR::
	checkitem ITEM_EXTRA_FINE_FLOUR, 1
	compare VAR_RESULT, 0
	goto_if_eq CooksAssistant_RANGE_Check_FLOUR_1
	return

CooksAssistant_RANGE_Check_FLOUR_1:
	msgbox CooksAssistant_RANGE_Check_FLOUR_Text_0
	release
	end


CooksAssistant_RANGE_Check_EGG::
	checkitem ITEM_SUPER_LARGE_EGG, 1
	compare VAR_RESULT, 0
	goto_if_eq CooksAssistant_RANGE_Check_EGG_1
	return

CooksAssistant_RANGE_Check_EGG_1:
	msgbox CooksAssistant_RANGE_Check_EGG_Text_0
	release
	end


FillBucketWater::
	checkitem ITEM_EMPTY_BUCKET, 1
	compare VAR_RESULT, 0
	goto_if_ne FillBucketWater_1
	msgbox FillBucketWater_Text_0
	release
	return

FillBucketWater_1:
	removeitem ITEM_EMPTY_BUCKET, 1
	giveitem ITEM_WATER_BUCKET, 1
	release
	return


NPC_LUMBRIDGE_HARLAN::
	lock
	faceplayer
	namebox NPC_LUMBRIDGE_HARLAN_Text_0
	msgbox NPC_LUMBRIDGE_HARLAN_Text_1
	waitmessage
	hidenamebox
	release
	end


Mithrilman_LUMBRIDGE::
	lock
	faceplayer
	goto Mithrilman_LUMBRIDGE_STATE_2
	release
	end


Mithrilman_LUMBRIDGE_TRIGGER::
	compare VAR_POKESCAPE_COOKS_ASSISTANT_QUEST_STATE, 1
	goto_if_eq Mithrilman_LUMBRIDGE_TRIGGER_4
Mithrilman_LUMBRIDGE_TRIGGER_2:
	release
	end

Mithrilman_LUMBRIDGE_TRIGGER_1:
	goto Mithrilman_LUMBRIDGE_STATE_1
	return

Mithrilman_LUMBRIDGE_TRIGGER_3:
	goto_if_unset FLAG_MITHRILMAN1, Mithrilman_LUMBRIDGE_TRIGGER_1
	goto Mithrilman_LUMBRIDGE_TRIGGER_2

Mithrilman_LUMBRIDGE_TRIGGER_4:
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Mithrilman_LUMBRIDGE_TRIGGER_3
	goto Mithrilman_LUMBRIDGE_TRIGGER_2


Mithrilman_LUMBRIDGE_STATE_1::
	lock
	PlaySE SE_PIN
	applymovement 2, Movement_MithrilmanSpotted
	waitmovement 0
	delay 60
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_2, 13
	goto_if_eq Mithrilman_LUMBRIDGE_STATE_1_2
Mithrilman_LUMBRIDGE_STATE_1_1:
	compare VAR_TEMP_2, 14
	goto_if_eq Mithrilman_LUMBRIDGE_STATE_1_5
	applymovement 2, Movement_WalkDown2
	waitmovement 2
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEUP
	waitmovement 0
	goto Mithrilman_LUMBRIDGE_STATE_2
Mithrilman_LUMBRIDGE_STATE_1_4:
	release
	end

Mithrilman_LUMBRIDGE_STATE_1_2:
	applymovement 2, Movement_InteractFACEDOWN
	waitmovement 2
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEUP
	waitmovement 0
	goto Mithrilman_LUMBRIDGE_STATE_2
	goto Mithrilman_LUMBRIDGE_STATE_1_1

Mithrilman_LUMBRIDGE_STATE_1_5:
	applymovement 2, Movement_WalkDown1
	waitmovement 2
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEUP
	waitmovement 0
	goto Mithrilman_LUMBRIDGE_STATE_2
	goto Mithrilman_LUMBRIDGE_STATE_1_4


Movement_WalkDown1:
	walk_down
	step_end

Movement_WalkDown2:
	walk_down
	walk_down
	step_end

Movement_WalkDown3:
	walk_down
	walk_down
	walk_down
	step_end

Movement_MithrilmanSpotted:
	emote_exclamation_mark
	face_player
	step_end

Mithrilman_LUMBRIDGE_STATE_2::
	playbgm MUS_ENCOUNTER_MAY, 1
	compare VAR_POKESCAPE_COOKS_ASSISTANT_QUEST_STATE, 0
	goto_if_eq Mithrilman_LUMBRIDGE_STATE_2_1
	namebox Mithrilman_LUMBRIDGE_STATE_2_Text_0
	msgbox Mithrilman_LUMBRIDGE_STATE_2_Text_2
	namebox Mithrilman_LUMBRIDGE_STATE_2_Text_3
	msgbox Mithrilman_LUMBRIDGE_STATE_2_Text_4
	hidenamebox
	trainerbattle_no_intro TRAINER_MITHRILMAN1, Mithrilman_LUMBRIDGE_STATE_2_Text_5
	goto Mithrilman_LUMBRIDGE_STATE_3
	release
	end

Mithrilman_LUMBRIDGE_STATE_2_1:
	applymovement 2, Movement_InteractFACEPLAYER
	waitmovement 0
	namebox Mithrilman_LUMBRIDGE_STATE_2_Text_0
	msgbox Mithrilman_LUMBRIDGE_STATE_2_Text_1
	savebgm MUS_DUMMY
	fadedefaultbgm
	hidenamebox
	closemessage
	applymovement 2, Movement_InteractFACEUP
	waitmovement 0
	release
	end


Mithrilman_LUMBRIDGE_STATE_3::
	lock
	faceplayer
	namebox Mithrilman_LUMBRIDGE_STATE_2_Text_3
	msgbox Mithrilman_LUMBRIDGE_STATE_3_Text_0
	waitmessage
	hidenamebox
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject 2
	fadescreen FADE_FROM_BLACK
	setflag FLAG_MITHRILMAN1
	clearflag FLAG_MITHRILMAN2
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	end


Lumbridge_Bookshelf_Text_0:
	.string "There is a Book with the title\n"
	.string "Adamantman Guide.\p"
	.string "Inside the pages are torn and\n"
	.string "graffitied with the words Adamantmen\l"
	.string "are noobs.$"

Lumbridge_Bookshelf_2_Text_0:
	.string "There is a Book about MvM\n"
	.string "Championships.\p"
	.string "MvM also known as Monster VS Monster.\p"
	.string "Adventurers gather from all around the\n"
	.string "world to battle it out atop the\l"
	.string "Wilderness Volcano to see who is the\l"
	.string "strongest of them all.$"

Lumbridge_Castle_GUARD_Text_0:
	.string "I'm on guard duty.\p"
	.string "Please do not cause any problems.$"

Lumbridge_Castle_HALLWAY_GUARD_Text_0:
	.string "I'm sorry but this hallway is off limits.\p"
	.string "I am surprised you are talking to me to\n"
	.string "be honest.\p"
	.string "No one ever uses this hallway.$"

Lumbridge_Castle_HALLWAY_TRIGGER_Text_0:
	.string "I'm sorry but this hallway is off limits.$"

Lumbridge_Castle_COOKS_TRIGGER_Text_0:
	.string "REEEEEEEEEEE!$"

Lumbridge_Castle_COOKS_TRIGGER_Text_1:
	.string "You hear a loud noise coming from the\n"
	.string "kitchen.$"

Lumbridge_Castle_COOKS_TRIGGER_celler_Text_0:
	.string "Wait!\p"
	.string "Come talk to me.$"

LeftDoorScript_Text_0:
	.string "Hans$"

LeftDoorScript_Text_1:
	.string "Hello there!\p"
	.string "My name is Hans.\p"
	.string "You are...?$"

LeftDoorScript_Text_2:
	.string "...\p"
	.string "Nice to meet you {PLAYER}.\p"
	.string "You must be here to see the\n"
	.string "researcher?\p"
	.string "We've had a few others come see him\n"
	.string "today too.\p"
	.string "Follow me.$"

LeftDoorScript_Text_3:
	.string "Sorry to interrupt but this is\n"
	.string "{PLAYER}.\p"
	.string "They are interested in your quest\n"
	.string "Professor.$"

LeftDoorScript_Text_4:
	.string "Prof. Normal Tree$"

LeftDoorScript_Text_5:
	.string "Nice.\p"
	.string "I am Professor Normal Tree.\p"
	.string "I am in need of assistants to help me in\n"
	.string "my research, as you would know this\l"
	.string "world is full to the brim with all sorts\l"
	.string "of monsters.\p"
	.string "What I would like assistance with is\n"
	.string "filling this BESTIARY with as much data\l"
	.string "as possible.\p"
	.string "Of course I wouldn't ask you to do it\n"
	.string "for free, I'll be giving you one of 3\l"
	.string "rare monsters to take with you on your\l"
	.string "journey.$"

LeftDoorScript_Text_6:
	.string "Would you like to accept my Quest?$"

LeftDoorScript_Text_7:
	.string "Noob.\p"
	.string "...How about now?$"

LeftDoorScript_Text_8:
	.string "Nice.\p"
	.string "Please choose from one of these 3\n"
	.string "monsters on the table.$"

Lumbridge_Castle_Professor_Normal_Tree_1_Text_0:
	.string "Nice.\p"
	.string "Please take this BESTIARY.$"

Lumbridge_Castle_Professor_Normal_Tree_1_Text_1:
	.string "Obtained the BESTIARY.$"

Lumbridge_Castle_Professor_Normal_Tree_1_Text_2:
	.string "I've got to head to Kandarin now, I look\n"
	.string "forward to seeing how much of the\l"
	.string "BESTIARY you've filled out the next we\l"
	.string "meet.\p"
	.string "Until then...\l"
	.string "Farewell.$"

Lumbridge_Castle_Professor_Normal_Tree_2_Text_0:
	.string "Please choose from one of these 3\n"
	.string "monsters on the table.$"

Lumbridge_Castle_Hans_0_Text_0:
	.string "Oh how exciting!\p"
	.string "I wonder which one you will choose.$"

Lumbridge_Castle_Hans_1_Text_0:
	.string "{PLAYER}, before you go have you\n"
	.string "heard of the MvM championships?\p"
	.string "MvM, which stands for Monster VS\n"
	.string "Monster, is where trainers compete\l"
	.string "against each other in battle by using\l"
	.string "their monsters to fight for them.\p"
	.string "If you wish to participate in the MvM\n"
	.string "Championships you must defeat 8\l"
	.string "leaders from around Gielinor and make\l"
	.string "your way to the Wilderness Volcano.\p"
	.string "The Duke is one of these 8 Leaders.\p"
	.string "If you are interested you should pay\n"
	.string "him a visit.$"

Lumbridge_Castle_Hans_1_Text_1:
	.string "Oh, before I forget take these.$"

Lumbridge_Castle_Hans_1_Text_2:
	.string "These are Pouches, you can capture\n"
	.string "monsters with them.\p"
	.string "Anyway, all the best on your adventure\n"
	.string "{PLAYER}, I'm sure I'll see you\l"
	.string "around.$"

Starter_TRIGGER_Text_0:
	.string "Don't leave!\p"
	.string "Please choose from one of these 3\n"
	.string "monsters on the table.$"

Pouch_Starter1_Text_0:
	.string "You have already chosen!\pNo need to be greedy!$"

Pouch_Starter1_Text_1:
	.string "This is a GRASS type Monster.\nThe Bird of Balance, GUTHLING.$"

Pouch_Starter1_Text_2:
	.string "Would you like this monster as your\n"
	.string "starter?$"

Pouch_Starter1_Text_3:
	.string "Would you like to give your monster a\n"
	.string "nickname?$"

Pouch_Starter1_Text_4:
	.string "This is an Armaling.$"

Pouch_Starter2_Text_0:
	.string "This is a FIRE type Monster.\nThe Bird of Chaos, ZAMLING.$"

Pouch_Starter2_Text_1:
	.string "This is an Ungodling.$"

Pouch_Starter3_Text_0:
	.string "This is a WATER type Monster.\nThe Bird of Order, SARALING.$"

Pouch_Starter3_Text_1:
	.string "This is an Tumekling.$"

QUEST_Cooks_Assistant_STATE_Text_0:
	.string "Cook$"

QUEST_Cooks_Assistant_STATE_Text_1:
	.string "Oh dear..\p"
	.string "What am I to do..\n"
	.string "I'm in a terrible, terrible mess!\p"
	.string "I should be making a cake for the Duke\n"
	.string "but I forgot to get the ingredients!$"

QUEST_Cooks_Assistant_STATE_Text_2:
	.string "Can you please help me?$"

QUEST_Cooks_Assistant_STATE_Text_3:
	.string "Oh, thank you, thank you!\p"
	.string "I need an egg, some milk, and some flour.\p"
	.string "For the eggs you should check out the\n"
	.string "chicken farms, around Lumbridge.\p"
	.string "You can get some milk from the Cow\n"
	.string "Field, east of Lumbridge.\p"
	.string "You should ask someone at the Windmill\n"
	.string "if they can give you some flour, north\l"
	.string "of Lumbridge.$"

QUEST_Cooks_Assistant_STATE_Text_4:
	.string "Oh..\n"
	.string "Before you go.$"

QUEST_Cooks_Assistant_STATE_Text_5:
	.string "Hopefully that map will help you if you\n"
	.string "get lost.$"

QUEST_Cooks_Assistant_STATE_Text_6:
	.string "Fine!\p"
	.string "I always knew you adventurer types\n"
	.string "were callous beasts!\p"
	.string "Go on your merry way.$"

QUEST_Cooks_Assistant_STATE_Text_7:
	.string "Do you have the ingredients?$"

QUEST_Cooks_Assistant_STATE_Text_8:
	.string "Let me check...$"

QUEST_Cooks_Assistant_STATE_Text_9:
	.string "It looks like you have everything!\p"
	.string "...\p"
	.string "This is a bit awkward but could you also\n"
	.string "bake the cake?\p"
	.string "I forgot how...\p"
	.string "Please use the range over there!$"

QUEST_Cooks_Assistant_STATE_Text_10:
	.string "Please Hurry..$"

QUEST_Cooks_Assistant_STATE_Text_11:
	.string "What you don't know how to bake a cake\n"
	.string "either?!\p"
	.string "Try throwing all of the ingredents on\n"
	.string "the range and see what happens.$"

QUEST_Cooks_Assistant_STATE_Text_12:
	.string "{PLAYER} handed the SPECIAL CAKE to\n"
	.string "the Cook.$"

QUEST_Cooks_Assistant_STATE_Text_13:
	.string "I am saved!\n"
	.string "Thank you so much!\p"
	.string "Feel free to use my range anytime!$"

QUEST_Cooks_Assistant_STATE_Text_14:
	.string "Also as a thank you for helping me\n"
	.string "please take these, they may be useful\l"
	.string "to you.$"

QUEST_Cooks_Assistant_STATE_Text_15:
	.string "Once again, thank you.$"

QUEST_Cooks_Assistant_STATE_Text_16:
	.string "Oh?\n"
	.string "What's that?\p"
	.string "You wanted to challenge the Duke to a\n"
	.string "Gym Battle?\p"
	.string "Why didn't you say so!\p"
	.string "Go straight up those stairs.\n"
	.string "I'll let him know you're coming.$"

QUEST_Cooks_Assistant_STATE_Text_17:
	.string "Once again, thank you for your help\n"
	.string "making the cake.$"

QUEST_Cooks_Assistant_STATE_Text_18:
	.string "Just head up those stairs, you'll find\n"
	.string "the Duke up there.$"

QUEST_Cooks_Assistant_STATE_Text_19:
	.string "Thank you for all of your help earlier!$"

CooksAssistant_Check_MILK_Text_0:
	.string "You don't have any milk.\p"
	.string "You can get some milk from the Cow\n"
	.string "Field, east of Lumbridge.$"

CooksAssistant_Check_MILK_Text_1:
	.string "You have the milk!$"

CooksAssistant_Check_FLOUR_Text_0:
	.string "You don't have any flour.\p"
	.string "You should ask someone at the Windmill\n"
	.string "if they can give you some flour, north\l"
	.string "of Lumbridge.$"

CooksAssistant_Check_FLOUR_Text_1:
	.string "You have the flour!$"

CooksAssistant_Check_EGG_Text_0:
	.string "You don't have any eggs.\p"
	.string "You check out the chicken farms,\n"
	.string "around Lumbridge.$"

CooksAssistant_Check_EGG_Text_1:
	.string "You have the egg!$"

QUEST_TRIGGER_BLOCK_COOKSASSISTANT_Text_0:
	.string "Hey you there!\n"
	.string "Come here for a minute.$"

QUEST_COOKING_RANGE_COOKSASSISTANT_Text_0:
	.string "Hey don't use my range without asking\n"
	.string "first!$"

QUEST_COOKING_RANGE_COOKSASSISTANT_Text_1:
	.string "Would you like to bake a cake?$"

QUEST_COOKING_RANGE_COOKSASSISTANT_Text_2:
	.string "...\p"
	.string "Unsure on how to bake a cake you throw\n"
	.string "all the ingredients at the range.$"

QUEST_COOKING_RANGE_COOKSASSISTANT_Text_3:
	.string "{PAUSE 32}1, {PAUSE 15}2, and{PAUSE 15}… {PAUSE 15}… {PAUSE 15}… {PAUSE 15}{PLAY_SE SE_BALL_BOUNCE_1}Poof!\p"
	.string "You bake a cake!$"

QUEST_COOKING_RANGE_COOKSASSISTANT_Text_4:
	.string "You decided that your Cooking level was\n"
	.string "too low to complete this task.$"

QUEST_COOKING_RANGE_COOKSASSISTANT_Text_5:
	.string "You have already baked the cake.$"

CooksAssistant_RANGE_Check_MILK_Text_0:
	.string "You don't have any milk.$"

CooksAssistant_RANGE_Check_FLOUR_Text_0:
	.string "You don't have any flour.$"

CooksAssistant_RANGE_Check_EGG_Text_0:
	.string "You don't have any eggs.$"

FillBucketWater_Text_0:
	.string "Running water - A nice feature!$"

NPC_LUMBRIDGE_HARLAN_Text_0:
	.string "Harlan$"

NPC_LUMBRIDGE_HARLAN_Text_1:
	.string "The best offense is a great defence!\p"
	.string "You should focus on defensive moves\n"
	.string "such as Barrier and Protect.\p"
	.string "This strategy has helped me get to\n"
	.string "where I am today.$"

Mithrilman_LUMBRIDGE_STATE_2_Text_0:
	.string "???$"

Mithrilman_LUMBRIDGE_STATE_2_Text_1:
	.string "I douth believe the cook seeks\n"
	.string "assistance.\p"
	.string "You should go check with him.$"

Mithrilman_LUMBRIDGE_STATE_2_Text_2:
	.string "Helloust there knave, thee be a\n"
	.string "challenger of the duke thine can tell.\p"
	.string "Whomst am I?\p"
	.string "Look upon me in awe knave, for thine\n"
	.string "amst the greatest of all challengers\l"
	.string "of the PokeScapian realm.\p"
	.string "Thine's a Mithrilman.$"

Mithrilman_LUMBRIDGE_STATE_2_Text_3:
	.string "Mithrilman$"

Mithrilman_LUMBRIDGE_STATE_2_Text_4:
	.string "Morest fabled thanst the Ironmen and\n"
	.string "faster than the Adamantmen.\p"
	.string "The Mithrilman is a challenge upon the\n"
	.string "very spirit ofst PokeScape itself.\p"
	.string "As thy predecessor inst this realm.\p"
	.string "Why doesnt thine show ye, knave, howst\n"
	.string "a true master battles.$"

Mithrilman_LUMBRIDGE_STATE_2_Text_5:
	.string "…$"

Mithrilman_LUMBRIDGE_STATE_3_Text_0:
	.string "Ahaa, it would seemst that thine\n"
	.string "monsters were weakened since the\l"
	.string "Duke's ordeal.\p"
	.string "Thine werest the luckiest, forst thine\n"
	.string "have used all thine 200 cabbages on\l"
	.string "that battle.\p"
	.string "Thus leaving thine cabbage-less for\n"
	.string "the battle with thee knave.\p"
	.string "Yee be lucky knave, forst thine am a\n"
	.string "Mithrilman and thine shalt return and\l"
	.string "glory be rewon!$"
