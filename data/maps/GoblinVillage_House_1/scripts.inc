GoblinVillage_House_1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GoblinVillage_House_1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GoblinVillage_House_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

GoblinVillage_House_1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call GOBLINVILLAGE_STATE
	return

GoblinVillage_House_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_GOBLINVILLAGE_STATE, 0, NPC_GOBLINVILLAGE_PICKAXE_EVENT
	.2byte 0


GOBLINVILLAGE_STATE::
	switch VAR_GOBLINVILLAGE_STATE
	case 0, GOBLINVILLAGE_STATE_3
	case 1, GOBLINVILLAGE_STATE_3
GOBLINVILLAGE_STATE_1:
	return

GOBLINVILLAGE_STATE_3:
	removeobject 5
	setflag FLAG_TEMP_1
	release
	goto GOBLINVILLAGE_STATE_1


NPC_GOBLINVILLAGE_PICKAXE_EVENT::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Goblin_1
	waitmovement 0
	applymovement 2, MOVEMENT_INTERACT_LEFT
	waitmovement 0
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_0
	msgbox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_1
	hidenamebox
	closemessage
	applymovement 1, MOVEMENT_INTERACT_RIGHT
	waitmovement 0
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_2
	msgbox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_3
	hidenamebox
	closemessage
	playse SE_PIN
	applymovement 2, Movement_InteractSURPRISEFACEPLAYER
	waitmovement 0
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_0
	msgbox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_4
	hidenamebox
	closemessage
	applymovement 1, MOVEMENT_INTERACT_RIGHT
	waitmovement 0
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_2
	msgbox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_5
	hidenamebox
	applymovement 1, Movement_InteractFACEPLAYER
	waitmovement 0
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_2
	msgbox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_6
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_INTERACT_UP
	waitmovement 0
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_0
	msgbox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_7
	hidenamebox
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_2
	msgbox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_8
	hidenamebox
	closemessage
	applymovement 2, Movement_InteractFACEUP
	waitmovement 0
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_0
	msgbox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_9
	hidenamebox
	closemessage
	applymovement 2, Movement_InteractFACEPLAYER
	waitmovement 0
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_0
	msgbox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_10
	hidenamebox
	closemessage
	release
	applymovement 1, MOVEMENT_INTERACT_RIGHT
	waitmovement 0
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_2
	msgbox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_11
	hidenamebox
	closemessage
	applymovement 2, MOVEMENT_INTERACT_LEFT
	waitmovement 0
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_0
	msgbox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_12
	hidenamebox
	closemessage
	release
	applymovement 1, MOVEMENT_INTERACT_RIGHT
	applymovement 2, MOVEMENT_INTERACT_LEFT
	waitmovement 0
	applymovement 1, MOVEMENT_INTERACT_RIGHT
	applymovement 2, MOVEMENT_INTERACT_LEFT
	waitmovement 0
	applymovement 3, Movement_InteractFACEPLAYER
	waitmovement 0
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_13
	msgbox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_14
	hidenamebox
	release
	applymovement 1, Movement_InteractFACELEFT
	applymovement 2, Movement_InteractFACELEFT
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACELEFT
	waitmovement 0
	msgbox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_15
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEUP
	applymovement 1, Movement_InteractFACEPLAYER
	applymovement 2, Movement_InteractFACEPLAYER
	waitmovement 0
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_2
	msgbox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_16
	hidenamebox
	closemessage
	call NPC_GOBLINVILLAGE_CHOOSEPICKAXE
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_2
	msgbox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_17
	hidenamebox
	closemessage
	applymovement 2, Movement_InteractFACELEFT
	waitmovement 0
	setvar VAR_GOBLINVILLAGE_STATE, 1
	release
	end


