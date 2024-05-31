Tzhaar_FightCaves_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Tzhaar_FightCaves_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Tzhaar_FightCaves_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	return


NPC_TZHAAR_GYM_TOKHAAR::
	lock
	faceplayer
	namebox NPC_TZHAAR_GYM_TOKHAAR_Text_0
	switch VAR_POKESCAPE_TZHAAR_GYM_QUEST
	case 0, NPC_TZHAAR_GYM_TOKHAAR_3
	case 1, NPC_TZHAAR_GYM_TOKHAAR_4
	case 18, NPC_TZHAAR_GYM_TOKHAAR_5
	case 19, NPC_TZHAAR_GYM_TOKHAAR_6
	case 20, NPC_TZHAAR_GYM_TOKHAAR_7
	case 30, NPC_TZHAAR_GYM_TOKHAAR_8
NPC_TZHAAR_GYM_TOKHAAR_1:
	hidenamebox
	closemessage
	release
	end

NPC_TZHAAR_GYM_TOKHAAR_3:
	msgbox NPC_TZHAAR_GYM_TOKHAAR_Text_1
	setvar VAR_POKESCAPE_TZHAAR_GYM_QUEST, 2
	goto NPC_TZHAAR_GYM_TOKHAAR_1

NPC_TZHAAR_GYM_TOKHAAR_4:
	msgbox NPC_TZHAAR_GYM_TOKHAAR_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_TZHAAR_GYM_TOKHAAR_9
	goto NPC_TZHAAR_GYM_TOKHAAR_1

NPC_TZHAAR_GYM_TOKHAAR_5:
	msgbox NPC_TZHAAR_GYM_TOKHAAR_Text_4
	setvar VAR_POKESCAPE_TZHAAR_GYM_QUEST, 1
	goto NPC_TZHAAR_GYM_TOKHAAR_1

NPC_TZHAAR_GYM_TOKHAAR_6:
	msgbox NPC_TZHAAR_GYM_TOKHAAR_Text_5
	setvar VAR_POKESCAPE_TZHAAR_GYM_QUEST, 20
	goto NPC_TZHAAR_GYM_TOKHAAR_1

NPC_TZHAAR_GYM_TOKHAAR_7:
	msgbox NPC_TZHAAR_GYM_TOKHAAR_Text_6, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_TZHAAR_GYM_TOKHAAR_11
	goto NPC_TZHAAR_GYM_TOKHAAR_1

NPC_TZHAAR_GYM_TOKHAAR_8:
	msgbox NPC_TZHAAR_GYM_TOKHAAR_Text_13
	goto NPC_TZHAAR_GYM_TOKHAAR_1

NPC_TZHAAR_GYM_TOKHAAR_9:
	msgbox NPC_TZHAAR_GYM_TOKHAAR_Text_3
	setvar VAR_POKESCAPE_TZHAAR_GYM_QUEST, 3
	goto NPC_TZHAAR_GYM_TOKHAAR_1

NPC_TZHAAR_GYM_TOKHAAR_11:
	msgbox NPC_TZHAAR_GYM_TOKHAAR_Text_7
	hidenamebox
	trainerbattle_no_intro TRAINER_ALKHARID_GYM_PRINCE_ALI, NPC_TZHAAR_GYM_TOKHAAR_Text_8
	namebox NPC_TZHAAR_GYM_TOKHAAR_Text_0
	msgbox NPC_TZHAAR_GYM_TOKHAAR_Text_9
	hidenamebox
	playfanfare MUS_PS_QUEST_COMPLETE
	msgbox NPC_TZHAAR_GYM_TOKHAAR_Text_10
	waitfanfare
	waitmessage
	namebox NPC_TZHAAR_GYM_TOKHAAR_Text_0
	msgbox NPC_TZHAAR_GYM_TOKHAAR_Text_11
	hidenamebox
	giveitem ITEM_TM48, 1
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_ShowBagIsFull
	playbgm MUS_PS_ALKHARID, 0
	savebgm MUS_PS_ALKHARID
	namebox NPC_TZHAAR_GYM_TOKHAAR_Text_0
	msgbox NPC_TZHAAR_GYM_TOKHAAR_Text_12
	setvar VAR_POKESCAPE_TZHAAR_GYM_QUEST, 30
	setflag FLAG_BADGE05_GET
	addvar VAR_GAMEMODE_LEVEL_SCALING, 1
	goto NPC_TZHAAR_GYM_TOKHAAR_1


NPC_TZHAAR_GYM_WAVE_1::
	lock
	msgbox NPC_TZHAAR_GYM_WAVE_1_Text_0
	closemessage
	warp MAP_TZHAAR_CAVES_1, 3, 0, 0
	end


NPC_TZHAAR_GYM_WAVE_2::
	lock
	msgbox NPC_TZHAAR_GYM_WAVE_2_Text_0
	closemessage
	warp MAP_TZHAAR_CAVES_1, 4, 0, 0
	end


