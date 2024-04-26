Varrock_House_1_MapScripts::
	.byte 0


NPC_VARROCK_WOMAN_1::
	lock
	faceplayer
	msgbox NPC_VARROCK_WOMAN_1_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_VARROCK_WOMAN_2::
	lock
	faceplayer
	msgbox NPC_VARROCK_WOMAN_2_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_HOUSE_1_DRAWER::
	msgbox VARROCK_HOUSE_1_DRAWER_Text_0
	closemessage
	end


NPC_VARROCK_WOMAN_1_Text_0:
	.string "There used to be stray dogs that\n"
	.string "roamed around Varrock, following\l"
	.string "strangers begging for bones.\p"
	.string "After the MvM Championships got\n"
	.string "popular, people started adopting them.\p"
	.string "{PAUSE 15}Oh god, I hope they're not being used\n"
	.string "for battling!$"

NPC_VARROCK_WOMAN_2_Text_0:
	.string "I grew up on the farms south of here, so\n"
	.string "I'll let you in on a little secret I\l"
	.string "learnt raising animals.\p"
	.string "If your chick has equal attack and\n"
	.string "special attack stats when you train it,\l"
	.string "it'll turn into a special chicken or\l"
	.string "rooster that you can normally only find\l"
	.string "in Varrock!$"

VARROCK_HOUSE_1_DRAWER_Text_0:
	.string "You find something nice.{PAUSE 15}You decide to\n"
	.string "leave the uncut red topaz in the\l"
	.string "drawer.$"
