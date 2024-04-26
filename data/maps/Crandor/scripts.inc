Crandor_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Crandor_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Crandor_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call CRANDOR_STATE
	return


CRANDOR_STATE::
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 150
	goto_if_le CRANDOR_STATE_2
	setflag FLAG_TEMP_1E
	setflag FLAG_TEMP_1F
CRANDOR_STATE_1:
	compare VAR_HATTENKRAPPER_STATE, 2
	goto_if_eq CRANDOR_STATE_6
	compare VAR_HATTENKRAPPER_STATE, 3
	goto_if_ge CRANDOR_STATE_7
CRANDOR_STATE_5:
	return

CRANDOR_STATE_2:
	setvar VAR_TEMP_0, 1
	setvar VAR_TEMP_1, 1
	clearflag FLAG_TEMP_1E
	setflag FLAG_TEMP_1F
	goto CRANDOR_STATE_1

CRANDOR_STATE_6:
	setflag FLAG_TEMP_1D
	goto CRANDOR_STATE_5

CRANDOR_STATE_7:
	setflag FLAG_TEMP_1C
	setflag FLAG_TEMP_1D
	goto CRANDOR_STATE_5


CRANDOR_SIGNPOST_STORE::
	msgbox CRANDOR_SIGNPOST_STORE_Text_0
	closemessage
	end


CRANDOR_NED::
	lock
	faceplayer
	namebox CRANDOR_NED_Text_0
	compare VAR_HATTENKRAPPER_STATE, 0
	goto_if_eq CRANDOR_NED_2
	msgbox CRANDOR_NED_Text_3
	hidenamebox
	multichoicedefault 1, 0, MULTI_BANKOPTIONS, 0, 0
	switch VAR_RESULT
	case 0, CRANDOR_NED_6
	case 1, CRANDOR_NED_7
	case 2, CRANDOR_NED_8
	case 3, CRANDOR_NED_9
CRANDOR_NED_4:
	release
	end

CRANDOR_NED_2:
	setrespawn HEAL_LOCATION_CRANDOR
	msgbox CRANDOR_NED_Text_1
	msgbox CRANDOR_NED_Text_2
	closemessage
	hidenamebox
	release
	end

CRANDOR_NED_6:
	goto CRANDOR_BANK_HEAL
	goto CRANDOR_NED_4

CRANDOR_NED_7:
	goto EventScript_AccessPokemonStorage
	goto CRANDOR_NED_4

CRANDOR_NED_8:
	goto EventScript_AccessPlayersPC
	goto CRANDOR_NED_4

CRANDOR_NED_9:
	goto BANK_ExitBank
	goto CRANDOR_NED_4


CRANDOR_BANK_ExitBank::
	msgbox CRANDOR_NED_Text_2
	closemessage
	hidenamebox
	releaseall
	end


CRANDOR_BANK_HEAL::
	msgbox CRANDOR_BANK_HEAL_Text_0
	closemessage
	fadescreen FADE_TO_BLACK
	playfanfare MUS_HEAL
	waitfanfare
	special HealPlayerParty
	fadescreen FADE_FROM_BLACK
	msgbox CRANDOR_BANK_HEAL_Text_1
	hidenamebox
	releaseall
	end


ITEM_CRANDOR_SPIRIT_SHARD::
	finditem ITEM_SPIRIT_SHARD
	end


ITEM_CRANDOR_CHOCOLATE_CAKE::
	finditem ITEM_CHOCOLATE_CAKE
	end


ITEM_CRANDOR_RUNE_POUCH::
	finditem ITEM_RUNE_POUCH
	end


ITEM_CRANDOR_CABBAGE::
	finditem ITEM_CABBAGE
	end


BATTLE_CRANDOR_SKELETON_1::
	trainerbattle_single TRAINER_CRANDOR_SKELETON_1, BATTLE_CRANDOR_SKELETON_1_Text_0, BATTLE_CRANDOR_SKELETON_1_Text_1
	msgbox BATTLE_CRANDOR_SKELETON_1_Text_1
	release
	return


BATTLE_CRANDOR_SKELETON_2::
	trainerbattle_single TRAINER_CRANDOR_SKELETON_2, BATTLE_CRANDOR_SKELETON_2_Text_0, BATTLE_CRANDOR_SKELETON_2_Text_1
	msgbox BATTLE_CRANDOR_SKELETON_2_Text_2
	release
	return


