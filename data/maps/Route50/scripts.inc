Route50_MapScripts::
	.byte 0


BATTLE_ROUTE_50_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE_50_TRAINER_1, BATTLE_ROUTE_50_TRAINER_1_Text_0, BATTLE_ROUTE_50_TRAINER_1_Text_1
	namebox BATTLE_ROUTE_50_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE_50_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE_50_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE_50_TRAINER_2, BATTLE_ROUTE_50_TRAINER_2_Text_0, BATTLE_ROUTE_50_TRAINER_2_Text_1
	namebox BATTLE_ROUTE_50_TRAINER_2_Text_2
	msgbox BATTLE_ROUTE_50_TRAINER_2_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE_50_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE_50_TRAINER_3, BATTLE_ROUTE_50_TRAINER_3_Text_0, BATTLE_ROUTE_50_TRAINER_3_Text_1
	namebox BATTLE_ROUTE_50_TRAINER_3_Text_2
	msgbox BATTLE_ROUTE_50_TRAINER_3_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE_50_TRAINER_4::
	trainerbattle_single TRAINER_ROUTE_50_TRAINER_4, BATTLE_ROUTE_50_TRAINER_4_Text_0, BATTLE_ROUTE_50_TRAINER_4_Text_1
	namebox BATTLE_ROUTE_50_TRAINER_4_Text_2
	msgbox BATTLE_ROUTE_50_TRAINER_4_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE_50_TRAINER_5::
	trainerbattle_single TRAINER_ROUTE_50_TRAINER_5, BATTLE_ROUTE_50_TRAINER_5_Text_0, BATTLE_ROUTE_50_TRAINER_5_Text_1
	namebox BATTLE_ROUTE_50_TRAINER_5_Text_1
	msgbox BATTLE_ROUTE_50_TRAINER_5_Text_2
	hidenamebox
	release
	end


ROUTE50_MONK::
	faceplayer
	namebox ROUTE50_MONK_Text_0
	msgbox ROUTE50_MONK_Text_1
	closemessage
	hidenamebox
	release
	end


ITEM_ROUTE_50_BREAD::
	finditem ITEM_BREAD
	end


ITEM_ROUTE_50_DEF_POTION::
	finditem ITEM_POTION_DEF
	end


ITEM_ROUTE_50_SUPER_TEA::
	finditem ITEM_REPEL_TEA_2
	end


ROUTE_50_LADDER::
	lock
	faceplayer
	msgbox ROUTE_50_LADDER_Text_0
	release
	end


ROUTE_50_CAVE::
	lock
	faceplayer
	msgbox ROUTE_50_CAVE_Text_0
	release
	end


BATTLE_ROUTE_50_TRAINER_1_Text_0:
	.string "I told Brother Omad I was coming out to\n"
	.string "try to find my son's blanket, but really\l"
	.string "I just needed some peace.\p"
	.string "I won't let you be the one to disturb it!$"

BATTLE_ROUTE_50_TRAINER_1_Text_1:
	.string "If I wasn't so tired maybe I'd have\n"
	.string "stood a chance..$"

BATTLE_ROUTE_50_TRAINER_1_Text_2:
	.string "Brother Androe$"

BATTLE_ROUTE_50_TRAINER_2_Text_0:
	.string "Gah! I can't sleep because of Brother\n"
	.string "Androe's son!\p"
	.string "With his constant: Waaaaaah!\n"
	.string "Waaaaaaaaah!\p"
	.string "Androe said it's natural, but it's so\n"
	.string "annoying!\p"
	.string "I'm going to take out my frustrations\n"
	.string "on you!$"

BATTLE_ROUTE_50_TRAINER_2_Text_1:
	.string "Saradomin give me strength. I really\n"
	.string "hope the adventurer we sent out to\l"
	.string "retrieve the blanket is back soon.$"

BATTLE_ROUTE_50_TRAINER_2_Text_2:
	.string "Brother Omad$"

BATTLE_ROUTE_50_TRAINER_3_Text_0:
	.string "I heard the might be a penguin agent in\n"
	.string "a barrel hiding at a dock nearby.\p"
	.string "Do you know which direction it might be?$"

BATTLE_ROUTE_50_TRAINER_3_Text_1:
	.string "All you had to do was say south-east..$"

BATTLE_ROUTE_50_TRAINER_3_Text_2:
	.string "Lady Pingu$"

BATTLE_ROUTE_50_TRAINER_4_Text_0:
	.string "I'm powermining iron until I get the\n"
	.string "level for coal.\p"
	.string "I hear that's where the real money is!$"

BATTLE_ROUTE_50_TRAINER_4_Text_1:
	.string "If I spent more time mining and less\n"
	.string "time battling I'd be done by now..$"

BATTLE_ROUTE_50_TRAINER_4_Text_2:
	.string "Mineas Tirith$"

BATTLE_ROUTE_50_TRAINER_5_Text_0:
	.string "Hi!\p"
	.string "and welcome to my-$"

BATTLE_ROUTE_50_TRAINER_5_Text_1:
	.string "-guide..$"

BATTLE_ROUTE_50_TRAINER_5_Text_2:
	.string "Slayermusiq1$"

ROUTE50_MONK_Text_0:
	.string "Brother Cedric$"

ROUTE50_MONK_Text_1:
	.string "Honey, money, woman and wine!\p"
	.string "I'm very, very drunk..hic..up..\p"
	.string "I need a jug of water.$"

ROUTE_50_LADDER_Text_0:
	.string "The ladders look broken.\p"
	.string "You wouldn't want to slip and break your\n"
	.string "leg.\p"
	.string "Perhaps you should come back later\n"
	.string "once they've been repaired?$"

ROUTE_50_CAVE_Text_0:
	.string "Loud, angry noises are coming from deep\n"
	.string "inside the cave.\p"
	.string "They send shivers down your spine, and\n"
	.string "make your legs feel like jelly.\p"
	.string "You should come back once you're more\n"
	.string "braver and experienced.$"
