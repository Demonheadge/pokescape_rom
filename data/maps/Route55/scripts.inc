Route55_MapScripts::
	.byte 0


BATTLE_ROUTE_55_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE_55_TRAINER_1, BATTLE_ROUTE_55_TRAINER_1_Text_0, BATTLE_ROUTE_55_TRAINER_1_Text_1
	namebox BATTLE_ROUTE_55_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE_55_TRAINER_1_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE_55_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE_55_TRAINER_2, BATTLE_ROUTE_55_TRAINER_2_Text_0, BATTLE_ROUTE_55_TRAINER_2_Text_1
	namebox BATTLE_ROUTE_55_TRAINER_2_Text_2
	msgbox BATTLE_ROUTE_55_TRAINER_2_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE_55_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE_55_TRAINER_3, BATTLE_ROUTE_55_TRAINER_3_Text_0, BATTLE_ROUTE_55_TRAINER_3_Text_1
	namebox BATTLE_ROUTE_55_TRAINER_3_Text_2
	msgbox BATTLE_ROUTE_55_TRAINER_3_Text_3
	hidenamebox
	release
	end


ROUTE55_SIGN_1::
	lock
	faceplayer
	msgbox ROUTE55_SIGN_1_Text_0
	release
	end


ROUTE55_SIGN_2::
	lock
	faceplayer
	msgbox ROUTE55_SIGN_2_Text_0
	release
	end


ROUTE55_NPC_1::
	lock
	faceplayer
	namebox ROUTE55_NPC_1_Text_0
	msgbox ROUTE55_NPC_1_Text_1
	closemessage
	hidenamebox
	release
	end


BATTLE_ROUTE_55_TRAINER_1_Text_0:
	.string "Ha! Puny human scared of Slimenose.$"

BATTLE_ROUTE_55_TRAINER_1_Text_1:
	.string "Take that! Wait, Slimenose no win?$"

BATTLE_ROUTE_55_TRAINER_1_Text_2:
	.string "Slimenose$"

BATTLE_ROUTE_55_TRAINER_1_Text_3:
	.string "Slimenose win next time human..$"

BATTLE_ROUTE_55_TRAINER_2_Text_0:
	.string "I might be a farmhand, but my real\n"
	.string "passion is battling!$"

BATTLE_ROUTE_55_TRAINER_2_Text_1:
	.string "Maybe I should stick to farming.$"

BATTLE_ROUTE_55_TRAINER_2_Text_2:
	.string "Daisy$"

BATTLE_ROUTE_55_TRAINER_2_Text_3:
	.string "It's tough to learn how to battle\n"
	.string "properly when you work such long\l"
	.string "hours..$"

BATTLE_ROUTE_55_TRAINER_3_Text_0:
	.string "Oi mate, you better not be tryin' to\n"
	.string "steal more of my seeds.$"

BATTLE_ROUTE_55_TRAINER_3_Text_1:
	.string "I guess you're more interested in\n"
	.string "battlin' than farmin'.$"

BATTLE_ROUTE_55_TRAINER_3_Text_2:
	.string "Jeremy$"

BATTLE_ROUTE_55_TRAINER_3_Text_3:
	.string "Adventurers keep walkin' by and takin'\n"
	.string "seeds right out my pocket!$"

ROUTE55_SIGN_1_Text_0:
	.string "It smells really bad in the cave. You\n"
	.string "should come back when you have a\l"
	.string "nosepeg.$"

ROUTE55_SIGN_2_Text_0:
	.string "Richard's Farming Supply Shop.\p"
	.string "Want Farming advice? Ask a gardener!$"

ROUTE55_NPC_1_Text_0:
	.string "Derren$"

ROUTE55_NPC_1_Text_1:
	.string "We weren't making enough money selling\n"
	.string "farming supplies, so we diversified our\l"
	.string "business and now we help the gnomes to\l"
	.string "breed terrorbirds specifically\l"
	.string "designed for humans to ride!\p"
	.string "Oh! I can see you already have one of\n"
	.string "your own, how are you finding it?$"
