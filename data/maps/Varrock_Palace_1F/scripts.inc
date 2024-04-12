Varrock_Palace_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Varrock_Palace_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Varrock_Palace_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call VARROCKGYM_TRAINERS
	return


VARROCKGYM_TRAINERS::
	goto_if_unset FLAG_BADGE03_GET, VARROCKGYM_TRAINERS_2
VARROCKGYM_TRAINERS_1:
	return

VARROCKGYM_TRAINERS_2:
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 0
	goto_if_eq VARROCKGYM_TRAINERS_4
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 5
	goto_if_eq VARROCKGYM_TRAINERS_4
	goto VARROCKGYM_TRAINERS_1

VARROCKGYM_TRAINERS_4:
	call SetGymTrainers_VARROCK
	goto VARROCKGYM_TRAINERS_1


TRIGGER_VARROCK_GYM_ADVISOR::
	goto_if_unset FLAG_BADGE03_GET, TRIGGER_VARROCK_GYM_ADVISOR_2
TRIGGER_VARROCK_GYM_ADVISOR_1:
	release
	end

TRIGGER_VARROCK_GYM_ADVISOR_2:
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 0
	goto_if_eq TRIGGER_VARROCK_GYM_ADVISOR_5
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 5
	goto_if_eq TRIGGER_VARROCK_GYM_ADVISOR_8
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq TRIGGER_VARROCK_GYM_ADVISOR_8
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 15
	goto_if_eq TRIGGER_VARROCK_GYM_ADVISOR_8
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 20
	goto_if_eq TRIGGER_VARROCK_GYM_ADVISOR_15
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 25
	goto_if_eq TRIGGER_VARROCK_GYM_ADVISOR_17
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 26
	goto_if_eq TRIGGER_VARROCK_GYM_ADVISOR_17
	goto TRIGGER_VARROCK_GYM_ADVISOR_1

TRIGGER_VARROCK_GYM_ADVISOR_5:
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACERIGHT
	applymovement 2, Movement_InteractFACEPLAYER
	waitmovement 0
	call QUEST_VARROCK_GYM_1
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_DOWN
	waitmovement 0
	release
	end

TRIGGER_VARROCK_GYM_ADVISOR_8:
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACERIGHT
	applymovement 2, Movement_InteractFACEPLAYER
	waitmovement 0
	call QUEST_VARROCK_GYM_2
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_DOWN
	waitmovement 0
	release
	end

TRIGGER_VARROCK_GYM_ADVISOR_15:
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACERIGHT
	applymovement 2, Movement_InteractFACEPLAYER
	waitmovement 0
	call QUEST_VARROCK_GYM_3
	release
	end

TRIGGER_VARROCK_GYM_ADVISOR_17:
	release
	end


VARROCK_GYM_ADVISOR::
	goto_if_unset FLAG_BADGE03_GET, VARROCK_GYM_ADVISOR_2
VARROCK_GYM_ADVISOR_1:
	lock
	faceplayer
	call QUEST_VARROCK_GYM_5
	release
	end

VARROCK_GYM_ADVISOR_2:
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 0
	goto_if_eq VARROCK_GYM_ADVISOR_5
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 5
	goto_if_eq VARROCK_GYM_ADVISOR_8
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_ADVISOR_8
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 15
	goto_if_eq VARROCK_GYM_ADVISOR_8
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 20
	goto_if_eq VARROCK_GYM_ADVISOR_15
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 25
	goto_if_eq VARROCK_GYM_ADVISOR_18
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 26
	goto_if_eq VARROCK_GYM_ADVISOR_20
	goto VARROCK_GYM_ADVISOR_1

VARROCK_GYM_ADVISOR_5:
	lock
	faceplayer
	call QUEST_VARROCK_GYM_1
	release
	end

VARROCK_GYM_ADVISOR_8:
	lock
	faceplayer
	call QUEST_VARROCK_GYM_2
	release
	end

VARROCK_GYM_ADVISOR_15:
	lock
	faceplayer
	call QUEST_VARROCK_GYM_3
	release
	end

VARROCK_GYM_ADVISOR_18:
	lock
	faceplayer
	call QUEST_VARROCK_GYM_4
	release
	end

VARROCK_GYM_ADVISOR_20:
	lock
	faceplayer
	call QUEST_VARROCK_GYM_5
	release
	end


QUEST_VARROCK_GYM_1::
	namebox QUEST_VARROCK_GYM_1_Text_0
	msgbox QUEST_VARROCK_GYM_1_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq QUEST_VARROCK_GYM_1_2
	msgbox QUEST_VARROCK_GYM_1_Text_3
	closemessage
	hidenamebox
	setvar VAR_POKESCAPE_VARROCK_GYM_QUEST, 5
	return

QUEST_VARROCK_GYM_1_2:
	msgbox QUEST_VARROCK_GYM_1_Text_2
	closemessage
	hidenamebox
	return


QUEST_VARROCK_GYM_2::
	namebox QUEST_VARROCK_GYM_1_Text_0
	msgbox QUEST_VARROCK_GYM_2_Text_0
	closemessage
	hidenamebox
	return


QUEST_VARROCK_GYM_3::
	namebox QUEST_VARROCK_GYM_1_Text_0
	msgbox QUEST_VARROCK_GYM_3_Text_0
	closemessage
	hidenamebox
	setvar VAR_POKESCAPE_VARROCK_GYM_QUEST, 25
	return


QUEST_VARROCK_GYM_4::
	namebox QUEST_VARROCK_GYM_1_Text_0
	msgbox QUEST_VARROCK_GYM_4_Text_0
	closemessage
	hidenamebox
	return


