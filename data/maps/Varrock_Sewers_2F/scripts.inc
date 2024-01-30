Varrock_Sewers_2F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Varrock_Sewers_2F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Varrock_Sewers_2F_MapScripts_MAP_SCRIPT_ON_LOAD:
	call Randomise_VarrockSewer_2F_Spawns
	return


Randomise_VarrockSewer_2F_Spawns::
	random 2
	compare VAR_RESULT, 1
	goto_if_eq Randomise_VarrockSewer_2F_Spawns_2
Randomise_VarrockSewer_2F_Spawns_1:
	random 2
	compare VAR_RESULT, 1
	goto_if_eq Randomise_VarrockSewer_2F_Spawns_5
Randomise_VarrockSewer_2F_Spawns_4:
	random 2
	compare VAR_RESULT, 1
	goto_if_eq Randomise_VarrockSewer_2F_Spawns_8
Randomise_VarrockSewer_2F_Spawns_7:
	random 2
	compare VAR_RESULT, 1
	goto_if_eq Randomise_VarrockSewer_2F_Spawns_11
Randomise_VarrockSewer_2F_Spawns_10:
	random 2
	compare VAR_RESULT, 1
	goto_if_eq Randomise_VarrockSewer_2F_Spawns_14
Randomise_VarrockSewer_2F_Spawns_13:
	random 2
	compare VAR_RESULT, 1
	goto_if_eq Randomise_VarrockSewer_2F_Spawns_17
Randomise_VarrockSewer_2F_Spawns_16:
	random 2
	compare VAR_RESULT, 1
	goto_if_eq Randomise_VarrockSewer_2F_Spawns_20
Randomise_VarrockSewer_2F_Spawns_19:
	random 2
	compare VAR_RESULT, 1
	goto_if_eq Randomise_VarrockSewer_2F_Spawns_23
Randomise_VarrockSewer_2F_Spawns_22:
	special DrawWholeMapView
	return

Randomise_VarrockSewer_2F_Spawns_2:
	setmetatile 12, 26, 726, 1
	setvar VAR_TEMP_0, 1
	goto Randomise_VarrockSewer_2F_Spawns_1

Randomise_VarrockSewer_2F_Spawns_5:
	setmetatile 10, 18, 726, 1
	setvar VAR_TEMP_1, 1
	goto Randomise_VarrockSewer_2F_Spawns_4

Randomise_VarrockSewer_2F_Spawns_8:
	setmetatile 9, 12, 726, 1
	setvar VAR_TEMP_2, 1
	goto Randomise_VarrockSewer_2F_Spawns_7

Randomise_VarrockSewer_2F_Spawns_11:
	setmetatile 11, 12, 726, 1
	setvar VAR_TEMP_3, 1
	goto Randomise_VarrockSewer_2F_Spawns_10

Randomise_VarrockSewer_2F_Spawns_14:
	setmetatile 12, 2, 726, 1
	setvar VAR_TEMP_4, 1
	goto Randomise_VarrockSewer_2F_Spawns_13

Randomise_VarrockSewer_2F_Spawns_17:
	setmetatile 29, 2, 726, 1
	setvar VAR_TEMP_5, 1
	goto Randomise_VarrockSewer_2F_Spawns_16

Randomise_VarrockSewer_2F_Spawns_20:
	setmetatile 33, 2, 726, 1
	setvar VAR_TEMP_6, 1
	goto Randomise_VarrockSewer_2F_Spawns_19

Randomise_VarrockSewer_2F_Spawns_23:
	setmetatile 41, 7, 726, 1
	setvar VAR_TEMP_7, 1
	goto Randomise_VarrockSewer_2F_Spawns_22


ITEM_VARROCK_SEWERS_1::
	finditem ITEM_SCURRIUS_CHEESE
	end

