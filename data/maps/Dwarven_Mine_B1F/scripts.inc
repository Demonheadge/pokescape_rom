Dwarven_Mine_B1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Dwarven_Mine_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Dwarven_Mine_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 43
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Dwarven_Mine_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	call OPENWORLD_STATE_DWARVENMINES
	return

Dwarven_Mine_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	goto DWARVENMINES_QUEST_STATE
	return


OPENWORLD_STATE_DWARVENMINES::
	removeobject 39
	removeobject 51
	removeobject 32
	removeobject 40
	removeobject 33
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	return


DWARVENMINES_QUEST_STATE::
	switch VAR_POKESCAPE_FALADOR_STATE
	case 0, DWARVENMINES_QUEST_STATE_2
	case 1, DWARVENMINES_QUEST_STATE_2
	case 2, DWARVENMINES_QUEST_STATE_2
	case 3, DWARVENMINES_QUEST_STATE_3
	case 4, DWARVENMINES_QUEST_STATE_3
	case 5, DWARVENMINES_QUEST_STATE_3
	return

DWARVENMINES_QUEST_STATE_2:
	removeobject 51
	removeobject 52
	setflag FLAG_TEMP_2
	return

DWARVENMINES_QUEST_STATE_3:
	removeobject 39
	removeobject 51
	removeobject 32
	removeobject 40
	removeobject 33
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	return


NPC_SCORPION::
	lock
	faceplayer
	namebox NPC_SCORPION_Text_0
	playmoncry SPECIES_GLIGAR, 0
	msgbox NPC_SCORPION_Text_1
	waitmoncry
	hidenamebox
	release
	end


NPC_DWARVENMINES_DWARF_1::
	lock
	faceplayer
	namebox NPC_DWARVENMINES_DWARF_1_Text_0
	msgbox NPC_DWARVENMINES_DWARF_1_Text_1
	hidenamebox
	release
	end


NPC_DWARVENMINES_DWARF_2::
	lock
	faceplayer
	namebox NPC_DWARVENMINES_DWARF_1_Text_0
	msgbox NPC_DWARVENMINES_DWARF_2_Text_0
	hidenamebox
	release
	end


NPC_DWARVENMINES_MINECART::
	lock
	msgbox NPC_DWARVENMINES_MINECART_Text_0
	hidenamebox
	release
	end


NPC_DWARVENMINES_DWARF_3::
	lock
	faceplayer
	namebox NPC_DWARVENMINES_DWARF_1_Text_0
	msgbox NPC_DWARVENMINES_DWARF_3_Text_0
	hidenamebox
	release
	end


NPC_DWARVENMINES_DROGO::
	lock
	faceplayer
	namebox NPC_DWARVENMINES_DROGO_Text_0
	msgbox NPC_DWARVENMINES_DROGO_Text_1
	hidenamebox
	release
	end


ITEM_DWARVENMINES_1::
	finditem ITEM_ROCKCAKE
	end


ITEM_DWARVENMINES_2::
	finditem ITEM_GRANITE_POUCH
	end


ITEM_DWARVENMINES_3::
	finditem ITEM_EARTH_RUNE
	end


ITEM_DWARVENMINES_4::
	finditem ITEM_TEA
	end


NPC_FALADORCASTLE_QUEST_PART_3_1::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, DWARVENMINES_MOVEMENT_0_1
	waitmovement 0
	goto NPC_FALADORCASTLE_QUEST_PART_3
	return


NPC_FALADORCASTLE_QUEST_PART_3_2::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, DWARVENMINES_MOVEMENT_0_2
	waitmovement 0
	goto NPC_FALADORCASTLE_QUEST_PART_3
	return


NPC_FALADORCASTLE_QUEST_PART_3_3::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, DWARVENMINES_MOVEMENT_0_3
	waitmovement 0
	goto NPC_FALADORCASTLE_QUEST_PART_3
	return