QUEST_VARROCK_GYM_5::
	namebox QUEST_VARROCK_GYM_1_Text_0
	msgbox QUEST_VARROCK_GYM_5_Text_0
	closemessage
	hidenamebox
	return


VARROCK_GYM_RELDO::
	lock
	faceplayer
	namebox VARROCK_GYM_RELDO_Text_0
	msgbox VARROCK_GYM_RELDO_Text_1
	goto_if_unset FLAG_BADGE03_GET, VARROCK_GYM_RELDO_2
	msgbox VARROCK_GYM_RELDO_Text_9
VARROCK_GYM_RELDO_1:
	closemessage
	hidenamebox
	release
	end

VARROCK_GYM_RELDO_2:
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 5
	goto_if_eq VARROCK_GYM_RELDO_6
VARROCK_GYM_RELDO_5:
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_RELDO_9
VARROCK_GYM_RELDO_8:
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 20
	goto_if_eq VARROCK_GYM_RELDO_12
VARROCK_GYM_RELDO_11:
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 15
	goto_if_eq VARROCK_GYM_RELDO_15
VARROCK_GYM_RELDO_14:
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 26
	goto_if_eq VARROCK_GYM_RELDO_17
	goto VARROCK_GYM_RELDO_1

VARROCK_GYM_RELDO_6:
	msgbox VARROCK_GYM_RELDO_Text_2
	setvar VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	call ClearGymTrainers_VARROCK
	goto VARROCK_GYM_RELDO_5

VARROCK_GYM_RELDO_9:
	msgbox VARROCK_GYM_RELDO_Text_3
	goto VARROCK_GYM_RELDO_8

VARROCK_GYM_RELDO_12:
	msgbox VARROCK_GYM_RELDO_Text_4
	goto VARROCK_GYM_RELDO_11

VARROCK_GYM_RELDO_15:
	msgbox VARROCK_GYM_RELDO_Text_5
	hidenamebox
	msgbox VARROCK_GYM_RELDO_Text_6
	namebox VARROCK_GYM_RELDO_Text_0
	msgbox VARROCK_GYM_RELDO_Text_7
	setvar VAR_POKESCAPE_VARROCK_GYM_QUEST, 20
	goto VARROCK_GYM_RELDO_14

VARROCK_GYM_RELDO_17:
	msgbox VARROCK_GYM_RELDO_Text_8
	goto VARROCK_GYM_RELDO_1


VARROCK_GYM_GENERIC_BOOK::
	random 5
	switch VAR_RESULT
	case 0, VARROCK_GYM_GENERIC_BOOK_3
	case 1, VARROCK_GYM_GENERIC_BOOK_4
	case 2, VARROCK_GYM_GENERIC_BOOK_5
	case 3, VARROCK_GYM_GENERIC_BOOK_6
	case 4, VARROCK_GYM_GENERIC_BOOK_7
VARROCK_GYM_GENERIC_BOOK_1:
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_GENERIC_BOOK_9
VARROCK_GYM_GENERIC_BOOK_8:
	closemessage
	release
	end

VARROCK_GYM_GENERIC_BOOK_3:
	msgbox VARROCK_GYM_GENERIC_BOOK_Text_0
	goto VARROCK_GYM_GENERIC_BOOK_1

VARROCK_GYM_GENERIC_BOOK_4:
	msgbox VARROCK_GYM_GENERIC_BOOK_Text_1
	goto VARROCK_GYM_GENERIC_BOOK_1

VARROCK_GYM_GENERIC_BOOK_5:
	msgbox VARROCK_GYM_GENERIC_BOOK_Text_2
	goto VARROCK_GYM_GENERIC_BOOK_1

VARROCK_GYM_GENERIC_BOOK_6:
	msgbox VARROCK_GYM_GENERIC_BOOK_Text_3
	goto VARROCK_GYM_GENERIC_BOOK_1

VARROCK_GYM_GENERIC_BOOK_7:
	msgbox VARROCK_GYM_GENERIC_BOOK_Text_4
	goto VARROCK_GYM_GENERIC_BOOK_1

VARROCK_GYM_GENERIC_BOOK_9:
	msgbox VARROCK_GYM_GENERIC_BOOK_Text_5
	goto VARROCK_GYM_GENERIC_BOOK_8


VARROCK_GYM_BOOK_1::
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_BOOK_1_2
VARROCK_GYM_BOOK_1_1:
	msgbox VARROCK_GYM_BOOK_1_Text_2
	closemessage
	release
	end

VARROCK_GYM_BOOK_1_2:
	goto_if_unset FLAG_VARROCKGYM_BOOK_1, VARROCK_GYM_BOOK_1_4
	goto VARROCK_GYM_BOOK_1_1

VARROCK_GYM_BOOK_1_4:
	msgbox VARROCK_GYM_BOOK_1_Text_0
	msgbox VARROCK_GYM_BOOK_1_Text_1
	closemessage
	setflag FLAG_VARROCKGYM_BOOK_1
	call VARROCK_GYM_BOOK_CHECK
	goto VARROCK_GYM_BOOK_1_1


VARROCK_GYM_BOOK_2::
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_BOOK_2_2
VARROCK_GYM_BOOK_2_1:
	msgbox VARROCK_GYM_BOOK_2_Text_2
	closemessage
	release
	end

VARROCK_GYM_BOOK_2_2:
	goto_if_unset FLAG_VARROCKGYM_BOOK_2, VARROCK_GYM_BOOK_2_4
	goto VARROCK_GYM_BOOK_2_1

