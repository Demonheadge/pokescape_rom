Crandor_MapScripts::
	.byte 0


CRANDOR_NED::
	faceplayer
	namebox CRANDOR_NED_Text_0
	msgbox CRANDOR_NED_Text_1
	closemessage
	hidenamebox
	release
	end


ITEM_CRANDOR_SPIRIT_SHARD::
	finditem ITEM_SPIRIT_SHARD
	end


ITEM_CRANDOR_CHOCOLATE_CAKE::
	finditem ITEM_CHOCOLATE_CAKE
	end


ITEM_CRANDOR_RUNE_POUCH::
	finditem ITEM_RUNE_POUCH
	end


BATTLE_CRANDOR_SKELETON_1::
	trainerbattle_single TRAINER_CRANDOR_SKELETON_1, BATTLE_CRANDOR_SKELETON_1_Text_0, BATTLE_CRANDOR_SKELETON_1_Text_1
	msgbox BATTLE_CRANDOR_SKELETON_1_Text_1
	release
	return


BATTLE_CRANDOR_SKELETON_2::
	trainerbattle_single TRAINER_CRANDOR_SKELETON_2, BATTLE_CRANDOR_SKELETON_2_Text_0, BATTLE_CRANDOR_SKELETON_2_Text_1
	msgbox BATTLE_CRANDOR_SKELETON_2_Text_2
	release
	return


BATTLE_CRANDOR_SKELETON_3::
	trainerbattle_single TRAINER_CRANDOR_SKELETON_3, BATTLE_CRANDOR_SKELETON_3_Text_0, BATTLE_CRANDOR_SKELETON_3_Text_1
	msgbox BATTLE_CRANDOR_SKELETON_3_Text_2
	release
	return


BATTLE_CRANDOR_MOSS_GIANT_1::
	trainerbattle_single TRAINER_CRANDOR_MOSS_GIANT_1, BATTLE_CRANDOR_MOSS_GIANT_1_Text_0, BATTLE_CRANDOR_MOSS_GIANT_1_Text_1
	msgbox BATTLE_CRANDOR_MOSS_GIANT_1_Text_2
	release
	return


BATTLE_CRANDOR_MOSS_GIANT_2::
	trainerbattle_single TRAINER_CRANDOR_MOSS_GIANT_2, BATTLE_CRANDOR_MOSS_GIANT_2_Text_0, BATTLE_CRANDOR_MOSS_GIANT_2_Text_1
	msgbox BATTLE_CRANDOR_MOSS_GIANT_2_Text_2
	release
	return


BATTLE_CRANDOR_MOSS_GIANT_3::
	trainerbattle_single TRAINER_CRANDOR_MOSS_GIANT_3, BATTLE_CRANDOR_MOSS_GIANT_3_Text_0, BATTLE_CRANDOR_MOSS_GIANT_3_Text_1
	msgbox BATTLE_CRANDOR_MOSS_GIANT_3_Text_2
	release
	return


CRANDOR_NED_Text_0:
	.string "Ned$"

CRANDOR_NED_Text_1:
	.string "It looks like we're stranded!/pNo\n"
	.string "wonder no other captains wanted to\l"
	.string "sail anywhere near Crandor..$"

BATTLE_CRANDOR_SKELETON_1_Text_0:
	.string "Stay.. away..$"

BATTLE_CRANDOR_SKELETON_1_Text_1:
	.string "Turn.. back..$"

BATTLE_CRANDOR_SKELETON_2_Text_0:
	.string "The skeleton rattles angrily as you try\n"
	.string "to walk past.$"

BATTLE_CRANDOR_SKELETON_2_Text_1:
	.string "The skeleton seems less aggressive\n"
	.string "now.$"

BATTLE_CRANDOR_SKELETON_2_Text_2:
	.string "The skeleton is looking at the nearby\n"
	.string "rocks..$"

BATTLE_CRANDOR_SKELETON_3_Text_0:
	.string "El..$"

BATTLE_CRANDOR_SKELETON_3_Text_1:
	.string "..varg$"

BATTLE_CRANDOR_SKELETON_3_Text_2:
	.string "Be.. ware..$"

BATTLE_CRANDOR_MOSS_GIANT_1_Text_0:
	.string "The moss giant swings a big leafy arm at\n"
	.string "you.$"

BATTLE_CRANDOR_MOSS_GIANT_1_Text_1:
	.string "The moss giant continues on it's way as\n"
	.string "if nothing happened.$"

BATTLE_CRANDOR_MOSS_GIANT_1_Text_2:
	.string "The moss giant no longer seems\n"
	.string "interested in you.$"

BATTLE_CRANDOR_MOSS_GIANT_2_Text_0:
	.string "Dragon in volcano. Human should leave.$"

BATTLE_CRANDOR_MOSS_GIANT_2_Text_1:
	.string "Maybe human can kill dragon.$"

BATTLE_CRANDOR_MOSS_GIANT_2_Text_2:
	.string "Please kill dragon. Too many of us burn\n"
	.string "in its fire.$"

BATTLE_CRANDOR_MOSS_GIANT_3_Text_0:
	.string "Not more humans!$"

BATTLE_CRANDOR_MOSS_GIANT_3_Text_1:
	.string "This human strong..$"

BATTLE_CRANDOR_MOSS_GIANT_3_Text_2:
	.string "Get pink humans off our island..$"