BATTLE_CRANDOR_SKELETON_3::
	trainerbattle_single TRAINER_CRANDOR_SKELETON_3, BATTLE_CRANDOR_SKELETON_3_Text_0, BATTLE_CRANDOR_SKELETON_3_Text_1
	msgbox BATTLE_CRANDOR_SKELETON_3_Text_2
	release
	return


BATTLE_CRANDOR_MOSS_GIANT_1::
	trainerbattle_single TRAINER_CRANDOR_MOSS_GIANT_1, BATTLE_CRANDOR_MOSS_GIANT_1_Text_0, BATTLE_CRANDOR_MOSS_GIANT_1_Text_1
	msgbox BATTLE_CRANDOR_MOSS_GIANT_1_Text_2
	release
	return


BATTLE_CRANDOR_MOSS_GIANT_2::
	trainerbattle_single TRAINER_CRANDOR_MOSS_GIANT_2, BATTLE_CRANDOR_MOSS_GIANT_2_Text_0, BATTLE_CRANDOR_MOSS_GIANT_2_Text_1
	msgbox BATTLE_CRANDOR_MOSS_GIANT_2_Text_2
	release
	return


BATTLE_CRANDOR_MOSS_GIANT_3::
	trainerbattle_single TRAINER_CRANDOR_MOSS_GIANT_3, BATTLE_CRANDOR_MOSS_GIANT_3_Text_0, BATTLE_CRANDOR_MOSS_GIANT_3_Text_1
	msgbox BATTLE_CRANDOR_MOSS_GIANT_3_Text_2
	release
	return


TRIGGER_CRANDOR_SHAKE::
	setvar VAR_0x8004, 1 @ vertical pan
	setvar VAR_0x8005, 1 @ horizontal pan
	setvar VAR_0x8006, 8 @ num shakes
	setvar VAR_0x8007, 3 @ shake delay
	special ShakeCamera
	waitstate
	setvar VAR_0x8004, 1 @ vertical pan
	setvar VAR_0x8005, 1 @ horizontal pan
	setvar VAR_0x8006, 8 @ num shakes
	setvar VAR_0x8007, 3 @ shake delay
	special ShakeCamera
	waitstate
	setvar VAR_TEMP_0, 0
	closemessage
	releaseall
	end


TRIGGER_CRANDOR_SHAKE2::
	setvar VAR_0x8004, 1 @ vertical pan
	setvar VAR_0x8005, 1 @ horizontal pan
	setvar VAR_0x8006, 8 @ num shakes
	setvar VAR_0x8007, 3 @ shake delay
	special ShakeCamera
	waitstate
	setvar VAR_0x8004, 1 @ vertical pan
	setvar VAR_0x8005, 1 @ horizontal pan
	setvar VAR_0x8006, 8 @ num shakes
	setvar VAR_0x8007, 3 @ shake delay
	special ShakeCamera
	waitstate
	setvar VAR_TEMP_1, 0
	closemessage
	releaseall
	end


TRIGGER_ELVARGFLYOVER::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, movement_elvargflyover4
	savebgm MUS_DUMMY
	fadeoutbgm 1
	waitmovement 0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, movement_crandor_camera
	waitmovement 0
	playmoncry SPECIES_ELVARG, 0
	waitmoncry
	delay 16
	playse SE_M_FLY
	clearflag FLAG_TEMP_1F
	addobject 33
	setobjectxy 33, 21, 31
	applymovement 33, movement_elvargflyover2
	waitmovement 0
	playse SE_PIN
	applymovement 8, MOVEMENT_HAM_CONFUSED
	delay 32
	special RemoveCameraObject
	waitmovement 0
	warp MAP_KARAMJA_VOLCANO_B3F, 1
	release
	end


MOVEMENT_HAM_CONFUSED:
	emote_question_mark
	delay_16
	face_down
	delay_16
	face_right
	delay_16
	face_up
	delay_16
	face_right
	step_end

movement_crandor_camera:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	delay_16
	step_end

movement_elvargflyover:
	lock_facing_direction
	disable_anim
	walk_diag_northeast
	walk_diag_northeast
	walk_diag_northeast
	walk_diag_northeast
	walk_diag_northeast
	walk_diag_northeast
	walk_diag_northeast
	walk_diag_northeast
	walk_diag_northeast
	walk_diag_northeast
	walk_diag_northeast
	walk_diag_northeast
	walk_diag_northeast
	walk_diag_northeast
	walk_diag_northeast
	step_end

movement_elvargflyover4:
	walk_down
	walk_down
	walk_down
	set_invisible
	step_end

