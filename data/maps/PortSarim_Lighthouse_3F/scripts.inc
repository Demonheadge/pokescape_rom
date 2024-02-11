PortSarim_Lighthouse_3F_MapScripts::
	.byte 0


LIGHTHOUSE_3F_NPC_1::
	msgbox LIGHTHOUSE_3F_NPC_1_Text_0
	closemessage
	release
	end


LIGHTHOUSE_3F_NPC_2::
	msgbox LIGHTHOUSE_3F_NPC_2_Text_0
	closemessage
	release
	end


LIGHTHOUSE_3F_NPC_3::
	msgbox LIGHTHOUSE_3F_NPC_3_Text_0
	closemessage
	release
	end


LIGHTHOUSE_3F_NPC_4::
	msgbox LIGHTHOUSE_3F_NPC_4_Text_0
	closemessage
	release
	end


BATTLE_LIGHTHOUSE_3F_TRAINER_1::
	trainerbattle_single TRAINER_LIGHTHOUSE_3F_TRAINER_1, BATTLE_LIGHTHOUSE_3F_TRAINER_1_Text_0, BATTLE_LIGHTHOUSE_3F_TRAINER_1_Text_1
	namebox BATTLE_LIGHTHOUSE_3F_TRAINER_1_Text_2
	msgbox BATTLE_LIGHTHOUSE_3F_TRAINER_1_Text_1
	hidenamebox
	release
	end


LIGHTHOUSE_3F_NPC_1_Text_0:
	.string "The guard looks like they're struggling\n"
	.string "to hold the HAM member off.$"

LIGHTHOUSE_3F_NPC_2_Text_0:
	.string "They appear to be winning.\p"
	.string "Someone needs to stop these HAM\n"
	.string "members before it's too late.$"

LIGHTHOUSE_3F_NPC_3_Text_0:
	.string "The guard hurriedly points to the\n"
	.string "nearby HAM members.$"

LIGHTHOUSE_3F_NPC_4_Text_0:
	.string "The HAM member looks like they're about\n"
	.string "to cry.\p"
	.string "Probably not a good look in front of one\n"
	.string "of their boss.$"

BATTLE_LIGHTHOUSE_3F_TRAINER_1_Text_0:
	.string "Our Admin is still getting what she\n"
	.string "needs, so I guess it's up to me to stop\l"
	.string "you.$"

BATTLE_LIGHTHOUSE_3F_TRAINER_1_Text_1:
	.string "Aw, doesn't look like I'll be getting\n"
	.string "that promotion now…$"

BATTLE_LIGHTHOUSE_3F_TRAINER_1_Text_2:
	.string "HAM Member$"
