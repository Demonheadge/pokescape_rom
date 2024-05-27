Draynor_House_Ned_MapScripts::
	.byte 0


Ned_Draynor::
	lock
	namebox Ned_Draynor_Text_0
	msgbox Ned_Draynor_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Ned_Draynor_2
	msgbox Ned_Draynor_Text_5
	hidenamebox
	release
	end

Ned_Draynor_2:
	checkmoney 500, 0
	compare VAR_RESULT, 0
	goto_if_eq Ned_Draynor_5
	msgbox Ned_Draynor_Text_4
	removemoney 500
	giveitem ITEM_ROPE
	closemessage
	hidenamebox
	release
	end

Ned_Draynor_5:
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Ned_Draynor_8
	msgbox Ned_Draynor_Text_3
Ned_Draynor_7:
	closemessage
	hidenamebox
	release
	end

Ned_Draynor_8:
	msgbox Ned_Draynor_Text_2
	goto Ned_Draynor_7


DRAYNOR_NED_EVENT_WHITE_KNIGHT::
	lock
	namebox DRAYNOR_NED_EVENT_WHITE_KNIGHT_Text_0
	msgbox DRAYNOR_NED_EVENT_WHITE_KNIGHT_Text_1
	hidenamebox
	release
	end


Ned_Draynor_Text_0:
	.string "Ned$"

Ned_Draynor_Text_1:
	.string "Would you like to buy some of my world\n"
	.string "famous rope?\p"
	.string "It is 500gp each.$"

Ned_Draynor_Text_2:
	.string "Ah my boy, you seem to be short on\n"
	.string "funds.$"

Ned_Draynor_Text_3:
	.string "Ah my girl, you seem to be short on\n"
	.string "funds.$"

Ned_Draynor_Text_4:
	.string "Here you go, one of my finest!$"

Ned_Draynor_Text_5:
	.string "Hello, is there something I can help you\n"
	.string "with?\p"
	.string "Want to buy some rope perhaps?\p"
	.string "{PAUSE 15}\p"
	.string "You need to charter a ship to an island?\p"
	.string "Well, I was a sailor but I've not been\n"
	.string "able to get work at sea for a while.\p"
	.string "They say I'm too old now.\p"
	.string "But...\p"
	.string "It would be a chance to sail a ship\n"
	.string "again.\p"
	.string "Where do you need to sail to?\p"
	.string "{PAUSE 15}Crandor!?\p"
	.string "No captain in their right mind would sail\n"
	.string "there, it's too dangerous!\p"
	.string "Plus we'd need a map and nobody has\n"
	.string "chartered a map there for decades.\p"
	.string "Not since, well...\p"
	.string "Wait, you have a map? Let me take a\n"
	.string "look!{PAUSE 15}I said I'd sail anywhere if it was a\l"
	.string "chance to sail again.\p"
	.string "Meet me at my ship, the Lady Lumbridge\n"
	.string "in Port Sarim.\p"
	.string "I'll have Cabin Boy Jenkins get\n"
	.string "everything ready for us to set sail.$"

DRAYNOR_NED_EVENT_WHITE_KNIGHT_Text_0:
	.string "Sir Owen$"

DRAYNOR_NED_EVENT_WHITE_KNIGHT_Text_1:
	.string "The white knights have been able to\n"
	.string "secure a ship for transport.\p"
	.string "It is called Lady Falador located south\n"
	.string "of the docks in Port Sarim.\p"
	.string "The name of the ship was orginally\n"
	.string "called Lady Lumbridge but considering\l"
	.string "Falador is purchasing it and paying for\l"
	.string "transport it was fitting to rename it.$"