VARROCK_GYM_BOOK_2_4:
	msgbox VARROCK_GYM_BOOK_2_Text_0
	msgbox VARROCK_GYM_BOOK_2_Text_1
	closemessage
	setflag FLAG_VARROCKGYM_BOOK_2
	call VARROCK_GYM_BOOK_CHECK
	goto VARROCK_GYM_BOOK_2_1


VARROCK_GYM_BOOK_3::
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_BOOK_3_2
VARROCK_GYM_BOOK_3_1:
	msgbox VARROCK_GYM_BOOK_1_Text_2
	closemessage
	release
	end

VARROCK_GYM_BOOK_3_2:
	goto_if_unset FLAG_VARROCKGYM_BOOK_3, VARROCK_GYM_BOOK_3_4
	goto VARROCK_GYM_BOOK_3_1

VARROCK_GYM_BOOK_3_4:
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEDOWN
	applymovement 9, MOVEMENT_WALK_UP
	waitmovement 0
	namebox VARROCK_GYM_BOOK_3_Text_0
	msgbox VARROCK_GYM_BOOK_3_Text_1
	hidenamebox
	trainerbattle_no_intro TRAINER_VARROCK_GYM_4, VARROCK_GYM_BOOK_3_Text_2
	namebox VARROCK_GYM_BOOK_3_Text_0
	msgbox VARROCK_GYM_BOOK_3_Text_3
	hidenamebox
	closemessage
	applymovement 9, MOVEMENT_WALK_DOWN
	waitmovement 0
	applymovement 9, Movement_InteractFACERIGHT
	waitmovement 0
	delay 16
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEUP
	waitmovement 0
	msgbox VARROCK_GYM_BOOK_3_Text_4
	msgbox VARROCK_GYM_BOOK_1_Text_1
	closemessage
	setflag FLAG_VARROCKGYM_BOOK_3
	call VARROCK_GYM_BOOK_CHECK
	goto VARROCK_GYM_BOOK_3_1


VARROCK_GYM_BOOK_4::
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_BOOK_4_2
VARROCK_GYM_BOOK_4_1:
	msgbox VARROCK_GYM_BOOK_1_Text_2
	closemessage
	release
	end

VARROCK_GYM_BOOK_4_2:
	goto_if_unset FLAG_VARROCKGYM_BOOK_4, VARROCK_GYM_BOOK_4_4
	goto VARROCK_GYM_BOOK_4_1

VARROCK_GYM_BOOK_4_4:
	msgbox VARROCK_GYM_BOOK_4_Text_0
	msgbox VARROCK_GYM_BOOK_1_Text_1
	closemessage
	setflag FLAG_VARROCKGYM_BOOK_4
	call VARROCK_GYM_BOOK_CHECK
	goto VARROCK_GYM_BOOK_4_1


VARROCK_GYM_BOOK_CHECK::
	goto_if_unset FLAG_VARROCKGYM_BOOK_1, VARROCK_GYM_BOOK_CHECK_2
	goto_if_unset FLAG_VARROCKGYM_BOOK_2, VARROCK_GYM_BOOK_CHECK_5
	goto_if_unset FLAG_VARROCKGYM_BOOK_3, VARROCK_GYM_BOOK_CHECK_8
	goto_if_unset FLAG_VARROCKGYM_BOOK_4, VARROCK_GYM_BOOK_CHECK_11
	msgbox VARROCK_GYM_BOOK_CHECK_Text_0
	closemessage
	setvar VAR_POKESCAPE_VARROCK_GYM_QUEST, 15
	release
	end

VARROCK_GYM_BOOK_CHECK_2:
	end

VARROCK_GYM_BOOK_CHECK_5:
	end

VARROCK_GYM_BOOK_CHECK_8:
	end

VARROCK_GYM_BOOK_CHECK_11:
	end


VARROCK_GYM_SIR_PRYSIN::
	lock
	faceplayer
	namebox VARROCK_GYM_SIR_PRYSIN_Text_0
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_SIR_PRYSIN_2
	msgbox VARROCK_GYM_SIR_PRYSIN_Text_3
VARROCK_GYM_SIR_PRYSIN_1:
	closemessage
	hidenamebox
	release
	end

VARROCK_GYM_SIR_PRYSIN_2:
	msgbox VARROCK_GYM_SIR_PRYSIN_Text_1
	hidenamebox
	msgbox VARROCK_GYM_SIR_PRYSIN_Text_2
	goto VARROCK_GYM_SIR_PRYSIN_1


VARROCK_GYM_RANGER::
	lock
	faceplayer
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_RANGER_2
	msgbox VARROCK_GYM_RANGER_Text_1
VARROCK_GYM_RANGER_1:
	closemessage
	hidenamebox
	release
	end

VARROCK_GYM_RANGER_2:
	msgbox VARROCK_GYM_RANGER_Text_0
	hidenamebox
	msgbox VARROCK_GYM_SIR_PRYSIN_Text_2
	goto VARROCK_GYM_RANGER_1


VARROCK_GYM_QUESTER::
	lock
	faceplayer
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_QUESTER_2
	msgbox VARROCK_GYM_QUESTER_Text_0
VARROCK_GYM_QUESTER_1:
	closemessage
	hidenamebox
	release
	end

VARROCK_GYM_QUESTER_2:
	msgbox VARROCK_GYM_QUESTER_Text_0
	goto VARROCK_GYM_QUESTER_1


VARROCK_GYM_GUARD_1::
	lock
	faceplayer
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_GUARD_1_2
	msgbox VARROCK_GYM_GUARD_1_Text_1
