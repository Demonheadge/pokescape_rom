Draynor_Manor_1F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Draynor_Manor_1F_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_TRANSITION, Draynor_Manor_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Draynor_Manor_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Draynor_Manor_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
	call DraynorManor_Lever_STATE
	return

Draynor_Manor_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 1
	return

Draynor_Manor_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_POKESCAPE_WIZARDS_TOWER_STATE, 7, HAM_EVENT_DRAYNORMANOR_1F
	.2byte 0


HAM_EVENT_DRAYNORMANOR_1F::
	switch VAR_POKESCAPE_WIZARDS_TOWER_STATE
	case 7, HAM_EVENT_DRAYNORMANOR_1F_2
	return

HAM_EVENT_DRAYNORMANOR_1F_2:
	addobject 17
	clearflag FLAG_TEMP_1F
	namebox HAM_EVENT_DRAYNORMANOR_1F_Text_0
	msgbox HAM_EVENT_DRAYNORMANOR_1F_Text_1
	msgbox HAM_EVENT_DRAYNORMANOR_1F_Text_2
	hidenamebox
	namebox HAM_EVENT_DRAYNORMANOR_1F_Text_3
	msgbox HAM_EVENT_DRAYNORMANOR_1F_Text_4
	namebox HAM_EVENT_DRAYNORMANOR_1F_Text_0
	msgbox HAM_EVENT_DRAYNORMANOR_1F_Text_5
	msgbox HAM_EVENT_DRAYNORMANOR_1F_Text_6
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 8
	return


DraynorManor_Lever_STATE::
	switch VAR_POKESCAPE_DRAYNORMANOR_LEVER_STATE
	case 0, DraynorManor_Lever_STATE_2
	case 1, DraynorManor_Lever_STATE_3
	return

DraynorManor_Lever_STATE_2:
	setmetatile 6, 17, 602, 1
	setmetatile 6, 18, 602, 1
	setmetatile 6, 19, 602, 1
	setmetatile 6, 20, 602, 1
	setmetatile 6, 21, 602, 1
	setmetatile 7, 17, 604, 1
	setmetatile 7, 18, 604, 1
	setmetatile 7, 19, 604, 1
	setmetatile 7, 20, 604, 1
	setmetatile 7, 21, 604, 1
	special DrawWholeMapView
	return

DraynorManor_Lever_STATE_3:
	setmetatile 6, 17, 570, 1
	setmetatile 6, 18, 578, 1
	setmetatile 6, 19, 586, 1
	setmetatile 6, 20, 516, 0
	setmetatile 6, 21, 594, 1
	setmetatile 7, 17, 572, 1
	setmetatile 7, 18, 580, 1
	setmetatile 7, 19, 588, 1
	setmetatile 7, 20, 516, 0
	setmetatile 7, 21, 596, 1
	special DrawWholeMapView
	return


SIGN_DRAYNORMANOR_LEVER_1::
	switch VAR_POKESCAPE_DRAYNORMANOR_LEVER_STATE
	case 0, SIGN_DRAYNORMANOR_LEVER_1_2
	case 1, SIGN_DRAYNORMANOR_LEVER_1_3
	return

SIGN_DRAYNORMANOR_LEVER_1_2:
	lock
	msgbox SIGN_DRAYNORMANOR_LEVER_1_Text_0
	setmetatile 6, 17, 570, 1
	setmetatile 6, 18, 578, 1
	setmetatile 6, 19, 586, 1
	setmetatile 6, 20, 516, 0
	setmetatile 6, 21, 594, 1
	setmetatile 7, 17, 572, 1
	setmetatile 7, 18, 580, 1
	setmetatile 7, 19, 588, 1
	setmetatile 7, 20, 516, 0
	setmetatile 7, 21, 596, 1
	special DrawWholeMapView
	setvar VAR_POKESCAPE_DRAYNORMANOR_LEVER_STATE, 1
	release
	end

SIGN_DRAYNORMANOR_LEVER_1_3:
	lock
	msgbox SIGN_DRAYNORMANOR_LEVER_1_Text_0
	setmetatile 6, 17, 602, 1
	setmetatile 6, 18, 602, 1
	setmetatile 6, 19, 602, 1
	setmetatile 6, 20, 602, 1
	setmetatile 6, 21, 602, 1
	setmetatile 7, 17, 604, 1
	setmetatile 7, 18, 604, 1
	setmetatile 7, 19, 604, 1
	setmetatile 7, 20, 604, 1
	setmetatile 7, 21, 604, 1
	special DrawWholeMapView
	setvar VAR_POKESCAPE_DRAYNORMANOR_LEVER_STATE, 0
	release
	end


