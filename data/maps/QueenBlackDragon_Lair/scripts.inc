QueenBlackDragon_Lair_MapScripts::
	.byte 0


TELEPORT_ENTER_QBD_LAIR::
	msgbox TELEPORT_ENTER_QBD_LAIR_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne TELEPORT_ENTER_QBD_LAIR_2
	closemessage
	release
	end

TELEPORT_ENTER_QBD_LAIR_2:
	msgbox TELEPORT_ENTER_QBD_LAIR_Text_1
	applymovement OBJ_EVENT_ID_PLAYER, movement_TELEPORT_OUT
	warpteleport MAP_QUEENBLACKDRAGON_LAIR, 0, 0, 0
	closemessage
	release
	end


TELEPORT_EXIT_QBD_LAIR::
	msgbox TELEPORT_ENTER_QBD_LAIR_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne TELEPORT_EXIT_QBD_LAIR_2
	closemessage
	release
	end

TELEPORT_EXIT_QBD_LAIR_2:
	msgbox TELEPORT_EXIT_QBD_LAIR_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, movement_TELEPORT_OUT
	warpteleport MAP_RIMMINGTON_MINES_B3F, 2, 0, 0
	closemessage
	release
	end


QBD_Battle_QBD::
	lock
	faceplayer
	applymovement 1, QUEENBLACK_DRAGON_MOVEMENT
	waitmovement 0
	waitse
	delay 20
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
	playmoncry SPECIES_LUGIA, 2
	waitmoncry
	delay 20
	setvar VAR_0x8004, SPECIES_DRAGON_QUEEN_BLACK_FORM
	setvar VAR_0x8005, 70  @ level
	setvar VAR_0x8006, ITEM_NONE
	special CreateEventLegalEnemyMon
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq NavelRock_Bottom_EventScript_DefeatedLugia
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq NavelRock_Bottom_EventScript_RanFromLugia
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq NavelRock_Bottom_EventScript_RanFromLugia
	@setflag FLAG_CAUGHT_LUGIA
	release
	end

QUEENBLACK_DRAGON_MOVEMENT:
	init_affine_anim
	walk_down_start_affine
	delay_16
	delay_16
	walk_down_affine
	delay_16
	delay_16
	walk_down_affine
	step_end

QBDLAIR_1::
	switch VAR_POKESCAPE_STARTER_HOUSE_STATE
	case 1, QBDLAIR_1_2
	case 2, QBDLAIR_1_3
	return

QBDLAIR_1_2:
	lock
	msgbox QBDLAIR_1_Text_0
	setmetatile 9, 10, 656, 1
	setmetatile 5, 13, 680, 0
	setmetatile 6, 13, 681, 0
	setmetatile 7, 13, 682, 0
	setmetatile 8, 13, 683, 0
	setmetatile 9, 13, 684, 0
	setmetatile 5, 14, 688, 0
	setmetatile 6, 14, 689, 0
	setmetatile 7, 14, 690, 0
	setmetatile 8, 14, 691, 1
	setmetatile 5, 15, 696, 0
	setmetatile 6, 15, 697, 1
	special DrawWholeMapView
	setvar VAR_POKESCAPE_STARTER_HOUSE_STATE, 2
	release
	end

QBDLAIR_1_3:
	lock
	msgbox QBDLAIR_1_Text_1
	release
	end


QBDLAIR_2::
	setmetatile 4, 15, 672, 1
	setmetatile 5, 15, 673, 0
	setmetatile 9, 13, 704, 0
	setmetatile 10, 13, 705, 0
	setmetatile 11, 13, 706, 0
	setmetatile 12, 13, 707, 0
	setmetatile 13, 13, 708, 0
	setmetatile 10, 14, 713, 1
	setmetatile 11, 14, 714, 0
	setmetatile 12, 14, 715, 0
	setmetatile 13, 14, 716, 0
	setmetatile 12, 15, 723, 1
	setmetatile 13, 15, 724, 0
	special DrawWholeMapView
	end


QBDLAIR_3::
	setmetatile 13, 15, 664, 0
	setmetatile 14, 15, 665, 1
	setmetatile 7, 13, 746, 0
	setmetatile 8, 13, 747, 0
	setmetatile 9, 13, 748, 0
	setmetatile 10, 13, 755, 0
	setmetatile 11, 13, 756, 0
	setmetatile 8, 14, 658, 0
	setmetatile 9, 14, 659, 0
	setmetatile 10, 14, 660, 0
	setmetatile 8, 15, 666, 1
	setmetatile 9, 15, 667, 0
	setmetatile 10, 15, 668, 1
	setmetatile 9, 16, 675, 1
	special DrawWholeMapView
	end


QBDLAIR_4::
	setmetatile 9, 16, 657, 1
	special DrawWholeMapView
	end


ITEM_RimmingtonMines_1::
	finditem ITEM_EARTH_RUNE
	end


ITEM_RimmingtonMines_2::
	finditem ITEM_EARTH_RUNE
	end


ITEM_RimmingtonMines_3::
	finditem ITEM_TM33_DRAGON_BREATH
	end


BATTLE_RimmingtonMines_Miner::
	trainerbattle_single TRAINER_RimmingtonMines_Miner, BATTLE_RimmingtonMines_Miner_Text_0, BATTLE_RimmingtonMines_Miner_Text_1
	msgbox BATTLE_RimmingtonMines_Miner_Text_2
	hidenamebox
	release
	end


BATTLE_RimmingtonMines_Ironman::
	trainerbattle_single TRAINER_RimmingtonMines_Ironman, BATTLE_RimmingtonMines_Ironman_Text_0, BATTLE_RimmingtonMines_Ironman_Text_1
	msgbox BATTLE_RimmingtonMines_Ironman_Text_2
	hidenamebox
	release
	end


