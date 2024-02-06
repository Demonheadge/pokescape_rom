Route35_MapScripts::
	.byte 0


LADY_OF_THE_LAKE::
	faceplayer
	msgbox LADY_OF_THE_LAKE_Text_0
	closemessage
	release
	end


ASSISTANT_STAN::
	faceplayer
	msgbox ASSISTANT_STAN_Text_0
	closemessage
	release
	end


ROUTE_35_DWARF::
	faceplayer
	msgbox ROUTE_35_DWARF_Text_0
	closemessage
	release
	end


TAVERLEY_DUNGEON::
	lock
	faceplayer
	msgbox TAVERLEY_DUNGEON_Text_0
	release
	end


ITEM_ROUTE_35_MITHRIL_POUCH::
	finditem ITEM_MITHRIL_POUCH
	end


ITEM_ROUTE_35_BREAD::
	finditem ITEM_BREAD
	end


ITEM_ROUTE_35_CABBAGE::
	finditem ITEM_CABBAGE
	end


BATTLE_ROUTE_35_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE_35_TRAINER_1, BATTLE_ROUTE_35_TRAINER_1_Text_0, BATTLE_ROUTE_35_TRAINER_1_Text_1
	namebox BATTLE_ROUTE_35_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE_35_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE_35_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE_35_TRAINER_2, BATTLE_ROUTE_35_TRAINER_2_Text_0, BATTLE_ROUTE_35_TRAINER_2_Text_1
	namebox BATTLE_ROUTE_35_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE_35_TRAINER_2_Text_1
	hidenamebox
	release
	end


LADY_OF_THE_LAKE_Text_0:
	.string "Aye, I have the sword Excalibur in my\n"
	.string "possession.\p"
	.string "'Tis very valuable, and not an artefact\n"
	.string "to be given away lightly.\p"
	.string "Oh? You're chasing after monsters\n"
	.string "instead?\p"
	.string "I heard some strange noises from that\n"
	.string "dungeon nearby. Try there.$"

ASSISTANT_STAN_Text_0:
	.string "Oh, don't mind me. I fell out of the\n"
	.string "basket while Auguste was trying to\l"
	.string "adjust our trajectory.\p"
	.string "I'm sure he'll come back for me.\n"
	.string "Eventually.$"

ROUTE_35_DWARF_Text_0:
	.string "I thought I'd finally make my fortune\n"
	.string "selling pickaxes to adventurers that\l"
	.string "come to mine those stars that fall from\l"
	.string "the sky.\p"
	.string "Turns out most of them have pickaxes\n"
	.string "made from stronger metal than I've\l"
	.string "ever seen a dwarf forge.\p"
	.string "It's really making me reconsider my\n"
	.string "career.$"

TAVERLEY_DUNGEON_Text_0:
	.string "You can hear the ferocious roars of\n"
	.string "dragons coming from the dungeon.\p"
	.string "You decide not to go down the ladder\n"
	.string "until you have suitable anti dragonfire\l"
	.string "protection.$"

BATTLE_ROUTE_35_TRAINER_1_Text_0:
	.string "By Guthix, I cannot in good conscience\n"
	.string "let you go down that dungeon to your\l"
	.string "death!$"

BATTLE_ROUTE_35_TRAINER_1_Text_1:
	.string "Since I can't stop you, may Guthix be\n"
	.string "with you.$"

BATTLE_ROUTE_35_TRAINER_1_Text_2:
	.string "Druid$"

BATTLE_ROUTE_35_TRAINER_2_Text_0:
	.string "I heard there was a shooting star to\n"
	.string "mine here, but all I've found is a battle\l"
	.string "instead!$"

BATTLE_ROUTE_35_TRAINER_2_Text_1:
	.string "I should stick to Motherlode Mine.$"