NPC_FALADORCASTLE_QUEST_PART_3::
	namebox NPC_FALADORCASTLE_QUEST_PART_3_Text_0
	msgbox NPC_FALADORCASTLE_QUEST_PART_3_Text_1
	closemessage
	hidenamebox
	namebox NPC_FALADORCASTLE_QUEST_PART_3_Text_2
	msgbox NPC_FALADORCASTLE_QUEST_PART_3_Text_3
	closemessage
	hidenamebox
	applymovement 39, DWARVENMINES_MOVEMENT_1
	playse SE_PIN
	waitmovement 0
	namebox NPC_FALADORCASTLE_QUEST_PART_3_Text_0
	msgbox NPC_FALADORCASTLE_QUEST_PART_3_Text_4
	closemessage
	hidenamebox
	applymovement 32, DWARVENMINES_MOVEMENT_2
	waitmovement 0
	namebox NPC_FALADORCASTLE_QUEST_PART_3_Text_2
	msgbox NPC_FALADORCASTLE_QUEST_PART_3_Text_5
	closemessage
	hidenamebox
	applymovement 39, DWARVENMINES_MOVEMENT_6
	waitmovement 0
	namebox NPC_FALADORCASTLE_QUEST_PART_3_Text_0
	msgbox NPC_FALADORCASTLE_QUEST_PART_3_Text_6
	closemessage
	hidenamebox
	applymovement 32, DWARVENMINES_MOVEMENT_7
	waitmovement 0
	namebox NPC_FALADORCASTLE_QUEST_PART_3_Text_2
	msgbox NPC_FALADORCASTLE_QUEST_PART_3_Text_7
	closemessage
	hidenamebox
	applymovement 39, DWARVENMINES_MOVEMENT_4
	applymovement 32, DWARVENMINES_MOVEMENT_3
	applymovement OBJ_EVENT_ID_PLAYER, DWARVENMINES_MOVEMENT_5
	waitmovement 0
	playbgm MUS_PS_ENCOUNTER_HAM, 1
	namebox NPC_FALADORCASTLE_QUEST_PART_3_Text_2
	msgbox NPC_FALADORCASTLE_QUEST_PART_3_Text_8
	closemessage
	hidenamebox
	applymovement 40, DWARVENMINES_MOVEMENT_2
	applymovement 33, DWARVENMINES_MOVEMENT_2
	waitmovement 0
	namebox NPC_FALADORCASTLE_QUEST_PART_3_Text_9
	msgbox NPC_FALADORCASTLE_QUEST_PART_3_Text_10
	closemessage
	hidenamebox
	addobject 51
	addobject 52
	clearflag FLAG_TEMP_2
	applymovement 51, DWARVENMINES_MOVEMENT_8
	applymovement 52, DWARVENMINES_MOVEMENT_10
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, DWARVENMINES_MOVEMENT_7
	applymovement 32, DWARVENMINES_MOVEMENT_7
	waitmovement 0
	namebox NPC_FALADORCASTLE_QUEST_PART_3_Text_2
	msgbox NPC_FALADORCASTLE_QUEST_PART_3_Text_11
	closemessage
	hidenamebox
	namebox NPC_FALADORCASTLE_QUEST_PART_3_Text_12
	msgbox NPC_FALADORCASTLE_QUEST_PART_3_Text_13
	closemessage
	hidenamebox
	applymovement 32, DWARVENMINES_MOVEMENT_2
	applymovement OBJ_EVENT_ID_PLAYER, DWARVENMINES_MOVEMENT_9
	waitmovement 0
	namebox NPC_FALADORCASTLE_QUEST_PART_3_Text_2
	msgbox NPC_FALADORCASTLE_QUEST_PART_3_Text_14
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, DWARVENMINES_MOVEMENT_7
	applymovement 32, DWARVENMINES_MOVEMENT_9
	waitmovement 0
	namebox NPC_FALADORCASTLE_QUEST_PART_3_Text_15
	msgbox NPC_FALADORCASTLE_QUEST_PART_3_Text_16
	closemessage
	hidenamebox
	trainerbattle_no_intro TRAINER_DWARVENMINES_HAM, NPC_FALADORCASTLE_QUEST_PART_3_Text_17
	namebox NPC_FALADORCASTLE_QUEST_PART_3_Text_15
	msgbox NPC_FALADORCASTLE_QUEST_PART_3_Text_18
	closemessage
	hidenamebox
	namebox NPC_FALADORCASTLE_QUEST_PART_3_Text_12
	msgbox NPC_FALADORCASTLE_QUEST_PART_3_Text_19
	closemessage
	hidenamebox
	applymovement 32, DWARVENMINES_MOVEMENT_7
	waitmovement 0
	namebox NPC_FALADORCASTLE_QUEST_PART_3_Text_2
	msgbox NPC_FALADORCASTLE_QUEST_PART_3_Text_20
	closemessage
	hidenamebox
	namebox NPC_FALADORCASTLE_QUEST_PART_3_Text_12
	msgbox NPC_FALADORCASTLE_QUEST_PART_3_Text_21
	closemessage
	hidenamebox
	namebox NPC_FALADORCASTLE_QUEST_PART_3_Text_2
	msgbox NPC_FALADORCASTLE_QUEST_PART_3_Text_22
	applymovement 32, DWARVENMINES_MOVEMENT_2
	waitmovement 0
	msgbox NPC_FALADORCASTLE_QUEST_PART_3_Text_23
	closemessage
	hidenamebox
	savebgm MUS_DUMMY
	fadedefaultbgm
	fadescreen FADE_TO_BLACK
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	removeobject 40
	removeobject 33
	removeobject 39
	removeobject 51
	removeobject 52
	removeobject 32
	setvar VAR_POKESCAPE_FALADOR_STATE, 3
	fadescreen FADE_FROM_BLACK
	release
	end


