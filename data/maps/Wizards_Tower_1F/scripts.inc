Wizards_Tower_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Wizards_Tower_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Wizards_Tower_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Wizards_Tower_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 1
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Wizards_Tower_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	call OPENWORLD_STATE_WIZARDSTOWER_1F
	return

Wizards_Tower_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	goto WizardsTower_STATE
	return

Wizards_Tower_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_B, 0, HAM_EVENT_WizardsTower_1
	.2byte 0


OPENWORLD_STATE_WIZARDSTOWER_1F::
	setobjectxyperm 4, 5, 14
	setobjectmovementtype 4, MOVEMENT_TYPE_LOOK_AROUND
	removeobject 9
	removeobject 7
	removeobject 8
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	return


WizardsTower_STATE::
	switch VAR_POKESCAPE_WIZARDS_TOWER_STATE
	case 0, WizardsTower_STATE_2
	case 1, WizardsTower_STATE_3
	case 2, WizardsTower_STATE_3
	case 3, WizardsTower_STATE_3
	case 4, WizardsTower_STATE_3
	case 5, WizardsTower_STATE_3
	case 6, WizardsTower_STATE_3
	case 7, WizardsTower_STATE_3
	case 8, WizardsTower_STATE_3
	case 9, WizardsTower_STATE_3
	case 10, WizardsTower_STATE_4
	case 11, WizardsTower_STATE_4
	return

WizardsTower_STATE_2:
	setflag FLAG_TEMP_1
	release
	end

WizardsTower_STATE_3:
	setobjectxyperm 4, 8, 14
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 9, 8, 15
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_UP
	removeobject 7
	removeobject 8
	setflag FLAG_TEMP_2
	setvar VAR_TEMP_B, 1
	return

WizardsTower_STATE_4:
	setobjectxyperm 4, 5, 14
	setobjectmovementtype 4, MOVEMENT_TYPE_LOOK_AROUND
	removeobject 9
	removeobject 7
	removeobject 8
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setvar VAR_TEMP_B, 1
	release
	end


WizardsTower_SEDRIDOR::
	switch VAR_POKESCAPE_WIZARDS_TOWER_STATE
	case 0, WizardsTower_SEDRIDOR_2
	case 1, WizardsTower_SEDRIDOR_3
	case 2, WizardsTower_SEDRIDOR_3
	case 3, WizardsTower_SEDRIDOR_3
	case 4, WizardsTower_SEDRIDOR_3
	case 5, WizardsTower_SEDRIDOR_3
	case 6, WizardsTower_SEDRIDOR_3
	case 7, WizardsTower_SEDRIDOR_3
	case 8, WizardsTower_SEDRIDOR_3
	case 9, WizardsTower_SEDRIDOR_3
	case 10, WizardsTower_SEDRIDOR_3
	case 11, WizardsTower_SEDRIDOR_3
	return

WizardsTower_SEDRIDOR_2:
	lock
	faceplayer
	namebox WizardsTower_SEDRIDOR_Text_0
	msgbox WizardsTower_SEDRIDOR_Text_1
	hidenamebox
	release
	end

WizardsTower_SEDRIDOR_3:
	lock
	faceplayer
	namebox WizardsTower_SEDRIDOR_Text_0
	msgbox WizardsTower_SEDRIDOR_Text_2
	hidenamebox
	release
	end


WizardsTower_Wizard::
	switch VAR_POKESCAPE_WIZARDS_TOWER_STATE
	case 0, WizardsTower_Wizard_2
	case 1, WizardsTower_Wizard_3
	case 2, WizardsTower_Wizard_3
	case 3, WizardsTower_Wizard_3
	case 4, WizardsTower_Wizard_3
	case 5, WizardsTower_Wizard_3
	case 6, WizardsTower_Wizard_3
	case 7, WizardsTower_Wizard_3
	case 8, WizardsTower_Wizard_3
	case 9, WizardsTower_Wizard_4
	case 10, WizardsTower_Wizard_4
	case 11, WizardsTower_Wizard_4
	return

