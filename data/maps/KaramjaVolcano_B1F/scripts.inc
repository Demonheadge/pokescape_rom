KaramjaVolcano_B1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, KaramjaVolcano_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, KaramjaVolcano_B1F_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_FRAME_TABLE, KaramjaVolcano_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

KaramjaVolcano_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 15
	return

KaramjaVolcano_B1F_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto KaramjaVolcano_STATE1
	return

KaramjaVolcano_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_POKESCAPE_KARAMJAVOLCANO_STATE, 0, EVENT_KaramjaVolcano_HAM_EnterVolcano
	.2byte 0


KaramjaVolcano_STATE1::
	switch VAR_POKESCAPE_KARAMJAVOLCANO_STATE
	case 0, KaramjaVolcano_STATE1_2
	case 1, KaramjaVolcano_STATE1_2
	case 2, KaramjaVolcano_STATE1_3
	case 3, KaramjaVolcano_STATE1_4
	return

KaramjaVolcano_STATE1_2:
	playbgm MUS_PS_ENCOUNTER_HAM, 1
	release
	end

KaramjaVolcano_STATE1_3:
	setflag FLAG_TEMP_1
	removeobject 6
	playbgm MUS_PS_ENCOUNTER_HAM, 1
	release
	end

KaramjaVolcano_STATE1_4:
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	removeobject 1
	removeobject 2
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	release
	end


EVENT_KaramjaVolcano_HAM_EnterVolcano::
	lock
	playse SE_PIN
	applymovement 6, HAM_KaramjaVolcano_1
	waitmovement 0
	applymovement 6, HAM_KaramjaVolcano_2
	waitmovement 0
	namebox EVENT_KaramjaVolcano_HAM_EnterVolcano_Text_0
	msgbox EVENT_KaramjaVolcano_HAM_EnterVolcano_Text_1
	hidenamebox
	closemessage
	applymovement 6, HAM_KaramjaVolcano_3
	waitmovement 0
	setvar VAR_POKESCAPE_KARAMJAVOLCANO_STATE, 2
	setflag FLAG_TEMP_1
	removeobject 6
	release
	end


HAM_KaramjaVolcano_1:
	emote_exclamation_mark
	face_player
	delay_16
	step_end

HAM_KaramjaVolcano_2:
	walk_down
	walk_down
	step_end

HAM_KaramjaVolcano_3:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

NPC_KaramjaVolcano_HAM_1::
	lock
	namebox EVENT_KaramjaVolcano_HAM_EnterVolcano_Text_0
	msgbox NPC_KaramjaVolcano_HAM_1_Text_0
	hidenamebox
	release
	end


NPC_KaramjaVolcano_HAM_2::
	lock
	namebox EVENT_KaramjaVolcano_HAM_EnterVolcano_Text_0
	msgbox NPC_KaramjaVolcano_HAM_2_Text_0
	hidenamebox
	release
	end


NPC_KaramjaVolcano_Tzhaar_1::
	lock
	namebox NPC_KaramjaVolcano_Tzhaar_1_Text_0
	msgbox NPC_KaramjaVolcano_Tzhaar_1_Text_1
	hidenamebox
	release
	end


NPC_KaramjaVolcano_Tzhaar_2::
	lock
	namebox NPC_KaramjaVolcano_Tzhaar_1_Text_0
	msgbox NPC_KaramjaVolcano_Tzhaar_2_Text_0
	hidenamebox
	release
	end


BATTLE_KaramjaVolcano_HAM_1::
	trainerbattle_single TRAINER_KARAMJAVOLCANO_HAM_GRUNT_1, BATTLE_KaramjaVolcano_HAM_1_Text_0, BATTLE_KaramjaVolcano_HAM_1_Text_1
	namebox EVENT_KaramjaVolcano_HAM_EnterVolcano_Text_0
	msgbox BATTLE_KaramjaVolcano_HAM_1_Text_2
	hidenamebox
	release
	end


BATTLE_KaramjaVolcano_HAM_2::
	trainerbattle_single TRAINER_KARAMJAVOLCANO_HAM_GRUNT_2, BATTLE_KaramjaVolcano_HAM_2_Text_0, BATTLE_KaramjaVolcano_HAM_2_Text_1
	namebox EVENT_KaramjaVolcano_HAM_EnterVolcano_Text_0
	msgbox BATTLE_KaramjaVolcano_HAM_2_Text_2
	hidenamebox
	release
	end