DWARVENMINES_MOVEMENT_0_1:
	walk_up
	walk_right
	face_up
	step_end

DWARVENMINES_MOVEMENT_0_2:
	walk_up
	walk_right
	walk_right
	face_up
	step_end

DWARVENMINES_MOVEMENT_0_3:
	walk_up
	face_up
	step_end

DWARVENMINES_MOVEMENT_1:
	emote_exclamation_mark
	delay_16
	delay_16
	face_down
	step_end

DWARVENMINES_MOVEMENT_2:
	face_down
	step_end

DWARVENMINES_MOVEMENT_3:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	step_end

DWARVENMINES_MOVEMENT_4:
	walk_right
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	step_end

DWARVENMINES_MOVEMENT_5:
	delay_8
	delay_8
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

DWARVENMINES_MOVEMENT_6:
	face_right
	step_end

DWARVENMINES_MOVEMENT_7:
	face_left
	step_end

DWARVENMINES_MOVEMENT_8:
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_right
	step_end

DWARVENMINES_MOVEMENT_9:
	face_up
	step_end

DWARVENMINES_MOVEMENT_10:
	walk_fast_right
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_right
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	face_right
	step_end

BATTLE_DWARVENMINES_SKILLER::
	trainerbattle_single TRAINER_DWARVENMINES_SKILLER, BATTLE_DWARVENMINES_SKILLER_Text_0, BATTLE_DWARVENMINES_SKILLER_Text_1
	namebox BATTLE_DWARVENMINES_SKILLER_Text_2
	msgbox BATTLE_DWARVENMINES_SKILLER_Text_1
	hidenamebox
	release
	end


BATTLE_DWARVENMINES_MINER::
	trainerbattle_single TRAINER_DWARVENMINES_MINER, BATTLE_DWARVENMINES_MINER_Text_0, BATTLE_DWARVENMINES_MINER_Text_1
	namebox BATTLE_DWARVENMINES_MINER_Text_2
	msgbox BATTLE_DWARVENMINES_MINER_Text_1
	hidenamebox
	release
	end


BATTLE_DWARVENMINES_DWARF_1::
	trainerbattle_single TRAINER_DWARVENMINES_DWARF_1, BATTLE_DWARVENMINES_DWARF_1_Text_0, BATTLE_DWARVENMINES_DWARF_1_Text_1
	namebox BATTLE_DWARVENMINES_DWARF_1_Text_2
	msgbox BATTLE_DWARVENMINES_DWARF_1_Text_1
	hidenamebox
	release
	end


BATTLE_DWARVENMINES_DWARF_2::
	trainerbattle_single TRAINER_DWARVENMINES_DWARF_2, BATTLE_DWARVENMINES_DWARF_2_Text_0, BATTLE_DWARVENMINES_DWARF_2_Text_1
	namebox BATTLE_DWARVENMINES_DWARF_2_Text_2
	msgbox BATTLE_DWARVENMINES_DWARF_2_Text_1
	hidenamebox
	release
	end


