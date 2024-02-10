Route46_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route46_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route46_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 16
	return


BATTLE_ROUTE_46_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE_46_TRAINER_1, BATTLE_ROUTE_46_TRAINER_1_Text_0, BATTLE_ROUTE_46_TRAINER_1_Text_1
	namebox BATTLE_ROUTE_46_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE_46_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE_46_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE_46_TRAINER_2, BATTLE_ROUTE_46_TRAINER_2_Text_0, BATTLE_ROUTE_46_TRAINER_2_Text_1
	namebox BATTLE_ROUTE_46_TRAINER_2_Text_2
	msgbox BATTLE_ROUTE_46_TRAINER_2_Text_1
	hidenamebox
	release
	end


ROUTE46_STUDENT::
	faceplayer
	namebox ROUTE46_STUDENT_Text_0
	msgbox ROUTE46_STUDENT_Text_1
	closemessage
	hidenamebox
	release
	end


ROUTE46_ARCHAEOLOGIST::
	faceplayer
	namebox BATTLE_ROUTE_46_TRAINER_1_Text_2
	msgbox ROUTE46_ARCHAEOLOGIST_Text_0
	closemessage
	hidenamebox
	release
	end


DIGSITE_SIGN::
	lock
	faceplayer
	msgbox DIGSITE_SIGN_Text_0
	release
	end


PLACEHOLDER_ITEM_DIGSITE_1::
	lock
	faceplayer
	msgbox PLACEHOLDER_ITEM_DIGSITE_1_Text_0
	release
	end


PLACEHOLDER_ITEM_DIGSITE_2::
	lock
	faceplayer
	msgbox PLACEHOLDER_ITEM_DIGSITE_2_Text_0
	release
	end


PLACEHOLDER_ITEM_DIGSITE_3::
	lock
	faceplayer
	msgbox PLACEHOLDER_ITEM_DIGSITE_3_Text_0
	release
	end


BATTLE_ROUTE_46_TRAINER_1_Text_0:
	.string "You won't believe what happened!\p"
	.string "Whilst excavating nearby, I found the\n"
	.string "most magical pot...$"

BATTLE_ROUTE_46_TRAINER_1_Text_1:
	.string "Aw, you made me drop it!$"

BATTLE_ROUTE_46_TRAINER_1_Text_2:
	.string "Archaeologist$"

BATTLE_ROUTE_46_TRAINER_2_Text_0:
	.string "I'm waiting until they open up the\n"
	.string "digsite so I can be the first one\l"
	.string "inside!\p"
	.string "I won't let you beat me to it!$"

BATTLE_ROUTE_46_TRAINER_2_Text_1:
	.string "Okay, fine. I'll go explore the cave to\n"
	.string "the east instead!$"

BATTLE_ROUTE_46_TRAINER_2_Text_2:
	.string "Le Me$"

ROUTE46_STUDENT_Text_0:
	.string "Student$"

ROUTE46_STUDENT_Text_1:
	.string "The study of Earth Sciences is: the\n"
	.string "study of the earth, its contents and\l"
	.string "history...\p"
	.string "Sorry, I didn't see you there.\p"
	.string "I'm too busy studying for my Earth\n"
	.string "Sciences exam to talk more right now.$"

ROUTE46_ARCHAEOLOGIST_Text_0:
	.string "I'm not really supposed to say\n"
	.string "anything, but...\p"
	.string "We think we have discovered the ruins\n"
	.string "of an ancient civilization!\p"
	.string "I heard that the Museum Curator is\n"
	.string "coming down personally to inspect\l"
	.string "them!$"

DIGSITE_SIGN_Text_0:
	.string "Anyone wishing to do any work on the\n"
	.string "digsite must first prove they have\l"
	.string "passed all 3 Earth Science exams.$"

PLACEHOLDER_ITEM_DIGSITE_1_Text_0:
	.string "It is a fragile looking animal skull.\p"
	.string "You're worried it may be damaged if\n"
	.string "handled without the proper equipment\l"
	.string "and decide to leave it alone.$"

PLACEHOLDER_ITEM_DIGSITE_2_Text_0:
	.string "You rummage through the pile of items.\p"
	.string "Unfortunately all you can find are\n"
	.string "broken arrow shafts and pieces of\l"
	.string "damaged armour.\p"
	.string "This must be the archaeologist's\n"
	.string "discarded item pile.$"

PLACEHOLDER_ITEM_DIGSITE_3_Text_0:
	.string "You find a panning tray laying beside\n"
	.string "the river bed.\p"
	.string "You have no idea how to use it, so leave\n"
	.string "it where it is for now.$"
