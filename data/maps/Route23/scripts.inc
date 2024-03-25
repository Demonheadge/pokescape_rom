Route23_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route23_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route23_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 3
	call ROUTE23_STATE
	return


ROUTE23_STATE::
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 150
	goto_if_ge ROUTE23_STATE_1
	removeobject 11
	removeobject 10
	setflag FLAG_TEMP_1F
	return

ROUTE23_STATE_1:
	addobject 11
	addobject 10
	clearflag FLAG_TEMP_1F
	return


NPC_ROUTE23_BLOCKADE_DWARVES::
	lock
	faceplayer
	namebox NPC_ROUTE23_BLOCKADE_DWARVES_Text_0
	msgbox NPC_ROUTE23_BLOCKADE_DWARVES_Text_1
	waitmessage
	hidenamebox
	release
	end


BATTLE_ROUTE23_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE23_TRAINER_1, BATTLE_ROUTE23_TRAINER_1_Text_0, BATTLE_ROUTE23_TRAINER_1_Text_1
	msgbox BATTLE_ROUTE23_TRAINER_1_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE23_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE23_TRAINER_2, BATTLE_ROUTE23_TRAINER_2_Text_0, BATTLE_ROUTE23_TRAINER_2_Text_1
	msgbox BATTLE_ROUTE23_TRAINER_2_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE23_TRAINER_BARB_COUPLE_1::
	trainerbattle_double TRAINER_ROUTE23_TRAINER_COUPLE, BATTLE_ROUTE23_TRAINER_BARB_COUPLE_1_Text_0, BATTLE_ROUTE23_TRAINER_BARB_COUPLE_1_Text_1, BATTLE_ROUTE23_TRAINER_BARB_COUPLE_1_Text_2
	namebox BATTLE_ROUTE23_TRAINER_BARB_COUPLE_1_Text_3
	msgbox BATTLE_ROUTE23_TRAINER_BARB_COUPLE_1_Text_4
	hidenamebox
	release
	end


BATTLE_ROUTE23_TRAINER_BARB_COUPLE_2::
	trainerbattle_double TRAINER_ROUTE23_TRAINER_COUPLE, BATTLE_ROUTE23_TRAINER_BARB_COUPLE_2_Text_0, BATTLE_ROUTE23_TRAINER_BARB_COUPLE_1_Text_1, BATTLE_ROUTE23_TRAINER_BARB_COUPLE_1_Text_2
	namebox BATTLE_ROUTE23_TRAINER_BARB_COUPLE_2_Text_1
	msgbox BATTLE_ROUTE23_TRAINER_BARB_COUPLE_2_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE23_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE23_TRAINER_3, BATTLE_ROUTE23_TRAINER_3_Text_0, BATTLE_ROUTE23_TRAINER_3_Text_1
	msgbox BATTLE_ROUTE23_TRAINER_3_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE23_TRAINER_4::
	trainerbattle_single TRAINER_ROUTE23_TRAINER_4, BATTLE_ROUTE23_TRAINER_4_Text_0, BATTLE_ROUTE23_TRAINER_4_Text_1
	msgbox BATTLE_ROUTE23_TRAINER_4_Text_1
	hidenamebox
	release
	end


SCRIPT_PHEONIX_EGG::
	lock
	msgbox SCRIPT_PHEONIX_EGG_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq SCRIPT_PHEONIX_EGG_2
	msgbox SCRIPT_PHEONIX_EGG_Text_2
	multichoicedefault 1, 0, MULTI_PHEONIXEGG, 0, 1
	switch VAR_RESULT
	case 0, SCRIPT_PHEONIX_EGG_5
	case 1, SCRIPT_PHEONIX_EGG_6
	return

SCRIPT_PHEONIX_EGG_2:
	msgbox SCRIPT_PHEONIX_EGG_Text_1
	release
	end

SCRIPT_PHEONIX_EGG_5:
	goto SCRIPT_PHEONIX_EGG_CLAP
	return

SCRIPT_PHEONIX_EGG_6:
	goto SCRIPT_PHEONIX_EGG_KICK
	return


SCRIPT_PHEONIX_EGG_CLAP::
	msgbox SCRIPT_PHEONIX_EGG_CLAP_Text_0
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	msgbox SCRIPT_PHEONIX_EGG_CLAP_Text_1
	goto_if_eq SCRIPT_PHEONIX_EGG_NOROOM
	setflag FLAG_RECEIVED_PHOENIX_EGG
	removeobject 3
	playfanfare MUS_OBTAIN_ITEM
	msgbox SCRIPT_PHEONIX_EGG_CLAP_Text_2
	waitfanfare
	giveegg SPECIES_PHOENLING_REBIRTH_FORM
	release
	end


SCRIPT_PHEONIX_EGG_KICK::
	msgbox SCRIPT_PHEONIX_EGG_KICK_Text_0
	playse SE_WALL_HIT
	msgbox SCRIPT_PHEONIX_EGG_KICK_Text_1
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	msgbox SCRIPT_PHEONIX_EGG_CLAP_Text_1
	goto_if_eq SCRIPT_PHEONIX_EGG_NOROOM
	setflag FLAG_RECEIVED_PHOENIX_EGG
	removeobject 3
	playfanfare MUS_OBTAIN_ITEM
	msgbox SCRIPT_PHEONIX_EGG_KICK_Text_2
	waitfanfare
	giveegg SPECIES_PHOENLING_REBORN_FORM
	release
	end


