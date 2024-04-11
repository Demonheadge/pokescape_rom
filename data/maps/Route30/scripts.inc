Route30_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route30_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route30_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 16
	call MoveNPCsAfterEvents_WILDERNESS_BLOCK
	return


WILDERNESS_SIGNPOST::
	msgbox WILDERNESS_SIGNPOST_Text_0
	closemessage
	release
	end


BLOCKADE_ROUTE30_WILDERNESS::
	compare VAR_WILDERNESS_BLOCK_STATE, 1
	goto_if_eq BLOCKADE_ROUTE30_WILDERNESS_1
	faceplayer
	namebox BLOCKADE_ROUTE30_WILDERNESS_Text_0
	msgbox BLOCKADE_ROUTE30_WILDERNESS_Text_1
	closemessage
	hidenamebox
	call BLOCKADE_ROUTE30_WILDERNESS_2
	closemessage
	hidenamebox
	release
	end

BLOCKADE_ROUTE30_WILDERNESS_1:
	goto BLOCKADE_ROUTE30_WILDERNESS_3
	return


BLOCKADE_ROUTE30_WILDERNESS_2::
	goto_if_set FLAG_BADGE01_GET, BLOCKADE_ROUTE30_WILDERNESS_2_5
BLOCKADE_ROUTE30_WILDERNESS_2_3:
	msgbox BLOCKADE_ROUTE30_WILDERNESS_2_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne BLOCKADE_ROUTE30_WILDERNESS_2_19
	namebox BLOCKADE_ROUTE30_WILDERNESS_Text_0
	msgbox BLOCKADE_ROUTE30_WILDERNESS_2_Text_3
	return

BLOCKADE_ROUTE30_WILDERNESS_2_1:
	fadescreen FADE_TO_BLACK
	setvar VAR_WILDERNESS_BLOCK_STATE, 1
	setflag FLAG_TEMP_1
	removeobject 6
	removeobject 7
	removeobject 8
	removeobject 9
	call MoveNPCsAfterEvents_WILDERNESS_BLOCK
	special DrawWholeMapView
	closemessage
	hidenamebox
	fadescreen FADE_FROM_BLACK
	return

BLOCKADE_ROUTE30_WILDERNESS_2_2:
	namebox BLOCKADE_ROUTE30_WILDERNESS_Text_0
	msgbox BLOCKADE_ROUTE30_WILDERNESS_2_Text_0
	goto BLOCKADE_ROUTE30_WILDERNESS_2_1

BLOCKADE_ROUTE30_WILDERNESS_2_4:
	goto_if_set FLAG_BADGE03_GET, BLOCKADE_ROUTE30_WILDERNESS_2_9
	goto BLOCKADE_ROUTE30_WILDERNESS_2_3

BLOCKADE_ROUTE30_WILDERNESS_2_5:
	goto_if_set FLAG_BADGE02_GET, BLOCKADE_ROUTE30_WILDERNESS_2_4
	goto BLOCKADE_ROUTE30_WILDERNESS_2_3

BLOCKADE_ROUTE30_WILDERNESS_2_8:
	goto_if_set FLAG_BADGE05_GET, BLOCKADE_ROUTE30_WILDERNESS_2_13
	goto BLOCKADE_ROUTE30_WILDERNESS_2_3

BLOCKADE_ROUTE30_WILDERNESS_2_9:
	goto_if_set FLAG_BADGE04_GET, BLOCKADE_ROUTE30_WILDERNESS_2_8
	goto BLOCKADE_ROUTE30_WILDERNESS_2_3

BLOCKADE_ROUTE30_WILDERNESS_2_12:
	goto_if_set FLAG_BADGE07_GET, BLOCKADE_ROUTE30_WILDERNESS_2_16
	goto BLOCKADE_ROUTE30_WILDERNESS_2_3

BLOCKADE_ROUTE30_WILDERNESS_2_13:
	goto_if_set FLAG_BADGE06_GET, BLOCKADE_ROUTE30_WILDERNESS_2_12
	goto BLOCKADE_ROUTE30_WILDERNESS_2_3

BLOCKADE_ROUTE30_WILDERNESS_2_16:
	goto_if_set FLAG_BADGE08_GET, BLOCKADE_ROUTE30_WILDERNESS_2_2
	goto BLOCKADE_ROUTE30_WILDERNESS_2_3

