Route28_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route28_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route28_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 11
	call PENGUIN_EVENT
	call WEATHER_CHANGE_ROUTE_SAND
	return


ENCOUNTER_PENGUIN_CACTUS_ROUTE28::
	lock
	faceplayer
	namebox ENCOUNTER_PENGUIN_CACTUS_ROUTE28_Text_0
	playmoncry SPECIES_PENGUIN_DISGUISE_CACTUS_FORM, 0
	msgbox ENCOUNTER_PENGUIN_CACTUS_ROUTE28_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_PENGUIN_DISGUISE_CACTUS_FORM, 15, ITEM_NONE
	dowildbattle
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_PENGUIN_CACTUS_ROUTE28_2
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_PENGUIN_CACTUS_ROUTE28_2
ENCOUNTER_PENGUIN_CACTUS_ROUTE28_1:
	end

ENCOUNTER_PENGUIN_CACTUS_ROUTE28_2:
	fadescreen FADE_TO_BLACK
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_9
	removeobject 14
	removeobject 13
	savebgm MUS_DUMMY
	fadedefaultbgm
	fadescreen FADE_FROM_BLACK
	closemessage
	goto ENCOUNTER_PENGUIN_CACTUS_ROUTE28_1


BLOCK_Alkharid_Guards::
	lock
	faceplayer
	goto_if_unset FLAG_BADGE04_GET, BLOCK_Alkharid_Guards_2
BLOCK_Alkharid_Guards_1:
	msgbox BLOCK_Alkharid_Guards_Text_0
	closemessage
	release
	end

BLOCK_Alkharid_Guards_2:
	goto BLOCK_ALKHARID_GATE
	goto BLOCK_Alkharid_Guards_1


TRIGGER_ALKHARID_GATE::
	goto_if_unset FLAG_BADGE04_GET, TRIGGER_ALKHARID_GATE_2
TRIGGER_ALKHARID_GATE_1:
	release
	end

TRIGGER_ALKHARID_GATE_2:
	goto BLOCK_ALKHARID_GATE
	goto TRIGGER_ALKHARID_GATE_1


BLOCK_ALKHARID_GATE::
	lockall
	applymovement 29, movement_BLOCK_ALKHARID_GATE_1
	applymovement 30, movement_BLOCK_ALKHARID_GATE_2
	waitmovement 0
	msgbox BLOCK_ALKHARID_GATE_Text_0
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, movement_BLOCK_ALKHARID_GATE_3
	applymovement 29, MOVEMENT_FACE_LEFT
	applymovement 30, MOVEMENT_FACE_LEFT
	waitmovement 0
	release
	end


movement_BLOCK_ALKHARID_GATE_1:
	face_down
	step_end

movement_BLOCK_ALKHARID_GATE_2:
	face_up
	step_end

movement_BLOCK_ALKHARID_GATE_3:
	walk_left
	step_end

ALKHARID_GATE_GUARD::
	lockall
	faceplayer
	msgbox BLOCK_ALKHARID_GATE_Text_0
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, movement_BLOCK_ALKHARID_GATE_3
	applymovement 29, MOVEMENT_FACE_LEFT
	applymovement 30, MOVEMENT_FACE_LEFT
	waitmovement 0
	release
	end


BLOCK_DEMO_END::
	lockall
	msgbox BLOCK_DEMO_END_Text_0
	closemessage
	release
	end


BATTLE_ROUTE28_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE28_TRAINER_1, BATTLE_ROUTE28_TRAINER_1_Text_0, BATTLE_ROUTE28_TRAINER_1_Text_1
	msgbox BATTLE_ROUTE28_TRAINER_1_Text_1
	release
	end


BATTLE_ROUTE28_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE28_TRAINER_2, BATTLE_ROUTE28_TRAINER_2_Text_0, BATTLE_ROUTE28_TRAINER_2_Text_1
	msgbox BATTLE_ROUTE28_TRAINER_2_Text_2
	release
	end


