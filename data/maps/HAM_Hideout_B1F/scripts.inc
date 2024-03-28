HAM_Hideout_B1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, HAM_Hideout_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HAM_Hideout_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

HAM_Hideout_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto HAM_HIDEOUT_GOLDENGNOME_PLACENPCS
	return

HAM_Hideout_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_POKESCAPE_GOLDENGNOMES, 10, HAM_HIDEOUT_GOLDENGNOME_STATE
	.2byte 0


HAM_HIDEOUT_GOLDENGNOME_PLACENPCS::
	compare VAR_POKESCAPE_GOLDENGNOMES, 5
	goto_if_eq HAM_HIDEOUT_GOLDENGNOME_PLACENPCS_1
	return

HAM_HIDEOUT_GOLDENGNOME_PLACENPCS_1:
	addobject 24
	addobject 25
	addobject 26
	setobjectxyperm 24, 27, 20
	setobjectxyperm 25, 27, 20
	setobjectxyperm 26, 28, 20
	addobject 29
	setobjectxyperm 29, 27, 20
	addobject 30
	setobjectxyperm 30, 11, 23
	addobject 27
	setobjectxyperm 27, 27, 20
	addobject 28
	setobjectxyperm 28, 27, 20
	addobject 22
	setobjectxyperm 22, 16, 23
	setobjectmovementtype 22, MOVEMENT_TYPE_FACE_UP
	addobject 31
	setobjectxyperm 31, 22, 23
	setobjectmovementtype 31, MOVEMENT_TYPE_FACE_UP
	addobject 32
	setobjectxyperm 32, 22, 21
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_UP
	removeobject 14
	removeobject 4
	removeobject 6
	removeobject 5
	removeobject 8
	setflag FLAG_TEMP_1
	setvar VAR_POKESCAPE_GOLDENGNOMES, 10
	return


HAM_HIDEOUT_GOLDENGNOME_STATE::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEUP
	waitmovement 0
	call HAM_HIDEOUT_GOLDENGNOME_EVENT
	return


GOLDENGNOME_CAMERA_CALL::
	lock
	delay 60
	special SpawnCameraObject
	return


HAM_HIDEOUT_GOLDENGNOME_EVENT::
	fadescreen FADE_TO_BLACK
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACELEFT
	applymovement 22, Movement_InteractFACERIGHT
	delay 60
	call GOLDENGNOME_CAMERA_CALL
	applymovement OBJ_EVENT_ID_CAMERA, GOLDENGNOME_CAMERA_1_START
	delay 60
	fadescreen FADE_FROM_BLACK
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEUP
	applymovement 22, Movement_InteractFACEUP
	waitmovement OBJ_EVENT_ID_CAMERA
	delay 60
	namebox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_0
	msgbox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_1
	waitmessage
	closemessage
	hidenamebox
	playbgm MUS_PS_ROUTE_LUMBRIDGE, 1
	applymovement 25, GOLDENGNOME_MOVEMENT_1
	waitmovement 0
	applymovement 3, Movement_InteractFACERIGHT
	waitmovement 0
	namebox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_0
	msgbox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_2
	waitmessage
	closemessage
	hidenamebox
	applymovement 25, Movement_InteractFACELEFT
	waitmovement 0
	applymovement 3, Movement_InteractFACEDOWN
	applymovement 25, GOLDENGNOME_MOVEMENT_5
	namebox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_0
	msgbox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_3
	waitmessage
	closemessage
	hidenamebox
	waitmovement 0
	delay 10
	applymovement 25, GOLDENGNOME_MOVEMENT_6
	delay 20
	applymovement 24, GOLDENGNOME_MOVEMENT_2
	delay 10
	applymovement 26, GOLDENGNOME_MOVEMENT_4
	delay 60
	applymovement 3, GOLDENGNOME_MOVEMENT_3
	waitmovement 26
	delay 10
	namebox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_4
	msgbox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_5
	waitmessage
	closemessage
	hidenamebox
	playbgm MUS_PS_PORT_SARIM, 1
	call FROGEEL_EXCITED
	namebox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_4
	msgbox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_6
	waitmessage
	msgbox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_7
	closemessage
	hidenamebox
	applymovement 27, GOLDENGNOME_MOVEMENT_GUEST
	waitmovement 0
	namebox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_8
	msgbox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_9
	closemessage
	hidenamebox
	applymovement 26, GOLDENGNOME_MOVEMENT_JMOD_WALK_FORWARD
	waitmovement 0
	namebox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_10
	msgbox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_11
	closemessage
	hidenamebox
	applymovement 26, GOLDENGNOME_MOVEMENT_JMOD_WALK_BACKWARDS
	waitmovement 0
	applymovement 27, GOLDENGNOME_MOVEMENT_GUEST_stan
	waitmovement 0
	applymovement 28, GOLDENGNOME_MOVEMENT_GUEST
	waitmovement 0
	namebox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_12
	msgbox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_13
	closemessage
	hidenamebox
	applymovement 28, GOLDENGNOME_MOVEMENT_GUEST_orchy
	waitmovement 0
	applymovement 30, GOLDENGNOME_MOVEMENT_GUEST_frogeel
	waitmovement 0
	namebox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_14
	msgbox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_15
	closemessage
	hidenamebox
	delay 60
	namebox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_4
	msgbox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_16
	waitmessage
	closemessage
	hidenamebox
	applymovement 30, GOLDENGNOME_MOVEMENT_GUEST_frogeel_exit
	waitmovement 0
	namebox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_4
	msgbox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_17
	waitmessage
	msgbox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_18
	closemessage
	hidenamebox
	savebgm MUS_DUMMY
	fadedefaultbgm
	setvar VAR_POKESCAPE_GOLDENGNOMES, 15
	warpwhitefade MAP_DRAYNOR, 255, 14, 28
	release
	end