WizardsTower_Wizard_2:
	lock
	faceplayer
	namebox WizardsTower_Wizard_Text_0
	msgbox WizardsTower_Wizard_Text_1
	hidenamebox
	release
	end

WizardsTower_Wizard_3:
	lock
	faceplayer
	namebox WizardsTower_Wizard_Text_0
	msgbox WizardsTower_Wizard_Text_2
	hidenamebox
	release
	end

WizardsTower_Wizard_4:
	lock
	faceplayer
	namebox WizardsTower_Wizard_Text_0
	msgbox WizardsTower_Wizard_Text_3
	hidenamebox
	release
	end


WizardsTower_EVENT_TRIGGER::
	compare VAR_POKESCAPE_GAMEMODE_STATE, 1
	goto_if_eq WizardsTower_EVENT_TRIGGER_2
	switch VAR_POKESCAPE_WIZARDS_TOWER_STATE
	case 0, WizardsTower_EVENT_TRIGGER_5
	case 1, WizardsTower_EVENT_TRIGGER_5
	case 2, WizardsTower_EVENT_TRIGGER_5
	case 3, WizardsTower_EVENT_TRIGGER_5
	case 4, WizardsTower_EVENT_TRIGGER_5
	case 5, WizardsTower_EVENT_TRIGGER_5
	case 6, WizardsTower_EVENT_TRIGGER_5
	case 7, WizardsTower_EVENT_TRIGGER_5
	case 8, WizardsTower_EVENT_TRIGGER_5
	case 9, WizardsTower_EVENT_TRIGGER_5
	case 10, WizardsTower_EVENT_TRIGGER_6
	case 11, WizardsTower_EVENT_TRIGGER_6
	return

WizardsTower_EVENT_TRIGGER_2:
	release
	end

WizardsTower_EVENT_TRIGGER_5:
	lock
	applymovement 4, Movement_Wizard_WizardsTower4
	waitmovement 0
	namebox WizardsTower_Wizard_Text_0
	msgbox WizardsTower_EVENT_TRIGGER_Text_0
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_WizardsTower4
	waitmovement 0
	release
	end

WizardsTower_EVENT_TRIGGER_6:
	release
	end


HAM_EVENT_WizardsTower_1::
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq HAM_EVENT_WizardsTower_1_1
	setvar VAR_TEMP_B, 1
	release
	return

HAM_EVENT_WizardsTower_1_1:
	lockall
	playbgm MUS_PS_ENCOUNTER_HAM, 1
	namebox HAM_EVENT_WizardsTower_1_Text_0
	msgbox HAM_EVENT_WizardsTower_1_Text_1
	waitmessage
	hidenamebox
	closemessage
	applymovement 8, Movement_HAM_Member_WizardsTower1
	waitmovement 0
	playSE SE_WALL_HIT
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_WizardsTower1
	applymovement 8, Movement_HAM_Member_WizardsTower2
	applymovement 7, Movement_Araine_WizardsTower1
	waitmovement 0
	removeobject 8
	removeobject 7
	namebox HAM_EVENT_WizardsTower_1_Text_0
	msgbox HAM_EVENT_WizardsTower_1_Text_2
	waitmessage
	hidenamebox
	closemessage
	clearflag FLAG_TEMP_1
	addobject 9
	showobjectat 9, MAP_WIZARDS_TOWER_1F
	applymovement 4, Movement_Wizard_WizardsTower1
	applymovement 9, Movement_Sedridor_WizardsTower1
	waitmovement 4
	applymovement 9, Movement_Sedridor_WizardsTower2
	namebox WizardsTower_Wizard_Text_0
	msgbox HAM_EVENT_WizardsTower_1_Text_3
	hidenamebox
	namebox WizardsTower_SEDRIDOR_Text_0
	msgbox HAM_EVENT_WizardsTower_1_Text_4
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_WizardsTower2
	waitmovement 0
	playse SE_PIN
	applymovement 9, Movement_Sedridor_WizardsTower3
	delay 16
	namebox WizardsTower_SEDRIDOR_Text_0
	msgbox HAM_EVENT_WizardsTower_1_Text_5
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_WizardsTower3
	waitmovement 0
	namebox WizardsTower_SEDRIDOR_Text_0
	msgbox HAM_EVENT_WizardsTower_1_Text_6
	hidenamebox
	closemessage
	savebgm MUS_DUMMY
	fadedefaultbgm
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 1
	setvar VAR_TEMP_B, 1
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 20
	release
	end


