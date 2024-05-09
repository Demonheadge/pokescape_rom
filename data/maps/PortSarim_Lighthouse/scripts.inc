PortSarim_Lighthouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PortSarim_Lighthouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, PortSarim_Lighthouse_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

PortSarim_Lighthouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call JAILMAP_STATE
	return

PortSarim_Lighthouse_MapScripts_MAP_SCRIPT_ON_LOAD:
	call JAILMAP_STATE
	return


JAILMAP_STATE::
	goto_if_set FLAG_LIGHTHOUSE_PIRATE, JAILMAP_STATE_2
JAILMAP_STATE_1:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 100
	goto_if_eq JAILMAP_STATE_5
	removeobject 7
	removeobject 8
	setflag FLAG_TEMP_1D
JAILMAP_STATE_4:
	return

JAILMAP_STATE_2:
	removeobject 5
	setmetatile 4, 7, 694, 0
	setmetatile 4, 8, 702, 1
	setmetatile 5, 7, 89, 0
	setmetatile 5, 8, 89, 0
	setmetatile 6, 8, 701, 1
	special DrawWholeMapView
	goto JAILMAP_STATE_1

JAILMAP_STATE_5:
	removeobject 4
	removeobject 9
	removeobject 10
	setflag FLAG_TEMP_1E
	setmetatile 7, 7, 694, 0
	setmetatile 7, 8, 702, 1
	setmetatile 8, 7, 89, 0
	setmetatile 8, 8, 89, 0
	setmetatile 9, 8, 701, 1
	setmetatile 13, 2, 314, 0
	setmetatile 12, 10, 314, 0
	setmetatile 13, 4, 89, 0
	setmetatile 12, 7, 89, 0
	setmetatile 13, 8, 314, 0
	setmetatile 13, 9, 89, 0
	special DrawWholeMapView
	setobjectmovementtype 1, MOVEMENT_TYPE_JOG_IN_PLACE_LEFT
	setobjectxyperm 1, 15, 3
	playbgm MUS_PS_ENCOUNTER_HAM, TRUE
	special Overworld_PlaySpecialMapMusic
	goto JAILMAP_STATE_4


LIGHTHOUSE_NPC_1::
	lock
	faceplayer
	namebox LIGHTHOUSE_NPC_1_Text_0
	msgbox LIGHTHOUSE_NPC_1_Text_1
	closemessage
	hidenamebox
	release
	end


LIGHTHOUSE_NPC_2::
	lock
	faceplayer
	namebox LIGHTHOUSE_NPC_2_Text_0
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 100
	goto_if_eq LIGHTHOUSE_NPC_2_2
	msgbox LIGHTHOUSE_NPC_2_Text_2
LIGHTHOUSE_NPC_2_1:
	closemessage
	hidenamebox
	release
	end

LIGHTHOUSE_NPC_2_2:
	msgbox LIGHTHOUSE_NPC_2_Text_1
	goto LIGHTHOUSE_NPC_2_1


LIGHTHOUSE_NPC_3::
	lock
	faceplayer
	namebox LIGHTHOUSE_NPC_3_Text_0
	msgbox LIGHTHOUSE_NPC_3_Text_1
	closemessage
	hidenamebox
	release
	end


LIGHTHOUSE_NPC_4::
	lock
	faceplayer
	namebox LIGHTHOUSE_NPC_4_Text_0
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 100
	goto_if_eq LIGHTHOUSE_NPC_4_2
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 105
	goto_if_eq LIGHTHOUSE_NPC_4_3
	msgbox LIGHTHOUSE_NPC_4_Text_3
LIGHTHOUSE_NPC_4_1:
	closemessage
	hidenamebox
	release
	end

LIGHTHOUSE_NPC_4_2:
	msgbox LIGHTHOUSE_NPC_4_Text_1
	goto LIGHTHOUSE_NPC_4_1

LIGHTHOUSE_NPC_4_3:
	msgbox LIGHTHOUSE_NPC_4_Text_2
	goto LIGHTHOUSE_NPC_4_1


LIGHTHOUSE_NPC_WORMBRAIN::
	lock
	faceplayer
	namebox LIGHTHOUSE_NPC_WORMBRAIN_Text_0
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 105
	goto_if_eq LIGHTHOUSE_NPC_WORMBRAIN_2
	msgbox LIGHTHOUSE_NPC_WORMBRAIN_Text_2
LIGHTHOUSE_NPC_WORMBRAIN_1:
	closemessage
	hidenamebox
	release
	end

