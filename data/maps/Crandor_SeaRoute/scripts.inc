Crandor_SeaRoute_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Crandor_SeaRoute_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Crandor_SeaRoute_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Crandor_SeaRoute_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	call hideplayer
	return

Crandor_SeaRoute_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_B, 0, CRANDOR_SHIP_SCENE
	.2byte 0


hideplayer::
	hideobjectat OBJ_EVENT_ID_PLAYER, TRUE
	applymovement OBJ_EVENT_ID_PLAYER, movement_setinvisible
	waitmovement 0
	return


TELEPORT_TO_SHIP_SCENE::
	warp MAP_CRANDOR_SEA_ROUTE, 0, 57, 5
	return


CRANDOR_SHIP_SCENE::
	lockall
	setflag FLAG_TEMP_10
	removeobject 3
	applymovement OBJ_EVENT_ID_PLAYER, movement_setinvisible
	applymovement 1, movement_crandor_ship
	waitmovement 0
	namebox CRANDOR_SHIP_SCENE_Text_0
	msgbox CRANDOR_SHIP_SCENE_Text_1
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, movement_sailing4
	applymovement 1, movement_sailing4
	waitmovement 0
	namebox CRANDOR_SHIP_SCENE_Text_2
	msgbox CRANDOR_SHIP_SCENE_Text_3
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, movement_sailing2
	applymovement 1, movement_sailing2
	waitmovement 0
	setweather WEATHER_RAIN_THUNDERSTORM
	doweather
	namebox CRANDOR_SHIP_SCENE_Text_2
	msgbox CRANDOR_SHIP_SCENE_Text_4
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, movement_sailing2
	applymovement 1, movement_sailing2
	waitmovement 0
	delay 32
	playse SE_M_FLY
	applymovement 2, movement_elvargflyover2
	waitmovement 0
	playbgm MUS_PS_RIMMINGTON, 0
	namebox CRANDOR_SHIP_SCENE_Text_0
	msgbox CRANDOR_SHIP_SCENE_Text_5
	closemessage
	hidenamebox
	namebox CRANDOR_SHIP_SCENE_Text_2
	msgbox CRANDOR_SHIP_SCENE_Text_6
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, movement_sailing2
	applymovement 1, movement_sailing2
	waitmovement 0
	setobjectxy 2, 22, 3
	playse SE_M_FLY
	applymovement 2, movement_elvargflyover_left
	setvar VAR_0x8004, 1 @ vertical pan
	setvar VAR_0x8005, 1 @ horizontal pan
	setvar VAR_0x8006, 8 @ num shakes
	setvar VAR_0x8007, 3 @ shake delay
	special ShakeCamera
	setmetatile 19, 2, 834, 0
	special DrawWholeMapView
	delay 32
	setvar VAR_0x8004, 1 @ vertical pan
	setvar VAR_0x8005, 1 @ horizontal pan
	setvar VAR_0x8006, 8 @ num shakes
	setvar VAR_0x8007, 3 @ shake delay
	special ShakeCamera
	setmetatile 16, 7, 834, 0
	special DrawWholeMapView
	delay 32
	setvar VAR_0x8004, 1 @ vertical pan
	setvar VAR_0x8005, 1 @ horizontal pan
	setvar VAR_0x8006, 8 @ num shakes
	setvar VAR_0x8007, 3 @ shake delay
	special ShakeCamera
	setmetatile 15, 1, 834, 0
	special DrawWholeMapView
	waitmovement 0
	namebox CRANDOR_SHIP_SCENE_Text_2
	msgbox CRANDOR_SHIP_SCENE_Text_7
	closemessage
	hidenamebox
	setvar VAR_0x8004, 1 @ vertical pan
	setvar VAR_0x8005, 1 @ horizontal pan
	setvar VAR_0x8006, 8 @ num shakes
	setvar VAR_0x8007, 3 @ shake delay
	special ShakeCamera
	setmetatile 9, 3, 834, 0
	special DrawWholeMapView
	waitstate
	applymovement OBJ_EVENT_ID_PLAYER, movement_sailing4
	applymovement 1, movement_sailing4
	waitmovement 0
	setvar VAR_0x8004, 1 @ vertical pan
	setvar VAR_0x8005, 1 @ horizontal pan
	setvar VAR_0x8006, 8 @ num shakes
	setvar VAR_0x8007, 3 @ shake delay
	special ShakeCamera
	setmetatile 4, 4, 834, 0
	special DrawWholeMapView
	waitstate
	applymovement OBJ_EVENT_ID_PLAYER, movement_sailing4
	applymovement 1, movement_sailing4
	waitmovement 0
	setvar VAR_0x8004, 1 @ vertical pan
	setvar VAR_0x8005, 1 @ horizontal pan
	setvar VAR_0x8006, 8 @ num shakes
	setvar VAR_0x8007, 3 @ shake delay
	special ShakeCamera
	setmetatile 7, 7, 834, 0
	special DrawWholeMapView
	waitstate
	namebox CRANDOR_SHIP_SCENE_Text_0
	msgbox CRANDOR_SHIP_SCENE_Text_8
	closemessage
	hidenamebox
	clearflag FLAG_TEMP_10
	addobject 3
	applymovement 3, movement_cabinboy
	setvar VAR_0x8004, 1 @ vertical pan
	setvar VAR_0x8005, 1 @ horizontal pan
	setvar VAR_0x8006, 8 @ num shakes
	setvar VAR_0x8007, 3 @ shake delay
	special ShakeCamera
	setmetatile 14, 5, 834, 0
	special DrawWholeMapView
	waitstate
	namebox CRANDOR_SHIP_SCENE_Text_2
	msgbox CRANDOR_SHIP_SCENE_Text_9
	closemessage
	hidenamebox
	waitmovement 0
	setflag FLAG_TEMP_11
	removeobject 2
	applymovement OBJ_EVENT_ID_PLAYER, movement_sailing4
	applymovement 1, movement_sailing4
	waitmovement 0
	setvar VAR_0x8004, 1 @ vertical pan
	setvar VAR_0x8005, 1 @ horizontal pan
	setvar VAR_0x8006, 8 @ num shakes
	setvar VAR_0x8007, 3 @ shake delay
	special ShakeCamera
	setmetatile 10, 5, 834, 0
	special DrawWholeMapView
	waitstate
	namebox CRANDOR_SHIP_SCENE_Text_2
	msgbox CRANDOR_SHIP_SCENE_Text_10
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, movement_sailing4
	applymovement 1, movement_sailing4
	waitmovement 0
	setvar VAR_0x8004, 1 @ vertical pan
	setvar VAR_0x8005, 1 @ horizontal pan
	setvar VAR_0x8006, 8 @ num shakes
	setvar VAR_0x8007, 3 @ shake delay
	special ShakeCamera
	setmetatile 11, 3, 834, 0
	special DrawWholeMapView
	waitstate
	applymovement OBJ_EVENT_ID_PLAYER, movement_sailing3
	applymovement 1, movement_sailing3
	delay 32
	fadescreen FADE_TO_BLACK
	playse SE_M_EARTHQUAKE
	namebox CRANDOR_SHIP_SCENE_Text_2
	msgbox CRANDOR_SHIP_SCENE_Text_11
	closemessage
	hidenamebox
	delay 60
	warp MAP_CRANDOR, 1
	return