Movement_HAM_Member_WizardsTower1:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_down
	step_end

Movement_Player_WizardsTower1:
	lock_facing_direction
	slide_left
	unlock_facing_direction
	face_right
	delay_16
	step_end

Movement_Araine_WizardsTower1:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_down
	walk_fast_down
	set_invisible
	step_end

Movement_HAM_Member_WizardsTower2:
	walk_fast_down
	set_invisible
	step_end

Movement_Sedridor_WizardsTower1:
	set_visible
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Movement_Wizard_WizardsTower1:
	walk_down
	walk_down
	walk_down
	delay_16
	face_left
	delay_8
	face_right
	delay_8
	walk_down
	delay_4
	walk_right
	walk_right
	face_down
	step_end

Movement_Sedridor_WizardsTower2:
	face_up
	step_end

Movement_Sedridor_WizardsTower3:
	emote_exclamation_mark
	face_player
	step_end

Movement_Hide_Sedridor:
	set_invisible
	step_end

Movement_Player_WizardsTower2:
	walk_up
	walk_right
	step_end

Movement_Player_WizardsTower3:
	walk_in_place_right
	walk_in_place_right
	walk_in_place_right
	step_end

Movement_Player_WizardsTower4:
	walk_down
	step_end

Movement_Wizard_WizardsTower4:
	face_up
	step_end

NPC_WIZARDSTOWER_Book_1::
	msgbox NPC_WIZARDSTOWER_Book_1_Text_0
	closemessage
	release
	end


NPC_WIZARDSTOWER_Book_2::
	msgbox NPC_WIZARDSTOWER_Book_2_Text_0
	closemessage
	release
	end


NPC_WIZARDSTOWER_Book_3::
	msgbox NPC_WIZARDSTOWER_Book_3_Text_0
	closemessage
	release
	end


NPC_WIZARDSTOWER_Book_4::
	msgbox NPC_WIZARDSTOWER_Book_4_Text_0
	closemessage
	release
	end


NPC_WIZARDSTOWER_Book_5::
	msgbox NPC_WIZARDSTOWER_Book_5_Text_0
	closemessage
	release
	end


NPC_WIZARDSTOWER_Skeleton::
	lock
	faceplayer
	namebox NPC_WIZARDSTOWER_Skeleton_Text_0
	msgbox NPC_WIZARDSTOWER_Skeleton_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_WIZARDSTOWER_Valina::
	lock
	faceplayer
	namebox NPC_WIZARDSTOWER_Valina_Text_0
	msgbox NPC_WIZARDSTOWER_Valina_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_WIZARDSTOWER_Traiborn::
	lock
	faceplayer
	namebox NPC_WIZARDSTOWER_Traiborn_Text_0
	msgbox NPC_WIZARDSTOWER_Traiborn_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_WIZARDSTOWER_Jalarast::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_SPLITBARK, NPC_WIZARDSTOWER_Jalarast_2
NPC_WIZARDSTOWER_Jalarast_1:
	namebox NPC_WIZARDSTOWER_Jalarast_Text_0
	msgbox NPC_WIZARDSTOWER_Jalarast_Text_2
	waitmessage
	hidenamebox
	release
	end

NPC_WIZARDSTOWER_Jalarast_2:
	namebox NPC_WIZARDSTOWER_Jalarast_Text_0
	msgbox NPC_WIZARDSTOWER_Jalarast_Text_1
	hidenamebox
	giveitem ITEM_SPLITBARK, 1
	waitmessage
	closemessage
	setflag FLAG_RECEIVED_SPLITBARK
	goto NPC_WIZARDSTOWER_Jalarast_1