VARROCK_GYM_GUARD_1_1:
	closemessage
	hidenamebox
	release
	end

VARROCK_GYM_GUARD_1_2:
	msgbox VARROCK_GYM_GUARD_1_Text_0
	goto VARROCK_GYM_GUARD_1_1


VARROCK_GYM_GUARD_2::
	lock
	faceplayer
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_GUARD_2_2
	msgbox VARROCK_GYM_GUARD_1_Text_1
VARROCK_GYM_GUARD_2_1:
	closemessage
	hidenamebox
	release
	end

VARROCK_GYM_GUARD_2_2:
	msgbox VARROCK_GYM_GUARD_2_Text_0
	goto VARROCK_GYM_GUARD_2_1


VARROCK_GYM_GUARD_3::
	lock
	faceplayer
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_GUARD_3_2
	msgbox VARROCK_GYM_GUARD_1_Text_1
VARROCK_GYM_GUARD_3_1:
	closemessage
	hidenamebox
	release
	end

VARROCK_GYM_GUARD_3_2:
	msgbox VARROCK_GYM_GUARD_3_Text_0
	goto VARROCK_GYM_GUARD_3_1


VARROCK_GYM_GUARD_4::
	lock
	faceplayer
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_GUARD_4_2
	msgbox VARROCK_GYM_GUARD_1_Text_1
VARROCK_GYM_GUARD_4_1:
	closemessage
	hidenamebox
	release
	end

VARROCK_GYM_GUARD_4_2:
	msgbox VARROCK_GYM_GUARD_4_Text_0
	goto VARROCK_GYM_GUARD_4_1


VARROCK_GYM_GUARD_5::
	lock
	faceplayer
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_GUARD_5_2
	msgbox VARROCK_GYM_GUARD_1_Text_1
VARROCK_GYM_GUARD_5_1:
	closemessage
	hidenamebox
	release
	end

VARROCK_GYM_GUARD_5_2:
	msgbox VARROCK_GYM_GUARD_5_Text_0
	goto VARROCK_GYM_GUARD_5_1


VARROCK_GYM_PRAYER_1::
	lock
	faceplayer
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_PRAYER_1_2
	msgbox VARROCK_GYM_PRAYER_1_Text_0
VARROCK_GYM_PRAYER_1_1:
	closemessage
	hidenamebox
	release
	end

VARROCK_GYM_PRAYER_1_2:
	msgbox VARROCK_GYM_PRAYER_1_Text_0
	goto VARROCK_GYM_PRAYER_1_1


VARROCK_GYM_PRAYER_2::
	lock
	faceplayer
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_PRAYER_2_2
	msgbox VARROCK_GYM_PRAYER_2_Text_0
VARROCK_GYM_PRAYER_2_1:
	closemessage
	hidenamebox
	release
	end

VARROCK_GYM_PRAYER_2_2:
	msgbox VARROCK_GYM_PRAYER_2_Text_0
	goto VARROCK_GYM_PRAYER_2_1


VARROCK_GYM_PRAYER_3::
	lock
	faceplayer
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_PRAYER_3_2
	msgbox VARROCK_GYM_PRAYER_3_Text_1
VARROCK_GYM_PRAYER_3_1:
	closemessage
	hidenamebox
	release
	end

VARROCK_GYM_PRAYER_3_2:
	msgbox VARROCK_GYM_PRAYER_3_Text_0
	goto VARROCK_GYM_PRAYER_3_1


VARROCK_GYM_PRAYER_4::
	lock
	faceplayer
	namebox VARROCK_GYM_BOOK_3_Text_0
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_PRAYER_4_2
	msgbox VARROCK_GYM_PRAYER_4_Text_1
VARROCK_GYM_PRAYER_4_1:
	closemessage
	hidenamebox
	release
	end

VARROCK_GYM_PRAYER_4_2:
	msgbox VARROCK_GYM_PRAYER_4_Text_0
	goto VARROCK_GYM_PRAYER_4_1


VARROCK_GYM_DRUID::
	lock
	faceplayer
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_DRUID_2
	msgbox VARROCK_GYM_BOOK_3_Text_2
VARROCK_GYM_DRUID_1:
	closemessage
	hidenamebox
	release
	end

VARROCK_GYM_DRUID_2:
	msgbox VARROCK_GYM_DRUID_Text_0
	goto VARROCK_GYM_DRUID_1


VARROCK_GYM_GNOME::
	lock
	faceplayer
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_GNOME_2
	msgbox VARROCK_GYM_BOOK_3_Text_2
VARROCK_GYM_GNOME_1:
	closemessage
	hidenamebox
	release
	end

VARROCK_GYM_GNOME_2:
	msgbox VARROCK_GYM_GNOME_Text_0
	goto VARROCK_GYM_GNOME_1


VARROCK_GYM_GUARD_BLOCKING::
	lock
	faceplayer
	msgbox VARROCK_GYM_GUARD_BLOCKING_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_GYM_GUARD_6::
	lock
	faceplayer
	msgbox VARROCK_GYM_GUARD_6_Text_0
	closemessage
	hidenamebox
	release
	end


