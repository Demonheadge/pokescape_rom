Varrock_House_4_MapScripts::
	.byte 0


NPC_VARROCK_NOOB::
	lock
	faceplayer
	namebox NPC_VARROCK_NOOB_Text_0
	msgbox NPC_VARROCK_NOOB_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_VARROCK_NOOB_Text_0:
	.string "Noob$"

NPC_VARROCK_NOOB_Text_1:
	.string "I bought a house from an estate agent,\n"
	.string "but he never actually told me where it\l"
	.string "was....\p"
	.string "I wandered around Varrock for a bit\n"
	.string "until I found this run down house.\p"
	.string "There was some old man in here babbling\n"
	.string "on about needing furniture replaced.\p"
	.string "He said he was going to get Marlo from\n"
	.string "Mahogany Homes?\p"
	.string "Are they the ones who'll be\n"
	.string "redecorating for me?$"