NPC_WIZARDSTOWER_Mizog::
	lock
	faceplayer
	namebox NPC_WIZARDSTOWER_Mizog_Text_0
	msgbox NPC_WIZARDSTOWER_Mizog_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_WIZARDSTOWER_Taloram::
	lock
	namebox NPC_WIZARDSTOWER_Taloram_Text_0
	msgbox NPC_WIZARDSTOWER_Taloram_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_WIZARDSTOWER_Melville_Grayzag::
	lock
	namebox NPC_WIZARDSTOWER_Melville_Grayzag_Text_0
	msgbox NPC_WIZARDSTOWER_Melville_Grayzag_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_WIZARDSTOWER_Borann::
	lock
	faceplayer
	namebox NPC_WIZARDSTOWER_Borann_Text_0
	msgbox NPC_WIZARDSTOWER_Borann_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_WIZARDSTOWER_Isidor::
	lock
	faceplayer
	namebox NPC_WIZARDSTOWER_Isidor_Text_0
	msgbox NPC_WIZARDSTOWER_Isidor_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_WIZARDSTOWER_Ellaron::
	lock
	faceplayer
	namebox NPC_WIZARDSTOWER_Ellaron_Text_0
	msgbox NPC_WIZARDSTOWER_Ellaron_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_WIZARDSTOWER_Onglewip::
	lock
	faceplayer
	namebox NPC_WIZARDSTOWER_Onglewip_Text_0
	msgbox NPC_WIZARDSTOWER_Onglewip_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_WIZARDSTOWER_Sinterklaas::
	lock
	faceplayer
	namebox NPC_WIZARDSTOWER_Sinterklaas_Text_0
	msgbox NPC_WIZARDSTOWER_Sinterklaas_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_WIZARDSTOWER_Sioncorn::
	lock
	faceplayer
	namebox NPC_WIZARDSTOWER_Sioncorn_Text_0
	msgbox NPC_WIZARDSTOWER_Sioncorn_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_WIZARDSTOWER_Rick::
	lock
	faceplayer
	namebox NPC_WIZARDSTOWER_Rick_Text_0
	msgbox NPC_WIZARDSTOWER_Rick_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_WIZARDSTOWER_SnowImp::
	lock
	faceplayer
	namebox NPC_WIZARDSTOWER_SnowImp_Text_0
	msgbox NPC_WIZARDSTOWER_SnowImp_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_WIZARDSTOWER_Rinsit::
	lock
	faceplayer
	namebox NPC_WIZARDSTOWER_Rinsit_Text_0
	msgbox NPC_WIZARDSTOWER_Rinsit_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_WIZARDSTOWER_RuneGuardian::
	lock
	faceplayer
	playmoncry SPECIES_UNOWN, 0
	namebox NPC_WIZARDSTOWER_RuneGuardian_Text_0
	msgbox NPC_WIZARDSTOWER_RuneGuardian_Text_1
	waitmoncry
	waitmessage
	hidenamebox
	release
	end


NPC_WIZARDSTOWER_PulseCore::
	goto_if_unset FLAG_RECEIVED_PULSECORE, NPC_WIZARDSTOWER_PulseCore_1
	lock
	delay 16
	playse SE_PIN
	applymovement 2, rinsit_1
	waitmovement 0
	namebox NPC_WIZARDSTOWER_Rinsit_Text_0
	msgbox NPC_WIZARDSTOWER_PulseCore_Text_7
	waitmessage
	hidenamebox
	release
	end

NPC_WIZARDSTOWER_PulseCore_1:
	lock
	msgbox NPC_WIZARDSTOWER_PulseCore_Text_0
	playse SE_PIN
	applymovement 2 rinsit_1
	waitmovement 0
	namebox NPC_WIZARDSTOWER_Rinsit_Text_0
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq NPC_WIZARDSTOWER_PulseCore_5
	msgbox NPC_WIZARDSTOWER_PulseCore_Text_2
