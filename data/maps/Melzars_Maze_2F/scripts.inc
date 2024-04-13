Melzars_Maze_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Melzars_Maze_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Melzars_Maze_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 0
	call MELZARS_2F_STATE
	return


MELZARS_2F_STATE::
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 105
	goto_if_eq MELZARS_2F_STATE_2
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 106
	goto_if_eq MELZARS_2F_STATE_2
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 107
	goto_if_eq MELZARS_2F_STATE_2
	removeobject 8
	removeobject 3
	setflag FLAG_TEMP_1D
MELZARS_2F_STATE_1:
	return

MELZARS_2F_STATE_2:
	addobject 8
	addobject 3
	clearflag FLAG_TEMP_1D
	goto MELZARS_2F_STATE_1


Melzar_Maze_2F_Bookshelf::
	compare VAR_POKESCAPE_MELZARS_MAZE_DOORS, 1
	goto_if_eq Melzar_Maze_2F_Bookshelf_2
	msgbox Melzar_Maze_2F_Bookshelf_Text_2
Melzar_Maze_2F_Bookshelf_1:
	closemessage
	end

Melzar_Maze_2F_Bookshelf_2:
	msgbox Melzar_Maze_2F_Bookshelf_Text_0
	setvar VAR_POKESCAPE_MELZARS_MAZE_DOORS, 2
	playfanfare MUS_OBTAIN_ITEM
	msgbox Melzar_Maze_2F_Bookshelf_Text_1
	waitfanfare
	goto Melzar_Maze_2F_Bookshelf_1


Melzar_Maze_2F_Picture::
	msgbox Melzar_Maze_2F_Picture_Text_0
	closemessage
	end


Melzar_Maze_2F_Tools::
	msgbox Melzar_Maze_2F_Tools_Text_0
	closemessage
	end


Melzar_Maze_2F_Candle::
	msgbox Melzar_Maze_2F_Candle_Text_0
	closemessage
	end


Melzar_Maze_2F_Tree::
	msgbox Melzar_Maze_2F_Tree_Text_0
	closemessage
	end


Melzar_Maze_2F_Box::
	msgbox Melzar_Maze_2F_Box_Text_0
	closemessage
	end


MELZARS_LOCKED_DOOR_2F_1::
	compare VAR_POKESCAPE_MELZARS_MAZE_DOORS, 2
	goto_if_eq MELZARS_LOCKED_DOOR_2F_1_2
	compare VAR_POKESCAPE_MELZARS_MAZE_DOORS, 3
	goto_if_eq MELZARS_LOCKED_DOOR_2F_1_2
	msgbox MELZARS_LOCKED_DOOR_2F_1_Text_0
	closemessage
MELZARS_LOCKED_DOOR_2F_1_1:
	end

MELZARS_LOCKED_DOOR_2F_1_2:
	setmetatile 13, 12, 849, 0
	setmetatile 13, 14, 121, 0
	special DrawWholeMapView
	goto MELZARS_LOCKED_DOOR_2F_1_1


MELZARS_LOCKED_DOOR_2F_2::
	compare VAR_POKESCAPE_MELZARS_MAZE_DOORS, 2
	goto_if_eq MELZARS_LOCKED_DOOR_2F_2_2
	compare VAR_POKESCAPE_MELZARS_MAZE_DOORS, 3
	goto_if_eq MELZARS_LOCKED_DOOR_2F_2_2
	msgbox MELZARS_LOCKED_DOOR_2F_1_Text_0
	closemessage
MELZARS_LOCKED_DOOR_2F_2_1:
	end

MELZARS_LOCKED_DOOR_2F_2_2:
	setmetatile 18, 13, 849, 0
	setmetatile 18, 15, 121, 0
	special DrawWholeMapView
	goto MELZARS_LOCKED_DOOR_2F_2_1


MELZARS_LOCKED_DOOR_2F_3::
	compare VAR_POKESCAPE_MELZARS_MAZE_DOORS, 2
	goto_if_eq MELZARS_LOCKED_DOOR_2F_3_2
	compare VAR_POKESCAPE_MELZARS_MAZE_DOORS, 3
	goto_if_eq MELZARS_LOCKED_DOOR_2F_3_2
	msgbox MELZARS_LOCKED_DOOR_2F_1_Text_0
	closemessage
MELZARS_LOCKED_DOOR_2F_3_1:
	end