LIGHTHOUSE_NPC_WORMBRAIN_2:
	msgbox LIGHTHOUSE_NPC_WORMBRAIN_Text_1
	goto LIGHTHOUSE_NPC_WORMBRAIN_1


LIGHTHOUSE_GUARD_1::
	lock
	faceplayer
	namebox LIGHTHOUSE_GUARD_1_Text_0
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 105
	goto_if_eq LIGHTHOUSE_GUARD_1_2
	msgbox LIGHTHOUSE_GUARD_1_Text_2
LIGHTHOUSE_GUARD_1_1:
	closemessage
	hidenamebox
	release
	end

LIGHTHOUSE_GUARD_1_2:
	msgbox LIGHTHOUSE_GUARD_1_Text_1
	goto LIGHTHOUSE_GUARD_1_1


LIGHTHOUSE_GUARD_2::
	lock
	faceplayer
	namebox LIGHTHOUSE_GUARD_1_Text_0
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 105
	goto_if_eq LIGHTHOUSE_GUARD_2_2
	msgbox LIGHTHOUSE_GUARD_2_Text_1
LIGHTHOUSE_GUARD_2_1:
	closemessage
	hidenamebox
	release
	end

LIGHTHOUSE_GUARD_2_2:
	msgbox LIGHTHOUSE_GUARD_2_Text_0
	goto LIGHTHOUSE_GUARD_2_1


BATTLE_LIGHTHOUSE_TRAINER_1::
	trainerbattle_single TRAINER_LIGHTHOUSE_TRAINER_1, BATTLE_LIGHTHOUSE_TRAINER_1_Text_0, BATTLE_LIGHTHOUSE_TRAINER_1_Text_1
	namebox BATTLE_LIGHTHOUSE_TRAINER_1_Text_2
	msgbox BATTLE_LIGHTHOUSE_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_LIGHTHOUSE_TRAINER_2::
	trainerbattle_single TRAINER_LIGHTHOUSE_TRAINER_2, BATTLE_LIGHTHOUSE_TRAINER_2_Text_0, BATTLE_LIGHTHOUSE_TRAINER_2_Text_1
	namebox BATTLE_LIGHTHOUSE_TRAINER_2_Text_2
	msgbox BATTLE_LIGHTHOUSE_TRAINER_2_Text_3
	hidenamebox
	release
	end


LIGHTHOUSE_CAPN_HAND_QUEST::
	lock
	faceplayer
	namebox LIGHTHOUSE_CAPN_HAND_QUEST_Text_0
	goto_if_unset FLAG_LIGHTHOUSE_PIRATE, LIGHTHOUSE_CAPN_HAND_QUEST_2
LIGHTHOUSE_CAPN_HAND_QUEST_1:
	release
	end

LIGHTHOUSE_CAPN_HAND_QUEST_2:
	msgbox LIGHTHOUSE_CAPN_HAND_QUEST_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne LIGHTHOUSE_CAPN_HAND_QUEST_4
	msgbox LIGHTHOUSE_CAPN_HAND_QUEST_Text_4
	hidenamebox
	closemessage
	goto LIGHTHOUSE_CAPN_HAND_QUEST_1

LIGHTHOUSE_CAPN_HAND_QUEST_4:
	msgbox LIGHTHOUSE_CAPN_HAND_QUEST_Text_2
	hidenamebox
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject 5
	setflag FLAG_LIGHTHOUSE_PIRATE
	call JAILMAP_STATE
	msgbox LIGHTHOUSE_CAPN_HAND_QUEST_Text_3
	closemessage
	fadescreen FADE_FROM_BLACK
	goto LIGHTHOUSE_CAPN_HAND_QUEST_1


LIGHTHOUSE_NPC_1_Text_0:
	.string "THIEF$"

LIGHTHOUSE_NPC_1_Text_1:
	.string "I tried to rob Shantay and his guards\n"
	.string "at the pass in Al Kharid.\p"
	.string "Next thing I knew, I woke up locked up\n"
	.string "in here!$"

LIGHTHOUSE_NPC_2_Text_0:
	.string "SKELETON$"

LIGHTHOUSE_NPC_2_Text_1:
	.string "The skeleton chuckles at all of the\n"
	.string "commotion.$"

LIGHTHOUSE_NPC_2_Text_2:
	.string "The skeleton says, Nothing interesting\n"
	.string "happens.$"

LIGHTHOUSE_NPC_3_Text_0:
	.string "MUGGER$"

LIGHTHOUSE_NPC_3_Text_1:
	.string "Psst.\p"
	.string "Help me sneak outta here, yeah?\p"
	.string "I promise I won't rob you when we get\n"
	.string "outside…$"

