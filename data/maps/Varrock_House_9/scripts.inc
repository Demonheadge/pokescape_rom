Varrock_House_9_MapScripts::
	.byte 0


NPC_VARROCK_ZMI_1::
	lock
	faceplayer
	namebox NPC_VARROCK_ZMI_1_Text_0
	msgbox NPC_VARROCK_ZMI_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_VARROCK_ZMI_2::
	lock
	faceplayer
	namebox NPC_VARROCK_ZMI_2_Text_0
	msgbox NPC_VARROCK_ZMI_2_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_VARROCK_ZMI_3::
	lock
	faceplayer
	namebox NPC_VARROCK_ZMI_2_Text_0
	msgbox NPC_VARROCK_ZMI_3_Text_0
	closemessage
	hidenamebox
	release
	end


ITEM_ZMI_DEATH_RUNE::
	finditem ITEM_DEATH_RUNE
	end


NPC_VARROCK_ZMI_1_Text_0:
	.string "Mage of Zamorak$"

NPC_VARROCK_ZMI_1_Text_1:
	.string "We are a group of mages in service to\n"
	.string "Zamorak.\p"
	.string "Our group is called the Zamorak Magical\n"
	.string "Institute, or Z.M.I. for short.\p"
	.string "There are too many Saradominist groups\n"
	.string "in these lands for us to practice\l"
	.string "freely, so we have to hide in the\l"
	.string "shadows.\p"
	.string "{PAUSE 15}Perhaps if you can prove yourself in\n"
	.string "future, we can share some of our\l"
	.string "knowledge with you.$"

NPC_VARROCK_ZMI_2_Text_0:
	.string "Acolyte$"

NPC_VARROCK_ZMI_2_Text_1:
	.string "Did you know that the Order of Wizards\n"
	.string "wasn't always a Saradominist group?\p"
	.string "They used to allow all mages to study\n"
	.string "with them, but they became greedy and\l"
	.string "started stealing other wizard's\l"
	.string "research!$"

NPC_VARROCK_ZMI_3_Text_0:
	.string "Did you ever hear the tragedy of\n"
	.string "Zamorak, Lord of Chaos?\p"
	.string "I thought not.\p"
	.string "It’s not a story the Saradominists would\n"
	.string "tell you...$"
