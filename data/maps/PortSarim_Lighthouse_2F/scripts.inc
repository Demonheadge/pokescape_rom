PortSarim_Lighthouse_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PortSarim_Lighthouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PortSarim_Lighthouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call LIGHTHOUSE_2F_STATE
	return


LIGHTHOUSE_2F_STATE::
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 100
	goto_if_eq LIGHTHOUSE_2F_STATE_2
	removeobject 4
	removeobject 5
	removeobject 2
	setflag FLAG_TEMP_1E
LIGHTHOUSE_2F_STATE_1:
	return

LIGHTHOUSE_2F_STATE_2:
	addobject 4
	addobject 5
	addobject 2
	clearflag FLAG_TEMP_1E
	removeobject 8
	setflag FLAG_TEMP_1D
	setobjectmovementtype 6, MOVEMENT_TYPE_JOG_IN_PLACE_RIGHT
	setobjectmovementtype 1, MOVEMENT_TYPE_JOG_IN_PLACE_RIGHT
	setobjectxyperm 1, 13, 2
	special Overworld_PlaySpecialMapMusic
	goto LIGHTHOUSE_2F_STATE_1


LIGHTHOUSE_2F_NPC_1::
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 100
	goto_if_eq LIGHTHOUSE_2F_NPC_1_2
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 105
	goto_if_eq LIGHTHOUSE_2F_NPC_1_3
	lock
	faceplayer
	msgbox LIGHTHOUSE_2F_NPC_1_Text_2
LIGHTHOUSE_2F_NPC_1_1:
	closemessage
	release
	end

LIGHTHOUSE_2F_NPC_1_2:
	msgbox LIGHTHOUSE_2F_NPC_1_Text_0
	goto LIGHTHOUSE_2F_NPC_1_1

LIGHTHOUSE_2F_NPC_1_3:
	lock
	faceplayer
	msgbox LIGHTHOUSE_2F_NPC_1_Text_1
	goto LIGHTHOUSE_2F_NPC_1_1


LIGHTHOUSE_2F_NPC_2::
	msgbox LIGHTHOUSE_2F_NPC_2_Text_0
	closemessage
	release
	end


LIGHTHOUSE_2F_NPC_3::
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 100
	goto_if_eq LIGHTHOUSE_2F_NPC_3_2
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 105
	goto_if_eq LIGHTHOUSE_2F_NPC_3_3
	lock
	faceplayer
	msgbox LIGHTHOUSE_2F_NPC_3_Text_2
LIGHTHOUSE_2F_NPC_3_1:
	closemessage
	release
	end

LIGHTHOUSE_2F_NPC_3_2:
	msgbox LIGHTHOUSE_2F_NPC_3_Text_0
	goto LIGHTHOUSE_2F_NPC_3_1

LIGHTHOUSE_2F_NPC_3_3:
	lock
	faceplayer
	msgbox LIGHTHOUSE_2F_NPC_3_Text_1
	goto LIGHTHOUSE_2F_NPC_3_1


LIGHTHOUSE_2F_NPC_4::
	msgbox LIGHTHOUSE_2F_NPC_4_Text_0
	closemessage
	release
	end


LIGHTHOUSE_2F_NPC_5::
	lock
	faceplayer
	namebox LIGHTHOUSE_2F_NPC_5_Text_0
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 100
	goto_if_eq LIGHTHOUSE_2F_NPC_5_2
	msgbox LIGHTHOUSE_2F_NPC_5_Text_2
LIGHTHOUSE_2F_NPC_5_1:
	closemessage
	hidenamebox
	release
	end

LIGHTHOUSE_2F_NPC_5_2:
	msgbox LIGHTHOUSE_2F_NPC_5_Text_1
	goto LIGHTHOUSE_2F_NPC_5_1


LIGHTHOUSE_2F_NPC_6::
	lock
	faceplayer
	msgbox LIGHTHOUSE_2F_NPC_6_Text_0
	closemessage
	hidenamebox
	release
	end


BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_1::
	trainerbattle_double TRAINER_LIGHTHOUSE_2F_TRAINER_1, BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_1_Text_0, BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_1_Text_1, BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_1_Text_2
	namebox BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_1_Text_3
	msgbox BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_1_Text_4
	hidenamebox
	release
	end


BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_2::
	trainerbattle_double TRAINER_LIGHTHOUSE_2F_TRAINER_2, BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_2_Text_0, BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_1_Text_1, BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_1_Text_2
	namebox BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_2_Text_1
	msgbox BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_2_Text_2
	hidenamebox
	release
	end


LIGHTHOUSE_2F_NPC_1_Text_0:
	.string "The guard is too engaged in battle to\n"
	.string "talk right now.$"

LIGHTHOUSE_2F_NPC_1_Text_1:
	.string "Melzar…\p"
	.string "Melzar…\p"
	.string "Why does that name ring a bell?\p"
	.string "Oh sorry I overheard some of H.A.M\n"
	.string "talking about a guy named Melzar.$"

LIGHTHOUSE_2F_NPC_1_Text_2:
	.string "Being a guard in Port Sarim is\n"
	.string "exhausting!\p"
	.string "Why?\p"
	.string "Because everything comes and goes\n"
	.string "from Port Sarim!\p"
	.string "We have muggers, theives, scammers,\n"
	.string "pirates, goblins if you can think of it\l"
	.string "we have it.$"

LIGHTHOUSE_2F_NPC_2_Text_0:
	.string "The HAM member is too busy battling the\n"
	.string "guard.\p"
	.string "You really hope they're losing…$"

LIGHTHOUSE_2F_NPC_3_Text_0:
	.string "The guard can't talk while battling!$"

LIGHTHOUSE_2F_NPC_3_Text_1:
	.string "You should go visit Rimmington to the\n"
	.string "east.\p"
	.string "They throw the best house parties!$"

LIGHTHOUSE_2F_NPC_3_Text_2:
	.string "Your one of those MvM guys right?\p"
	.string "We were approached by the MvM\n"
	.string "organization to see if we could adapt\l"
	.string "our jail into a gym.\p"
	.string "But our captain didn't like the idea of\n"
	.string "the pirate Redbeard Frank being the\l"
	.string "gym leader.$"

LIGHTHOUSE_2F_NPC_4_Text_0:
	.string "You can hear the HAM member chuckling.\p"
	.string "That's probably not a good sign.$"

LIGHTHOUSE_2F_NPC_5_Text_0:
	.string "Security Guard$"

LIGHTHOUSE_2F_NPC_5_Text_1:
	.string "Oh god I only came here to give people\n"
	.string "tips on security!\p"
	.string "I'm not built for battling.$"

LIGHTHOUSE_2F_NPC_5_Text_2:
	.string "Ahem…\p"
	.string "Piracy is bad.\p"
	.string "What's that?\p"
	.string "This game is technically piracy?\p"
	.string "…I don't know how to reply to this.$"

LIGHTHOUSE_2F_NPC_6_Text_0:
	.string "This lighthouse is also acts as the jail.\p"
	.string "That way we can guard both at the same\n"
	.string "time.$"

BATTLE_LIGHTHOUSE_2F_DOUBLE_BATTLE_1_Text_0:
	.string "What do you think you are doing?!\p"
	.string "We're in the middle of a battle!$"

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