MELZARS_LOCKED_DOOR_2F_3_2:
	setmetatile 23, 13, 849, 0
	setmetatile 23, 15, 121, 0
	special DrawWholeMapView
	goto MELZARS_LOCKED_DOOR_2F_3_1


MELZARS_LOCKED_DOOR_2F_4::
	compare VAR_POKESCAPE_MELZARS_MAZE_DOORS, 2
	goto_if_eq MELZARS_LOCKED_DOOR_2F_4_2
	compare VAR_POKESCAPE_MELZARS_MAZE_DOORS, 3
	goto_if_eq MELZARS_LOCKED_DOOR_2F_4_2
	msgbox MELZARS_LOCKED_DOOR_2F_1_Text_0
	closemessage
MELZARS_LOCKED_DOOR_2F_4_1:
	end

MELZARS_LOCKED_DOOR_2F_4_2:
	setmetatile 29, 13, 849, 0
	setmetatile 29, 15, 121, 0
	special DrawWholeMapView
	goto MELZARS_LOCKED_DOOR_2F_4_1


BATTLE_MELZAR_2F_TRAINER_1::
	trainerbattle_single TRAINER_MELZARS_2F_TRAINER_1, BATTLE_MELZAR_2F_TRAINER_1_Text_0, BATTLE_MELZAR_2F_TRAINER_1_Text_1
	msgbox BATTLE_MELZAR_2F_TRAINER_1_Text_2
	hidenamebox
	release
	end


BATTLE_MELZAR_2F_TRAINER_2::
	trainerbattle_single TRAINER_MELZARS_2F_TRAINER_2, BATTLE_MELZAR_2F_TRAINER_2_Text_0, BATTLE_MELZAR_2F_TRAINER_2_Text_1
	msgbox BATTLE_MELZAR_2F_TRAINER_2_Text_2
	hidenamebox
	release
	end


BATTLE_MELZAR_2F_TRAINER_3::
	trainerbattle_single TRAINER_MELZARS_2F_TRAINER_3, BATTLE_MELZAR_2F_TRAINER_3_Text_0, BATTLE_MELZAR_2F_TRAINER_3_Text_1
	namebox BATTLE_MELZAR_2F_TRAINER_3_Text_2
	msgbox BATTLE_MELZAR_2F_TRAINER_3_Text_3
	hidenamebox
	release
	end


BATTLE_MELZAR_2F_TRAINER_4::
	trainerbattle_single TRAINER_MELZARS_2F_TRAINER_4, BATTLE_MELZAR_2F_TRAINER_4_Text_0, BATTLE_MELZAR_2F_TRAINER_4_Text_1
	namebox BATTLE_MELZAR_2F_TRAINER_4_Text_2
	msgbox BATTLE_MELZAR_2F_TRAINER_4_Text_3
	hidenamebox
	release
	end


BATTLE_MELZAR_2F_TRAINER_5::
	trainerbattle_single TRAINER_MELZARS_2F_TRAINER_5, BATTLE_MELZAR_2F_TRAINER_5_Text_0, BATTLE_MELZAR_2F_TRAINER_5_Text_1
	namebox BATTLE_MELZAR_2F_TRAINER_3_Text_2
	msgbox BATTLE_MELZAR_2F_TRAINER_5_Text_2
	hidenamebox
	release
	end


BATTLE_MELZAR_2F_TRAINER_6::
	trainerbattle_single TRAINER_MELZARS_2F_TRAINER_6, BATTLE_MELZAR_2F_TRAINER_6_Text_0, BATTLE_MELZAR_2F_TRAINER_6_Text_1
	namebox BATTLE_MELZAR_2F_TRAINER_6_Text_2
	msgbox BATTLE_MELZAR_2F_TRAINER_6_Text_3
	hidenamebox
	release
	end


ITEM_MELZARS_2F_RUNE::
	finditem ITEM_BODY_RUNE
	end


ITEM_MELZARS_2F_BREAD::
	finditem ITEM_BREAD
	end


Melzar_Maze_2F_Bookshelf_Text_0:
	.string "You search the bookshelf and find a\n"
	.string "key!$"

Melzar_Maze_2F_Bookshelf_Text_1:
	.string "{PLAYER} obtained the YELLOW KEY.$"

Melzar_Maze_2F_Bookshelf_Text_2:
	.string "You search the bookshelf and find\n"
	.string "nothing interesting…$"

Melzar_Maze_2F_Picture_Text_0:
	.string "You search the picture…\p"
	.string "Did it's eyes just move?\p"
	.string "You find nothing interesting…$"