BATTLE_KaramjaVolcano_HAM_3::
	trainerbattle_single TRAINER_KARAMJAVOLCANO_HAM_GRUNT_3, BATTLE_KaramjaVolcano_HAM_3_Text_0, BATTLE_KaramjaVolcano_HAM_3_Text_1
	namebox EVENT_KaramjaVolcano_HAM_EnterVolcano_Text_0
	msgbox BATTLE_KaramjaVolcano_HAM_3_Text_2
	hidenamebox
	release
	end


BATTLE_KaramjaVolcano_HAM_4::
	trainerbattle_single TRAINER_KARAMJAVOLCANO_HAM_GRUNT_4, BATTLE_KaramjaVolcano_HAM_4_Text_0, BATTLE_KaramjaVolcano_HAM_4_Text_1
	namebox EVENT_KaramjaVolcano_HAM_EnterVolcano_Text_0
	msgbox BATTLE_KaramjaVolcano_HAM_4_Text_2
	hidenamebox
	release
	end


BATTLE_KaramjaVolcano_HAM_5::
	trainerbattle_single TRAINER_KARAMJAVOLCANO_HAM_GRUNT_5, BATTLE_KaramjaVolcano_HAM_5_Text_0, BATTLE_KaramjaVolcano_HAM_5_Text_1
	namebox EVENT_KaramjaVolcano_HAM_EnterVolcano_Text_0
	msgbox BATTLE_KaramjaVolcano_HAM_5_Text_2
	hidenamebox
	release
	end


BATTLE_KaramjaVolcano_HAM_6::
	trainerbattle_single TRAINER_KARAMJAVOLCANO_HAM_GRUNT_6, BATTLE_KaramjaVolcano_HAM_6_Text_0, BATTLE_KaramjaVolcano_HAM_6_Text_1
	namebox EVENT_KaramjaVolcano_HAM_EnterVolcano_Text_0
	msgbox BATTLE_KaramjaVolcano_HAM_6_Text_2
	hidenamebox
	closemessage
	fadescreen FADE_TO_BLACK
	setflag FLAG_TEMP_1
	removeobject 7
	fadescreen FADE_FROM_BLACK
	release
	end


BATTLE_KaramjaVolcano_Skeleton_1::
	trainerbattle_single TRAINER_KARAMJAVOLCANO_SKELETON_1, BATTLE_KaramjaVolcano_Skeleton_1_Text_0, BATTLE_KaramjaVolcano_Skeleton_1_Text_1
	namebox BATTLE_KaramjaVolcano_Skeleton_1_Text_2
	msgbox BATTLE_KaramjaVolcano_Skeleton_1_Text_3
	hidenamebox
	release
	end


NPC_VARRESETER1::
	lock
	faceplayer
	playmoncry SPECIES_MAREEP, 0
	setvar VAR_POKESCAPE_KARAMJAVOLCANO_STATE, 0
	msgbox NPC_VARRESETER1_Text_0
	waitmoncry
	waitmessage
	release
	end


NPC_ORCHY_MusicPlayer::
	lock
	faceplayer
	namebox NPC_ORCHY_MusicPlayer_Text_0
	msgbox NPC_ORCHY_MusicPlayer_Text_1
	msgbox NPC_ORCHY_MusicPlayer_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_ORCHY_MusicPlayer_1
	hidenamebox
	goto PokeScapeSongList_ENCOUNTERS
	release
	end

NPC_ORCHY_MusicPlayer_1:
	hidenamebox
	goto PokeScapeSongList_VSBattles
	release
	end


PokeScapeSongList_VSBattles::
	switch VAR_POKESCAPE_MUSIC_STATE
	case 0, PokeScapeSongList_VSBattles_2
	case 1, PokeScapeSongList_VSBattles_3
	case 2, PokeScapeSongList_VSBattles_4
	case 3, PokeScapeSongList_VSBattles_5
	case 4, PokeScapeSongList_VSBattles_6
	case 5, PokeScapeSongList_VSBattles_7
	case 6, PokeScapeSongList_VSBattles_8
	case 7, PokeScapeSongList_VSBattles_9
	case 8, PokeScapeSongList_VSBattles_10
	case 9, PokeScapeSongList_VSBattles_11
	case 10, PokeScapeSongList_VSBattles_12
	case 11, PokeScapeSongList_VSBattles_13
	case 12, PokeScapeSongList_VSBattles_14
	return