movement_elvargflyover2:
	lock_facing_direction
	disable_anim
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	step_end

movement_elvargflyover_left:
	lock_facing_direction
	disable_anim
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	step_end

movement_elvargflyover1:
	lock_facing_direction
	delay_16
	walk_diag_northwest
	delay_16
	walk_diag_southwest
	fly_up
	delay_16
	fly_down
	delay_16
	figure_8
	step_end

CRANDOR_SEAGULL::
	lock
	faceplayer
	namebox CRANDOR_SEAGULL_Text_0
	compare VAR_HATTENKRAPPER_STATE, 0
	goto_if_eq CRANDOR_SEAGULL_2
	compare VAR_HATTENKRAPPER_STATE, 2
	goto_if_eq CRANDOR_SEAGULL_3
	compare VAR_HATTENKRAPPER_STATE, 3
	goto_if_eq CRANDOR_SEAGULL_4
	compare VAR_HATTENKRAPPER_STATE, 7
	goto_if_eq CRANDOR_SEAGULL_5
	compare VAR_HATTENKRAPPER_STATE, 8
	goto_if_eq CRANDOR_SEAGULL_6
	compare VAR_HATTENKRAPPER_STATE, 9
	goto_if_eq CRANDOR_SEAGULL_7
	compare VAR_HATTENKRAPPER_STATE, 10
	goto_if_eq CRANDOR_SEAGULL_8
	compare VAR_HATTENKRAPPER_STATE, 11
	goto_if_eq CRANDOR_SEAGULL_9
	compare VAR_HATTENKRAPPER_STATE, 12
	goto_if_eq CRANDOR_SEAGULL_10
	compare VAR_HATTENKRAPPER_STATE, 13
	goto_if_eq CRANDOR_SEAGULL_11
	release
	end

CRANDOR_SEAGULL_2:
	msgbox CRANDOR_SEAGULL_Text_1
	call GeneralStoreShopScript
	closemessage
	hidenamebox
	release
	end

CRANDOR_SEAGULL_3:
	msgbox CRANDOR_SEAGULL_Text_2
	hidenamebox
	release
	end

CRANDOR_SEAGULL_4:
	msgbox CRANDOR_SEAGULL_Text_3
	setvar VAR_HATTENKRAPPER_STATE, 7
	hidenamebox
	release
	end

CRANDOR_SEAGULL_5:
	msgbox CRANDOR_SEAGULL_Text_4
	setvar VAR_HATTENKRAPPER_STATE, 8
	hidenamebox
	release
	end

CRANDOR_SEAGULL_6:
	msgbox CRANDOR_SEAGULL_Text_5
	setvar VAR_HATTENKRAPPER_STATE, 9
	hidenamebox
	release
	end

CRANDOR_SEAGULL_7:
	msgbox CRANDOR_SEAGULL_Text_4
	setvar VAR_HATTENKRAPPER_STATE, 10
	hidenamebox
	release
	end

CRANDOR_SEAGULL_8:
	msgbox CRANDOR_SEAGULL_Text_6
	setvar VAR_HATTENKRAPPER_STATE, 11
	hidenamebox
	release
	end

CRANDOR_SEAGULL_9:
	msgbox CRANDOR_SEAGULL_Text_7
	setvar VAR_HATTENKRAPPER_STATE, 12
	hidenamebox
	release
	end

CRANDOR_SEAGULL_10:
	msgbox CRANDOR_SEAGULL_Text_8
	setvar VAR_HATTENKRAPPER_STATE, 13
	hidenamebox
	release
	end

CRANDOR_SEAGULL_11:
	msgbox CRANDOR_SEAGULL_Text_9
	call GeneralStoreShopScript
	closemessage
	hidenamebox
	release
	end


CRANDOR_SEAGULL_ITEMS::
	namebox CRANDOR_SEAGULL_Text_0
	compare VAR_HATTENKRAPPER_STATE, 0
	goto_if_eq CRANDOR_SEAGULL_ITEMS_2
	compare VAR_HATTENKRAPPER_STATE, 2
	goto_if_eq CRANDOR_SEAGULL_ITEMS_3
CRANDOR_SEAGULL_ITEMS_1:
	msgbox CRANDOR_SEAGULL_ITEMS_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne CRANDOR_SEAGULL_ITEMS_7
CRANDOR_SEAGULL_ITEMS_6:
	release
	end

