Route44_MapScripts::
	.byte 0


BATTLE_ROUTE_44_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE_44_TRAINER_1, BATTLE_ROUTE_44_TRAINER_1_Text_0, BATTLE_ROUTE_44_TRAINER_1_Text_1
	namebox BATTLE_ROUTE_44_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE_44_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE_44_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE_44_TRAINER_2, BATTLE_ROUTE_44_TRAINER_2_Text_0, BATTLE_ROUTE_44_TRAINER_2_Text_1
	namebox BATTLE_ROUTE_44_TRAINER_2_Text_2
	msgbox BATTLE_ROUTE_44_TRAINER_2_Text_1
	hidenamebox
	release
	end


ROUTE_44_NPC_1::
	faceplayer
	namebox ROUTE_44_NPC_1_Text_0
	msgbox ROUTE_44_NPC_1_Text_1
	closemessage
	hidenamebox
	release
	end


BATTLE_ROUTE_44_TRAINER_1_Text_0:
	.string "Polly wants a cracker.$"

BATTLE_ROUTE_44_TRAINER_1_Text_1:
	.string ".....$"

BATTLE_ROUTE_44_TRAINER_1_Text_2:
	.string "Fibulala$"

BATTLE_ROUTE_44_TRAINER_2_Text_0:
	.string "You made it pretty far, but now you've\n"
	.string "met me. Pity..$"

BATTLE_ROUTE_44_TRAINER_2_Text_1:
	.string "Damn. I wanted your stuff so badly.\n"
	.string "Pity.$"

BATTLE_ROUTE_44_TRAINER_2_Text_2:
	.string "C Specs$"

ROUTE_44_NPC_1_Text_0:
	.string "Fravesta$"

ROUTE_44_NPC_1_Text_1:
	.string "I heard there was a good spot around\n"
	.string "here for skull tricking noobs, do you\l"
	.string "know where it is?\p"
	.string "Oh, maybe I shouldn't have told you\n"
	.string "that...$"