BATTLE_VARROCK_GYM_TRAINER_1::
	trainerbattle_single TRAINER_VARROCK_GYM_1, BATTLE_VARROCK_GYM_TRAINER_1_Text_0, BATTLE_VARROCK_GYM_TRAINER_1_Text_1
	switch VAR_POKESCAPE_VARROCK_GYM_QUEST
	case 0, BATTLE_VARROCK_GYM_TRAINER_1_2
	case 5, BATTLE_VARROCK_GYM_TRAINER_1_2
	case 10, BATTLE_VARROCK_GYM_TRAINER_1_3
	case 15, BATTLE_VARROCK_GYM_TRAINER_1_3
	case 20, BATTLE_VARROCK_GYM_TRAINER_1_3
	case 25, BATTLE_VARROCK_GYM_TRAINER_1_3
	case 26, BATTLE_VARROCK_GYM_TRAINER_1_3
	return

BATTLE_VARROCK_GYM_TRAINER_1_2:
	lock
	faceplayer
	namebox BATTLE_VARROCK_GYM_TRAINER_1_Text_2
	msgbox BATTLE_VARROCK_GYM_TRAINER_1_Text_3
	hidenamebox
	release
	end

BATTLE_VARROCK_GYM_TRAINER_1_3:
	lock
	faceplayer
	namebox BATTLE_VARROCK_GYM_TRAINER_1_Text_2
	msgbox BATTLE_VARROCK_GYM_TRAINER_1_Text_4
	hidenamebox
	release
	end


BATTLE_VARROCK_GYM_TRAINER_2::
	trainerbattle_single TRAINER_VARROCK_GYM_2, BATTLE_VARROCK_GYM_TRAINER_2_Text_0, BATTLE_VARROCK_GYM_TRAINER_2_Text_1
	switch VAR_POKESCAPE_VARROCK_GYM_QUEST
	case 0, BATTLE_VARROCK_GYM_TRAINER_2_2
	case 5, BATTLE_VARROCK_GYM_TRAINER_2_2
	case 10, BATTLE_VARROCK_GYM_TRAINER_2_3
	case 15, BATTLE_VARROCK_GYM_TRAINER_2_4
	case 20, BATTLE_VARROCK_GYM_TRAINER_2_4
	case 25, BATTLE_VARROCK_GYM_TRAINER_2_4
	case 26, BATTLE_VARROCK_GYM_TRAINER_2_4
	return

BATTLE_VARROCK_GYM_TRAINER_2_2:
	lock
	faceplayer
	namebox BATTLE_VARROCK_GYM_TRAINER_1_Text_2
	msgbox BATTLE_VARROCK_GYM_TRAINER_2_Text_2
	hidenamebox
	release
	end

BATTLE_VARROCK_GYM_TRAINER_2_3:
	lock
	faceplayer
	namebox BATTLE_VARROCK_GYM_TRAINER_1_Text_2
	msgbox BATTLE_VARROCK_GYM_TRAINER_2_Text_3
	hidenamebox
	release
	end

BATTLE_VARROCK_GYM_TRAINER_2_4:
	lock
	faceplayer
	namebox BATTLE_VARROCK_GYM_TRAINER_1_Text_2
	msgbox BATTLE_VARROCK_GYM_TRAINER_2_Text_4
	hidenamebox
	release
	end


BATTLE_VARROCK_GYM_TRAINER_3::
	trainerbattle_single TRAINER_VARROCK_GYM_3, BATTLE_VARROCK_GYM_TRAINER_3_Text_0, BATTLE_VARROCK_GYM_TRAINER_3_Text_1
	switch VAR_POKESCAPE_VARROCK_GYM_QUEST
	case 0, BATTLE_VARROCK_GYM_TRAINER_3_2
	case 5, BATTLE_VARROCK_GYM_TRAINER_3_2
	case 10, BATTLE_VARROCK_GYM_TRAINER_3_3
	case 15, BATTLE_VARROCK_GYM_TRAINER_3_4
	case 20, BATTLE_VARROCK_GYM_TRAINER_3_4
	case 25, BATTLE_VARROCK_GYM_TRAINER_3_4
	case 26, BATTLE_VARROCK_GYM_TRAINER_3_4
	return

BATTLE_VARROCK_GYM_TRAINER_3_2:
	lock
	faceplayer
	namebox BATTLE_VARROCK_GYM_TRAINER_1_Text_2
	msgbox BATTLE_VARROCK_GYM_TRAINER_3_Text_2
	hidenamebox
	release
	end

BATTLE_VARROCK_GYM_TRAINER_3_3:
	lock
	faceplayer
	namebox BATTLE_VARROCK_GYM_TRAINER_1_Text_2
	msgbox BATTLE_VARROCK_GYM_TRAINER_3_Text_3
	hidenamebox
	release
	end

BATTLE_VARROCK_GYM_TRAINER_3_4:
	lock
	faceplayer
	namebox BATTLE_VARROCK_GYM_TRAINER_1_Text_2
	msgbox BATTLE_VARROCK_GYM_TRAINER_3_Text_2
	hidenamebox
	release
	end


VARROCK_GYM_KINGROALD::
	lock
	faceplayer
	namebox VARROCK_GYM_KINGROALD_Text_0
	goto_if_unset FLAG_BADGE03_GET, VARROCK_GYM_KINGROALD_2
	goto_if_set FLAG_BADGE04_GET, VARROCK_GYM_KINGROALD_5
	msgbox VARROCK_GYM_KINGROALD_Text_8
VARROCK_GYM_KINGROALD_4:
	hidenamebox
	release
	end

