Route42_MapScripts::
	.byte 0


BATTLE_ROUTE_42_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE_42_TRAINER_1, BATTLE_ROUTE_42_TRAINER_1_Text_0, BATTLE_ROUTE_42_TRAINER_1_Text_1
	namebox BATTLE_ROUTE_42_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE_42_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE_42_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE_42_TRAINER_2, BATTLE_ROUTE_42_TRAINER_2_Text_0, BATTLE_ROUTE_42_TRAINER_2_Text_1
	namebox BATTLE_ROUTE_42_TRAINER_2_Text_2
	msgbox BATTLE_ROUTE_42_TRAINER_2_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE_42_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE_42_TRAINER_3, BATTLE_ROUTE_42_TRAINER_3_Text_0, BATTLE_ROUTE_42_TRAINER_3_Text_1
	namebox BATTLE_ROUTE_42_TRAINER_3_Text_2
	msgbox BATTLE_ROUTE_42_TRAINER_3_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE_42_TRAINER_4::
	trainerbattle_single TRAINER_ROUTE_42_TRAINER_4, BATTLE_ROUTE_42_TRAINER_4_Text_0, BATTLE_ROUTE_42_TRAINER_4_Text_1
	namebox BATTLE_ROUTE_42_TRAINER_4_Text_2
	msgbox BATTLE_ROUTE_42_TRAINER_2_Text_1
	hidenamebox
	release
	end


ROUTE_42_NPC_1::
	faceplayer
	namebox ROUTE_42_NPC_1_Text_0
	msgbox ROUTE_42_NPC_1_Text_1
	closemessage
	hidenamebox
	release
	end


ITEM_ROUTE_42_EASTER_EGG::
	finditem ITEM_CABBAGE
	end


BATTLE_ROUTE_42_TRAINER_1_Text_0:
	.string "This is where true skill come into play.\n"
	.string "This battle will be settled in seconds.$"

BATTLE_ROUTE_42_TRAINER_1_Text_1:
	.string "Drat. I meant to bring a Saradomin brew,\n"
	.string "not a Saradomin owl.$"

BATTLE_ROUTE_42_TRAINER_1_Text_2:
	.string "JustAPure46$"

BATTLE_ROUTE_42_TRAINER_2_Text_0:
	.string "Your stuff, now!$"

BATTLE_ROUTE_42_TRAINER_2_Text_1:
	.string "Should have gone for ice barrage..$"

BATTLE_ROUTE_42_TRAINER_2_Text_2:
	.string "Frogre4l$"

BATTLE_ROUTE_42_TRAINER_3_Text_0:
	.string "I love this scenery, your corpse will\n"
	.string "only improve it.$"

BATTLE_ROUTE_42_TRAINER_3_Text_1:
	.string "Maybe this barren landscape is fine as\n"
	.string "is without your corpse.\p"
	.string "If you ever change your mind, please let\n"
	.string "me know..$"

BATTLE_ROUTE_42_TRAINER_3_Text_2:
	.string "B0nediddly$"

BATTLE_ROUTE_42_TRAINER_4_Text_0:
	.string "It gives you an empty stare.$"

BATTLE_ROUTE_42_TRAINER_4_Text_1:
	.string "It gives you an acknowledging stare.$"

BATTLE_ROUTE_42_TRAINER_4_Text_2:
	.string "Pecs$"

ROUTE_42_NPC_1_Text_0:
	.string "Boney McBoneface$"

ROUTE_42_NPC_1_Text_1:
	.string "Please don't hurt me!\p"
	.string "I never asked for this Necromancer to\n"
	.string "raise me from the dead, so I'm just\l"
	.string "standing here menacingly in the hopes\l"
	.string "he won't burn my bones or I'll never be\l"
	.string "able to rest again.$"