PokeScapeSongList_VSBattles_2:
	namebox PokeScapeSongList_VSBattles_Text_0
	playbgm MUS_PS_VS_ELITE4, 1
	setvar VAR_POKESCAPE_MUSIC_STATE, 1
	msgbox PokeScapeSongList_VSBattles_Text_1
	hidenamebox
	release
	end

PokeScapeSongList_VSBattles_3:
	namebox PokeScapeSongList_VSBattles_Text_2
	playbgm MUS_PS_VS_WILD_F2P, 1
	setvar VAR_POKESCAPE_MUSIC_STATE, 2
	msgbox PokeScapeSongList_VSBattles_Text_3
	hidenamebox
	release
	end

PokeScapeSongList_VSBattles_4:
	namebox PokeScapeSongList_VSBattles_Text_4
	playbgm MUS_PS_VS_WILD_P2P, 1
	setvar VAR_POKESCAPE_MUSIC_STATE, 3
	msgbox PokeScapeSongList_VSBattles_Text_5
	hidenamebox
	release
	end

PokeScapeSongList_VSBattles_5:
	namebox PokeScapeSongList_VSBattles_Text_6
	playbgm MUS_PS_VS_TRAINER_F2P, 1
	setvar VAR_POKESCAPE_MUSIC_STATE, 4
	msgbox PokeScapeSongList_VSBattles_Text_7
	hidenamebox
	release
	end

PokeScapeSongList_VSBattles_6:
	namebox PokeScapeSongList_VSBattles_Text_8
	playbgm MUS_PS_VS_TRAINER_P2P, 1
	setvar VAR_POKESCAPE_MUSIC_STATE, 5
	msgbox PokeScapeSongList_VSBattles_Text_9
	hidenamebox
	release
	end

PokeScapeSongList_VSBattles_7:
	namebox PokeScapeSongList_VSBattles_Text_10
	playbgm MUS_PS_VS_KNIGHTS, 1
	setvar VAR_POKESCAPE_MUSIC_STATE, 6
	msgbox PokeScapeSongList_VSBattles_Text_11
	hidenamebox
	release
	end

PokeScapeSongList_VSBattles_8:
	namebox PokeScapeSongList_VSBattles_Text_12
	playbgm MUS_PS_VS_ORCHY, 1
	setvar VAR_POKESCAPE_MUSIC_STATE, 7
	msgbox PokeScapeSongList_VSBattles_Text_13
	hidenamebox
	release
	end

PokeScapeSongList_VSBattles_9:
	namebox PokeScapeSongList_VSBattles_Text_14
	playbgm MUS_PS_VS_HAM, 1
	setvar VAR_POKESCAPE_MUSIC_STATE, 8
	msgbox PokeScapeSongList_VSBattles_Text_15
	hidenamebox
	release
	end

PokeScapeSongList_VSBattles_10:
	namebox PokeScapeSongList_VSBattles_Text_16
	playbgm MUS_PS_VS_LEGENDARY, 1
	setvar VAR_POKESCAPE_MUSIC_STATE, 9
	msgbox PokeScapeSongList_VSBattles_Text_17
	hidenamebox
	release
	end

PokeScapeSongList_VSBattles_11:
	namebox PokeScapeSongList_VSBattles_Text_18
	playbgm MUS_PS_VS_POKESCAPERS, 1
	setvar VAR_POKESCAPE_MUSIC_STATE, 10
	msgbox PokeScapeSongList_VSBattles_Text_19
	hidenamebox
	release
	end

PokeScapeSongList_VSBattles_12:
	namebox PokeScapeSongList_VSBattles_Text_20
	playbgm MUS_PS_VS_CHAOS_ELEMENTAL, 1
	setvar VAR_POKESCAPE_MUSIC_STATE, 11
	msgbox PokeScapeSongList_VSBattles_Text_21
	hidenamebox
	release
	end

PokeScapeSongList_VSBattles_13:
	namebox PokeScapeSongList_VSBattles_Text_22
	playbgm MUS_PS_TZHAAR, 1
	setvar VAR_POKESCAPE_MUSIC_STATE, 12
	msgbox PokeScapeSongList_VSBattles_Text_23
	hidenamebox
	release
	end