NPC_GOBLINVILLAGE_RECHOOSEPICKAXE::
	applymovement 2, Movement_InteractFACEPLAYER
	waitmovement 0
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_0
	msgbox NPC_GOBLINVILLAGE_RECHOOSEPICKAXE_Text_0
	hidenamebox
	closemessage
	msgbox NPC_GOBLINVILLAGE_RECHOOSEPICKAXE_Text_1
	removeitem ITEM_PICKAXE
	removeitem ITEM_ADAMANTPICKAXE
	removeitem ITEM_BRONZEPICKAXE
	removeitem ITEM_IRONPICKAXE
	removeitem ITEM_STEELPICKAXE
	removeitem ITEM_MITHRILPICKAXE
	removeitem ITEM_RUNEPICKAXE
	removeitem ITEM_BLACKPICKAXE
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_0
	msgbox NPC_GOBLINVILLAGE_RECHOOSEPICKAXE_Text_2
	hidenamebox
	closemessage
	call NPC_GOBLINVILLAGE_CHOOSEPICKAXE
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_0
	msgbox NPC_GOBLINVILLAGE_RECHOOSEPICKAXE_Text_3
	hidenamebox
	closemessage
	return


NPC_GOBLINVILLAGE_CHOOSEPICKAXE::
	multichoicedefault 1, 0, MULTI_COLOUR_PICKAXE, 0, 1
	switch VAR_RESULT
	case 0, NPC_GOBLINVILLAGE_CHOOSEPICKAXE_3
	case 1, NPC_GOBLINVILLAGE_CHOOSEPICKAXE_4
	case 2, NPC_GOBLINVILLAGE_CHOOSEPICKAXE_5
	case 3, NPC_GOBLINVILLAGE_CHOOSEPICKAXE_6
	case 4, NPC_GOBLINVILLAGE_CHOOSEPICKAXE_7
	case 5, NPC_GOBLINVILLAGE_CHOOSEPICKAXE_8
	case 6, NPC_GOBLINVILLAGE_CHOOSEPICKAXE_9
	case 7, NPC_GOBLINVILLAGE_CHOOSEPICKAXE_10
	case 8, NPC_GOBLINVILLAGE_CHOOSEPICKAXE_11
NPC_GOBLINVILLAGE_CHOOSEPICKAXE_1:
	return

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_3:
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_2
	msgbox NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_0
	hidenamebox
	giveitem ITEM_ADAMANTPICKAXE, 1
	goto NPC_GOBLINVILLAGE_CHOOSEPICKAXE_1

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_4:
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_0
	msgbox NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_1
	hidenamebox
	giveitem ITEM_PICKAXE, 1
	goto NPC_GOBLINVILLAGE_CHOOSEPICKAXE_1

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_5:
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_13
	msgbox NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_2
	hidenamebox
	giveitem ITEM_BRONZEPICKAXE, 1
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_0
	msgbox NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_3
	hidenamebox
	closemessage
	goto NPC_GOBLINVILLAGE_CHOOSEPICKAXE_1

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_6:
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_2
	msgbox NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_4
	hidenamebox
	closemessage
	giveitem ITEM_IRONPICKAXE, 1
	goto NPC_GOBLINVILLAGE_CHOOSEPICKAXE_1

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_7:
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_2
	msgbox NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_4
	hidenamebox
	closemessage
	giveitem ITEM_STEELPICKAXE, 1
	goto NPC_GOBLINVILLAGE_CHOOSEPICKAXE_1

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_8:
	playse SE_DOOR
	waitse
	clearflag FLAG_TEMP_1
	addobject 5
	applymovement 5, Movement_InteractFACEUP
	waitmovement 0
	applymovement 5, MOVEMENT_INTERACT_UP
	waitmovement 0
	namebox NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_5
	msgbox NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_6
	hidenamebox
	closemessage
	playse SE_DOOR
	applymovement 5, Movement_InteractFACEDOWN
	waitmovement 0
	setflag FLAG_TEMP_1
	removeobject 5
	waitse
	giveitem ITEM_MITHRILPICKAXE, 1
	goto NPC_GOBLINVILLAGE_CHOOSEPICKAXE_1

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_9:
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_2
	msgbox NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_4
	hidenamebox
	closemessage
	giveitem ITEM_RUNEPICKAXE, 1
	goto NPC_GOBLINVILLAGE_CHOOSEPICKAXE_1

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_10:
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_0
	msgbox NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_4
	hidenamebox
	closemessage
	giveitem ITEM_BLACKPICKAXE, 1
	goto NPC_GOBLINVILLAGE_CHOOSEPICKAXE_1

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_11:
	msgbox NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_7
	closemessage
	goto NPC_GOBLINVILLAGE_CHOOSEPICKAXE
	goto NPC_GOBLINVILLAGE_CHOOSEPICKAXE_1