NPC_DraynorManor_LEVER_A::
	msgbox NPC_DraynorManor_LEVER_A_Text_0
	closemessage
	setmetatile 17, 16, 516, 0
	special DrawWholeMapView
	end


NPC_DraynorManor_LEVER_B::
	msgbox NPC_DraynorManor_LEVER_A_Text_0
	closemessage
	setmetatile 11, 10, 516, 0
	special DrawWholeMapView
	end


NPC_DraynorManor_LEVER_C::
	msgbox NPC_DraynorManor_LEVER_A_Text_0
	closemessage
	setmetatile 11, 16, 516, 0
	special DrawWholeMapView
	end


NPC_DraynorManor_LEVER_D::
	msgbox NPC_DraynorManor_LEVER_A_Text_0
	closemessage
	setmetatile 8, 13, 516, 0
	setmetatile 14, 7, 516, 0
	special DrawWholeMapView
	end


NPC_DraynorManor_LEVER_E::
	msgbox NPC_DraynorManor_LEVER_A_Text_0
	closemessage
	setmetatile 14, 13, 516, 0
	setmetatile 8, 7, 516, 0
	special DrawWholeMapView
	end


NPC_DraynorManor_LEVER_F::
	msgbox NPC_DraynorManor_LEVER_A_Text_0
	closemessage
	setmetatile 4, 10, 516, 0
	setmetatile 8, 19, 516, 0
	special DrawWholeMapView
	end


NPC_DraynorManor_LEVER_G::
	msgbox NPC_DraynorManor_LEVER_A_Text_0
	closemessage
	setmetatile 8, 19, 516, 0
	special DrawWholeMapView
	end


NPC_DraynorManor_Ava::
	lock
	faceplayer
	namebox NPC_DraynorManor_Ava_Text_0
	random 5
	switch VAR_RESULT
	case 0, NPC_DraynorManor_Ava_2
	case 1, NPC_DraynorManor_Ava_3
	case 2, NPC_DraynorManor_Ava_4
	case 3, NPC_DraynorManor_Ava_5
	case 4, NPC_DraynorManor_Ava_6
	case 5, NPC_DraynorManor_Ava_7
	return

NPC_DraynorManor_Ava_2:
	msgbox NPC_DraynorManor_Ava_Text_1
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Ava_3:
	msgbox NPC_DraynorManor_Ava_Text_2
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Ava_4:
	msgbox NPC_DraynorManor_Ava_Text_3
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Ava_5:
	msgbox NPC_DraynorManor_Ava_Text_4
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Ava_6:
	msgbox NPC_DraynorManor_Ava_Text_5
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Ava_7:
	msgbox NPC_DraynorManor_Ava_Text_6
	hidenamebox
	closemessage
	release
	end


NPC_DraynorManor_Quester::
	lock
	faceplayer
	compare VAR_POKESCAPE_DRAYNORMANOR_LEVER_STATE, 1
	goto_if_eq NPC_DraynorManor_Quester_2
	msgbox NPC_DraynorManor_Quester_Text_1
NPC_DraynorManor_Quester_1:
	closemessage
	release
	end

NPC_DraynorManor_Quester_2:
	msgbox NPC_DraynorManor_Quester_Text_0
	goto NPC_DraynorManor_Quester_1


NPC_DraynorManor_Witch::
	lock
	faceplayer
	namebox NPC_DraynorManor_Witch_Text_0
	msgbox NPC_DraynorManor_Witch_Text_1
	hidenamebox
	closemessage
	release
	end


NPC_DraynorManor_Chair::
	lock
	msgbox NPC_DraynorManor_Chair_Text_0
	hidenamebox
	closemessage
	release
	end


NPC_DraynorManor_Skeleton_1::
	lock
	faceplayer
	namebox NPC_DraynorManor_Skeleton_1_Text_0
	msgbox NPC_DraynorManor_Skeleton_1_Text_1
	hidenamebox
	closemessage
	release
	end


BATTLE_DRAYNORMANOR_Trainer_1::
	trainerbattle_single TRAINER_DRAYNOR_MANOR_SKELETON_1, BATTLE_DRAYNORMANOR_Trainer_1_Text_0, BATTLE_DRAYNORMANOR_Trainer_1_Text_1
	msgbox BATTLE_DRAYNORMANOR_Trainer_1_Text_1
	hidenamebox
	release
	end