PokeScapeSongList_VSBattles_14:
	namebox PokeScapeSongList_VSBattles_Text_24
	playbgm MUS_PS_RIMMINGTON, 1
	setvar VAR_POKESCAPE_MUSIC_STATE, 0
	msgbox PokeScapeSongList_VSBattles_Text_23
	hidenamebox
	release
	end


PokeScapeSongList_ENCOUNTERS::
	switch VAR_POKESCAPE_MUSIC_STATE
	case 0, PokeScapeSongList_ENCOUNTERS_2
	case 1, PokeScapeSongList_ENCOUNTERS_3
	case 2, PokeScapeSongList_ENCOUNTERS_4
	case 3, PokeScapeSongList_ENCOUNTERS_5
	case 4, PokeScapeSongList_ENCOUNTERS_6
	case 5, PokeScapeSongList_ENCOUNTERS_7
	case 6, PokeScapeSongList_ENCOUNTERS_8
	case 7, PokeScapeSongList_ENCOUNTERS_9
	return

PokeScapeSongList_ENCOUNTERS_2:
	namebox PokeScapeSongList_VSBattles_Text_0
	playbgm MUS_PS_ENCOUNTER_HAM, 1
	setvar VAR_POKESCAPE_MUSIC_STATE, 1
	msgbox PokeScapeSongList_ENCOUNTERS_Text_0
	hidenamebox
	release
	end

PokeScapeSongList_ENCOUNTERS_3:
	namebox PokeScapeSongList_VSBattles_Text_2
	playbgm MUS_PS_ENCOUNTER_GYM, 1
	setvar VAR_POKESCAPE_MUSIC_STATE, 2
	msgbox PokeScapeSongList_ENCOUNTERS_Text_1
	hidenamebox
	release
	end

PokeScapeSongList_ENCOUNTERS_4:
	namebox PokeScapeSongList_VSBattles_Text_4
	playbgm MUS_PS_ENCOUNTER_LEGENDARY, 1
	setvar VAR_POKESCAPE_MUSIC_STATE, 3
	msgbox PokeScapeSongList_ENCOUNTERS_Text_2
	hidenamebox
	release
	end

PokeScapeSongList_ENCOUNTERS_5:
	namebox PokeScapeSongList_VSBattles_Text_6
	playbgm MUS_PS_ENCOUNTER_KNIGHTS, 1
	setvar VAR_POKESCAPE_MUSIC_STATE, 4
	msgbox PokeScapeSongList_ENCOUNTERS_Text_3
	hidenamebox
	release
	end

PokeScapeSongList_ENCOUNTERS_6:
	namebox PokeScapeSongList_VSBattles_Text_8
	playbgm MUS_PS_ENCOUNTER_PKER, 1
	setvar VAR_POKESCAPE_MUSIC_STATE, 5
	msgbox PokeScapeSongList_ENCOUNTERS_Text_4
	hidenamebox
	release
	end

PokeScapeSongList_ENCOUNTERS_7:
	namebox PokeScapeSongList_VSBattles_Text_10
	playbgm MUS_PS_ENCOUNTER_MITHRILMAN, 1
	setvar VAR_POKESCAPE_MUSIC_STATE, 6
	msgbox PokeScapeSongList_ENCOUNTERS_Text_5
	hidenamebox
	release
	end

PokeScapeSongList_ENCOUNTERS_8:
	namebox PokeScapeSongList_VSBattles_Text_12
	playbgm MUS_PS_ENCOUNTER_NOOB, 1
	setvar VAR_POKESCAPE_MUSIC_STATE, 7
	msgbox PokeScapeSongList_ENCOUNTERS_Text_6
	hidenamebox
	release
	end

PokeScapeSongList_ENCOUNTERS_9:
	namebox PokeScapeSongList_VSBattles_Text_14
	playbgm MUS_PS_ENCOUNTER_SKILLER, 1
	setvar VAR_POKESCAPE_MUSIC_STATE, 0
	msgbox PokeScapeSongList_ENCOUNTERS_Text_7
	hidenamebox
	release
	end


EVENT_KaramjaVolcano_HAM_EnterVolcano_Text_0:
	.string "H.A.M Grunt$"

EVENT_KaramjaVolcano_HAM_EnterVolcano_Text_1:
	.string "You again!\p"
	.string "You ruined my plans at Wizards Tower!\p"
	.string "What are you doing here?!\p"
	.string "I must inform the leader at once!$"

