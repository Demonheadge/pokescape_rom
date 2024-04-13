Melzars_Maze_3F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Melzars_Maze_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Melzars_Maze_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 0
	call MELZARS_3F_STATE
	return


MELZARS_3F_STATE::
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 105
	goto_if_eq MELZARS_3F_STATE_2
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 106
	goto_if_eq MELZARS_3F_STATE_2
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 107
	goto_if_eq MELZARS_3F_STATE_2
	removeobject 5
	setflag FLAG_TEMP_1D
MELZARS_3F_STATE_1:
	return

MELZARS_3F_STATE_2:
	addobject 5
	clearflag FLAG_TEMP_1D
	goto MELZARS_3F_STATE_1


BATTLE_MELZAR_3F_TRAINER_1::
	trainerbattle_single TRAINER_MELZARS_3F_TRAINER_1, BATTLE_MELZAR_3F_TRAINER_1_Text_0, BATTLE_MELZAR_3F_TRAINER_1_Text_1
	namebox BATTLE_MELZAR_3F_TRAINER_1_Text_2
	msgbox BATTLE_MELZAR_3F_TRAINER_1_Text_3
	hidenamebox
	release
	end


BATTLE_MELZAR_3F_TRAINER_2::
	trainerbattle_single TRAINER_MELZARS_3F_TRAINER_2, BATTLE_MELZAR_3F_TRAINER_2_Text_0, BATTLE_MELZAR_3F_TRAINER_2_Text_1
	msgbox BATTLE_MELZAR_3F_TRAINER_2_Text_2
	hidenamebox
	release
	end


BATTLE_MELZAR_3F_TRAINER_3::
	trainerbattle_single TRAINER_MELZARS_3F_TRAINER_3, BATTLE_MELZAR_3F_TRAINER_3_Text_0, BATTLE_MELZAR_3F_TRAINER_3_Text_1
	namebox BATTLE_MELZAR_3F_TRAINER_3_Text_2
	msgbox BATTLE_MELZAR_3F_TRAINER_3_Text_3
	hidenamebox
	release
	end


MELZAR_3F_SKELETON_1::
	faceplayer
	namebox MELZAR_3F_SKELETON_1_Text_0
	msgbox MELZAR_3F_SKELETON_1_Text_1
	closemessage
	hidenamebox
	release
	end


MELZAR_3F_SKELETON_2::
	faceplayer
	namebox MELZAR_3F_SKELETON_1_Text_0
	msgbox MELZAR_3F_SKELETON_2_Text_0
	closemessage
	hidenamebox
	release
	end


MELZAR_3F_NOOB::
	faceplayer
	namebox MELZAR_3F_NOOB_Text_0
	msgbox MELZAR_3F_NOOB_Text_1
	closemessage
	hidenamebox
	release
	end


BATTLE_MELZAR_3F_TRAINER_1_Text_0:
	.string "I am Melzar's strongest apprentice. I\n"
	.string "won't let you disturb his important\l"
	.string "work.$"

BATTLE_MELZAR_3F_TRAINER_1_Text_1:
	.string "Be careful, Melzar is even tougher than\n"
	.string "I am.$"

BATTLE_MELZAR_3F_TRAINER_1_Text_2:
	.string "Ichethik$"

BATTLE_MELZAR_3F_TRAINER_1_Text_3:
	.string "Melzar had a wife who died during\n"
	.string "Elvarg's attack. I think he learned\l"
	.string "necromancy to try and bring her back.\p"
	.string "Me? I just want to control a legion of\n"
	.string "the dead.$"

BATTLE_MELZAR_3F_TRAINER_2_Text_0:
	.string "The skeletons eyes glow red as it\n"
	.string "charges at you menacingly!$"

BATTLE_MELZAR_3F_TRAINER_2_Text_1:
	.string "The dark aura around the skeleton\n"
	.string "fades as it is defeated.$"

BATTLE_MELZAR_3F_TRAINER_2_Text_2:
	.string "The skeletons eyes have returned to\n"
	.string "normal, perhaps something sinister\l"
	.string "nearby was controlling it earlier?$"

BATTLE_MELZAR_3F_TRAINER_3_Text_0:
	.string "Woah, stop right there, you're not a\n"
	.string "H.A.M member!$"

BATTLE_MELZAR_3F_TRAINER_3_Text_1:
	.string "Hey, you're strong! Would you like to\n"
	.string "join us?!$"

BATTLE_MELZAR_3F_TRAINER_3_Text_2:
	.string "H.A.M Grunt$"

BATTLE_MELZAR_3F_TRAINER_3_Text_3:
	.string "Where did everyone else go? I was told\n"
	.string "to go to the basement but the door was\l"
	.string "locked and I can't find another way in..$"

MELZAR_3F_SKELETON_1_Text_0:
	.string "Skeleton$"

MELZAR_3F_SKELETON_1_Text_1:
	.string "We used to live on Crandor before\n"
	.string "Elvarg drove us out.\p"
	.string "We settled here, but Elvarg followed\n"
	.string "and destroyed our camp, killing us in\l"
	.string "the process.\p"
	.string "Melzar cast some horrific dark magic on\n"
	.string "us and now we're just stuck here..\l"
	.string "forever.$"

MELZAR_3F_SKELETON_2_Text_0:
	.string "Melzar? He's hidden himself in the\n"
	.string "basement.\p"
	.string "A lot of the ladders to get down there\n"
	.string "have broken now though, and left holes\l"
	.string "in the floor where they used to be.\p"
	.string "Be careful or you might fall through!$"

MELZAR_3F_NOOB_Text_0:
	.string "N00b234$"

MELZAR_3F_NOOB_Text_1:
	.string "I bought this house from an estate\n"
	.string "agent.\p"
	.string "I knew it would need a lot of\n"
	.string "renovation, but it's full of monsters!\p"
	.string "I want a refund!\p"
	.string "Wait... What do you mean you get to\n"
	.string "those houses through a portal, are you\l"
	.string "mad?$"