GOLDENGNOME_CAMERA_1_START:
	walk_slow_right
	walk_slow_right
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	step_end

GOLDENGNOME_MOVEMENT_1:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	step_end

GOLDENGNOME_MOVEMENT_2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	face_down
	step_end

GOLDENGNOME_MOVEMENT_3:
	walk_left
	walk_left
	walk_left
	face_right
	step_end

GOLDENGNOME_MOVEMENT_4:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	face_down
	step_end

GOLDENGNOME_MOVEMENT_5:
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

GOLDENGNOME_MOVEMENT_6:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	face_down
	step_end

GOLDENGNOME_MOVEMENT_GUEST:
	walk_left
	walk_left
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_down
	step_end

GOLDENGNOME_MOVEMENT_GUEST_stan:
	walk_left
	face_down
	step_end

GOLDENGNOME_MOVEMENT_GUEST_orchy:
	walk_right
	face_down
	step_end

GOLDENGNOME_MOVEMENT_GUEST_frogeel:
	jump_left
	jump_left
	jump_left
	jump_left
	jump_left
	jump_left
	jump_left
	jump_left
	jump_left
	face_down
	step_end

GOLDENGNOME_MOVEMENT_GUEST_frogeel_exit:
	jump_left
	jump_left
	jump_left
	jump_left
	jump_down
	jump_down
	jump_down
	jump_down
	jump_down
	face_down
	step_end

GOLDENGNOME_MOVEMENT_JMOD_WALK_FORWARD:
	walk_down
	step_end

GOLDENGNOME_MOVEMENT_JMOD_WALK_BACKWARDS:
	lock_facing_direction
	walk_up
	step_end

FROGEEL_EXCITED::
	applymovement 29, GOLDENGNOME_MOVEMENT_Frogeel
	applymovement 30, GOLDENGNOME_MOVEMENT_Frogeel_2
	waitmovement 0
	return


GOLDENGNOME_MOVEMENT_Frogeel:
	jump_left
	jump_left
	jump_left
	jump_left
	jump_left
	jump_left
	jump_left
	jump_left
	jump_up
	jump_left
	jump_right
	jump_right
	jump_left
	jump_2_down
	jump_2_down
	jump_2_down
	jump_2_down
	jump_down
	step_end

GOLDENGNOME_MOVEMENT_Frogeel_2:
	jump_right
	jump_right
	jump_right
	jump_2_up
	jump_up
	jump_right
	jump_right
	jump_2_right
	jump_2_right
	jump_2_right
	jump_2_right
	jump_right
	jump_right
	jump_right
	jump_right
	step_end

GOLDENGNOME_EVENT_START::
	lock
	faceplayer
	compare VAR_POKESCAPE_GOLDENGNOMES, 0
	goto_if_eq GOLDENGNOME_EVENT_START_2
GOLDENGNOME_EVENT_START_1:
	msgbox GOLDENGNOME_EVENT_START_Text_2
	release
	end

GOLDENGNOME_EVENT_START_2:
	msgbox GOLDENGNOME_EVENT_START_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq GOLDENGNOME_EVENT_START_4
	goto GOLDENGNOME_EVENT_START_1

