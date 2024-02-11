PortSarim_Lighthouse_2F_MapScripts::
	.byte 0


LIGHTHOUSE_2F_NPC_1::
	msgbox LIGHTHOUSE_2F_NPC_1_Text_0
	closemessage
	release
	end


LIGHTHOUSE_2F_NPC_2::
	msgbox LIGHTHOUSE_2F_NPC_2_Text_0
	closemessage
	release
	end


LIGHTHOUSE_2F_NPC_3::
	msgbox LIGHTHOUSE_2F_NPC_3_Text_0
	closemessage
	release
	end


LIGHTHOUSE_2F_NPC_4::
	msgbox LIGHTHOUSE_2F_NPC_4_Text_0
	closemessage
	release
	end


LIGHTHOUSE_2F_NPC_5::
	lock
	faceplayer
	namebox LIGHTHOUSE_2F_NPC_5_Text_0
	msgbox LIGHTHOUSE_2F_NPC_5_Text_1
	closemessage
	hidenamebox
	release
	end


BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_1::
	trainerbattle_double TRAINER_LIGHTHOUSE_2F_DOUBLE_BATTLE, BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_1_Text_0, BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_1_Text_1, BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_1_Text_2
	namebox BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_1_Text_3
	msgbox BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_1_Text_4
	hidenamebox
	release
	end


BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_2::
	trainerbattle_double TRAINER_LIGHTHOUSE_2F_DOUBLE_BATTLE, BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_2_Text_0, BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_1_Text_1, BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_1_Text_2
	namebox BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_2_Text_1
	msgbox BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_2_Text_2
	hidenamebox
	release
	end


LIGHTHOUSE_2F_NPC_1_Text_0:
	.string "The guard is too engaged in battle to\n"
	.string "talk right now.$"

LIGHTHOUSE_2F_NPC_2_Text_0:
	.string "The HAM member is too busy battling the\n"
	.string "guard.\p"
	.string "You really hope they're losing…$"

LIGHTHOUSE_2F_NPC_3_Text_0:
	.string "The guard can't talk while battling!$"

LIGHTHOUSE_2F_NPC_4_Text_0:
	.string "You can hear the HAM member chuckling.\p"
	.string "That's probably not a good sign.$"

LIGHTHOUSE_2F_NPC_5_Text_0:
	.string "Security Guard$"

LIGHTHOUSE_2F_NPC_5_Text_1:
	.string "Oh god I only came here to give people\n"
	.string "tips on security!\p"
	.string "I'm not built for battling.$"

BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_1_Text_0:
	.string "What do you think you are doing?!\p"
	.string "We're in a middle of a battle!$"

BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_1_Text_1:
	.string "We should have just let you go on ahead.$"

BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_1_Text_2:
	.string "Why do you only have one monster?\p"
	.string "What is wrong with you.$"

BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_1_Text_3:
	.string "Dennis$"

BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_1_Text_4:
	.string "I knew I should have taken today off…$"

BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_2_Text_0:
	.string "Get out of our way, we need to battle!$"

BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_2_Text_1:
	.string "HAM Grunt$"

BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_2_Text_2:
	.string "I've done my job and slowed you down.\p"
	.string "I bet we've got what we wanted here\n"
	.string "now.$"