CRANDOR_SEAGULL_ITEMS_2:
	msgbox CRANDOR_SEAGULL_ITEMS_Text_0
	hidenamebox
	closemessage
	goto CRANDOR_SEAGULL_ITEMS_1

CRANDOR_SEAGULL_ITEMS_3:
	msgbox CRANDOR_SEAGULL_ITEMS_Text_1
	hidenamebox
	closemessage
	goto CRANDOR_SEAGULL_ITEMS_1

CRANDOR_SEAGULL_ITEMS_7:
	compare VAR_HATTENKRAPPER_STATE, 0
	goto_if_eq CRANDOR_SEAGULL_ITEMS_10
	compare VAR_HATTENKRAPPER_STATE, 2
	goto_if_eq CRANDOR_SEAGULL_ITEMS_11
CRANDOR_SEAGULL_ITEMS_9:
	playse SE_M_SCREECH
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_UP
	waitmovement 0
	call ENCOUNTER_HATTENKRAPPER
	goto CRANDOR_SEAGULL_ITEMS_6

CRANDOR_SEAGULL_ITEMS_10:
	finditem ITEM_CABBAGE
	setvar VAR_HATTENKRAPPER_STATE, 2
	goto CRANDOR_SEAGULL_ITEMS_9

CRANDOR_SEAGULL_ITEMS_11:
	finditem ITEM_STAT_BEER
	setvar VAR_HATTENKRAPPER_STATE, 3
	goto CRANDOR_SEAGULL_ITEMS_9


ENCOUNTER_HATTENKRAPPER::
	lock
	namebox CRANDOR_SEAGULL_Text_0
	playmoncry SPECIES_SEAGULL_HATTENKRAPPER_FORM, 0
	msgbox ENCOUNTER_HATTENKRAPPER_Text_0
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	compare VAR_HATTENKRAPPER_STATE, 3
	goto_if_eq ENCOUNTER_HATTENKRAPPER_2
	setwildbattle SPECIES_SEAGULL_HATTENKRAPPER_FORM, 30, ITEM_FIGHTER_TORSO
ENCOUNTER_HATTENKRAPPER_1:
	dowildbattleNoCatch
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_HATTENKRAPPER_6
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq ENCOUNTER_HATTENKRAPPER_7
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq ENCOUNTER_HATTENKRAPPER_8
ENCOUNTER_HATTENKRAPPER_5:
	return

ENCOUNTER_HATTENKRAPPER_2:
	setwildbattle SPECIES_SEAGULL_HATTENKRAPPER_FORM, 99, ITEM_FIGHTER_TORSO
	goto ENCOUNTER_HATTENKRAPPER_1

ENCOUNTER_HATTENKRAPPER_6:
	namebox CRANDOR_SEAGULL_Text_0
	msgbox ENCOUNTER_HATTENKRAPPER_Text_1
	hidenamebox
	closemessage
	goto ENCOUNTER_HATTENKRAPPER_5

ENCOUNTER_HATTENKRAPPER_7:
	goto ENCOUNTER_HATTENKRAPPER_5

ENCOUNTER_HATTENKRAPPER_8:
	namebox CRANDOR_SEAGULL_Text_0
	playmoncry SPECIES_EKANS, 0
	msgbox ENCOUNTER_HATTENKRAPPER_Text_2
	closemessage
	hidenamebox
	goto ENCOUNTER_HATTENKRAPPER_5


CRANDOR_SIGNPOST_STORE_Text_0:
	.string "Hattenkrapper's Wares.$"

CRANDOR_NED_Text_0:
	.string "Ned$"

CRANDOR_NED_Text_1:
	.string "It looks like we're stranded!\p"
	.string "No wonder no other captains wanted to\n"
	.string "sail anywhere near Crandor…$"

CRANDOR_NED_Text_2:
	.string "Be careful {PLAYER}, who knows what\n"
	.string "lies upon this island.\p"
	.string "Come see me if you need healing or\n"
	.string "access to your bank system.$"

CRANDOR_NED_Text_3:
	.string "Ahoy {PLAYER}, what can I do for you?$"

CRANDOR_BANK_HEAL_Text_0:
	.string "Sure thing, I will take your MONSTERs\n"
	.string "for a minute.$"

CRANDOR_BANK_HEAL_Text_1:
	.string "Your MONSTERs are all healed!\p"
	.string "Good luck out there {PLAYER}.$"

BATTLE_CRANDOR_SKELETON_1_Text_0:
	.string "Stay.. away..$"