BATTLE_DWARVENMINES_DWARF_3::
	trainerbattle_single TRAINER_DWARVENMINES_DWARF_3, BATTLE_DWARVENMINES_DWARF_3_Text_0, BATTLE_DWARVENMINES_DWARF_3_Text_1
	namebox BATTLE_DWARVENMINES_DWARF_3_Text_2
	msgbox BATTLE_DWARVENMINES_DWARF_3_Text_1
	hidenamebox
	release
	end


BATTLE_DWARVENMINES_DWARF_4::
	trainerbattle_single TRAINER_DWARVENMINES_DWARF_4, BATTLE_DWARVENMINES_DWARF_4_Text_0, BATTLE_DWARVENMINES_DWARF_4_Text_1
	namebox BATTLE_DWARVENMINES_DWARF_4_Text_2
	msgbox BATTLE_DWARVENMINES_DWARF_4_Text_1
	hidenamebox
	release
	end


NPC_SCORPION_Text_0:
	.string "SCORPION$"

NPC_SCORPION_Text_1:
	.string "Snipersnip!$"

NPC_DWARVENMINES_DWARF_1_Text_0:
	.string "DWARF$"

NPC_DWARVENMINES_DWARF_1_Text_1:
	.string "Sorry we are currently undergoing a\n"
	.string "Mining & Smithing rework.\p"
	.string "Please come again later.$"

NPC_DWARVENMINES_DWARF_2_Text_0:
	.string "There has been a cave-in within the\n"
	.string "Motherlode Mine, it might take us\l"
	.string "awhile to clear it.\p"
	.string "I feel for those poor adventurers\n"
	.string "trapped inside when it clapsed though.$"

NPC_DWARVENMINES_MINECART_Text_0:
	.string "There seems to be nothing inside this\n"
	.string "minecart apart from a very boring\l"
	.string "looking scroll.$"

NPC_DWARVENMINES_DWARF_3_Text_0:
	.string "My job is to unload the ores from these\n"
	.string "carts and get them ready for\l"
	.string "transportation.\p"
	.string "It can be a hard job when you are\n"
	.string "sorting through the ores only to find\l"
	.string "some Scoprions nibbling on Earth\l"
	.string "Runes.$"

NPC_DWARVENMINES_DROGO_Text_0:
	.string "Drogo$"

NPC_DWARVENMINES_DROGO_Text_1:
	.string "'Ello, welcome to my Mining shop, friend!\p"
	.string "Is what I would say if I had any stock\n"
	.string "left! Sorry, I'm still waiting on more\l"
	.string "supplies arriving from Keldagrim.\p"
	.string "Please come back again later!$"

NPC_FALADORCASTLE_QUEST_PART_3_Text_0:
	.string "Sir Theodore$"

NPC_FALADORCASTLE_QUEST_PART_3_Text_1:
	.string "Those men went that way.\n"
	.string "They have cornered themselves.$"

NPC_FALADORCASTLE_QUEST_PART_3_Text_2:
	.string "Sir Owen$"

NPC_FALADORCASTLE_QUEST_PART_3_Text_3:
	.string "Great work Theodore, let's go get them!$"

NPC_FALADORCASTLE_QUEST_PART_3_Text_4:
	.string "Wait sir, we have an issue.$"

NPC_FALADORCASTLE_QUEST_PART_3_Text_5:
	.string "Are you an MvM challenger perhaps?\p"
	.string "Fantastic!\p"
	.string "Could I please ask of you to assist us\n"
	.string "with some backup in case things get a\l"
	.string "bit ugly?\p"
	.string "You see we are about to apprehend some\n"
	.string "suspicious men that have been causing\l"
	.string "a disturbance in the mines.$"

NPC_FALADORCASTLE_QUEST_PART_3_Text_6:
	.string "Sir, if we don't act now they will get\n"
	.string "away.$"

NPC_FALADORCASTLE_QUEST_PART_3_Text_7:
	.string "Right you are Theodore, with us\n"
	.string "challenger!$"

NPC_FALADORCASTLE_QUEST_PART_3_Text_8:
	.string "HALT!\l"
	.string "You have no where to go!$"

NPC_FALADORCASTLE_QUEST_PART_3_Text_9:
	.string "H.A.M Member$"

NPC_FALADORCASTLE_QUEST_PART_3_Text_10:
	.string "Keke you stole our line.$"

NPC_FALADORCASTLE_QUEST_PART_3_Text_11:
	.string "What is this!?\p"
	.string "The Black Knights?!$"