VARROCK_GYM_KINGROALD_2:
	msgbox VARROCK_GYM_KINGROALD_Text_1
	hidenamebox
	trainerbattle_no_intro TRAINER_VARROCK_GYM_KINGROALD, VARROCK_GYM_KINGROALD_Text_2
	namebox VARROCK_GYM_KINGROALD_Text_0
	msgbox VARROCK_GYM_KINGROALD_Text_3
	hidenamebox
	playfanfare MUS_PS_QUEST_COMPLETE
	msgbox VARROCK_GYM_KINGROALD_Text_4
	waitfanfare
	waitmessage
	namebox VARROCK_GYM_KINGROALD_Text_0
	msgbox VARROCK_GYM_KINGROALD_Text_5
	hidenamebox
	giveitem ITEM_TM20, 1
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_ShowBagIsFull
	playbgm MUS_PS_VARROCK, 0
	savebgm MUS_PS_VARROCK
	namebox VARROCK_GYM_KINGROALD_Text_0
	msgbox VARROCK_GYM_KINGROALD_Text_6
	setvar VAR_POKESCAPE_VARROCK_GYM_QUEST, 26
	setflag FLAG_BADGE03_GET
	addvar VAR_GAMEMODE_LEVEL_SCALING, 1
	call SetGymTrainers_VARROCK
	hidenamebox
	release
	end

VARROCK_GYM_KINGROALD_5:
	msgbox VARROCK_GYM_KINGROALD_Text_7
	goto VARROCK_GYM_KINGROALD_4


SetGymTrainers_VARROCK::
	settrainerflag TRAINER_VARROCK_GYM_1
	settrainerflag TRAINER_VARROCK_GYM_2
	settrainerflag TRAINER_VARROCK_GYM_3
	settrainerflag TRAINER_VARROCK_GYM_4
	return


ClearGymTrainers_VARROCK::
	cleartrainerflag TRAINER_VARROCK_GYM_1
	cleartrainerflag TRAINER_VARROCK_GYM_2
	cleartrainerflag TRAINER_VARROCK_GYM_3
	cleartrainerflag TRAINER_VARROCK_GYM_4
	return


QUEST_VARROCK_GYM_1_Text_0:
	.string "Advisor$"

QUEST_VARROCK_GYM_1_Text_1:
	.string "Greetings, are you here for an MvM\n"
	.string "Championship challenge?$"

QUEST_VARROCK_GYM_1_Text_2:
	.string "Well I am very sorry but the King is\n"
	.string "quite busy today.\p"
	.string "You will have to see him another day.$"

QUEST_VARROCK_GYM_1_Text_3:
	.string "Excellent!\p"
	.string "Before you may challenge King Roald you\n"
	.string "must complete our Gym Challenge.\p"
	.string "You can start it by speaking to Reldo\n"
	.string "located within our Library.$"

QUEST_VARROCK_GYM_2_Text_0:
	.string "Good luck with your Gym Challenge!\p"
	.string "You can find Reldo in our Library.$"

QUEST_VARROCK_GYM_3_Text_0:
	.string "What's this?\p"
	.string "A note from Reldo you say?\p"
	.string "Hmm…{PAUSE 15}…{PAUSE 15} Ah yes.\p"
	.string "Congratulations are in order, you may\n"
	.string "now pass see the King.$"

QUEST_VARROCK_GYM_4_Text_0:
	.string "Good luck with your Gym Challenge!$"

QUEST_VARROCK_GYM_5_Text_0:
	.string "Amazing, I didn't think anyone could put\n"
	.string "a smile on his face!$"

VARROCK_GYM_RELDO_Text_0:
	.string "Reldo$"

VARROCK_GYM_RELDO_Text_1:
	.string "Welcome to the Library of Varrock.$"

VARROCK_GYM_RELDO_Text_2:
	.string "Oh are you perhaps here for your the\n"
	.string "Gym Challenge?\p"
	.string "Oh you are?\p"
	.string "Here are a list of books that are\n"
	.string "overdu-\p"
	.string "I mean, I need you to search all around\n"
	.string "the castle and find these 4 specific\l"
	.string "books.\p"
	.string "Once you have found them all return\n"
	.string "back here and your challenge will be\l"
	.string "complete.$"

VARROCK_GYM_RELDO_Text_3:
	.string "If you are having trouble finding the 4\n"
	.string "books then try asking people or\l"
	.string "searching the bookshelves around the\l"
	.string "castle.$"

VARROCK_GYM_RELDO_Text_4:
	.string "Good luck on your Gym Challenge.$"

VARROCK_GYM_RELDO_Text_5:
	.string "You found all of the books that were\n"
	.string "overdu-!\p"
	.string "Ahem, Congratulations on completing\n"
	.string "your Gym Challenge!\p"
	.string "Here show this to the Advisor as proof\n"
	.string "of your accomplishments.$"

VARROCK_GYM_RELDO_Text_6:
	.string "Reldo scribbles on a small piece of\n"
	.string "paper before handing it to you.$"

VARROCK_GYM_RELDO_Text_7:
	.string "Good luck challenger!$"

VARROCK_GYM_RELDO_Text_8:
	.string "Congratulations on winning the MvM\n"
	.string "battle against King Roald!.$"

VARROCK_GYM_RELDO_Text_9:
	.string "We have so many books about so many\n"
	.string "things.\p"
	.string "If you have a question about something\n"
	.string "don't be afraid to ask me.$"

VARROCK_GYM_GENERIC_BOOK_Text_0:
	.string "This book is filled with so many words\n"
	.string "that it gives you a headache.$"

VARROCK_GYM_GENERIC_BOOK_Text_1:
	.string "It is a picture book!\p"
	.string "This is your type of book!$"

VARROCK_GYM_GENERIC_BOOK_Text_2:
	.string "It is an extremely big and thick book,\n"
	.string "titled RSWiki.\p"
	.string "It seems like a lot of love and\n"
	.string "dedication went into this.$"