GOLDENGNOME_EVENT_START_4:
	setvar VAR_POKESCAPE_GOLDENGNOMES, 5
	msgbox GOLDENGNOME_EVENT_START_Text_1
	waitmessage
	warpwhitefade MAP_HAM_HIDEOUT_B1F, 255, 17, 23
	end


GOLDENGNOME_EVENT_END::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACELEFT
	applymovement 1, Movement_InteractFACERIGHT
	waitmovement 0
	msgbox GOLDENGNOME_EVENT_END_Text_0
	waitmessage
	closemessage
	call GiveMon_GOLDENGNOME
	setvar VAR_POKESCAPE_GOLDENGNOMES, 20
	release
	end


GOLDENGNOME_TEST::
	goto_if_set FLAG_GOLDENGNOME, GOLDENGNOME_TEST_2
	return

GOLDENGNOME_TEST_2:
	setflag FLAG_HIDE_MAP_NAME_POPUP
	msgbox GOLDENGNOME_TEST_Text_0
	closemessage
	end


HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_0:
	.string "H.A.M Deacon$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_1:
	.string "And thus, we will finally execute our\n"
	.string "plan to rid this world of those fiendish\l"
	.string "Monsters and send them to the Abyss\l"
	.string "where they belong!$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_2:
	.string "…{PAUSE 16}…{PAUSE 16}…\p"
	.string "What is this?$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_3:
	.string "Sorry everyone, it seems like there is\n"
	.string "some sort of an announcement.$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_4:
	.string "Demonheadge$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_5:
	.string "Hello everyone.\p"
	.string "I am Demonheadge, the creator of\n"
	.string "PokeScape.\p"
	.string "And as of a few seconds ago I have been\n"
	.string "informed that PokeScape has been\l"
	.string "nominated for a Golden Gnome!$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_6:
	.string "That's crazy right?!\p"
	.string "I've also been asked to say a few words.$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_7:
	.string "I would like to thank all of the\n"
	.string "incredible people who helped and\l"
	.string "assisted in some way on this project.\p"
	.string "Without them it wouldn't be where it is\n"
	.string "today.$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_8:
	.string "Hyper Stan$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_9:
	.string "Hey, I am HyperStan.\p"
	.string "I drew most of the Pixel Art for this\n"
	.string "Project.\p"
	.string "…{PAUSE 16} Using this moment I would like to say\n"
	.string "that Ja-$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_10:
	.string "Jagex Mod$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_11:
	.string "Sorry, Hyper Stan has just been muted\n"
	.string "for inappropriate behaviour.\p"
	.string "Please continue the awards.$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_12:
	.string "Orchy$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_13:
	.string "Hello I am known as RuneScape\n"
	.string "ReOrchestrated.\p"
	.string "I made all of the custom music for this\n"
	.string "Project.\p"
	.string "I hope you enjoy it!$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_14:
	.string "FROGEEL$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_15:
	.string "AAAAAAAAAAAA!$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_16:
	.string "Ah, cannot forget about Frogeel for his\n"
	.string "pursuit-less despair and endeavor\l"
	.string "which has kept us motivated to keep\l"
	.string "going.$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_17:
	.string "Some other mentions are ImcandoBrett,\n"
	.string "Ryu Saint, Lopendebank, Chase,\l"
	.string "MrKalius, Sudo Bash, Jitterbug,\l"
	.string "GentleShen, PippinSmith and many, many\l"
	.string "others who have popped in along the\l"
	.string "way to contribute in one way or\l"
	.string "another.$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_18:
	.string "PokeScape has been a passion project\n"
	.string "on and off for a few years now just for\l"
	.string "fun and I hope to continue it!\p"
	.string "Thank you all for voting for us.\p"
	.string "We appreciate it a lot.\p"
	.string "Now enjoy the rest of the Golden Gnome\n"
	.string "Awards!$"

GOLDENGNOME_EVENT_START_Text_0:
	.string "Would you like to watch the Golden\n"
	.string "Gnomes Awards?$"

GOLDENGNOME_EVENT_START_Text_1:
	.string "Enjoy watching!$"

GOLDENGNOME_EVENT_START_Text_2:
	.string "I hope you enjoyed watching Golden\n"
	.string "Gnomes.$"

GOLDENGNOME_EVENT_END_Text_0:
	.string "I hope you enjoyed watching the Golden\n"
	.string "Gnomes.\p"
	.string "Here is a gift for you.$"

GOLDENGNOME_TEST_Text_0:
	.string "Testing…$"
