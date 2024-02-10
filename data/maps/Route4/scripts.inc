Route4_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route4_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route4_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 1
	call ROUTE_4_STATE
	call POTTERINGTON_FARM_OUTDOOR_STATE
	goto TryMoveDaycareMan
	return


ROUTE_4_STATE::
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq ROUTE_4_STATE_1
	removeobject 9
	removeobject 11
	setflag FLAG_TEMP_1F
	return

ROUTE_4_STATE_1:
	switch VAR_POKESCAPE_STORYMODE_PROGRESS
	case 100, ROUTE_4_STATE_6
	case 101, ROUTE_4_STATE_6
	removeobject 9
	removeobject 11
	setflag FLAG_TEMP_1F
	return

ROUTE_4_STATE_6:
	addobject 9
	addobject 11
	clearflag FLAG_TEMP_1F
	return


POTTERINGTON_FARM_OUTDOOR_STATE::
	switch VAR_POKESCAPE_POTTERINGTON_FARM_STATE
	case 0, POTTERINGTON_FARM_OUTDOOR_STATE_2
	case 1, POTTERINGTON_FARM_OUTDOOR_STATE_3
	return

POTTERINGTON_FARM_OUTDOOR_STATE_2:
	return

POTTERINGTON_FARM_OUTDOOR_STATE_3:
	setobjectxyperm 2, 8, 17
	return


MuggerBattleRoute4::
	trainerbattle_single TRAINER_MUGGER_ROUTE4, MuggerBattleRoute4_Text_0, MuggerBattleRoute4_Text_1
	msgbox MuggerBattleRoute4_Text_1
	release
	return


ScammerBattleRoute4::
	trainerbattle_single TRAINER_SCAMMER_ROUTE4, ScammerBattleRoute4_Text_0, ScammerBattleRoute4_Text_1
	msgbox ScammerBattleRoute4_Text_2
	release
	return


FarmerBattleRoute4::
	trainerbattle_single TRAINER_FARMER_ROUTE4, FarmerBattleRoute4_Text_0, FarmerBattleRoute4_Text_1
	msgbox FarmerBattleRoute4_Text_2
	release
	return


Route4Sign::
	msgbox Route4Sign_Text_0, MSGBOX_SIGN
	release
	return


TryMoveDaycareMan::
	goto_if_set FLAG_PENDING_DAYCARE_EGG, TryMoveDaycareMan_1
	setobjectxyperm 1, 19, 16
	return

TryMoveDaycareMan_1:
	setobjectxyperm 1, 19, 17
	return


ROUTE4_TRIGGER1_DaycareWatcher::
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_ROUTE4_PLAYER3
	waitmovement 0
	call ROUTE4_TRIGGER_DaycareWatcher_PART1
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_ROUTE4_PLAYER1
	waitmovement 0
	call ROUTE4_TRIGGER_DaycareWatcher_PART2
	return


ROUTE4_TRIGGER2_DaycareWatcher::
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_ROUTE4_PLAYER3
	waitmovement 0
	call ROUTE4_TRIGGER_DaycareWatcher_PART1
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_ROUTE4_PLAYER2
	waitmovement 0
	call ROUTE4_TRIGGER_DaycareWatcher_PART2
	return


ROUTE4_TRIGGER_DaycareWatcher_PART1::
	namebox ROUTE4_TRIGGER_DaycareWatcher_PART1_Text_0
	msgbox ROUTE4_TRIGGER_DaycareWatcher_PART1_Text_1
	closemessage
	hidenamebox
	applymovement 2, MOVEMENT_ROUTE4_DaycareWatcher1
	return


ROUTE4_TRIGGER_DaycareWatcher_PART2::
	delay 8
	namebox ROUTE4_TRIGGER_DaycareWatcher_PART2_Text_0
	msgbox ROUTE4_TRIGGER_DaycareWatcher_PART2_Text_1
	closemessage
	hidenamebox
	applymovement 2, MOVEMENT_ROUTE4_DaycareWatcher2
	waitmovement 0
	setobjectxyperm 2, 8, 17
	setvar VAR_POKESCAPE_POTTERINGTON_FARM_STATE, 1
	release
	end


MOVEMENT_ROUTE4_DaycareWatcher1:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	delay_8
	face_right
	step_end

MOVEMENT_ROUTE4_DaycareWatcher2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_left
	walk_left
	walk_up
	delay_8
	face_down
	step_end

MOVEMENT_ROUTE4_PLAYER1:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	step_end

MOVEMENT_ROUTE4_PLAYER2:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	step_end

