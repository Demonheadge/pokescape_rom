Route54_MapScripts::
	.byte 0


BATTLE_ROUTE_54_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE_54_TRAINER_1, BATTLE_ROUTE_54_TRAINER_1_Text_0, BATTLE_ROUTE_54_TRAINER_1_Text_1
	namebox BATTLE_ROUTE_54_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE_54_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE_54_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE_54_TRAINER_2, BATTLE_ROUTE_54_TRAINER_2_Text_0, BATTLE_ROUTE_54_TRAINER_2_Text_1
	namebox BATTLE_ROUTE_54_TRAINER_2_Text_2
	msgbox BATTLE_ROUTE_54_TRAINER_2_Text_1
	hidenamebox
	release
	end


ITEM_ROUTE_54_PURPLE_SWEETS::
	finditem ITEM_PURPLE_SWEETS
	end


BATTLE_ROUTE_54_TRAINER_1_Text_0:
	.string "I spent so long on that damn trawler\n"
	.string "getting this outfit that I don't think\l"
	.string "my legs have adjusted to being on land\l"
	.string "yet.\p"
	.string "Let me battle you to get my bearings!$"

BATTLE_ROUTE_54_TRAINER_1_Text_1:
	.string "Maybe I should head back out to sea..$"

BATTLE_ROUTE_54_TRAINER_1_Text_2:
	.string "AnglerLyfe$"

BATTLE_ROUTE_54_TRAINER_2_Text_0:
	.string "I heard there was this magical place\n"
	.string "near here that I could go and just get\l"
	.string "free combat xp!\p"
	.string "Do you know where it is?$"

BATTLE_ROUTE_54_TRAINER_2_Text_1:
	.string "Looks like I'll need all the help I can\n"
	.string "get if I can't beat you.$"

BATTLE_ROUTE_54_TRAINER_2_Text_2:
	.string "AFK2MAXCB$"