NPC_KaramjaVolcano_HAM_1_Text_0:
	.string "Stay out of our way you disgusting lava\n"
	.string "creatures!$"

NPC_KaramjaVolcano_HAM_2_Text_0:
	.string "Soon you lava creatures will be no more!$"

NPC_KaramjaVolcano_Tzhaar_1_Text_0:
	.string "Tzhaar$"

NPC_KaramjaVolcano_Tzhaar_1_Text_1:
	.string "LEAVE THE VOLCANO!$"

NPC_KaramjaVolcano_Tzhaar_2_Text_0:
	.string "GET OUT!\n"
	.string "GET OUT!$"

BATTLE_KaramjaVolcano_HAM_1_Text_0:
	.string "We've set up camp here following\n"
	.string "rumours of a dragon nest, but I haven't\l"
	.string "seen anything!$"

BATTLE_KaramjaVolcano_HAM_1_Text_1:
	.string "And I won't be seeing anything if I keep\n"
	.string "losing battles like this.$"

BATTLE_KaramjaVolcano_HAM_1_Text_2:
	.string "Go up the stairs?\p"
	.string "Don't be silly!\p"
	.string "That's probably where the nest is, and\n"
	.string "the last thing I need is to be eaten...$"

BATTLE_KaramjaVolcano_HAM_2_Text_0:
	.string "We've set up camp here.\p"
	.string "I really shouldn't let you go any\n"
	.string "further.$"

BATTLE_KaramjaVolcano_HAM_2_Text_1:
	.string "Oh bother...$"

BATTLE_KaramjaVolcano_HAM_2_Text_2:
	.string "Look, if I'm honest, I just joined H.A.M\n"
	.string "because I liked the robes and wanted\l"
	.string "to make a few friends...\p"
	.string "I didn't really sign up for mass\n"
	.string "genocide, but it's too late to back out\l"
	.string "now.$"

BATTLE_KaramjaVolcano_HAM_3_Text_0:
	.string "Our goal is to rid the world of all\n"
	.string "monsters!\p"
	.string "You cannot stop us!$"

BATTLE_KaramjaVolcano_HAM_3_Text_1:
	.string "I lost!\n"
	.string "But you cannot stop us!$"

BATTLE_KaramjaVolcano_HAM_3_Text_2:
	.string "I only joined H.A.M last week.\p"
	.string "I was supposed to be guarding the\n"
	.string "supplies back at base but snuck out\l"
	.string "with the others to get some fresh air!\p"
	.string "I never expected to be bundled onto a\n"
	.string "boat and stranded on a deserted\l"
	.string "island...$"

BATTLE_KaramjaVolcano_HAM_4_Text_0:
	.string "We came here searching for some\n"
	.string "ancient dragon that once ravaged the\l"
	.string "island.\p"
	.string "Don't think you can stop us!$"

BATTLE_KaramjaVolcano_HAM_4_Text_1:
	.string "It's already too late...$"

BATTLE_KaramjaVolcano_HAM_4_Text_2:
	.string "What do you mean our plan makes no\n"
	.string "sense?\p"
	.string "This dragon killed every single mage\n"
	.string "that lived on this island!\p"
	.string "If anything is powerful enough to rid\n"
	.string "the world of monsters, it's this dragon!$"

BATTLE_KaramjaVolcano_HAM_5_Text_0:
	.string "The world will be rid of monsters, you\n"
	.string "cant stop this movement!$"

BATTLE_KaramjaVolcano_HAM_5_Text_1:
	.string "We will achieve our goals!$"

BATTLE_KaramjaVolcano_HAM_5_Text_2:
	.string "We will rid the world of all monsters, you\n"
	.string "cant stop us!$"

BATTLE_KaramjaVolcano_HAM_6_Text_0:
	.string "Nothing will stop us!\p"
	.string "This volcano is about to become a\n"
	.string "monster killer!$"

BATTLE_KaramjaVolcano_HAM_6_Text_1:
	.string "Wait… Won't it kill us too?$"

BATTLE_KaramjaVolcano_HAM_6_Text_2:
	.string "Nope!\n"
	.string "I don't like this plan anymore!\p"
	.string "I'm out of here!$"

BATTLE_KaramjaVolcano_Skeleton_1_Text_0:
	.string "Bonejour!$"

BATTLE_KaramjaVolcano_Skeleton_1_Text_1:
	.string "Bone voyage!$"

