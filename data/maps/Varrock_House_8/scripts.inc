Varrock_House_8_MapScripts::
	.byte 0


NPC_BLACK_ARM_KATRINE::
	lock
	faceplayer
	namebox NPC_BLACK_ARM_KATRINE_Text_0
	msgbox NPC_BLACK_ARM_KATRINE_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_BLACK_ARM_1::
	lock
	faceplayer
	namebox NPC_BLACK_ARM_1_Text_0
	msgbox NPC_BLACK_ARM_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_BLACK_ARM_2::
	lock
	faceplayer
	namebox NPC_BLACK_ARM_2_Text_0
	msgbox NPC_BLACK_ARM_2_Text_1
	closemessage
	hidenamebox
	release
	end


ITEM_BLACK_ARM_MITH_SCIM::
	finditem ITEM_MITHRIL_SCIMITAR
	end


NPC_BLACK_ARM_KATRINE_Text_0:
	.string "Katrine$"

NPC_BLACK_ARM_KATRINE_Text_1:
	.string "Who are you, and how did you get in\n"
	.string "here?\p"
	.string "You aren't with the law are you?\p"
	.string "This is a private business, I'm going to\n"
	.string "have to ask you to leave.$"

NPC_BLACK_ARM_1_Text_0:
	.string "Mugger$"

NPC_BLACK_ARM_1_Text_1:
	.string "Lady Katrine asked me to steal a\n"
	.string "crossbow from the Phoenix Gang to\l"
	.string "prove my loyalty.\p"
	.string "I've stolen plenty of things over the\n"
	.string "years, but I think I'll need some help\l"
	.string "to get into their weapon store...$"

NPC_BLACK_ARM_2_Text_0:
	.string "Thief$"

NPC_BLACK_ARM_2_Text_1:
	.string "I heard that Scarface Pete has the\n"
	.string "candlesticks, but I have no idea how to\l"
	.string "get past his security...\p"
	.string "{PAUSE 15}Hey!\p"
	.string "Forget you heard anything, or else!$"
