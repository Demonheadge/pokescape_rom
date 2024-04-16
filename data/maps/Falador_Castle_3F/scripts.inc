Falador_Castle_3F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Falador_Castle_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Falador_Castle_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Falador_Castle_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Falador_Castle_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	goto FALADORCASTLE_3F_STATE
	return


FALADORCASTLE_3F_STATE::
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 120
	goto_if_eq FALADORCASTLE_3F_STATE_2
	removeobject 4
	removeobject 5
	removeobject 6
	removeobject 7
	removeobject 8
	removeobject 9
	removeobject 10
	setflag FLAG_TEMP_1F
FALADORCASTLE_3F_STATE_1:
	return

FALADORCASTLE_3F_STATE_2:
	clearflag FLAG_TEMP_1F
	addobject 4
	addobject 5
	addobject 6
	addobject 7
	addobject 8
	addobject 9
	addobject 10
	call QUEST_FALADORCASTLE_SIROWEN
	goto FALADORCASTLE_3F_STATE_1


QUEST_FALADORCASTLE_SIROWEN::
	lock
	faceplayer
	namebox QUEST_FALADORCASTLE_SIROWEN_Text_0
	msgbox QUEST_FALADORCASTLE_SIROWEN_Text_1
	closemessage
	hidenamebox
	release
	end


QUEST_FALADORCASTLE_SIROWEN_Text_0:
	.string "Sir Owen$"

QUEST_FALADORCASTLE_SIROWEN_Text_1:
	.string "Thanks for coming {PLAYER}.$"
