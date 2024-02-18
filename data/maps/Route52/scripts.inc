Route52_MapScripts::
	.byte 0


BATTLE_ROUTE_52_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE_52_TRAINER_1, BATTLE_ROUTE_52_TRAINER_1_Text_0, BATTLE_ROUTE_52_TRAINER_1_Text_1
	namebox BATTLE_ROUTE_52_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE_52_TRAINER_1_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE_52_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE_52_TRAINER_2, BATTLE_ROUTE_52_TRAINER_2_Text_0, BATTLE_ROUTE_52_TRAINER_2_Text_1
	namebox BATTLE_ROUTE_52_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE_52_TRAINER_2_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE_52_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE_52_TRAINER_3, BATTLE_ROUTE_52_TRAINER_3_Text_0, BATTLE_ROUTE_52_TRAINER_3_Text_1
	namebox BATTLE_ROUTE_52_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE_52_TRAINER_3_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE_52_TRAINER_4::
	trainerbattle_single TRAINER_ROUTE_52_TRAINER_4, BATTLE_ROUTE_52_TRAINER_4_Text_0, BATTLE_ROUTE_52_TRAINER_4_Text_1
	namebox BATTLE_ROUTE_52_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE_52_TRAINER_4_Text_2
	hidenamebox
	release
	end


ROUTE52_NPC_1::
	lock
	faceplayer
	namebox ROUTE52_NPC_1_Text_0
	msgbox ROUTE52_NPC_1_Text_1
	closemessage
	hidenamebox
	release
	end


BATTLE_ROUTE_52_TRAINER_1_Text_0:
	.string "Hey, find your own iron rocks. These are\n"
	.string "mine!$"

BATTLE_ROUTE_52_TRAINER_1_Text_1:
	.string "Fine, I suppose we can share them.$"

BATTLE_ROUTE_52_TRAINER_1_Text_2:
	.string "Cupholder$"

BATTLE_ROUTE_52_TRAINER_1_Text_3:
	.string "I wanted to mine beside Ardougne\n"
	.string "monastery but there was someone\l"
	.string "already there..$"

BATTLE_ROUTE_52_TRAINER_2_Text_0:
	.string "The head of my pickaxe flew off while I\n"
	.string "was trying to mine that rock!\p"
	.string "You better not be trying to steal it!$"

BATTLE_ROUTE_52_TRAINER_2_Text_1:
	.string "I can't battle properly without my\n"
	.string "trusty pickaxe.$"

BATTLE_ROUTE_52_TRAINER_2_Text_2:
	.string "Oh, here it is! If I'd found it sooner,\n"
	.string "I'd probably have beaten you..$"

BATTLE_ROUTE_52_TRAINER_3_Text_0:
	.string "After spending my entire life in the\n"
	.string "Feldip Hills, I am finally ready to see\l"
	.string "what other monsters exist out in the\l"
	.string "world.$"

BATTLE_ROUTE_52_TRAINER_3_Text_1:
	.string "Maybe I should train more before\n"
	.string "leaving the jungle..$"

BATTLE_ROUTE_52_TRAINER_3_Text_2:
	.string "Your monsters are stronger than\n"
	.string "anything I've seen before. I should do\l"
	.string "more training.$"

BATTLE_ROUTE_52_TRAINER_4_Text_0:
	.string "Did you know there are some rare\n"
	.string "monsters which can only be caught in\l"
	.string "the jungle south of here?$"

BATTLE_ROUTE_52_TRAINER_4_Text_1:
	.string "They might be rare, but they didn't help\n"
	.string "me win.$"

BATTLE_ROUTE_52_TRAINER_4_Text_2:
	.string "I heard that there is a form of kebbit\n"
	.string "that you can only catch or evolve in\l"
	.string "Feldip Hills.$"

ROUTE52_NPC_1_Text_0:
	.string "Raedwald$"

ROUTE52_NPC_1_Text_1:
	.string "I'll let you in on a little secret.\p"
	.string "I buried some hidden treasure near\n"
	.string "here.\p"
	.string "I don't want to give away too many\n"
	.string "secrets, but it's a special cloak for\l"
	.string "people who like solving clues.$"
