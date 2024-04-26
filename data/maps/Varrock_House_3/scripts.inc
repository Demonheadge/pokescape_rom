Varrock_House_3_MapScripts::
	.byte 0


NPC_VARROCK_ZAFF::
	lock
	faceplayer
	namebox NPC_VARROCK_ZAFF_Text_0
	msgbox NPC_VARROCK_ZAFF_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_VARROCK_ZAFF_Text_0:
	.string "Zaff$"

NPC_VARROCK_ZAFF_Text_1:
	.string "Did you know that some monsters can\n"
	.string "change form when they faint?\p"
	.string "Did you also know that you can make\n"
	.string "them change form by using a Death Rune\l"
	.string "on them instead?$"
