PortKhazard_MapScripts::
	.byte 0


ITEM_PORTKHAZARD_ATTACK_LAMP::
	finditem ITEM_LAMP_ATT
	end


ITEM_PORTKHAZARD_PURPLE_SWEETS::
	finditem ITEM_PURPLE_SWEETS
	end


NPC_PORTKHAZARD_1::
	lock
	faceplayer
	namebox NPC_PORTKHAZARD_1_Text_0
	msgbox NPC_PORTKHAZARD_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_PORTKHAZARD_2::
	lock
	namebox NPC_PORTKHAZARD_1_Text_0
	msgbox NPC_PORTKHAZARD_2_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_PORTKHAZARD_3::
	lock
	namebox NPC_PORTKHAZARD_1_Text_0
	msgbox NPC_PORTKHAZARD_3_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_PORTKHAZARD_4::
	lock
	faceplayer
	namebox NPC_PORTKHAZARD_1_Text_0
	msgbox NPC_PORTKHAZARD_4_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_PORTKHAZARD_5::
	lock
	faceplayer
	namebox NPC_PORTKHAZARD_5_Text_0
	msgbox NPC_PORTKHAZARD_5_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_PORTKHAZARD_6::
	lock
	faceplayer
	namebox NPC_PORTKHAZARD_1_Text_0
	msgbox NPC_PORTKHAZARD_6_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_PORTKHAZARD_TRADER::
	lock
	faceplayer
	namebox NPC_PORTKHAZARD_TRADER_Text_0
	msgbox NPC_PORTKHAZARD_TRADER_Text_1
	waitmessage
	hidenamebox
	release
	end


PORTKHAZARD_SIGN_1::
	lock
	faceplayer
	msgbox PORTKHAZARD_SIGN_1_Text_0
	release
	end


NPC_PORTKHAZARD_1_Text_0:
	.string "$"

NPC_PORTKHAZARD_1_Text_1:
	.string "I was told I could pick up some\n"
	.string "discarded wooden planks from one of\l"
	.string "the ships here to use to train\l"
	.string "Construction, but I can't seem to find\l"
	.string "any..$"

NPC_PORTKHAZARD_2_Text_0:
	.string "Which way is Ardougne?$"

NPC_PORTKHAZARD_3_Text_0:
	.string "Ardougne is south, I think? Or is it\n"
	.string "north?\p"
	.string "Why don't we just start walking and find\n"
	.string "out?$"

NPC_PORTKHAZARD_4_Text_0:
	.string "I wonder if the wizards at the\n"
	.string "Watchtower have enchanted this fire\l"
	.string "as it never seems to go out!$"

NPC_PORTKHAZARD_5_Text_0:
	.string "Murphy$"

NPC_PORTKHAZARD_5_Text_1:
	.string "The trawler has just left actually!\p"
	.string "Perhaps when it comes back you can join\n"
	.string "them in another run?$"

NPC_PORTKHAZARD_6_Text_0:
	.string "I wanted to buy some soda ash and\n"
	.string "buckets of sand to train my Crafting\l"
	.string "but this guy isn't selling anything.\l"
	.string "What gives?$"

NPC_PORTKHAZARD_TRADER_Text_0:
	.string "Trader Juan$"

NPC_PORTKHAZARD_TRADER_Text_1:
	.string "Sorry, our ship has not returned from\n"
	.string "its last voyage.\p"
	.string "Please come back later.$"

PORTKHAZARD_SIGN_1_Text_0:
	.string "The ship is currently out at sea.$"