VARROCK_GYM_GENERIC_BOOK_Text_3:
	.string "This is book looks interesting to read.$"

VARROCK_GYM_GENERIC_BOOK_Text_4:
	.string "It is a magazine!\p"
	.string "It appears to be an image of a very\n"
	.string "beautiful strong looking woman\l"
	.string "crushing a Turoth between her thighs.\p"
	.string "The text reads…\p"
	.string "The truth behind Nieve the Slayer\n"
	.string "Master.$"

VARROCK_GYM_GENERIC_BOOK_Text_5:
	.string "But sadly this book isn't on the list of\n"
	.string "books you are looking for.$"

VARROCK_GYM_BOOK_1_Text_0:
	.string "The title reads…\p"
	.string "How to train your Frogeel.$"

VARROCK_GYM_BOOK_1_Text_1:
	.string "This is one of the books you are looking\n"
	.string "for!\p"
	.string "You put the book in your bag.$"

VARROCK_GYM_BOOK_1_Text_2:
	.string "The bookshelf is empty.$"

VARROCK_GYM_BOOK_2_Text_0:
	.string "You search through the pile of\n"
	.string "books…{PAUSE 15}…{PAUSE 15}…$"

VARROCK_GYM_BOOK_2_Text_1:
	.string "After rummaging through the pile of\n"
	.string "sticky books you finally find one that\l"
	.string "are looking for!\p"
	.string "The title reads…{PAUSE 15}…{PAUSE 15} One Small favour.\p"
	.string "How fitting.\p"
	.string "You put the book in your bag.$"

VARROCK_GYM_BOOK_2_Text_2:
	.string "It is a pile of messy, sticky books.$"

VARROCK_GYM_BOOK_3_Text_0:
	.string "Priest$"

VARROCK_GYM_BOOK_3_Text_1:
	.string "How rude of you!\p"
	.string "We are in the middle of Prayer and you\n"
	.string "think now is a good time to make a noise\l"
	.string "rummaging through the bookshelf?!\p"
	.string "I'll teach you to interupt our time of\n"
	.string "worship!$"

VARROCK_GYM_BOOK_3_Text_2:
	.string "…$"

VARROCK_GYM_BOOK_3_Text_3:
	.string "Just hurry up and find the book you are\n"
	.string "looking for then get out.$"

VARROCK_GYM_BOOK_3_Text_4:
	.string "You search the bookcase…{PAUSE 15}…\p"
	.string "You find a book!\n"
	.string "The title reads…\p"
	.string "Mourning's End Part VII.\p"
	.string "A sudden chill rushes over you as you\n"
	.string "realise the volume number of the book.$"

VARROCK_GYM_BOOK_4_Text_0:
	.string "You find a book!\p"
	.string "The title reads…\p"
	.string "MvM for dummies.$"

VARROCK_GYM_BOOK_CHECK_Text_0:
	.string "That is the last book.\p"
	.string "You should return to Reldo.$"

VARROCK_GYM_SIR_PRYSIN_Text_0:
	.string "Sir Prysin$"

VARROCK_GYM_SIR_PRYSIN_Text_1:
	.string "Hmm…?\p"
	.string "You are curious about what book I am\n"
	.string "reading?\p"
	.string "It is called Shadow Of The Storm.$"

VARROCK_GYM_SIR_PRYSIN_Text_2:
	.string "Sadly this book isn't on the list of\n"
	.string "books you are looking for.$"

VARROCK_GYM_SIR_PRYSIN_Text_3:
	.string "My great-grandfather once slayed the\n"
	.string "Demon known as Delrith.\p"
	.string "Now I get to live the good life here in\n"
	.string "the castle.$"

VARROCK_GYM_RANGER_Text_0:
	.string "What am I reading you ask?\p"
	.string "Don't judge but I am reading a murder\n"
	.string "mystery, this one is called Misthalin\l"
	.string "Mystery.\p"
	.string "I just really like these sort of stories.$"

VARROCK_GYM_RANGER_Text_1:
	.string "After reading about what happened with\n"
	.string "Lord Sinclair in Kandarin, I've been\l"
	.string "intrigued by these murder mystery\l"
	.string "books.$"

VARROCK_GYM_QUESTER_Text_0:
	.string "Buzz off!\p"
	.string "I've got a quest to research.$"

VARROCK_GYM_GUARD_1_Text_0:
	.string "Oh, you are trying to return the\n"
	.string "overdue books to the libary?\p"
	.string "I think there is one in the pile of books\n"
	.string "in our sleeping quarters.$"

VARROCK_GYM_GUARD_1_Text_1:
	.string "Welcome to Varrock Castle.$"

VARROCK_GYM_GUARD_2_Text_0:
	.string "I swear Reldo is such a bookworm.$"

VARROCK_GYM_GUARD_3_Text_0:
	.string "Overdue Books?\p"
	.string "Well don't ask me, I don't even read.$"

VARROCK_GYM_GUARD_4_Text_0:
	.string "Eww you read books?\p"
	.string "Yuck.\p"
	.string "I just look at all the pretty pictures.$"

VARROCK_GYM_GUARD_5_Text_0:
	.string "I hope Rex didn't eat one of those\n"
	.string "books you are looking for.\p"
	.string "He once ate my application to become a\n"
	.string "Knight of Falador so I had to settle\l"
	.string "with a becoming a Guard of Varrock\l"
	.string "instead.$"

VARROCK_GYM_PRAYER_1_Text_0:
	.string "……\p"
	.string "Shh!$"