MOVEMENT_INTERACT_LEFT:
	walk_in_place_left
	walk_in_place_left
	walk_in_place_left
	step_end

MOVEMENT_INTERACT_RIGHT:
	walk_in_place_right
	walk_in_place_right
	walk_in_place_right
	step_end

MOVEMENT_INTERACT_DOWN:
	walk_in_place_down
	walk_in_place_down
	walk_in_place_down
	step_end

MOVEMENT_INTERACT_UP:
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	step_end

Movement_InteractFACEPLAYER:
	face_player
	step_end

Movement_InteractSURPRISEFACEPLAYER:
	emote_question_mark
	delay_16
	face_player
	delay_16
	step_end

Movement_InteractFACEUP:
	face_up
	delay_16
	step_end

Movement_InteractFACELEFT:
	face_left
	delay_16
	step_end

Movement_InteractFACEDOWN:
	face_down
	delay_16
	step_end

Movement_InteractFACERIGHT:
	face_right
	delay_16
	step_end

Movement_Goblin_1:
	delay_16
	delay_16
	delay_16
	walk_up
	walk_up
	delay_16
	step_end

NPC_GOBLINCHEIFS::
	lockall
	applymovement 2, MOVEMENT_INTERACT_LEFT
	waitmovement 0
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_0
	msgbox NPC_GOBLINCHEIFS_Text_0
	hidenamebox
	closemessage
	applymovement 1, MOVEMENT_INTERACT_RIGHT
	waitmovement 0
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_2
	msgbox NPC_GOBLINCHEIFS_Text_1
	hidenamebox
	closemessage
	release
	end


EventScript_New_RockSmash::
	lockall
	setitemarg ITEM_PICKAXE
	checkitem ITEM_PICKAXE, 1
	compare VAR_RESULT, 0
	goto_if_eq EventScript_New_RockSmash_2
EventScript_New_RockSmash_1:
	setfieldeffectargument 0, VAR_RESULT
	msgbox Text_WantToSmash, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_CancelSmash
	closemessage
	dofieldeffect FLDEFF_USE_ROCK_SMASH
	waitstate
	goto EventScript_SmashRock
	end

EventScript_New_RockSmash_2:
	setitemarg ITEM_ADAMANTPICKAXE
	checkitem ITEM_ADAMANTPICKAXE, 1
	compare VAR_RESULT, 0
	goto_if_eq EventScript_New_RockSmash_4
	goto EventScript_New_RockSmash_1

EventScript_New_RockSmash_4:
	setitemarg ITEM_BRONZEPICKAXE
	checkitem ITEM_BRONZEPICKAXE, 1
	compare VAR_RESULT, 0
	goto_if_eq EventScript_New_RockSmash_6
	goto EventScript_New_RockSmash_1

EventScript_New_RockSmash_6:
	setitemarg ITEM_IRONPICKAXE
	checkitem ITEM_IRONPICKAXE, 1
	compare VAR_RESULT, 0
	goto_if_eq EventScript_New_RockSmash_8
	goto EventScript_New_RockSmash_1

EventScript_New_RockSmash_8:
	setitemarg ITEM_STEELPICKAXE
	checkitem ITEM_STEELPICKAXE, 1
	compare VAR_RESULT, 0
	goto_if_eq EventScript_New_RockSmash_10
	goto EventScript_New_RockSmash_1