movement_setinvisible:
	set_invisible
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	step_end

movement_crandor_ship:
	levitate
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	step_end

movement_sailing2:
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	step_end

movement_sailing4:
	walk_slow_left
	walk_slow_left
	step_end

movement_sailing3:
	lock_facing_direction
	figure_8
	step_end

movement_cabinboy:
	face_down
	lock_facing_direction
	walk_slow_right
	unlock_facing_direction
	face_left
	lock_facing_direction
	walk_slow_right
	walk_slow_right
	unlock_facing_direction
	face_up
	lock_facing_direction
	walk_slow_right
	unlock_facing_direction
	face_down
	lock_facing_direction
	walk_slow_right
	walk_slow_right
	unlock_facing_direction
	face_right
	lock_facing_direction
	walk_slow_right
	unlock_facing_direction
	face_left
	lock_facing_direction
	walk_slow_right
	walk_slow_right
	unlock_facing_direction
	set_invisible
	step_end

ENCOUNTER_CHAOS_ELEMENTAL::
	lock
	namebox ENCOUNTER_CHAOS_ELEMENTAL_Text_0
	playmoncry SPECIES_CHAOS_ELE, 0
	msgbox ENCOUNTER_CHAOS_ELEMENTAL_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_CHAOS_ELE, 30, ITEM_NONE
	special BattleSetup_StartLegendaryBattle
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_CHAOS_ELEMENTAL_2
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_CHAOS_ELEMENTAL_3
	end

ENCOUNTER_CHAOS_ELEMENTAL_2:
	closemessage
	end