VARROCK_GYM_PRAYER_2_Text_0:
	.string "Please don't bother us while we are\n"
	.string "Praying.$"

VARROCK_GYM_PRAYER_3_Text_0:
	.string "……{PAUSE 15}……\p"
	.string "Huh what?!\p"
	.string "I wasn't sleeping I swear!\p"
	.string "Oh a book?\p"
	.string "I think there is one in the bookshelf in\n"
	.string "the corner.$"

VARROCK_GYM_PRAYER_3_Text_1:
	.string "…{PAUSE 15} Zzz… {PAUSE 15} Zzz…\p"
	.string "He is fast asleep.$"

VARROCK_GYM_PRAYER_4_Text_0:
	.string "You are being very annoying.\p"
	.string "Can you please leave, we are in the\n"
	.string "middle of Prayer.$"

VARROCK_GYM_PRAYER_4_Text_1:
	.string "Can you please leave, we are in the\n"
	.string "middle of Prayer.$"

VARROCK_GYM_DRUID_Text_0:
	.string "An overdue book?\p"
	.string "I believe there is one in my room\n"
	.string "downstairs.$"

VARROCK_GYM_GNOME_Text_0:
	.string "You are looking for Books?\p"
	.string "Have you tried looking in the\n"
	.string "bookshelves?$"

VARROCK_GYM_GUARD_BLOCKING_Text_0:
	.string "Sorry but beyond here is off limits to\n"
	.string "the public.$"

VARROCK_GYM_GUARD_6_Text_0:
	.string "This castle is no where near as\n"
	.string "confusing as the Falador Castle, I am\l"
	.string "grateful for that.$"

BATTLE_VARROCK_GYM_TRAINER_1_Text_0:
	.string "Hey you!\n"
	.string "Do not trespass!$"

BATTLE_VARROCK_GYM_TRAINER_1_Text_1:
	.string "Consider that a warning!$"

BATTLE_VARROCK_GYM_TRAINER_1_Text_2:
	.string "Guard$"

BATTLE_VARROCK_GYM_TRAINER_1_Text_3:
	.string "Welcome to Varrock Castle!$"

BATTLE_VARROCK_GYM_TRAINER_1_Text_4:
	.string "Do not trespass around the Castle\n"
	.string "unsupervised.$"

BATTLE_VARROCK_GYM_TRAINER_2_Text_0:
	.string "You look shady.\p"
	.string "Get out of the sleeping quaters!$"

BATTLE_VARROCK_GYM_TRAINER_2_Text_1:
	.string "You may pass shady person.$"

BATTLE_VARROCK_GYM_TRAINER_2_Text_2:
	.string "Hello shady looking person.$"

BATTLE_VARROCK_GYM_TRAINER_2_Text_3:
	.string "Oh you were looking for a book?\p"
	.string "Well good luck there are lots of books\n"
	.string "in this castle.$"

BATTLE_VARROCK_GYM_TRAINER_2_Text_4:
	.string "Hello again shady looking person.$"

BATTLE_VARROCK_GYM_TRAINER_3_Text_0:
	.string "The king said he did not want visitors\n"
	.string "today.$"

BATTLE_VARROCK_GYM_TRAINER_3_Text_1:
	.string "You do not care what the king wants at\n"
	.string "all, do you?$"

BATTLE_VARROCK_GYM_TRAINER_3_Text_2:
	.string "The king said he did not want visitors\n"
	.string "today.\p"
	.string "You do not care what the king wants at\n"
	.string "all, do you?$"

BATTLE_VARROCK_GYM_TRAINER_3_Text_3:
	.string "You are an MvM challenger?\p"
	.string "Well tough, the king said he did not\n"
	.string "want visitors today.$"

VARROCK_GYM_KINGROALD_Text_0:
	.string "King Roald$"

VARROCK_GYM_KINGROALD_Text_1:
	.string "Oh what is it now?\p"
	.string "Who are you?\n"
	.string "What do you want?\p"
	.string "Can you not see I am busy?\p"
	.string "…{PAUSE 15}…{PAUSE 15}…{PAUSE 15}\p"
	.string "Oh right, so you are one of those MvM\n"
	.string "Challengers.\p"
	.string "I don't know why I even have this role.\p"
	.string "Very well, lets get this out of the way,\n"
	.string "show me what you can do.$"

VARROCK_GYM_KINGROALD_Text_2:
	.string "That was a very enjoyable battle!$"

VARROCK_GYM_KINGROALD_Text_3:
	.string "I must say, I quite enjoyed that battle\n"
	.string "we just had.\p"
	.string "I want to say it's the most enjoyment\n"
	.string "I've had in years.\p"
	.string "Here I believe you have earnt this.$"

VARROCK_GYM_KINGROALD_Text_4:
	.string "{PLAYER} received the Varrock BADGE\n"
	.string "from King Roald.$"

VARROCK_GYM_KINGROALD_Text_5:
	.string "Also have this Scroll.$"

VARROCK_GYM_KINGROALD_Text_6:
	.string "That move is called Draining Kiss, my\n"
	.string "Queen uses it on me all the time and it\l"
	.string "is always super effective.\p"
	.string "Hopefully it will be of more use to you\n"
	.string "than on me.$"

VARROCK_GYM_KINGROALD_Text_7:
	.string "You seem like you would be strong\n"
	.string "enough to take on the Barbarians,\l"
	.string "maybe you should head there next for\l"
	.string "your MvM gym challenge.$"

VARROCK_GYM_KINGROALD_Text_8:
	.string "You should go pester the Prince in Al\n"
	.string "Kharid for your next MvM gym challenge.$"