NPC_WIZARDSTOWER_PulseCore_4:
	applymovement OBJ_EVENT_ID_PLAYER, rinsit_4
	waitmovement 0
	msgbox NPC_WIZARDSTOWER_PulseCore_Text_3
	applymovement 2 rinsit_2
	waitmovement 0
	msgbox NPC_WIZARDSTOWER_PulseCore_Text_4
	applymovement 2 rinsit_3
	waitmovement 0
	msgbox NPC_WIZARDSTOWER_PulseCore_Text_5
	hidenamebox
	giveitem ITEM_PULSE_CORE, 1
	namebox NPC_WIZARDSTOWER_Rinsit_Text_0
	msgbox NPC_WIZARDSTOWER_PulseCore_Text_6
	waitmessage
	hidenamebox
	setflag FLAG_RECEIVED_PULSECORE
	release
	end

NPC_WIZARDSTOWER_PulseCore_5:
	msgbox NPC_WIZARDSTOWER_PulseCore_Text_1
	goto NPC_WIZARDSTOWER_PulseCore_4


rinsit_1:
	emote_exclamation_mark
	delay_8
	face_player
	step_end

rinsit_2:
	face_up
	step_end

rinsit_3:
	face_player
	step_end

rinsit_4:
	face_left
	step_end

HAM_EVENT_Ariane1::
	lock
	namebox HAM_EVENT_Ariane1_Text_0
	msgbox HAM_EVENT_Ariane1_Text_1
	hidenamebox
	release
	end


VAR_CHECKER::
	switch VAR_POKESCAPE_WIZARDS_TOWER_STATE
	case 0, VAR_CHECKER_3
	case 1, VAR_CHECKER_4
	case 2, VAR_CHECKER_5
	case 3, VAR_CHECKER_6
	case 4, VAR_CHECKER_7
	case 5, VAR_CHECKER_8
	case 6, VAR_CHECKER_9
	case 7, VAR_CHECKER_10
	case 8, VAR_CHECKER_11
	release
	end

VAR_CHECKER_3:
	msgbox VAR_CHECKER_Text_0
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 1
	release
	end

VAR_CHECKER_4:
	msgbox VAR_CHECKER_Text_1
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 2
	release
	end

VAR_CHECKER_5:
	msgbox VAR_CHECKER_Text_2
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 3
	release
	end

VAR_CHECKER_6:
	msgbox VAR_CHECKER_Text_3
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 4
	release
	end

VAR_CHECKER_7:
	msgbox VAR_CHECKER_Text_4
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 5
	release
	end

VAR_CHECKER_8:
	msgbox VAR_CHECKER_Text_5
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 6
	release
	end

VAR_CHECKER_9:
	msgbox VAR_CHECKER_Text_6
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 7
	release
	end

VAR_CHECKER_10:
	msgbox VAR_CHECKER_Text_7
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 8
	release
	end

VAR_CHECKER_11:
	msgbox VAR_CHECKER_Text_8
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 9
	release
	end


WizardsTower_SEDRIDOR_Text_0:
	.string "Sedridor$"

WizardsTower_SEDRIDOR_Text_1:
	.string "CUPHOLDER$"

WizardsTower_SEDRIDOR_Text_2:
	.string "Could you please go after Ariane.$"

WizardsTower_Wizard_Text_0:
	.string "Finix$"

WizardsTower_Wizard_Text_1:
	.string "Hello and welcome to the Wizards Tower.$"

WizardsTower_Wizard_Text_2:
	.string "Why would that pink hooded guy steal\n"
	.string "our research papers on the abyss?$"

WizardsTower_Wizard_Text_3:
	.string "Thank you for helping out earlier.$"

WizardsTower_EVENT_TRIGGER_Text_0:
	.string "Sorry, but the library is off limits for\n"
	.string "the time being.$"

HAM_EVENT_WizardsTower_1_Text_0:
	.string "???$"

HAM_EVENT_WizardsTower_1_Text_1:
	.string "Someone stop him!$"

HAM_EVENT_WizardsTower_1_Text_2:
	.string "What's all that racket?!$"

HAM_EVENT_WizardsTower_1_Text_3:
	.string "Sedridor, sir.\p"
	.string "A cloaked man just ran off with a bunch\n"
	.string "of our research papers!\p"
	.string "Ariane just gave chase to him!$"

HAM_EVENT_WizardsTower_1_Text_4:
	.string "She what!?\p"
	.string "Oh the silly girl, I hope she doesn't\n"
	.string "cause any trouble…$"