LIGHTHOUSE_NPC_4_Text_0:
	.string "BLACK KNIGHT$"

LIGHTHOUSE_NPC_4_Text_1:
	.string "Oi!\p"
	.string "Will you ask those H.A.M members to let\n"
	.string "me out on their way back down?\p"
	.string "They just walked right past me like we\n"
	.string "didn't even know each other!$"

LIGHTHOUSE_NPC_4_Text_2:
	.string "Man, I cannot believe those H.A.M guys\n"
	.string "left me in here to rot.\p"
	.string "I'm never working with them again…$"

LIGHTHOUSE_NPC_4_Text_3:
	.string "Our hideout is located near Ice\n"
	.string "Mountain.\p"
	.string "There, can I go now?$"

LIGHTHOUSE_NPC_WORMBRAIN_Text_0:
	.string "WORMBRAIN$"

LIGHTHOUSE_NPC_WORMBRAIN_Text_1:
	.string "Me nose hurts…$"

LIGHTHOUSE_NPC_WORMBRAIN_Text_2:
	.string "Me hate it here in jail.\p"
	.string "At least me get 1 meal a day.$"

LIGHTHOUSE_GUARD_1_Text_0:
	.string "JAILER$"

LIGHTHOUSE_GUARD_1_Text_1:
	.string "I overheard some H.A.M members\n"
	.string "mentioning something about a maze\l"
	.string "near Rimmington.\p"
	.string "Hopefully they aren't planning\n"
	.string "anything.$"

LIGHTHOUSE_GUARD_1_Text_2:
	.string "I'm watching you…\p"
	.string "Don't try any funny stuff…$"

LIGHTHOUSE_GUARD_2_Text_0:
	.string "I'm contacting the customs officers\n"
	.string "over at Rimmington just incase H.A.M\l"
	.string "attempt to show up there.$"

LIGHTHOUSE_GUARD_2_Text_1:
	.string "We've had reports of some goblins\n"
	.string "causing trouble by the cemetery.\p"
	.string "I guess we'll have to go over and sort\n"
	.string "them out at some point.$"

BATTLE_LIGHTHOUSE_TRAINER_1_Text_0:
	.string "I couldn't stop your friends before\n"
	.string "they forced their way upstairs, but I'll\l"
	.string "make sure I stop you!$"

BATTLE_LIGHTHOUSE_TRAINER_1_Text_1:
	.string "What do you mean you're not with them?$"

BATTLE_LIGHTHOUSE_TRAINER_1_Text_2:
	.string "DAVE$"

BATTLE_LIGHTHOUSE_TRAINER_2_Text_0:
	.string "Vile HAM member!\n"
	.string "You will not go any further!$"

BATTLE_LIGHTHOUSE_TRAINER_2_Text_1:
	.string "You're a lot stronger than you look!$"

BATTLE_LIGHTHOUSE_TRAINER_2_Text_2:
	.string "DARREN$"

BATTLE_LIGHTHOUSE_TRAINER_2_Text_3:
	.string "Sorry I mistook you for being apart of\n"
	.string "HAM.\p"
	.string "But please stop them before they cause\n"
	.string "any more damage.$"

LIGHTHOUSE_CAPN_HAND_QUEST_Text_0:
	.string "CAP'N HAND$"

LIGHTHOUSE_CAPN_HAND_QUEST_Text_1:
	.string "I used to sail the seven seas, a- lootin'\n"
	.string "and a-plunderin' whatever took my\l"
	.string "fancy.\p"
	.string "Then I got a conscience, so I stopped\n"
	.string "being a pirate, and travelled the world\l"
	.string "giving back some of the loot.\p"
	.string "Seems people didn't appreciate me\n"
	.string "interruptin' their business to give 'em\l"
	.string "free stuff, so now I'm locked up for\l"
	.string "harassment.\p"
	.string "Will ye help an ol' pirate?$"

LIGHTHOUSE_CAPN_HAND_QUEST_Text_2:
	.string "Yarrr, thanks. I won't forget this.\p"
	.string "Come see me at the Dead Man's Chest in\n"
	.string "Brimhaven.\p"
	.string "I'll make sure yer rewarded.$"

LIGHTHOUSE_CAPN_HAND_QUEST_Text_3:
	.string "You unlock the cell door, and the pirate\n"
	.string "runs off to freedom.$"

LIGHTHOUSE_CAPN_HAND_QUEST_Text_4:
	.string "Nothing, eh?\n"
	.string "Nothing be all I got, anyway..$"