BATTLE_ROUTE28_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE28_TRAINER_3, BATTLE_ROUTE28_TRAINER_3_Text_0, BATTLE_ROUTE28_TRAINER_3_Text_1
	msgbox BATTLE_ROUTE28_TRAINER_3_Text_2
	release
	end


BATTLE_ROUTE28_TRAINER_4::
	trainerbattle_single TRAINER_ROUTE28_TRAINER_4, BATTLE_ROUTE28_TRAINER_4_Text_0, BATTLE_ROUTE28_TRAINER_4_Text_1
	msgbox BATTLE_ROUTE28_TRAINER_4_Text_2
	release
	end


BATTLE_ROUTE28_TRAINER_5::
	trainerbattle_single TRAINER_ROUTE28_TRAINER_5, BATTLE_ROUTE28_TRAINER_5_Text_0, BATTLE_ROUTE28_TRAINER_5_Text_1
	msgbox BATTLE_ROUTE28_TRAINER_5_Text_1
	release
	end


ENCOUNTER_PENGUIN_CACTUS_ROUTE28_Text_0:
	.string "Penguin$"

ENCOUNTER_PENGUIN_CACTUS_ROUTE28_Text_1:
	.string "Noot! Noot!$"

BLOCK_Alkharid_Guards_Text_0:
	.string "That is the Al-Kharid Badge!\p"
	.string "You may pass.$"

BLOCK_ALKHARID_GATE_Text_0:
	.string "Halt!\p"
	.string "Only those whom possess the Al-Kharid\n"
	.string "Badge may enter!$"

BLOCK_DEMO_END_Text_0:
	.string "POKESCAPE MESSAGE - PAST THIS POINT\n"
	.string "IS ALL UNFINISHED CONTENT!\p"
	.string "Thank you for playing PokeScape!\p"
	.string "If you wish to proceed be cautious as\n"
	.string "all content is not yet finished.$"

BATTLE_ROUTE28_TRAINER_1_Text_0:
	.string "They assigned me to this boring post on\n"
	.string "the outskirts of town.\p"
	.string "Can you entertain me?$"

BATTLE_ROUTE28_TRAINER_1_Text_1:
	.string "Thank you for the fight.\p"
	.string "I have grown bored of battles now\n"
	.string "though.$"

BATTLE_ROUTE28_TRAINER_2_Text_0:
	.string "Hey you!\p"
	.string "You look worse of than me.\p"
	.string "Lets fight.$"

BATTLE_ROUTE28_TRAINER_2_Text_1:
	.string "This makes no sense I have better\n"
	.string "armour than you.$"

BATTLE_ROUTE28_TRAINER_2_Text_2:
	.string "My friend is looking for Falador.\p"
	.string "Have you seen him?$"

BATTLE_ROUTE28_TRAINER_3_Text_0:
	.string "Al Kharid is past here, allow me to test\n"
	.string "you.$"

BATTLE_ROUTE28_TRAINER_3_Text_1:
	.string "Fine, you pass the test.$"

BATTLE_ROUTE28_TRAINER_3_Text_2:
	.string "Do not give my brothers any trouble\n"
	.string "while visting Al Kharid.$"

BATTLE_ROUTE28_TRAINER_4_Text_0:
	.string "Have you seen any ruins around these\n"
	.string "parts?$"

BATTLE_ROUTE28_TRAINER_4_Text_1:
	.string "You could have just said no…$"

BATTLE_ROUTE28_TRAINER_4_Text_2:
	.string "Oh the pile of rocks over there are the\n"
	.string "ruins I have been looking for!\p"
	.string "I heard that they were magical in some\n"
	.string "way.$"

BATTLE_ROUTE28_TRAINER_5_Text_0:
	.string "Hey lets have a quick duel!$"

BATTLE_ROUTE28_TRAINER_5_Text_1:
	.string "Wow, when I said lets have a quick duel I\n"
	.string "didn't expect it to be that quick.$"