EventScript_New_RockSmash_10:
	setitemarg ITEM_MITHRILPICKAXE
	checkitem ITEM_MITHRILPICKAXE, 1
	compare VAR_RESULT, 0
	goto_if_eq EventScript_New_RockSmash_12
	goto EventScript_New_RockSmash_1

EventScript_New_RockSmash_12:
	setitemarg ITEM_RUNEPICKAXE
	checkitem ITEM_RUNEPICKAXE, 1
	compare VAR_RESULT, 0
	goto_if_eq EventScript_New_RockSmash_14
	goto EventScript_New_RockSmash_1

EventScript_New_RockSmash_14:
	setitemarg ITEM_BLACKPICKAXE
	checkitem ITEM_BLACKPICKAXE, 1
	compare VAR_RESULT, 0
	goto_if_eq EventScript_New_RockSmash_16
	goto EventScript_New_RockSmash_1

EventScript_New_RockSmash_16:
	goto_if_eq EventScript_CantSmashRock
	goto EventScript_New_RockSmash_1


NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_0:
	.string "WARTFACE$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_1:
	.string "Green armour better!$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_2:
	.string "BENTNOZE$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_3:
	.string "No!\l"
	.string "Red armour better!$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_4:
	.string "Human!$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_5:
	.string "Red hooman better!$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_6:
	.string "Oh actual hooman…\p"
	.string "Hooman what do you want?\p"
	.string "Can you not see we are in important\n"
	.string "discussion!$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_7:
	.string "Pickaxe?\p"
	.string "We do not know about no Pickaxe but we\n"
	.string "know about pointy coloured sticks.$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_8:
	.string "Goblins bring pointy coloured sticks\n"
	.string "back with them after chasing pink\l"
	.string "armoured hoomans off.$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_9:
	.string "Pointy coloured sticks are in box here.$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_10:
	.string "Hooman can have one if hooman agree\n"
	.string "that green stick is better.$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_11:
	.string "No red stick is better!$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_12:
	.string "No!\l"
	.string "Green stick is better!$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_13:
	.string "GRUBFOOT$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_14:
	.string "I think brown pointy stick looks\n"
	.string "better!$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_15:
	.string "…{PAUSE 32}…{PAUSE 32}…$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_16:
	.string "Hooman, you decide for us.\p"
	.string "Which stick is better?$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_17:
	.string "Me hope hooman is happy with stick\n"
	.string "colour.\p"
	.string "Now go away hooman, we have important\n"
	.string "discussion to continue.$"

NPC_GOBLINVILLAGE_RECHOOSEPICKAXE_Text_0:
	.string "Hooman change colour of pointy stick!$"

NPC_GOBLINVILLAGE_RECHOOSEPICKAXE_Text_1:
	.string "The goblin snatches your Pickaxe and\n"
	.string "throws it into the box with the others.$"

NPC_GOBLINVILLAGE_RECHOOSEPICKAXE_Text_2:
	.string "Now choose hooman!$"

NPC_GOBLINVILLAGE_RECHOOSEPICKAXE_Text_3:
	.string "Me hope hooman is happy with stick\n"
	.string "colour.\p"
	.string "Now go away hooman.$"

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_0:
	.string "Hooman choose well!$"

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_1:
	.string "HA!\p"
	.string "In your face Bentnoze!\p"
	.string "Red is best!$"

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_2:
	.string "Hooman agrees with Grubfoot!$"

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_3:
	.string "We are confused why hooman would pick\n"
	.string "boring brown colour.$"

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_4:
	.string "Why is this even an option?$"

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_5:
	.string "MITHRILMAN$"

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_6:
	.string "Now that is the way of Mithrilmen!$"

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_7:
	.string "Hooman, you need to pick one.$"

NPC_GOBLINCHEIFS_Text_0:
	.string "Green!$"

NPC_GOBLINCHEIFS_Text_1:
	.string "Red!$"