NPC_TZHAAR_GYM_WAVE_3::
	lock
	msgbox NPC_TZHAAR_GYM_WAVE_3_Text_0
	closemessage
	warp MAP_TZHAAR_CAVES_1, 0, 0, 0
	end


ENCOUNTER_JAD_GYM::
	lock
	namebox ENCOUNTER_JAD_GYM_Text_0
	playmoncry SPECIES_EKANS, 0
	msgbox ENCOUNTER_JAD_GYM_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_TZTOK_JAD, 5, ITEM_FRAGMENT_OF_JAS
	dowildbattleNoCatch
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_JAD_GYM_2
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_JAD_GYM_3
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq ENCOUNTER_JAD_GYM_4
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq ENCOUNTER_JAD_GYM_5
	end

ENCOUNTER_JAD_GYM_2:
	fadescreen FADE_TO_BLACK
	setvar VAR_POKESCAPE_TZHAAR_GYM_QUEST, 19
	setflag FLAG_TEMP_1
	removeobject 11
	fadescreen FADE_FROM_BLACK
	goto NPC_TZHAAR_GYM_WAVE_3
	closemessage
	end

ENCOUNTER_JAD_GYM_3:
	fadescreen FADE_TO_BLACK
	setvar VAR_POKESCAPE_TZHAAR_GYM_QUEST, 20
	setflag FLAG_TEMP_1
	removeobject 11
	fadescreen FADE_FROM_BLACK
	closemessage
	end

ENCOUNTER_JAD_GYM_4:
	fadescreen FADE_TO_BLACK
	setvar VAR_POKESCAPE_TZHAAR_GYM_QUEST, 1
	fadescreen FADE_FROM_BLACK
	closemessage
	end

ENCOUNTER_JAD_GYM_5:
	namebox ENCOUNTER_JAD_GYM_Text_0
	playmoncry SPECIES_EKANS, 0
	msgbox ENCOUNTER_JAD_GYM_Text_2
	closemessage
	hidenamebox
	msgbox ENCOUNTER_JAD_GYM_Text_3
	msgbox ENCOUNTER_JAD_GYM_Text_4
	msgbox ENCOUNTER_JAD_GYM_Text_5
	closemessage
	setvar VAR_POKESCAPE_TZHAAR_GYM_QUEST, 18
	warp MAP_TZHAAR_CAVES_1, 0, 0, 0
	end


BATTLE_MOD_SARNIE::
	trainerbattle_single TRAINER_MOD_SARNIE, BATTLE_MOD_SARNIE_Text_0, BATTLE_MOD_SARNIE_Text_1
	namebox BATTLE_MOD_SARNIE_Text_2
	msgbox BATTLE_MOD_SARNIE_Text_3
	hidenamebox
	release
	end


NPC_TZHAAR_GYM_LEADER::
	lock
	faceplayer
	namebox NPC_TZHAAR_GYM_LEADER_Text_0
	switch VAR_POKESCAPE_TZHAAR_GYM_QUEST
	case 0, NPC_TZHAAR_GYM_LEADER_3
	case 1, NPC_TZHAAR_GYM_LEADER_4
	case 10, NPC_TZHAAR_GYM_LEADER_5
NPC_TZHAAR_GYM_LEADER_1:
	hidenamebox
	closemessage
	release
	end

NPC_TZHAAR_GYM_LEADER_3:
	msgbox NPC_TZHAAR_GYM_LEADER_Text_1
	setvar VAR_POKESCAPE_TZHAAR_GYM_QUEST, 1
	goto NPC_TZHAAR_GYM_LEADER_1

NPC_TZHAAR_GYM_LEADER_4:
	msgbox NPC_TZHAAR_GYM_LEADER_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_TZHAAR_GYM_LEADER_6
	goto NPC_TZHAAR_GYM_LEADER_1

NPC_TZHAAR_GYM_LEADER_5:
	msgbox NPC_TZHAAR_GYM_LEADER_Text_4
	setvar VAR_POKESCAPE_TZHAAR_GYM_QUEST, 1
	goto NPC_TZHAAR_GYM_LEADER_1

NPC_TZHAAR_GYM_LEADER_6:
	msgbox NPC_TZHAAR_GYM_TOKHAAR_Text_3
	closemessage
	hidenamebox
	setvar VAR_POKESCAPE_TZHAAR_GYM_QUEST, 5
	msgbox NPC_TZHAAR_GYM_LEADER_Text_3
	goto NPC_TZHAAR_GYM_LEADER_1


NPC_TZHAAR_GYM_TOKHAAR_Text_0:
	.string "TokHaar-Hok$"

NPC_TZHAAR_GYM_TOKHAAR_Text_1:
	.string "Welcome to the Elder Kiln, MvM\n"
	.string "Challenger.\p"
	.string "I am TokHaar-Hok.\p"
	.string "If you want the Tzhaar Gym badge you\n"
	.string "must defeat me.\p"
	.string "But before that you must prove\n"
	.string "yourself against TzTok-Jad within the\l"
	.string "Fight Caves.$"