BATTLE_DRAYNORMANOR_Trainer_2::
	trainerbattle_single TRAINER_DRAYNOR_MANOR_SKELETON_2, BATTLE_DRAYNORMANOR_Trainer_2_Text_0, BATTLE_DRAYNORMANOR_Trainer_2_Text_1
	namebox BATTLE_DRAYNORMANOR_Trainer_2_Text_2
	msgbox BATTLE_DRAYNORMANOR_Trainer_2_Text_3
	hidenamebox
	release
	end


BATTLE_DRAYNORMANOR_Trainer_3::
	trainerbattle_single TRAINER_DRAYNOR_MANOR_TRAINER_3, BATTLE_DRAYNORMANOR_Trainer_3_Text_0, BATTLE_DRAYNORMANOR_Trainer_3_Text_1
	namebox BATTLE_DRAYNORMANOR_Trainer_3_Text_2
	msgbox BATTLE_DRAYNORMANOR_Trainer_3_Text_1
	hidenamebox
	release
	end


BATTLE_DRAYNORMANOR_Trainer_4::
	trainerbattle_single TRAINER_DRAYNOR_MANOR_SKELETON_4, BATTLE_DRAYNORMANOR_Trainer_4_Text_0, BATTLE_DRAYNORMANOR_Trainer_4_Text_1
	msgbox BATTLE_DRAYNORMANOR_Trainer_4_Text_1
	hidenamebox
	release
	end


BATTLE_DRAYNORMANOR_Trainer_5::
	trainerbattle_single TRAINER_DRAYNOR_MANOR_SKELETON_5, BATTLE_DRAYNORMANOR_Trainer_5_Text_0, BATTLE_DRAYNORMANOR_Trainer_5_Text_1
	msgbox BATTLE_DRAYNORMANOR_Trainer_5_Text_1
	hidenamebox
	release
	end


BATTLE_DRAYNORMANOR_Trainer_6::
	trainerbattle_single TRAINER_DRAYNOR_MANOR_SKELETON_6, BATTLE_DRAYNORMANOR_Trainer_6_Text_0, BATTLE_DRAYNORMANOR_Trainer_6_Text_1
	msgbox BATTLE_DRAYNORMANOR_Trainer_6_Text_1
	hidenamebox
	release
	end


BATTLE_DRAYNORMANOR_Trainer_7::
	trainerbattle_single TRAINER_DRAYNOR_MANOR_SKELETON_7, BATTLE_DRAYNORMANOR_Trainer_7_Text_0, BATTLE_DRAYNORMANOR_Trainer_7_Text_1
	msgbox BATTLE_DRAYNORMANOR_Trainer_7_Text_1
	hidenamebox
	release
	end


BATTLE_DRAYNORMANOR_Trainer_8::
	trainerbattle_single TRAINER_DRAYNOR_MANOR_SKELETON_8, BATTLE_DRAYNORMANOR_Trainer_8_Text_0, BATTLE_DRAYNORMANOR_Trainer_8_Text_1
	msgbox BATTLE_DRAYNORMANOR_Trainer_8_Text_2
	hidenamebox
	release
	end


HAM_EVENT_DRAYNORMANOR_1F_Text_0:
	.string "Ariane$"

HAM_EVENT_DRAYNORMANOR_1F_Text_1:
	.string "…{PAUSE 32}…{PAUSE 32}…\n"
	.string "He… Hey you…\p"
	.string "Can… can we go together?$"

HAM_EVENT_DRAYNORMANOR_1F_Text_2:
	.string "Pssh!\n"
	.string "I'm not scared, what do you take me for-$"

HAM_EVENT_DRAYNORMANOR_1F_Text_3:
	.string "Rat$"

HAM_EVENT_DRAYNORMANOR_1F_Text_4:
	.string "Squeeek!$"

HAM_EVENT_DRAYNORMANOR_1F_Text_5:
	.string "Eeek!$"

HAM_EVENT_DRAYNORMANOR_1F_Text_6:
	.string "Okay, maybe I am a little scared…\p"
	.string "You lead the way.$"

SIGN_DRAYNORMANOR_LEVER_1_Text_0:
	.string "You pull a hidden lever!$"

NPC_DraynorManor_LEVER_A_Text_0:
	.string "You pull the lever and hear a gate open.$"

NPC_DraynorManor_Ava_Text_0:
	.string "Ava$"

NPC_DraynorManor_Ava_Text_1:
	.string "I think the walls are watching me…$"

NPC_DraynorManor_Ava_Text_2:
	.string "Who thought it was a good idea to put\n"
	.string "piranhas in the fountain…\p"
	.string "It is no where near big enough!$"

NPC_DraynorManor_Ava_Text_3:
	.string "If you see any animated chairs…\p"
	.string "I assure you, it was not my fault.$"

