Route41_MapScripts::
	.byte 0


BATTLE_ROUTE_41_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE_41_TRAINER_1, BATTLE_ROUTE_41_TRAINER_1_Text_0, BATTLE_ROUTE_41_TRAINER_1_Text_1
	namebox BATTLE_ROUTE_41_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE_41_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE_41_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE_41_TRAINER_2, BATTLE_ROUTE_41_TRAINER_2_Text_0, BATTLE_ROUTE_41_TRAINER_2_Text_1
	namebox BATTLE_ROUTE_41_TRAINER_2_Text_2
	msgbox BATTLE_ROUTE_41_TRAINER_2_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE_41_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE_41_TRAINER_3, BATTLE_ROUTE_41_TRAINER_3_Text_0, BATTLE_ROUTE_41_TRAINER_3_Text_1
	namebox BATTLE_ROUTE_41_TRAINER_3_Text_2
	msgbox BATTLE_ROUTE_41_TRAINER_3_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE_41_TRAINER_4::
	trainerbattle_single TRAINER_ROUTE_41_TRAINER_4, BATTLE_ROUTE_41_TRAINER_4_Text_0, BATTLE_ROUTE_41_TRAINER_4_Text_1
	namebox BATTLE_ROUTE_41_TRAINER_4_Text_2
	msgbox BATTLE_ROUTE_41_TRAINER_4_Text_1
	hidenamebox
	release
	end


ROUTE_41_HILL_GIANTS::
	faceplayer
	namebox ROUTE_41_HILL_GIANTS_Text_0
	msgbox ROUTE_41_HILL_GIANTS_Text_1
	closemessage
	hidenamebox
	release
	end


HAMLET::
	lock
	faceplayer
	msgbox HAMLET_Text_0
	release
	end


ITEM_ROUTE_41_BEER::
	finditem ITEM_STAT_BEER
	end


ITEM_ROUTE_41_CHOCOLATE_CAKE::
	finditem ITEM_CHOCOLATE_CAKE
	end


ITEM_ROUTE_41_CABBAGE::
	finditem ITEM_CABBAGE
	end


BATTLE_ROUTE_41_TRAINER_1_Text_0:
	.string "WHICH WAY TO GREEN DRAGON.$"

BATTLE_ROUTE_41_TRAINER_1_Text_1:
	.string "SOUTH. AFFIRMATIVE.$"

BATTLE_ROUTE_41_TRAINER_1_Text_2:
	.string "jfgbs7645$"

BATTLE_ROUTE_41_TRAINER_2_Text_0:
	.string "INVENTORY FULL! BANK SCRIPT ACTIVATE!$"

BATTLE_ROUTE_41_TRAINER_2_Text_1:
	.string "ERROR! ERROR! UNABLE TO BANK!$"

BATTLE_ROUTE_41_TRAINER_2_Text_2:
	.string "kzlys9278$"

BATTLE_ROUTE_41_TRAINER_3_Text_0:
	.string "Bots are taking my spawns. So I guess I\n"
	.string "will kill time by killing you.$"

BATTLE_ROUTE_41_TRAINER_3_Text_1:
	.string "If you continue from here you will face\n"
	.string "bigger dangers than bots taking your\l"
	.string "spawns. Good luck.$"

BATTLE_ROUTE_41_TRAINER_3_Text_2:
	.string "Wari0000$"

BATTLE_ROUTE_41_TRAINER_4_Text_0:
	.string "Ice Barrage!$"

BATTLE_ROUTE_41_TRAINER_4_Text_1:
	.string "Let me guess. You wear dragonhide?\n"
	.string "Spoilsport.$"

BATTLE_ROUTE_41_TRAINER_4_Text_2:
	.string "M4g3lit3$"

ROUTE_41_HILL_GIANTS_Text_0:
	.string "Hill Giant$"

ROUTE_41_HILL_GIANTS_Text_1:
	.string "We no have any keys.\p"
	.string "Leave us alone.$"

HAMLET_Text_0:
	.string "Alas, poor Yorick!$"