NPC_FALADORCASTLE_QUEST_PART_3_Text_12:
	.string "Black Knight$"

NPC_FALADORCASTLE_QUEST_PART_3_Text_13:
	.string "Time to get rid of you pesky White\n"
	.string "Knights once and for all!$"

NPC_FALADORCASTLE_QUEST_PART_3_Text_14:
	.string "Looks like we are in a tight spot.\p"
	.string "I'll take these two.\p"
	.string "Theodore, Challenger, I trust you know\n"
	.string "what to do.$"

NPC_FALADORCASTLE_QUEST_PART_3_Text_15:
	.string "H.A.M Grunt$"

NPC_FALADORCASTLE_QUEST_PART_3_Text_16:
	.string "You stand no chance!$"

NPC_FALADORCASTLE_QUEST_PART_3_Text_17:
	.string "Blasted White Knights!$"

NPC_FALADORCASTLE_QUEST_PART_3_Text_18:
	.string "So strong…$"

NPC_FALADORCASTLE_QUEST_PART_3_Text_19:
	.string "No matter grunts, we have already won.$"

NPC_FALADORCASTLE_QUEST_PART_3_Text_20:
	.string "What do you mean you have already won?$"

NPC_FALADORCASTLE_QUEST_PART_3_Text_21:
	.string "Kahaha!\l"
	.string "This was but a mere distraction!\p"
	.string "Our agent would have escaped with the\n"
	.string "goods by now.$"

NPC_FALADORCASTLE_QUEST_PART_3_Text_22:
	.string "I will still be bringing you four in for\n"
	.string "questioning.$"

NPC_FALADORCASTLE_QUEST_PART_3_Text_23:
	.string "Thank you for your assistance\n"
	.string "challenger.\p"
	.string "I will be seeing you at the castle.$"

BATTLE_DWARVENMINES_SKILLER_Text_0:
	.string "Please dont approach me.\p"
	.string "I have a terrible bodyguard and I am\n"
	.string "not afraid to use it!$"

BATTLE_DWARVENMINES_SKILLER_Text_1:
	.string "Hired help is all a skiller can rely on\n"
	.string "against level 16 scorpions.$"

BATTLE_DWARVENMINES_SKILLER_Text_2:
	.string "Treet0ps$"

BATTLE_DWARVENMINES_MINER_Text_0:
	.string "All I can find is coal around here.\p"
	.string "Do you know where there is any runite?$"

BATTLE_DWARVENMINES_MINER_Text_1:
	.string "Mining Guild?\l"
	.string "Do I need to pay them?$"

BATTLE_DWARVENMINES_MINER_Text_2:
	.string "D33pD1v3$"

BATTLE_DWARVENMINES_DWARF_1_Text_0:
	.string "Someone took my lunch.\p"
	.string "Now I am angry!$"

BATTLE_DWARVENMINES_DWARF_1_Text_1:
	.string "To subside my anger I need to eat.\p"
	.string "But there is nothing left.$"

BATTLE_DWARVENMINES_DWARF_1_Text_2:
	.string "Sverre$"

BATTLE_DWARVENMINES_DWARF_2_Text_0:
	.string "Stop, you are trespassing on dwarven\n"
	.string "land!$"

BATTLE_DWARVENMINES_DWARF_2_Text_1:
	.string "Theres no respect for racially\n"
	.string "established borders for you\l"
	.string "adventurers.$"

BATTLE_DWARVENMINES_DWARF_2_Text_2:
	.string "Steinar$"

BATTLE_DWARVENMINES_DWARF_3_Text_0:
	.string "They say deep down under this mountain\n"
	.string "the rocks move.\p"
	.string "Lets fight to that.$"

BATTLE_DWARVENMINES_DWARF_3_Text_1:
	.string "Maybe the ones who told the story were\n"
	.string "just drunks?$"

BATTLE_DWARVENMINES_DWARF_3_Text_2:
	.string "Valdemar$"

BATTLE_DWARVENMINES_DWARF_4_Text_0:
	.string "I come from the deepest part of this\n"
	.string "mountain.\p"
	.string "The things I have seen would shock you!$"

BATTLE_DWARVENMINES_DWARF_4_Text_1:
	.string "The rocks… they moves.\p"
	.string "They moved!$"

BATTLE_DWARVENMINES_DWARF_4_Text_2:
	.string "Drobak$"