BATTLE_CRANDOR_SKELETON_1_Text_1:
	.string "Turn.. back..$"

BATTLE_CRANDOR_SKELETON_2_Text_0:
	.string "The skeleton rattles angrily as you try\n"
	.string "to walk past.$"

BATTLE_CRANDOR_SKELETON_2_Text_1:
	.string "The skeleton seems less aggressive\n"
	.string "now.$"

BATTLE_CRANDOR_SKELETON_2_Text_2:
	.string "The skeleton is looking at the nearby\n"
	.string "rocks..$"

BATTLE_CRANDOR_SKELETON_3_Text_0:
	.string "El..$"

BATTLE_CRANDOR_SKELETON_3_Text_1:
	.string "..varg$"

BATTLE_CRANDOR_SKELETON_3_Text_2:
	.string "Be.. ware..$"

BATTLE_CRANDOR_MOSS_GIANT_1_Text_0:
	.string "The moss giant swings a big leafy arm at\n"
	.string "you.$"

BATTLE_CRANDOR_MOSS_GIANT_1_Text_1:
	.string "The moss giant continues on it's way as\n"
	.string "if nothing happened.$"

BATTLE_CRANDOR_MOSS_GIANT_1_Text_2:
	.string "The moss giant no longer seems\n"
	.string "interested in you.$"

BATTLE_CRANDOR_MOSS_GIANT_2_Text_0:
	.string "Dragon in volcano. Human should leave.$"

BATTLE_CRANDOR_MOSS_GIANT_2_Text_1:
	.string "Maybe human can kill dragon.$"

BATTLE_CRANDOR_MOSS_GIANT_2_Text_2:
	.string "Please kill dragon. Too many of us burn\n"
	.string "in its fire.$"

BATTLE_CRANDOR_MOSS_GIANT_3_Text_0:
	.string "Not more humans!$"

BATTLE_CRANDOR_MOSS_GIANT_3_Text_1:
	.string "This human strong..$"

BATTLE_CRANDOR_MOSS_GIANT_3_Text_2:
	.string "Get pink humans off our island..$"

CRANDOR_SEAGULL_Text_0:
	.string "Hattenkrapper$"

CRANDOR_SEAGULL_Text_1:
	.string "Gull!\n"
	.string "Welcome to my store!\p"
	.string "What would you like to buy?$"

CRANDOR_SEAGULL_Text_2:
	.string "THIEF!!\p"
	.string "You may not use my store!$"

CRANDOR_SEAGULL_Text_3:
	.string "THIEF!!\p"
	.string "You may not use my store!\p"
	.string "Go away and don't come back!$"

CRANDOR_SEAGULL_Text_4:
	.string "You again?!\p"
	.string "Go away you thief!$"

CRANDOR_SEAGULL_Text_5:
	.string "Go away!\p"
	.string "I am not selling anything to a thief!$"

CRANDOR_SEAGULL_Text_6:
	.string "…$"

CRANDOR_SEAGULL_Text_7:
	.string "Are you going to buy something if I let\n"
	.string "you use my store again?$"

CRANDOR_SEAGULL_Text_8:
	.string "Fine…\p"
	.string "You may use my store again.\p"
	.string "BUT DON'T STEAL MY STUFF!$"

CRANDOR_SEAGULL_Text_9:
	.string "Welcome to my store, you bad human.\p"
	.string "What would you like to buy?$"

CRANDOR_SEAGULL_ITEMS_Text_0:
	.string "HEEYYY!\p"
	.string "DON'T TOUCH THOSE THEY'RE MIIIINNNEEE!$"

CRANDOR_SEAGULL_ITEMS_Text_1:
	.string "THAT IS MINNNEE, DON'T TOUCH IT!!$"

CRANDOR_SEAGULL_ITEMS_Text_2:
	.string "The Seagull has warned you not to take\n"
	.string "his items.\p"
	.string "Take the item anyway?$"

ENCOUNTER_HATTENKRAPPER_Text_0:
	.string "SKREEEECH!\p"
	.string "I TOLD YOU THAT IS MINE, GIVE IT BACK\n"
	.string "NOW!$"

ENCOUNTER_HATTENKRAPPER_Text_1:
	.string "GGUUULLL!!!\p"
	.string "GOOO AWAAAY!!!$"

ENCOUNTER_HATTENKRAPPER_Text_2:
	.string "GGUUULLL!!!\p"
	.string "GGUUULLL!!!\p"
	.string "YOU MAY NOT USE MYYY STORE!!$"
