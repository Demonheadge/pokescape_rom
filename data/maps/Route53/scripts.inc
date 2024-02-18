Route53_MapScripts::
	.byte 0


BATTLE_ROUTE_53_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE_53_TRAINER_1, BATTLE_ROUTE_53_TRAINER_1_Text_0, BATTLE_ROUTE_53_TRAINER_1_Text_1
	namebox BATTLE_ROUTE_53_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE_53_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE_53_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE_53_TRAINER_2, BATTLE_ROUTE_53_TRAINER_2_Text_0, BATTLE_ROUTE_53_TRAINER_2_Text_1
	namebox BATTLE_ROUTE_53_TRAINER_2_Text_2
	msgbox BATTLE_ROUTE_53_TRAINER_2_Text_3
	hidenamebox
	release
	end


ROUTE53_NPC_1::
	lock
	faceplayer
	namebox ROUTE53_NPC_1_Text_0
	msgbox ROUTE53_NPC_1_Text_1
	closemessage
	hidenamebox
	release
	end


ROUTE53_NPC_2::
	lock
	faceplayer
	namebox ROUTE53_NPC_2_Text_0
	msgbox ROUTE53_NPC_2_Text_1
	closemessage
	hidenamebox
	release
	end


BATTLE_ROUTE_53_TRAINER_1_Text_0:
	.string "I need a break from chopping logs,\n"
	.string "getting enough for these Forestry\l"
	.string "rewards is exhausting!$"

BATTLE_ROUTE_53_TRAINER_1_Text_1:
	.string "If I'd spent less time chopping, and\n"
	.string "more time battling maybe I'd have won..$"

BATTLE_ROUTE_53_TRAINER_1_Text_2:
	.string "Cupholder$"

BATTLE_ROUTE_53_TRAINER_2_Text_0:
	.string "There's danger lurking nearby\n"
	.string "adventurer! Don't go any further!$"

BATTLE_ROUTE_53_TRAINER_2_Text_1:
	.string "After that, I think you'll be safe!$"

BATTLE_ROUTE_53_TRAINER_2_Text_2:
	.string "Guard Terrence$"

BATTLE_ROUTE_53_TRAINER_2_Text_3:
	.string "Be careful out here. There are dangers\n"
	.string "that even us guards can't handle alone.$"

ROUTE53_NPC_1_Text_0:
	.string "ChunkYanille$"

ROUTE53_NPC_1_Text_1:
	.string "It took me 11 months to escape the\n"
	.string "Yanille chunk!\p"
	.string "I can't wait to explore the rest of\n"
	.string "Gielinor.$"

ROUTE53_NPC_2_Text_0:
	.string "Tower Guard$"

ROUTE53_NPC_2_Text_1:
	.string "I guard the Watchtower.\p"
	.string "Though there isn't much guarding left\n"
	.string "to do ever since an adventurer found\l"
	.string "the crystals the ogres stole..$"