MOVEMENT_ROUTE4_PLAYER3:
	face_up
	step_end

ROUTE4_DaycareWatcher::
	faceplayer
	namebox ROUTE4_TRIGGER_DaycareWatcher_PART2_Text_0
	random 3
	switch VAR_RESULT
	case 0, ROUTE4_DaycareWatcher_3
	case 1, ROUTE4_DaycareWatcher_4
	case 2, ROUTE4_DaycareWatcher_5
	case 3, ROUTE4_DaycareWatcher_6
ROUTE4_DaycareWatcher_1:
	closemessage
	hidenamebox
	release
	end

ROUTE4_DaycareWatcher_3:
	msgbox ROUTE4_DaycareWatcher_Text_0
	goto ROUTE4_DaycareWatcher_1

ROUTE4_DaycareWatcher_4:
	msgbox ROUTE4_DaycareWatcher_Text_1
	goto ROUTE4_DaycareWatcher_1

ROUTE4_DaycareWatcher_5:
	msgbox ROUTE4_DaycareWatcher_Text_2
	goto ROUTE4_DaycareWatcher_1

ROUTE4_DaycareWatcher_6:
	msgbox ROUTE4_DaycareWatcher_Text_3
	goto ROUTE4_DaycareWatcher_1


ROUTE4_PatchFarmer::
	faceplayer
	namebox ROUTE4_TRIGGER_DaycareWatcher_PART1_Text_0
	msgbox ROUTE4_PatchFarmer_Text_0
	closemessage
	hidenamebox
	release
	end


MuggerBattleRoute4_Text_0:
	.string "Stand and deliver!$"

MuggerBattleRoute4_Text_1:
	.string "People seem very afraid of me.\p"
	.string "Maybe it's the way I say hello?$"

ScammerBattleRoute4_Text_0:
	.string "Psst… Want to buy some cabbage?$"

ScammerBattleRoute4_Text_1:
	.string "A no would have been fine…$"

ScammerBattleRoute4_Text_2:
	.string "Selling rare black lobster!$"

FarmerBattleRoute4_Text_0:
	.string "I breed all my animals here at\n"
	.string "Potterington farm.$"

FarmerBattleRoute4_Text_1:
	.string "Guess I need to breed stronger\n"
	.string "monsters!$"

FarmerBattleRoute4_Text_2:
	.string "Have you checked out the farm?\p"
	.string "It's a great place to raise monsters of\n"
	.string "your own!$"

Route4Sign_Text_0:
	.string "Potterington Farm$"

ROUTE4_TRIGGER_DaycareWatcher_PART1_Text_0:
	.string "Farmer$"

ROUTE4_TRIGGER_DaycareWatcher_PART1_Text_1:
	.string "Hiya Adventurer!\l"
	.string "Could you follow me?\p"
	.string "I want to show you something.$"

ROUTE4_TRIGGER_DaycareWatcher_PART2_Text_0:
	.string "Niece Pott.$"

ROUTE4_TRIGGER_DaycareWatcher_PART2_Text_1:
	.string "This place is called Potterington Farm!\p"
	.string "We look after your Monsters and help\n"
	.string "them grow while you are away.\p"
	.string "We have also set up special breeding\n"
	.string "pens for certain monsters.\p"
	.string "You should and inquire about it if it is\n"
	.string "something that intrests you!\p"
	.string "Anyway that is all I wanted to show you.\p"
	.string "Take care!$"

ROUTE4_DaycareWatcher_Text_0:
	.string "Some people have been reporting\n"
	.string "different coloured monsters hatching\l"
	.string "from their eggs which are different\l"
	.string "from the parents.$"

ROUTE4_DaycareWatcher_Text_1:
	.string "There have been rumours that multiple\n"
	.string "monsters have been breeding together\l"
	.string "and creating hybrids.\p"
	.string "But I've yet to see any of these so\n"
	.string "called hybrids.$"

ROUTE4_DaycareWatcher_Text_2:
	.string "I really enjoy just sitting here and\n"
	.string "seeing what type of Monsters the next\l"
	.string "adventurer will bring.$"

ROUTE4_DaycareWatcher_Text_3:
	.string "Over time high achieving adventurers\n"
	.string "visit our little farm and hand out\l"
	.string "gifts.\p"
	.string "I wonder what makes them decide to\n"
	.string "visit our little farm.$"

ROUTE4_PatchFarmer_Text_0:
	.string "Did you know you can plant crops in\n"
	.string "farming patches?$"