BATTLE_KaramjaVolcano_Skeleton_1_Text_2:
	.string "Skeleton$"

BATTLE_KaramjaVolcano_Skeleton_1_Text_3:
	.string "I need to work on my puns but I've got\n"
	.string "no body to test them on.$"

NPC_VARRESETER1_Text_0:
	.string "Karamaja VAR set to 0$"

NPC_ORCHY_MusicPlayer_Text_0:
	.string "Orchy$"

NPC_ORCHY_MusicPlayer_Text_1:
	.string "Hey!\p"
	.string "It is me Runescape Reorchestrated, you\n"
	.string "can call me Orchy for short.\p"
	.string "I am here today to help you test some\n"
	.string "music.$"

NPC_ORCHY_MusicPlayer_Text_2:
	.string "vsBATTLE, YES. ENCOUNTER, NO.$"

PokeScapeSongList_VSBattles_Text_0:
	.string "0$"

PokeScapeSongList_VSBattles_Text_1:
	.string "NOW PLAYING: VS ELITE4$"

PokeScapeSongList_VSBattles_Text_2:
	.string "1$"

PokeScapeSongList_VSBattles_Text_3:
	.string "NOW PLAYING: VS WILD F2P$"

PokeScapeSongList_VSBattles_Text_4:
	.string "2$"

PokeScapeSongList_VSBattles_Text_5:
	.string "NOW PLAYING: VS WILD P2P$"

PokeScapeSongList_VSBattles_Text_6:
	.string "3$"

PokeScapeSongList_VSBattles_Text_7:
	.string "NOW PLAYING: VS TRAINER F2P$"

PokeScapeSongList_VSBattles_Text_8:
	.string "4$"

PokeScapeSongList_VSBattles_Text_9:
	.string "NOW PLAYING: VS TRAINER P2P$"

PokeScapeSongList_VSBattles_Text_10:
	.string "5$"

PokeScapeSongList_VSBattles_Text_11:
	.string "NOW PLAYING: VS KNIGHTS$"

PokeScapeSongList_VSBattles_Text_12:
	.string "6$"

PokeScapeSongList_VSBattles_Text_13:
	.string "NOW PLAYING: VS ORCHY$"

PokeScapeSongList_VSBattles_Text_14:
	.string "7$"

PokeScapeSongList_VSBattles_Text_15:
	.string "NOW PLAYING: VS HAM$"

PokeScapeSongList_VSBattles_Text_16:
	.string "8$"

PokeScapeSongList_VSBattles_Text_17:
	.string "NOW PLAYING: VS LEGENDARY$"

PokeScapeSongList_VSBattles_Text_18:
	.string "9$"

PokeScapeSongList_VSBattles_Text_19:
	.string "NOW PLAYING: VS POKESCAPERS$"

PokeScapeSongList_VSBattles_Text_20:
	.string "10$"

PokeScapeSongList_VSBattles_Text_21:
	.string "NOW PLAYING: VS CHAOS ELE$"

PokeScapeSongList_VSBattles_Text_22:
	.string "11$"

PokeScapeSongList_VSBattles_Text_23:
	.string "NOW PLAYING: TERRIBLE CAVERNS$"

PokeScapeSongList_VSBattles_Text_24:
	.string "12$"

PokeScapeSongList_ENCOUNTERS_Text_0:
	.string "NOW PLAYING: ENCOUNTER HAM$"

PokeScapeSongList_ENCOUNTERS_Text_1:
	.string "NOW PLAYING: ENCOUNTER GYM$"

PokeScapeSongList_ENCOUNTERS_Text_2:
	.string "NOW PLAYING: ENCOUNTER LEGENDARY$"

PokeScapeSongList_ENCOUNTERS_Text_3:
	.string "NOW PLAYING: ENCOUNTER KNIGHTS$"

PokeScapeSongList_ENCOUNTERS_Text_4:
	.string "NOW PLAYING: ENCOUNTER PKER$"

PokeScapeSongList_ENCOUNTERS_Text_5:
	.string "NOW PLAYING: ENCOUNTER MITHRILMAN$"

PokeScapeSongList_ENCOUNTERS_Text_6:
	.string "NOW PLAYING: ENCOUNTER NOOB$"

PokeScapeSongList_ENCOUNTERS_Text_7:
	.string "NOW PLAYING: ENCOUNTER SKILLER$"