SCRIPT_PHEONIX_EGG_NOROOM::
	msgbox SCRIPT_PHEONIX_EGG_NOROOM_Text_0
	release
	end


NPC_ROUTE23_BLOCKADE_DWARVES_Text_0:
	.string "Dwarf$"

NPC_ROUTE23_BLOCKADE_DWARVES_Text_1:
	.string "There has been a landslide on Ice\n"
	.string "Mountain, we are currently cleaning up.\p"
	.string "Come back later.$"

BATTLE_ROUTE23_TRAINER_1_Text_0:
	.string "My cart just broke down, I've sent an\n"
	.string "adventurer off to fix it.\p"
	.string "While I wait lets have a battle!$"

BATTLE_ROUTE23_TRAINER_1_Text_1:
	.string "Thanks for passing the time with me.$"

BATTLE_ROUTE23_TRAINER_1_Text_2:
	.string "There have been lots of landslides\n"
	.string "around Ice Mountain lately, I am not\l"
	.string "sure what has been causing them.$"

BATTLE_ROUTE23_TRAINER_2_Text_0:
	.string "YARRRRR!\p"
	.string "Hear my war cry it is battle time!$"

BATTLE_ROUTE23_TRAINER_2_Text_1:
	.string "YAWWOOOOOCH!$"

BATTLE_ROUTE23_TRAINER_2_Text_2:
	.string "RRAAAAUUUUGGGHH!\p"
	.string "That was a good battle!\p"
	.string "RAAAUUUUUGH!$"

BATTLE_ROUTE23_TRAINER_BARB_COUPLE_1_Text_0:
	.string "We battle together as a team, do you\n"
	.string "think you can handle us?$"

BATTLE_ROUTE23_TRAINER_BARB_COUPLE_1_Text_1:
	.string "We lost but we will work stronger\n"
	.string "together to win next time!$"

BATTLE_ROUTE23_TRAINER_BARB_COUPLE_1_Text_2:
	.string "We would love to have a double battle\n"
	.string "with you, but you don't have enough\l"
	.string "monsters.$"

BATTLE_ROUTE23_TRAINER_BARB_COUPLE_1_Text_3:
	.string "Sarah$"

BATTLE_ROUTE23_TRAINER_BARB_COUPLE_1_Text_4:
	.string "Teamwork makes the dream work!$"

BATTLE_ROUTE23_TRAINER_BARB_COUPLE_2_Text_0:
	.string "You stand no chance against the two of\n"
	.string "us!$"

BATTLE_ROUTE23_TRAINER_BARB_COUPLE_2_Text_1:
	.string "Trevor$"

BATTLE_ROUTE23_TRAINER_BARB_COUPLE_2_Text_2:
	.string "Working alone is great and all, but\n"
	.string "working together you can achieve so\l"
	.string "much more!$"

BATTLE_ROUTE23_TRAINER_3_Text_0:
	.string "You think you have what it takes to\n"
	.string "enter our village?\p"
	.string "I think not.$"

BATTLE_ROUTE23_TRAINER_3_Text_1:
	.string "That sparkle in your eye!\p"
	.string "You know the true ways of the\n"
	.string "barbarians.$"

BATTLE_ROUTE23_TRAINER_4_Text_0:
	.string "You want to go to Edgeville?\p"
	.string "Ha don't make me laugh, you couldn't\n"
	.string "even hold your own against me!$"

BATTLE_ROUTE23_TRAINER_4_Text_1:
	.string "Edgeville is full of many strong\n"
	.string "trainers.\p"
	.string "You have guts if you think you can take\n"
	.string "them on.$"

SCRIPT_PHEONIX_EGG_Text_0:
	.string "There is an egg, would you like to\n"
	.string "interact with it?$"

SCRIPT_PHEONIX_EGG_Text_1:
	.string "You decide to leave it alone incase its\n"
	.string "mumma comes back.$"

SCRIPT_PHEONIX_EGG_Text_2:
	.string "The egg wiggles as you approach it.\p"
	.string "What do you do?$"

SCRIPT_PHEONIX_EGG_CLAP_Text_0:
	.string "You clap at the egg.\p"
	.string "…{PAUSE 16}…{PAUSE 16}…{PAUSE 16}…\p"
	.string "The egg begins bouncing up and down in\n"
	.string "what appears to be joy?$"

SCRIPT_PHEONIX_EGG_CLAP_Text_1:
	.string "The egg rolls towards you appearing to\n"
	.string "want to follow you.$"

SCRIPT_PHEONIX_EGG_CLAP_Text_2:
	.string "Obtained the HAPPY LITTLE EGG!$"

SCRIPT_PHEONIX_EGG_KICK_Text_0:
	.string "With all your might you kick the egg like\n"
	.string "a football!$"

SCRIPT_PHEONIX_EGG_KICK_Text_1:
	.string "…{PAUSE 16}…{PAUSE 16}…{PAUSE 16}…\p"
	.string "What appears to be steam seems to be\n"
	.string "coming from the egg?$"

SCRIPT_PHEONIX_EGG_KICK_Text_2:
	.string "Obtained the ANGRY LITTLE EGG!$"

SCRIPT_PHEONIX_EGG_NOROOM_Text_0:
	.string "But sadly you have no room in your\n"
	.string "party for the egg.$"