BLOCKADE_ROUTE30_WILDERNESS_2_19:
	namebox BLOCKADE_ROUTE30_WILDERNESS_Text_0
	msgbox BLOCKADE_ROUTE30_WILDERNESS_2_Text_2
	goto BLOCKADE_ROUTE30_WILDERNESS_2_1


BLOCKADE_ROUTE30_WILDERNESS_3::
	faceplayer
	namebox BLOCKADE_ROUTE30_WILDERNESS_Text_0
	msgbox BLOCKADE_ROUTE30_WILDERNESS_3_Text_0
	closemessage
	hidenamebox
	release
	end


MoveNPCsAfterEvents_WILDERNESS_BLOCK::
	switch VAR_WILDERNESS_BLOCK_STATE
	case 0, MoveNPCsAfterEvents_WILDERNESS_BLOCK_2
	case 1, MoveNPCsAfterEvents_WILDERNESS_BLOCK_3
	return

MoveNPCsAfterEvents_WILDERNESS_BLOCK_2:
	return

MoveNPCsAfterEvents_WILDERNESS_BLOCK_3:
	setobjectxyperm 6, 11, 7
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 7, 12, 7
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_DOWN_AND_LEFT
	setobjectxyperm 8, 37, 4
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_DOWN_AND_LEFT
	setobjectxyperm 9, 36, 3
	setobjectmovementtype 9, MOVEMENT_TYPE_LOOK_AROUND
	return


NPC_ROUTE30_PKER::
	faceplayer
	namebox NPC_ROUTE30_PKER_Text_0
	msgbox NPC_ROUTE30_PKER_Text_1
	goto_if_unset FLAG_RECEIVED_TM37_DARKERMANZ, NPC_ROUTE30_PKER_2
NPC_ROUTE30_PKER_1:
	closemessage
	hidenamebox
	release
	end

NPC_ROUTE30_PKER_2:
	msgbox NPC_ROUTE30_PKER_Text_2
	closemessage
	hidenamebox
	giveitem ITEM_TM37_THOUSAND_ARROWS
	namebox NPC_ROUTE30_PKER_Text_0
	msgbox NPC_ROUTE30_PKER_Text_3
	setflag FLAG_RECEIVED_TM37_DARKERMANZ
	goto NPC_ROUTE30_PKER_1


BATTLE_ROUTE30_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE30_TRAINER_1, BATTLE_ROUTE30_TRAINER_1_Text_0, BATTLE_ROUTE30_TRAINER_1_Text_1
	namebox BATTLE_ROUTE30_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE30_TRAINER_1_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE30_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE30_TRAINER_2, BATTLE_ROUTE30_TRAINER_2_Text_0, BATTLE_ROUTE30_TRAINER_2_Text_1
	namebox BATTLE_ROUTE30_TRAINER_2_Text_2
	msgbox BATTLE_ROUTE30_TRAINER_2_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE30_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE30_TRAINER_3, BATTLE_ROUTE30_TRAINER_3_Text_0, BATTLE_ROUTE30_TRAINER_3_Text_1
	namebox BATTLE_ROUTE30_TRAINER_3_Text_2
	msgbox BATTLE_ROUTE30_TRAINER_3_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE30_TRAINER_4::
	trainerbattle_single TRAINER_ROUTE30_TRAINER_4, BATTLE_ROUTE30_TRAINER_4_Text_0, BATTLE_ROUTE30_TRAINER_4_Text_1
	namebox BATTLE_ROUTE30_TRAINER_4_Text_2
	msgbox BATTLE_ROUTE30_TRAINER_4_Text_3
	hidenamebox
	release
	end


WILDERNESS_SIGNPOST_Text_0:
	.string "DANGER!\p"
	.string "Beyond this point you are not safe.\p"
	.string "There is a high chance that strong wild\n"
	.string "Monsters and Pkers will attack you.$"

BLOCKADE_ROUTE30_WILDERNESS_Text_0:
	.string "Guard$"

BLOCKADE_ROUTE30_WILDERNESS_Text_1:
	.string "Beyond here lies the Wilderness.\p"
	.string "It is full of many dangerous monsters\n"
	.string "and people.\p"
	.string "The king has posted us here to only\n"
	.string "allow those whomst have proved\l"
	.string "themselves able to defend themselves.$"

