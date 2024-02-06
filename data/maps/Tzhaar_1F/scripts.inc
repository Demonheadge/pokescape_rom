Tzhaar_1F_MapScripts::
	.byte 0


TZHAAR_GAAL::
	faceplayer
	msgbox TZHAAR_GAAL_Text_0
	closemessage
	release
	end


TZHAAR_OZAN::
	faceplayer
	msgbox TZHAAR_OZAN_Text_0
	closemessage
	release
	end


TZHAAR_ZANIK::
	faceplayer
	msgbox TZHAAR_ZANIK_Text_0
	closemessage
	release
	end


TZHAAR_GAAL_Text_0:
	.string "Guh?\p"
	.string ".TzHaar?$"

TZHAAR_OZAN_Text_0:
	.string "I've been adventuring with a goblin\n"
	.string "friend called Zanik lately.\p"
	.string "She says a brave adventurer saved her\n"
	.string "city and defeated an evil god, and when\l"
	.string "I look into those big eyes I can't\l"
	.string "believe she's exaggerating.\p"
	.string "I am sure she's around here somewhere.$"

TZHAAR_ZANIK_Text_0:
	.string "I have been fighting in the Fight Caves.\p"
	.string "I haven't gotten to the end yet though.\p"
	.string "They say there's some huge creature\n"
	.string "called TzTok-Jad.$"
