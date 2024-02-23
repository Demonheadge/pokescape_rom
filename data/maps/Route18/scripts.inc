Route18_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route18_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route18_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 1
	call SPECIAL_PENGUIN_EVENT
	return


SPECIAL_PENGUIN_EVENT::
	random 20
	switch VAR_RESULT
	case 0, SPECIAL_PENGUIN_EVENT_3
	case 1, SPECIAL_PENGUIN_EVENT_3
	case 2, SPECIAL_PENGUIN_EVENT_3
	case 3, SPECIAL_PENGUIN_EVENT_3
	case 4, SPECIAL_PENGUIN_EVENT_3
	case 5, SPECIAL_PENGUIN_EVENT_3
	case 6, SPECIAL_PENGUIN_EVENT_3
	case 7, SPECIAL_PENGUIN_EVENT_3
	case 8, SPECIAL_PENGUIN_EVENT_3
	case 9, SPECIAL_PENGUIN_EVENT_3
	case 10, SPECIAL_PENGUIN_EVENT_3
	case 11, SPECIAL_PENGUIN_EVENT_3
	case 12, SPECIAL_PENGUIN_EVENT_3
	case 13, SPECIAL_PENGUIN_EVENT_3
	case 14, SPECIAL_PENGUIN_EVENT_3
	case 15, SPECIAL_PENGUIN_EVENT_3
	case 16, SPECIAL_PENGUIN_EVENT_3
	case 17, SPECIAL_PENGUIN_EVENT_3
	case 18, SPECIAL_PENGUIN_EVENT_3
	case 19, SPECIAL_PENGUIN_EVENT_4
SPECIAL_PENGUIN_EVENT_1:
	return

SPECIAL_PENGUIN_EVENT_3:
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_9
	removeobject 10
	removeobject 16
	goto SPECIAL_PENGUIN_EVENT_1

SPECIAL_PENGUIN_EVENT_4:
	clearflag FLAG_TEMP_8
	clearflag FLAG_TEMP_9
	addobject 10
	addobject 16
	playbgm MUS_PS_TERRORBIRD, 0
	savebgm MUS_PS_TERRORBIRD
	goto SPECIAL_PENGUIN_EVENT_1


ENCOUNTER_PENGUIN_BUSH::
	lock
	faceplayer
	namebox ENCOUNTER_PENGUIN_BUSH_Text_0
	playmoncry SPECIES_PIDGEY, 0
	msgbox ENCOUNTER_PENGUIN_BUSH_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_PENGUIN_DISGUISE_BUSH_FORM, 15, ITEM_NONE
	dowildbattle
	fadescreen FADE_TO_BLACK
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_9
	removeobject 10
	removeobject 16
	fadedefaultbgm
	fadescreen FADE_FROM_BLACK
	closemessage
	end


NPC_ROUTE18_NPC1::
	lock
	faceplayer
	namebox NPC_ROUTE18_NPC1_Text_0
	msgbox NPC_ROUTE18_NPC1_Text_0
	hidenamebox
	release
	end


BATTLE_ROUTE18_TRAINER1::
	trainerbattle_single TRAINER_ROUTE18_TRAINER_1, BATTLE_ROUTE18_TRAINER1_Text_0, BATTLE_ROUTE18_TRAINER1_Text_1
	msgbox BATTLE_ROUTE18_TRAINER1_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE18_TRAINER2::
	trainerbattle_single TRAINER_ROUTE18_TRAINER_2, BATTLE_ROUTE18_TRAINER2_Text_0, BATTLE_ROUTE18_TRAINER2_Text_1
	namebox BATTLE_ROUTE18_TRAINER2_Text_2
	msgbox BATTLE_ROUTE18_TRAINER2_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE18_TRAINER3::
	trainerbattle_single TRAINER_ROUTE18_TRAINER_3, BATTLE_ROUTE18_TRAINER3_Text_0, BATTLE_ROUTE18_TRAINER3_Text_1
	msgbox BATTLE_ROUTE18_TRAINER3_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE18_TRAINER4::
	trainerbattle_single TRAINER_ROUTE18_TRAINER_4, BATTLE_ROUTE18_TRAINER4_Text_0, BATTLE_ROUTE18_TRAINER4_Text_1
	msgbox BATTLE_ROUTE18_TRAINER4_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE18_TRAINER5::
	trainerbattle_single TRAINER_ROUTE18_TRAINER_5, BATTLE_ROUTE18_TRAINER5_Text_0, BATTLE_ROUTE18_TRAINER5_Text_1
	msgbox BATTLE_ROUTE18_TRAINER5_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE18_TRAINER6::
	trainerbattle_single TRAINER_ROUTE18_TRAINER_6, BATTLE_ROUTE18_TRAINER6_Text_0, BATTLE_ROUTE18_TRAINER6_Text_1
	msgbox BATTLE_ROUTE18_TRAINER6_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE18_TRAINER7::
	trainerbattle_single TRAINER_ROUTE18_TRAINER_7, BATTLE_ROUTE18_TRAINER7_Text_0, BATTLE_ROUTE18_TRAINER7_Text_1
	msgbox BATTLE_ROUTE18_TRAINER7_Text_2
	hidenamebox
	release
	end


ITEM_ROUTE_18_BEER::
	finditem ITEM_STAT_BEER
	end


ITEM_ROUTE_18_CAKE::
	finditem ITEM_CAKE
	end


NPC_ROUTE19_BRASS_KEY::
	msgbox NPC_ROUTE19_BRASS_KEY_Text_0
	release
	end


