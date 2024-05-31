Tzhaar_1F_MapScripts::
	.byte 0


TZHAAR_GAAL::
	faceplayer
	namebox TZHAAR_GAAL_Text_0
	msgbox TZHAAR_GAAL_Text_1
	closemessage
	hidenamebox
	release
	end


TRIGGER_TZHAAR_GYM_GAAL_1::
	faceplayer
	namebox TZHAAR_GAAL_Text_0
	msgbox TRIGGER_TZHAAR_GYM_GAAL_1_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_FIGHTCAVES_NPC::
	faceplayer
	msgbox TZHAAR_FIGHTCAVES_NPC_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_GYM_NPC::
	lock
	faceplayer
	namebox TZHAAR_GYM_NPC_Text_0
	msgbox TZHAAR_GYM_NPC_Text_1
	closemessage
	hidenamebox
	release
	end


TZHAAR_NPC_1::
	faceplayer
	msgbox TZHAAR_NPC_1_Text_0
	msgbox TZHAAR_NPC_1_Text_1
	msgbox TZHAAR_NPC_1_Text_2
	closemessage
	hidenamebox
	release
	end


TZHAAR_NPC_2::
	lock
	faceplayer
	msgbox TZHAAR_NPC_2_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_NPC_3::
	faceplayer
	msgbox TZHAAR_NPC_3_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_NPC_4::
	faceplayer
	msgbox TZHAAR_NPC_4_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_NPC_5::
	faceplayer
	msgbox TZHAAR_NPC_5_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_NPC_6::
	faceplayer
	msgbox TZHAAR_NPC_6_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_NPC_7::
	faceplayer
	msgbox TZHAAR_NPC_7_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_NPC_8::
	faceplayer
	msgbox TZHAAR_NPC_8_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_NPC_9::
	faceplayer
	msgbox TZHAAR_NPC_9_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_NPC_10::
	faceplayer
	msgbox TZHAAR_NPC_10_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_NPC_11::
	faceplayer
	msgbox TZHAAR_NPC_11_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_NPC_RUNE_ARMOUR::
	faceplayer
	msgbox TZHAAR_NPC_RUNE_ARMOUR_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_NPC_12::
	faceplayer
	msgbox TZHAAR_NPC_12_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_NPC_BANKER::
	faceplayer
	msgbox TZHAAR_NPC_BANKER_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_OZAN::
	faceplayer
	namebox TZHAAR_OZAN_Text_0
	msgbox TZHAAR_OZAN_Text_1
	closemessage
	hidenamebox
	release
	end


TZHAAR_ZANIK::
	faceplayer
	namebox TZHAAR_ZANIK_Text_0
	msgbox TZHAAR_ZANIK_Text_1
	closemessage
	hidenamebox
	release
	end


STORYMODE_TZHAAR_NPC::
	faceplayer
	msgbox STORYMODE_TZHAAR_NPC_Text_0
	closemessage
	hidenamebox
	release
	end


TZHAAR_GAAL_Text_0:
	.string "Ga'al$"

TZHAAR_GAAL_Text_1:
	.string "Guh?\p"
	.string "TzHaar?$"

TRIGGER_TZHAAR_GYM_GAAL_1_Text_0:
	.string "Allow us to escort you back to the\n"
	.string "Tzhaar City.$"

TZHAAR_FIGHTCAVES_NPC_Text_0:
	.string "Welcome to the Tzhaar Fight Caves!\p"
	.string "Only those with the Tzhaar badge may\n"
	.string "enter.$"

TZHAAR_GYM_NPC_Text_0:
	.string "Ga'Al$"

TZHAAR_GYM_NPC_Text_1:
	.string "Welcome to the Tzhaar Gym.$"

TZHAAR_NPC_1_Text_0:
	.string "We Tzhaar are strong.\p"
	.string "Our strongest participate in what you\n"
	.string "call MvM Championships.\p"
	.string "We even have a gym located down this\n"
	.string "corridor.$"

TZHAAR_NPC_1_Text_1:
	.string "Would you like me to show you?$"