NPC_TZHAAR_GYM_TOKHAAR_Text_2:
	.string "Would you like to start your Fight\n"
	.string "Caves gym challenge?$"

NPC_TZHAAR_GYM_TOKHAAR_Text_3:
	.string "Very well, Ga'al will escort you to the\n"
	.string "caves.$"

NPC_TZHAAR_GYM_TOKHAAR_Text_4:
	.string "Pathetic, to think you would panic and\n"
	.string "run from the fight caves!\p"
	.string "Try again but next time don't run away\n"
	.string "like a coward.$"

NPC_TZHAAR_GYM_TOKHAAR_Text_5:
	.string "Impressive, well done MvM Challenger.\p"
	.string "You defeated TzTok-Jad and the Fight\n"
	.string "Caves.\p"
	.string "You may now challenge me, I will give you\n"
	.string "time to prepare.\p"
	.string "Come back when you are ready to face\n"
	.string "me.$"

NPC_TZHAAR_GYM_TOKHAAR_Text_6:
	.string "Are you ready for your battle against\n"
	.string "me?$"

NPC_TZHAAR_GYM_TOKHAAR_Text_7:
	.string "Very well. Show me what you got.$"

NPC_TZHAAR_GYM_TOKHAAR_Text_8:
	.string "That was a very enjoyable battle!$"

NPC_TZHAAR_GYM_TOKHAAR_Text_9:
	.string "You have done very well.\p"
	.string "To mark your triumph, accept a gym\n"
	.string "badge.$"

NPC_TZHAAR_GYM_TOKHAAR_Text_10:
	.string "{PLAYER} received the TZHAAR BADGE\n"
	.string "from TokHaar-Hok.$"

NPC_TZHAAR_GYM_TOKHAAR_Text_11:
	.string "Also have this Scroll.$"

NPC_TZHAAR_GYM_TOKHAAR_Text_12:
	.string "That move is called Power Gem.\p"
	.string "It sparkles just as all our precious\n"
	.string "Gems around the palace do.$"

NPC_TZHAAR_GYM_TOKHAAR_Text_13:
	.string "Hello again.$"

NPC_TZHAAR_GYM_WAVE_1_Text_0:
	.string "All Tzhaar have been defeated.\p"
	.string "WAVE 1 COMPLETE, MOVING TO NEXT WAVE.$"

NPC_TZHAAR_GYM_WAVE_2_Text_0:
	.string "All Tzhaar have been defeated.\p"
	.string "WAVE 2 COMPLETE, MOVING TO NEXT WAVE.$"

NPC_TZHAAR_GYM_WAVE_3_Text_0:
	.string "TzTok Jad has been defeated.\p"
	.string "WAVE 3 COMPLETE, Exiting Caves.$"

ENCOUNTER_JAD_GYM_Text_0:
	.string "JAD$"

ENCOUNTER_JAD_GYM_Text_1:
	.string "TOKTOK RAAWOORR!$"

ENCOUNTER_JAD_GYM_Text_2:
	.string "TOKKRAAWOORR!$"

ENCOUNTER_JAD_GYM_Text_3:
	.string "TzTok Jad does not seem pleased with\n"
	.string "your attempt to escape.$"

ENCOUNTER_JAD_GYM_Text_4:
	.string "The cave begins to shake.$"

ENCOUNTER_JAD_GYM_Text_5:
	.string "The cave has caved in.$"

BATTLE_MOD_SARNIE_Text_0:
	.string "I just got the Fire Cape!\p"
	.string "Let me try it out on you!$"

BATTLE_MOD_SARNIE_Text_1:
	.string "Wow.$"

BATTLE_MOD_SARNIE_Text_2:
	.string "Mod Sarnie$"

BATTLE_MOD_SARNIE_Text_3:
	.string "You should try the special fight wave\n"
	.string "challenges.\p"
	.string "You could get a Fire Cape like me.$"

NPC_TZHAAR_GYM_LEADER_Text_0:
	.string "Tzhaar Champion$"

NPC_TZHAAR_GYM_LEADER_Text_1:
	.string "Welcome to the Tzhaar Gym, MvM\n"
	.string "Challenger.\p"
	.string "I am TzHaar Champion.\p"
	.string "If the Tzhaar Badge is what you seek,\n"
	.string "then you must participate in our Gym\l"
	.string "Challenge.\p"
	.string "Battle your way through 2 Waves of my\n"
	.string "brethren then defeat me in battle.$"

NPC_TZHAAR_GYM_LEADER_Text_2:
	.string "Would you like to start your Gym\n"
	.string "challenge?$"

NPC_TZHAAR_GYM_LEADER_Text_3:
	.string "Follow me.$"

NPC_TZHAAR_GYM_LEADER_Text_4:
	.string "Us Tzhaar have proven Victorious this\n"
	.string "time.\p"
	.string "Come back and challenge us again when\n"
	.string "you are ready.$"