BATTLE_RimmingtonMines_Slayer::
	trainerbattle_single TRAINER_RimmingtonMines_Slayer, BATTLE_RimmingtonMines_Slayer_Text_0, BATTLE_RimmingtonMines_Slayer_Text_1
	msgbox BATTLE_RimmingtonMines_Slayer_Text_2
	hidenamebox
	release
	end


NPC_RimmingtonMines_WhiteKnight::
	lock
	faceplayer
	namebox NPC_RimmingtonMines_WhiteKnight_Text_0
	msgbox NPC_RimmingtonMines_WhiteKnight_Text_1
	hidenamebox
	release
	end


BATTLE_RimmingtonMines_DRAGONBOT_1::
	trainerbattle_single TRAINER_RimmingtonMines_DRAGONBOT_1, BATTLE_RimmingtonMines_DRAGONBOT_1_Text_0, BATTLE_RimmingtonMines_DRAGONBOT_1_Text_1
	namebox BATTLE_RimmingtonMines_DRAGONBOT_1_Text_2
	msgbox BATTLE_RimmingtonMines_DRAGONBOT_1_Text_1
	hidenamebox
	release
	end


BATTLE_RimmingtonMines_DRAGONBOT_2::
	trainerbattle_single TRAINER_RimmingtonMines_DRAGONBOT_2, BATTLE_RimmingtonMines_DRAGONBOT_2_Text_0, BATTLE_RimmingtonMines_DRAGONBOT_2_Text_1
	namebox BATTLE_RimmingtonMines_DRAGONBOT_1_Text_2
	msgbox BATTLE_RimmingtonMines_DRAGONBOT_2_Text_2
	hidenamebox
	release
	end


BATTLE_RimmingtonMines_Slayer_1::
	trainerbattle_single TRAINER_RimmingtonMines_Slayer_1, BATTLE_RimmingtonMines_Slayer_1_Text_0, BATTLE_RimmingtonMines_Slayer_1_Text_1
	msgbox BATTLE_RimmingtonMines_Slayer_1_Text_2
	hidenamebox
	release
	end


TELEPORT_ENTER_QBD_LAIR_Text_0:
	.string "Touch the strange device?$"

TELEPORT_ENTER_QBD_LAIR_Text_1:
	.string "You are suddenly teleported deeper\n"
	.string "into the depths.$"

TELEPORT_EXIT_QBD_LAIR_Text_0:
	.string "You are suddenly teleported out of the\n"
	.string "depths.$"

QBDLAIR_1_Text_0:
	.string "You activate the pillar!$"

QBDLAIR_1_Text_1:
	.string "The pillar is already activated.$"

BATTLE_RimmingtonMines_Miner_Text_0:
	.string "Woah!\p"
	.string "You startled me!$"

BATTLE_RimmingtonMines_Miner_Text_1:
	.string "I wasn't ready…$"

BATTLE_RimmingtonMines_Miner_Text_2:
	.string "Do you hear that faint singing in the\n"
	.string "distance?\p"
	.string "These caves creep me out.$"

BATTLE_RimmingtonMines_Ironman_Text_0:
	.string "I've come to do some extra training but\n"
	.string "man these bugs are annoying!$"

BATTLE_RimmingtonMines_Ironman_Text_1:
	.string "At least I am not a Hardcore Ironman…$"

BATTLE_RimmingtonMines_Ironman_Text_2:
	.string "There a worms everywhere, yuck!\p"
	.string "At least I can get some decent\n"
	.string "experience from them.$"

BATTLE_RimmingtonMines_Slayer_Text_0:
	.string "Oooh, I just got assigned a new Slayer\n"
	.string "task!\p"
	.string "YOU.$"

BATTLE_RimmingtonMines_Slayer_Text_1:
	.string "Mercy!$"

BATTLE_RimmingtonMines_Slayer_Text_2:
	.string "Looks like my next task is to go to the\n"
	.string "Bank…$"

NPC_RimmingtonMines_WhiteKnight_Text_0:
	.string "Sir Plyan$"

NPC_RimmingtonMines_WhiteKnight_Text_1:
	.string "Careful, it is dangerous deeper in.\p"
	.string "Our party was attacked by these\n"
	.string "massive Grotworm things.\p"
	.string "I am on pack up duty, the rest of the\n"
	.string "party has retreated outside.$"

BATTLE_RimmingtonMines_DRAGONBOT_1_Text_0:
	.string "TARGET ACQUIRED!$"

BATTLE_RimmingtonMines_DRAGONBOT_1_Text_1:
	.string "ERROR DETECTED!$"

BATTLE_RimmingtonMines_DRAGONBOT_1_Text_2:
	.string "Bot$"

BATTLE_RimmingtonMines_DRAGONBOT_2_Text_0:
	.string "LOCATION UNKNOWN.\n"
	.string "RANDOM SCRIPT ACTIVATE.$"

BATTLE_RimmingtonMines_DRAGONBOT_2_Text_1:
	.string "TELEPORT INITIATE…$"

BATTLE_RimmingtonMines_DRAGONBOT_2_Text_2:
	.string "TELEPORTATION FAILED.$"

BATTLE_RimmingtonMines_Slayer_1_Text_0:
	.string "Die Bot!$"

BATTLE_RimmingtonMines_Slayer_1_Text_1:
	.string "I cannot believe I just lost to a bot…$"

BATTLE_RimmingtonMines_Slayer_1_Text_2:
	.string "Oh you are not a bot?\p"
	.string "I've been trying to get rid of these\n"
	.string "bots for the past few days, looks like\l"
	.string "they might be broken now though.$"