NPC_ROUTE19_GOBLIN_1::
	faceplayer
	msgbox NPC_ROUTE19_GOBLIN_1_Text_0
	release
	end


NPC_ROUTE19_GOBLIN_2::
	faceplayer
	msgbox NPC_ROUTE19_GOBLIN_2_Text_0
	release
	end


BATTLE_ROUTE19_TRAINER1::
	trainerbattle_single TRAINER_ROUTE19_TRAINER_1, BATTLE_ROUTE19_TRAINER1_Text_0, BATTLE_ROUTE19_TRAINER1_Text_1
	msgbox BATTLE_ROUTE19_TRAINER1_Text_2
	hidenamebox
	release
	end


ENCOUNTER_PENGUIN_BUSH_Text_0:
	.string "Penguin$"

ENCOUNTER_PENGUIN_BUSH_Text_1:
	.string "Noot! Noot!$"

NPC_ROUTE18_NPC1_Text_0:
	.string ".$"

BATTLE_ROUTE18_TRAINER1_Text_0:
	.string "Make this battle quick, I've got my\n"
	.string "dailies to do!$"

BATTLE_ROUTE18_TRAINER1_Text_1:
	.string "Did I even get any experience from\n"
	.string "that?!$"

BATTLE_ROUTE18_TRAINER1_Text_2:
	.string "Talk to me after I have finished my\n"
	.string "dailies.$"

BATTLE_ROUTE18_TRAINER2_Text_0:
	.string "SPOTTED!$"

BATTLE_ROUTE18_TRAINER2_Text_1:
	.string "Oh wait, you aren't a penguin.$"

BATTLE_ROUTE18_TRAINER2_Text_2:
	.string "Canada Grrl$"

BATTLE_ROUTE18_TRAINER2_Text_3:
	.string "I heard there was a Penguin in this area\n"
	.string "but all I see are cats.\p"
	.string "Have you seen any?$"

BATTLE_ROUTE18_TRAINER3_Text_0:
	.string "1001 OAK LOGS.\p"
	.string "1002 OAK LOGS.\p"
	.string "1003 OAK LOGS.\p"
	.string "INVENTORY FULL.\l"
	.string "PROCEEDING TO BANK.\p"
	.string "ERROR PATH BLOCKED INITIATE ERROR\n"
	.string "HANDLING.$"

BATTLE_ROUTE18_TRAINER3_Text_1:
	.string "ERROR. ERROR. ERROR.$"

BATTLE_ROUTE18_TRAINER3_Text_2:
	.string "ERROR.\l"
	.string "ERROR.\p"
	.string "PROCEEDING TO DROP LOGS TO FIX ERROR.\p"
	.string "ERROR NO LOGS FOUND.\p"
	.string "PROCEEDING TO DROP LOGS TO FIX ERROR.$"

BATTLE_ROUTE18_TRAINER4_Text_0:
	.string "How do trees get online?$"

BATTLE_ROUTE18_TRAINER4_Text_1:
	.string "They Log in!$"

BATTLE_ROUTE18_TRAINER4_Text_2:
	.string "How do trees get online?\p"
	.string "They log in!\p"
	.string "$"

BATTLE_ROUTE18_TRAINER5_Text_0:
	.string "Do yew think yew have what it takes to\n"
	.string "cut me down?!$"

BATTLE_ROUTE18_TRAINER5_Text_1:
	.string "Now I am feeling all sappy.$"

BATTLE_ROUTE18_TRAINER5_Text_2:
	.string "If yew asked me if I thought you wood\n"
	.string "win, I wood not have believed it.$"

BATTLE_ROUTE18_TRAINER6_Text_0:
	.string "This is me neck of the woods!\p"
	.string "Turn back or face me!$"

BATTLE_ROUTE18_TRAINER6_Text_1:
	.string "Me surrender!$"

BATTLE_ROUTE18_TRAINER6_Text_2:
	.string "Me guess you can go through me neck of\n"
	.string "the woods.\p"
	.string "Me respect you strength.$"

BATTLE_ROUTE18_TRAINER7_Text_0:
	.string "Good of you to come through the west\n"
	.string "gate, you would by crushed by the\l"
	.string "south.$"

BATTLE_ROUTE18_TRAINER7_Text_1:
	.string "Maybe you can stand up against those\n"
	.string "Dark Wizards.$"

BATTLE_ROUTE18_TRAINER7_Text_2:
	.string "The Dark Wizards are a problem for\n"
	.string "years but we don't have enough funding\l"
	.string "to deal with them.$"

NPC_ROUTE19_BRASS_KEY_Text_0:
	.string "The door is locked with what looks like\n"
	.string "a brass padlock.$"

NPC_ROUTE19_GOBLIN_1_Text_0:
	.string "Me left key inside house.\p"
	.string "Now me locked out of house.$"

NPC_ROUTE19_GOBLIN_2_Text_0:
	.string "We must go to Ghost Town and ask Hob\n"
	.string "cousins for spare key.$"

BATTLE_ROUTE19_TRAINER1_Text_0:
	.string "I hope you brought a chefs hat,\n"
	.string "because you are not getting in without\l"
	.string "one.$"

BATTLE_ROUTE19_TRAINER1_Text_1:
	.string "No, you cannot have mine.$"

BATTLE_ROUTE19_TRAINER1_Text_2:
	.string "To access the Cooking Guild you will\n"
	.string "need either a chefs hat or be a maxed\l"
	.string "out your Cooking skill.\p"
	.string "You look like you have neither of those\n"
	.string "so bad luck for you.$"