Melzar_Maze_2F_Tools_Text_0:
	.string "You search the cupboard…\p"
	.string "You find an empty Tinderbox!\p"
	.string "But nothing else interesting…$"

Melzar_Maze_2F_Candle_Text_0:
	.string "You search the lit candle…\p"
	.string "You burn yourself.\p"
	.string "You start to question your life\n"
	.string "choices.$"

Melzar_Maze_2F_Tree_Text_0:
	.string "You search the small tree…\p"
	.string "You find nothing interesting…$"

Melzar_Maze_2F_Box_Text_0:
	.string "You search the box…\p"
	.string "You find dust!\p"
	.string "But nothing else interesting…$"

MELZARS_LOCKED_DOOR_2F_1_Text_0:
	.string "You need a yellow key to unlock this\n"
	.string "door.$"

BATTLE_MELZAR_2F_TRAINER_1_Text_0:
	.string "A skeleton appears out of nowhere.$"

BATTLE_MELZAR_2F_TRAINER_1_Text_1:
	.string "The skeleton looks defeated.$"

BATTLE_MELZAR_2F_TRAINER_1_Text_2:
	.string "The skeleton doesn't seem very\n"
	.string "talkative.$"

BATTLE_MELZAR_2F_TRAINER_2_Text_0:
	.string "You hear a faint whisper in the air as\n"
	.string "the skeleton attacks. Did it say 'help'?$"

BATTLE_MELZAR_2F_TRAINER_2_Text_1:
	.string "The wind whispers again. It sounded like\n"
	.string "'thank you'.$"

BATTLE_MELZAR_2F_TRAINER_2_Text_2:
	.string "The skeleton almost looks relieved it\n"
	.string "no longer has to fight.$"

BATTLE_MELZAR_2F_TRAINER_3_Text_0:
	.string "You'll never get the map piece before we\n"
	.string "do.$"

BATTLE_MELZAR_2F_TRAINER_3_Text_1:
	.string "I should have kept up with the others..$"

BATTLE_MELZAR_2F_TRAINER_3_Text_2:
	.string "H.A.M Grunt$"

BATTLE_MELZAR_2F_TRAINER_3_Text_3:
	.string "The other grunts kept saying\n"
	.string "'knowledge is key' but how are books\l"
	.string "meant to help me open these doors? I\l"
	.string "need an actual key!$"

BATTLE_MELZAR_2F_TRAINER_4_Text_0:
	.string "The people at Port Sarim told me\n"
	.string "something weird was happening here, so\l"
	.string "I came to check it out.\p"
	.string "I can't let you beat me to the end, I\n"
	.string "want the reward for myself!$"

BATTLE_MELZAR_2F_TRAINER_4_Text_1:
	.string "Maybe we can go halves?$"

BATTLE_MELZAR_2F_TRAINER_4_Text_2:
	.string "QuestKing$"

BATTLE_MELZAR_2F_TRAINER_4_Text_3:
	.string "If I'd been less greedy, maybe I'd have\n"
	.string "paid more attention to where I was\l"
	.string "going and not gotten myself lost in\l"
	.string "here.$"

BATTLE_MELZAR_2F_TRAINER_5_Text_0:
	.string "We are so close to the basement now. I\n"
	.string "can't let you foil our plan!$"

BATTLE_MELZAR_2F_TRAINER_5_Text_1:
	.string "I must have gotten injured when the\n"
	.string "ladder broke and hurt my ankle or\l"
	.string "something and that's why I lost..$"

BATTLE_MELZAR_2F_TRAINER_5_Text_2:
	.string "The ladder I used to climb down here\n"
	.string "broke behind me, and the only way left\l"
	.string "to go is down that hole but..\p"
	.string "I can't do it! I'm too scared to jump!$"

BATTLE_MELZAR_2F_TRAINER_6_Text_0:
	.string "Behold, my undead servants!$"

BATTLE_MELZAR_2F_TRAINER_6_Text_1:
	.string "Ugh, these zombie corpses just aren't\n"
	.string "strong enough..$"

BATTLE_MELZAR_2F_TRAINER_6_Text_2:
	.string "Astelazar$"

BATTLE_MELZAR_2F_TRAINER_6_Text_3:
	.string "Melzar's down in the basement working\n"
	.string "on his experiments.\p"
	.string "I want to learn more, but I have no idea\n"
	.string "how to even get down there as there\l"
	.string "are no ladders!$"