HAM_EVENT_WizardsTower_1_Text_5:
	.string "Who are you?$"

HAM_EVENT_WizardsTower_1_Text_6:
	.string "Ah {PLAYER}, I wish we met under\n"
	.string "better circumstances but could I ask\l"
	.string "you go after Ariane incase she gets\l"
	.string "into trouble.$"

NPC_WIZARDSTOWER_Book_1_Text_0:
	.string "There are books filled with all sorts of\n"
	.string "knowledge!$"

NPC_WIZARDSTOWER_Book_2_Text_0:
	.string "Pouches and Monsters, can you catch em\n"
	.string "all?\p"
	.string "What an interesting read.'$"

NPC_WIZARDSTOWER_Book_3_Text_0:
	.string "There are lots of books.$"

NPC_WIZARDSTOWER_Book_4_Text_0:
	.string "The book is titled Other Worlds &\n"
	.string "Realms.\p"
	.string "It seems interesting.$"

NPC_WIZARDSTOWER_Book_5_Text_0:
	.string "These notes are about the Lumbridge\n"
	.string "Catacombs.\p"
	.string "…{PAUSE 15} …{PAUSE 15}\p"
	.string "The monsters located in the catacombs\n"
	.string "have become far too dangerous so I\l"
	.string "would highly advice closing the\l"
	.string "catacombs to the public for the\l"
	.string "forseeable future. - Ilona.$"

NPC_WIZARDSTOWER_Skeleton_Text_0:
	.string "Skeleton$"

NPC_WIZARDSTOWER_Skeleton_Text_1:
	.string "Did you come from Lumbridge?\p"
	.string "My friend lives there!$"

NPC_WIZARDSTOWER_Valina_Text_0:
	.string "Valina$"

NPC_WIZARDSTOWER_Valina_Text_1:
	.string "Hello.\l"
	.string "Welcome to the Wizards Tower.$"

NPC_WIZARDSTOWER_Traiborn_Text_0:
	.string "Traiborn$"

NPC_WIZARDSTOWER_Traiborn_Text_1:
	.string "Hey you there!\p"
	.string "Have you seen the Thingummyut?$"

NPC_WIZARDSTOWER_Jalarast_Text_0:
	.string "Jalarast$"

NPC_WIZARDSTOWER_Jalarast_Text_1:
	.string "Here you should have this!$"

NPC_WIZARDSTOWER_Jalarast_Text_2:
	.string "Splitbark has amazing Magical\n"
	.string "properties!\p"
	.string "It can enhance a Psychic Type's power.$"

NPC_WIZARDSTOWER_Mizog_Text_0:
	.string "Mizgog$"

NPC_WIZARDSTOWER_Mizog_Text_1:
	.string "Hi there, I am a Beadromancer.\p"
	.string "I study the power of Magical beads.$"

NPC_WIZARDSTOWER_Taloram_Text_0:
	.string "Taloram$"

NPC_WIZARDSTOWER_Taloram_Text_1:
	.string "Oi Melville, let us mess with Mizog, I\n"
	.string "caught a ton of Imps earlier and they\l"
	.string "are itching for a battle.$"

NPC_WIZARDSTOWER_Melville_Grayzag_Text_0:
	.string "Melville Grayzag$"

NPC_WIZARDSTOWER_Melville_Grayzag_Text_1:
	.string "Heck yeah!\p"
	.string "My Imp just evolved into a Lesser\n"
	.string "Demon.$"

NPC_WIZARDSTOWER_Borann_Text_0:
	.string "Borann$"

NPC_WIZARDSTOWER_Borann_Text_1:
	.string "Please be quiet in the Library.$"

NPC_WIZARDSTOWER_Isidor_Text_0:
	.string "Isidor$"

NPC_WIZARDSTOWER_Isidor_Text_1:
	.string "I have been working on a new kind of\n"
	.string "teleportation Magic.\p"
	.string "Surprisingly it works!$"

NPC_WIZARDSTOWER_Ellaron_Text_0:
	.string "Ellaron$"

NPC_WIZARDSTOWER_Ellaron_Text_1:
	.string "CAN A WIZARD NOT GET SOME PEACE AND\n"
	.string "QUIET AROUND HERE! GO AWAY!$"