BLOCKADE_ROUTE30_WILDERNESS_2_Text_0:
	.string "Impressive!\p"
	.string "You have all of the MvM Badges, you\n"
	.string "seem like you are well prepared to now\l"
	.string "face the Wilderness!\p"
	.string "Good luck on your MvM Championships\n"
	.string "Journey!$"

BLOCKADE_ROUTE30_WILDERNESS_2_Text_1:
	.string "WARNING - It is recommended that you\n"
	.string "have at least 8 Gym Badges before\l"
	.string "proceeding.\p"
	.string "Would you like to pass and enter the\n"
	.string "Wilderness?$"

BLOCKADE_ROUTE30_WILDERNESS_2_Text_2:
	.string "You may pass but do not say we didn't\n"
	.string "warn you.$"

BLOCKADE_ROUTE30_WILDERNESS_2_Text_3:
	.string "A wise choice, it can be very dangerous\n"
	.string "out there for those who are not\l"
	.string "prepared.$"

BLOCKADE_ROUTE30_WILDERNESS_3_Text_0:
	.string "The Wilderness is a dangerous place.\p"
	.string "Make sure you are always cautious while\n"
	.string "traversing it.$"

NPC_ROUTE30_PKER_Text_0:
	.string "Darkermanz$"

NPC_ROUTE30_PKER_Text_1:
	.string "There is nothing more satisfying than\n"
	.string "spec'ing someone out.\p"
	.string "I love using the move Dark Descent to\n"
	.string "take my competition out of the game.$"

NPC_ROUTE30_PKER_Text_2:
	.string "Here I'll share this with you so you can\n"
	.string "understand what I mean.$"

NPC_ROUTE30_PKER_Text_3:
	.string "You should try Dark Descent out on\n"
	.string "some noobs in the Wilderness.$"

BATTLE_ROUTE30_TRAINER_1_Text_0:
	.string "I knew this would work, you wanted that\n"
	.string "item didn't you!\p"
	.string "Hah!\n"
	.string "It was a lure all along!$"

BATTLE_ROUTE30_TRAINER_1_Text_1:
	.string "What?! I've been anti-lured.$"

BATTLE_ROUTE30_TRAINER_1_Text_2:
	.string "Black Knight$"

BATTLE_ROUTE30_TRAINER_1_Text_3:
	.string "I cannot believe I got anti-lured, I\n"
	.string "hope the other knights don't hear\l"
	.string "about this.\p"
	.string "Just take your loot and go.$"

BATTLE_ROUTE30_TRAINER_2_Text_0:
	.string "Since I cannot PK you, I'll challenge\n"
	.string "you to a battle instead!$"

BATTLE_ROUTE30_TRAINER_2_Text_1:
	.string "You are lucky you weren't in the\n"
	.string "Wilderness.$"

BATTLE_ROUTE30_TRAINER_2_Text_2:
	.string "Bonbloc$"

BATTLE_ROUTE30_TRAINER_2_Text_3:
	.string "I am on my way to the Jolly Boar in to\n"
	.string "split the loot I got while Pking.$"

BATTLE_ROUTE30_TRAINER_3_Text_0:
	.string "Woah, woah, woah!\p"
	.string "What seems to be the rush?\p"
	.string "Why not stay for a battle.$"

BATTLE_ROUTE30_TRAINER_3_Text_1:
	.string "That was over so fast!$"

BATTLE_ROUTE30_TRAINER_3_Text_2:
	.string "Youbleedred$"

BATTLE_ROUTE30_TRAINER_3_Text_3:
	.string "Wow you have some skills!\p"
	.string "We should rush some noobs together in\n"
	.string "the Wilderness one time.$"

BATTLE_ROUTE30_TRAINER_4_Text_0:
	.string "I've been digging these ruins up all day,\n"
	.string "I could use a break.\p"
	.string "Say lets have a battle!$"

BATTLE_ROUTE30_TRAINER_4_Text_1:
	.string "I think we have uncovered your\n"
	.string "potential!$"

BATTLE_ROUTE30_TRAINER_4_Text_2:
	.string "Archaeologist$"

BATTLE_ROUTE30_TRAINER_4_Text_3:
	.string "These ruins look like they used to\n"
	.string "belong to others followers of Zamorak,\l"
	.string "but I'll need to do more research to be\l"
	.string "certain.$"