TZHAAR_NPC_1_Text_2:
	.string "Here we are this is the Tzhaar Gym, our\n"
	.string "champion is one of the strongest\l"
	.string "Tzhaar!$"

TZHAAR_NPC_2_Text_0:
	.string "Through here is the Elder Kiln.\p"
	.string "This is for Tzhaar only.\p"
	.string "You are not Tzhaar.$"

TZHAAR_NPC_3_Text_0:
	.string "Ever since we have participated in the\n"
	.string "MvM championships there have been\l"
	.string "many of your kind passing through our\l"
	.string "city.\p"
	.string "We have had to reinforce our tunnels\n"
	.string "for safety.$"

TZHAAR_NPC_4_Text_0:
	.string "If you wish to heal check out our bank\n"
	.string "by the Fight Caves to the south east.$"

TZHAAR_NPC_5_Text_0:
	.string "Be careful, many of your kind get lost\n"
	.string "in city.\p"
	.string "If you get lost try talking to us.$"

TZHAAR_NPC_6_Text_0:
	.string "To the north are our sacred Kilns.\p"
	.string "To the west leads deep into the\n"
	.string "volcanos inferno.\p"
	.string "To the south-east leads to the Fight\n"
	.string "Caves.\p"
	.string "To the south leads to the island.\p"
	.string "So many ways to go, which way will you\n"
	.string "take?$"

TZHAAR_NPC_7_Text_0:
	.string "I have to constantly clear this\n"
	.string "corridor as we get cave-in's quite\l"
	.string "often.$"

TZHAAR_NPC_8_Text_0:
	.string "While we like to fight, we also like to\n"
	.string "make friends.\p"
	.string "Will you be our friend?$"

TZHAAR_NPC_9_Text_0:
	.string "When defeated we Tzhaar turn into\n"
	.string "TokKul.\p"
	.string "Which is what we use for currency\n"
	.string "around here.\p"
	.string "But for all of your MvM supplies we\n"
	.string "charge you the regular GP.$"

TZHAAR_NPC_10_Text_0:
	.string "I could have swore I heard this TokKul\n"
	.string "talking to me.\p"
	.string "Eh, probably nothing.$"

TZHAAR_NPC_11_Text_0:
	.string "There are 3 different races.\p"
	.string "TokHaar, Jal and Tzhaar.\p"
	.string "There are also the Ga'al, they are new.\p"
	.string "So I suppose there are 4 now.$"

TZHAAR_NPC_RUNE_ARMOUR_Text_0:
	.string "This gym challenge is so hard.\p"
	.string "I keep getting 1-hit…$"

TZHAAR_NPC_12_Text_0:
	.string "These tunnels lead to deep into the\n"
	.string "heart of the volcano.\p"
	.string "You are not ready to enter yet.$"

TZHAAR_NPC_BANKER_Text_0:
	.string "Greetings, welcome to the Bank of\n"
	.string "Tzhaar!\p"
	.string "We are learning new things from this\n"
	.string "human.\p"
	.string "What can I help you with today?$"

TZHAAR_OZAN_Text_0:
	.string "Ozan$"

TZHAAR_OZAN_Text_1:
	.string "I've been adventuring with a goblin\n"
	.string "friend called Zanik lately.\p"
	.string "She says a brave adventurer saved her\n"
	.string "city and defeated an evil god, and when\l"
	.string "I look into those big eyes I can't\l"
	.string "believe she's exaggerating.\p"
	.string "I am sure she's around here somewhere.$"

TZHAAR_ZANIK_Text_0:
	.string "Zanik$"

TZHAAR_ZANIK_Text_1:
	.string "I have been fighting in the Fight Caves.\p"
	.string "I haven't gotten to the end yet though.\p"
	.string "They say there's some huge creature\n"
	.string "called TzTok-Jad.$"

STORYMODE_TZHAAR_NPC_Text_0:
	.string "Thank you for chasing off those pink\n"
	.string "men, they have been very destructive\l"
	.string "to the area.\p"
	.string "Feel free to use our facilities, and\n"
	.string "seeing as your are an MvM challenger\l"
	.string "our gym is located to the west of here.$"
