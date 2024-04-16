JollyBoar_Pub_2F_MapScripts::
	.byte 0


JOLLYBOARBOOK::
	lock
	msgbox JOLLYBOARBOOK_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne JOLLYBOARBOOK_2
	msgbox JOLLYBOARBOOK_Text_2
	closemessage
JOLLYBOARBOOK_1:
	release
	end

JOLLYBOARBOOK_2:
	msgbox JOLLYBOARBOOK_Text_1
	closemessage
	goto JOLLYBOARBOOK_1


JOLLYBOARBOOK_Text_0:
	.string "There is an old journal on the table.\p"
	.string "Most of the pages have been torn out,\n"
	.string "but you can see that there is one still\l"
	.string "left.\p"
	.string "Do you want to read it?$"

JOLLYBOARBOOK_Text_1:
	.string "Our lands are filled with impurities.\p"
	.string "Goblins, Dwarves and other monstrous\n"
	.string "abominations.\p"
	.string "Even here, in a Inn far away from most,\n"
	.string "you notice how the Wilderness is\l"
	.string "tainted,\p"
	.string "and how you can almost feel a darkness\n"
	.string "at the east.\p"
	.string "The civilised human society is under a\n"
	.string "direct threat and they are blind to it.\p"
	.string "How many people have died in a Goblin\n"
	.string "Raid?\p"
	.string "And what will happen when the dwarves\n"
	.string "take their forged arms against us?\p"
	.string "Or foul creatures I've never heard of\n"
	.string "doing stuff that Saradomin forbids?\p"
	.string "I've made up my mind, it is time for\n"
	.string "humanity to grow a backbone.\p"
	.string "There are other people who feel the\n"
	.string "same as I do, there must be.\p"
	.string "I will gather them, and we shall not rest\n"
	.string "until the lands are clear of all the\l"
	.string "monsters! -J.U.$"

JOLLYBOARBOOK_Text_2:
	.string "You decide not to read the journal\n"
	.string "page.$"