NPC_WIZARDSTOWER_Onglewip_Text_0:
	.string "Prof. Onglewip$"

NPC_WIZARDSTOWER_Onglewip_Text_1:
	.string "Hello human.\p"
	.string "I am here to study what type of Magic\n"
	.string "the Human Wizards here use in battle.$"

NPC_WIZARDSTOWER_Sinterklaas_Text_0:
	.string "Sinterklaas$"

NPC_WIZARDSTOWER_Sinterklaas_Text_1:
	.string "How did you get in here?!$"

NPC_WIZARDSTOWER_Sioncorn_Text_0:
	.string "Sioncorn$"

NPC_WIZARDSTOWER_Sioncorn_Text_1:
	.string "Have you seen my Tinsel Snake around\n"
	.string "here?$"

NPC_WIZARDSTOWER_Rick_Text_0:
	.string "Rick$"

NPC_WIZARDSTOWER_Rick_Text_1:
	.string "I've recently started to study the\n"
	.string "evolution of certain Monsters because\l"
	.string "I nearly lost my head with my previous\l"
	.string "research.$"

NPC_WIZARDSTOWER_SnowImp_Text_0:
	.string "Snow Imp$"

NPC_WIZARDSTOWER_SnowImp_Text_1:
	.string "Kekeke!$"

NPC_WIZARDSTOWER_Rinsit_Text_0:
	.string "Rinsit$"

NPC_WIZARDSTOWER_Rinsit_Text_1:
	.string "Sometimes when I'm around a pile of\n"
	.string "Elemental Runes, I feel like I am being\l"
	.string "watched.$"

NPC_WIZARDSTOWER_RuneGuardian_Text_0:
	.string "Rune Guardian$"

NPC_WIZARDSTOWER_RuneGuardian_Text_1:
	.string "Btttz, btzz!$"

NPC_WIZARDSTOWER_PulseCore_Text_0:
	.string "You find {PAUSE 15}…{PAUSE 15}… a bunch of rocks?$"

NPC_WIZARDSTOWER_PulseCore_Text_1:
	.string "Not just any rocks my boy they are\n"
	.string "Elemental Runes!$"

NPC_WIZARDSTOWER_PulseCore_Text_2:
	.string "Not just any rocks my gal they are\n"
	.string "Runes!$"

NPC_WIZARDSTOWER_PulseCore_Text_3:
	.string "Oh?{PAUSE 15}\n"
	.string "What is that shiny rock?\p"
	.string "Wait a minute, that is not suppose to be\n"
	.string "in there let me see.$"

NPC_WIZARDSTOWER_PulseCore_Text_4:
	.string "{PAUSE 15}…{PAUSE 15}…{PAUSE 15}…\p"
	.string "Ah… this is a Pulse Core.$"

NPC_WIZARDSTOWER_PulseCore_Text_5:
	.string "Here you can have it.$"

NPC_WIZARDSTOWER_PulseCore_Text_6:
	.string "A Pulse Core will help your monsters\n"
	.string "gain a little bit of extra experience\l"
	.string "after battles.\p"
	.string "I am sure you will find a use for it.$"

NPC_WIZARDSTOWER_PulseCore_Text_7:
	.string "Hey!\p"
	.string "Don't touch my bag of rocks!\p"
	.string "I mean Runes, not rocks!$"

HAM_EVENT_Ariane1_Text_0:
	.string "Ariane$"

HAM_EVENT_Ariane1_Text_1:
	.string "Urhgh, which way did he go?$"

VAR_CHECKER_Text_0:
	.string "0$"

VAR_CHECKER_Text_1:
	.string "1$"

VAR_CHECKER_Text_2:
	.string "2$"

VAR_CHECKER_Text_3:
	.string "3$"

VAR_CHECKER_Text_4:
	.string "4$"

VAR_CHECKER_Text_5:
	.string "5$"

VAR_CHECKER_Text_6:
	.string "6$"

VAR_CHECKER_Text_7:
	.string "7$"

VAR_CHECKER_Text_8:
	.string "8$"