NPC_DraynorManor_Ava_Text_4:
	.string "I'm overjoyed with my new mattress!\p"
	.string "It almost feels like I'm being consumed\n"
	.string "by a fluffy…{PAUSE 15}{PAUSE 15} undead…{PAUSE 15}{PAUSE 15} zombie…{PAUSE 15}\l"
	.string "chicken…?$"

NPC_DraynorManor_Ava_Text_5:
	.string "If only there were more trainers\n"
	.string "gullible enough to travel across the\l"
	.string "land searching far and wide for my\l"
	.string "questionable research.$"

NPC_DraynorManor_Ava_Text_6:
	.string "EEK!\n"
	.string "A HUMAN…!\p"
	.string "…Sorry…{PAUSE 15} I have spent way too much time\n"
	.string "here, I'm not used to seeing corporeal\l"
	.string "beings.$"

NPC_DraynorManor_Quester_Text_0:
	.string "Did you find the hidden switch?\p"
	.string "Where was it?!$"

NPC_DraynorManor_Quester_Text_1:
	.string "I heard there was a hidden switch\n"
	.string "somewhere in this room but I am yet to\l"
	.string "find it.$"

NPC_DraynorManor_Witch_Text_0:
	.string "Witch$"

NPC_DraynorManor_Witch_Text_1:
	.string "I have so much poison in my kitchen\n"
	.string "cupboards!\p"
	.string "I don't think a blueberry special will\n"
	.string "save you from how toxic that stuff is!$"

NPC_DraynorManor_Chair_Text_0:
	.string "It's a chair.$"

NPC_DraynorManor_Skeleton_1_Text_0:
	.string "Skeleton$"

NPC_DraynorManor_Skeleton_1_Text_1:
	.string "I would really like to play the piano.\p"
	.string "But I have nobody to play with.$"

BATTLE_DRAYNORMANOR_Trainer_1_Text_0:
	.string "The skeleton stares deep into your\n"
	.string "eyes before it challenges you to a\l"
	.string "battle.$"

BATTLE_DRAYNORMANOR_Trainer_1_Text_1:
	.string "The skeleton stares intently into your\n"
	.string "eyes but refuses to move.$"

BATTLE_DRAYNORMANOR_Trainer_2_Text_0:
	.string "Do not steal the Rubber Tube!$"

BATTLE_DRAYNORMANOR_Trainer_2_Text_1:
	.string "Oh you want to return it?$"

BATTLE_DRAYNORMANOR_Trainer_2_Text_2:
	.string "McBoneFace$"

BATTLE_DRAYNORMANOR_Trainer_2_Text_3:
	.string "You are going to return the Rubber Tube\n"
	.string "to Oddenstein?\p"
	.string "Sure go for it.$"

BATTLE_DRAYNORMANOR_Trainer_3_Text_0:
	.string "Fear me and my monsters!$"

BATTLE_DRAYNORMANOR_Trainer_3_Text_1:
	.string "Ahhh!\p"
	.string "I fear you and your monsters!$"

BATTLE_DRAYNORMANOR_Trainer_3_Text_2:
	.string "Dark Wizard$"

BATTLE_DRAYNORMANOR_Trainer_4_Text_0:
	.string "Boo!$"

BATTLE_DRAYNORMANOR_Trainer_4_Text_1:
	.string "The skeleton is giggling at your\n"
	.string "previous reaction.$"

BATTLE_DRAYNORMANOR_Trainer_5_Text_0:
	.string "The skeleton strikes a menacing pose.$"

BATTLE_DRAYNORMANOR_Trainer_5_Text_1:
	.string "The skeleton stands perfectly still in\n"
	.string "a menacing pose.$"

BATTLE_DRAYNORMANOR_Trainer_6_Text_0:
	.string "The skeleton looks like it forgot what\n"
	.string "it was about to say.$"

BATTLE_DRAYNORMANOR_Trainer_6_Text_1:
	.string "The skeleton remembered, but the\n"
	.string "chance to say it is lost.$"

BATTLE_DRAYNORMANOR_Trainer_7_Text_0:
	.string "The skeleton loses an arm walking\n"
	.string "towards you.$"

BATTLE_DRAYNORMANOR_Trainer_7_Text_1:
	.string "The skeleton is franticly looking for\n"
	.string "his arm.$"

BATTLE_DRAYNORMANOR_Trainer_8_Text_0:
	.string "…$"

BATTLE_DRAYNORMANOR_Trainer_8_Text_1:
	.string "…………Hi.$"

BATTLE_DRAYNORMANOR_Trainer_8_Text_2:
	.string "………………Hi.$"