ENCOUNTER_CHAOS_ELEMENTAL_3:
	closemessage
	end


playbgmKnight::
	lock
	playbgm MUS_PS_VS_KNIGHTS, 0
	release
	end


playbgmchaostunnels::
	lock
	playbgm MUS_PS_VS_CHAOS_TUNNELS, 0
	release
	end


CRANDOR_EVENT_PORTSARIM_CABIN_BOY::
	lock
	faceplayer
	namebox CRANDOR_SHIP_SCENE_Text_0
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq CRANDOR_EVENT_PORTSARIM_CABIN_BOY_2
	msgbox CRANDOR_EVENT_PORTSARIM_CABIN_BOY_Text_1
CRANDOR_EVENT_PORTSARIM_CABIN_BOY_1:
	closemessage
	hidenamebox
	release
	end

CRANDOR_EVENT_PORTSARIM_CABIN_BOY_2:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 150
	goto_if_le CRANDOR_EVENT_PORTSARIM_CABIN_BOY_5
	goto CRANDOR_EVENT_PORTSARIM_CABIN_BOY_1

CRANDOR_EVENT_PORTSARIM_CABIN_BOY_5:
	msgbox CRANDOR_EVENT_PORTSARIM_CABIN_BOY_Text_0
	goto CRANDOR_EVENT_PORTSARIM_CABIN_BOY_1


CRANDOR_EVENT_PORTSARIM_NED::
	lock
	faceplayer
	namebox CRANDOR_SHIP_SCENE_Text_2
	msgbox CRANDOR_EVENT_PORTSARIM_NED_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne CRANDOR_EVENT_PORTSARIM_NED_2
CRANDOR_EVENT_PORTSARIM_NED_1:
	closemessage
	hidenamebox
	release
	end

CRANDOR_EVENT_PORTSARIM_NED_2:
	msgbox CRANDOR_EVENT_PORTSARIM_NED_Text_1
	closemessage
	hidenamebox
	warp MAP_CRANDOR_SEA_ROUTE, 0, 57, 5
	goto CRANDOR_EVENT_PORTSARIM_NED_1


CRANDOR_SHIP_SCENE_Text_0:
	.string "Cabin Boy$"

CRANDOR_SHIP_SCENE_Text_1:
	.string "Ned are you sure that map is correct?$"

CRANDOR_SHIP_SCENE_Text_2:
	.string "Ned$"

CRANDOR_SHIP_SCENE_Text_3:
	.string "See that scary looking rock?\p"
	.string "It means we are going the right way.$"

CRANDOR_SHIP_SCENE_Text_4:
	.string "Man the sails everyone, we've got a\n"
	.string "storm brewing!$"

CRANDOR_SHIP_SCENE_Text_5:
	.string "What is that?!$"

CRANDOR_SHIP_SCENE_Text_6:
	.string "Cabin Boy, {PLAYER}, are you alright?\p"
	.string "It's getting a bit rough so be careful.$"

CRANDOR_SHIP_SCENE_Text_7:
	.string "We are under attack!$"

CRANDOR_SHIP_SCENE_Text_8:
	.string "Ahhhh I'm falling!$"

CRANDOR_SHIP_SCENE_Text_9:
	.string "Nooo Cabin boy!$"

CRANDOR_SHIP_SCENE_Text_10:
	.string "Watch out {PLAYER}!\p"
	.string "We're crashing!$"

CRANDOR_SHIP_SCENE_Text_11:
	.string "AHHHHHHH!!!$"

ENCOUNTER_CHAOS_ELEMENTAL_Text_0:
	.string "CHAOS ELEMENTAL$"

ENCOUNTER_CHAOS_ELEMENTAL_Text_1:
	.string "SNEEEEEE!$"

CRANDOR_EVENT_PORTSARIM_CABIN_BOY_Text_0:
	.string "Finally the day has come!\p"
	.string "I can set sail with her and make my\n"
	.string "dream come true!$"

CRANDOR_EVENT_PORTSARIM_CABIN_BOY_Text_1:
	.string "This ship is called the Lady Lumbridge!\p"
	.string "One day I hope to set sail with her!\p"
	.string "But alas the lady, she needs a captain.\p"
	.string "Not a wee cabin boy like myself…$"

CRANDOR_EVENT_PORTSARIM_NED_Text_0:
	.string "{PLAYER}, are you ready to set sail to\n"
	.string "the Isle of Crandor?$"

CRANDOR_EVENT_PORTSARIM_NED_Text_1:
	.string "Let us embark on this voyage!$"
