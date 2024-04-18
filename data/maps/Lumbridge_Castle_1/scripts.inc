Lumbridge_Castle_1_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Lumbridge_Castle_1_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, TryHideHans
	.byte 0

Lumbridge_Castle_1_MapScripts_MAP_SCRIPT_ON_LOAD:
	call LUMBRIDGE_GYM_MUSIC
	call LUMBRIDGE_GYM_OUTSIDE_STATE
	return


LUMBRIDGE_GYM_OUTSIDE_STATE::
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 1
	goto_if_eq LUMBRIDGE_GYM_OUTSIDE_STATE_2
	compare VAR_POKESCAPE_LUMBRIDGE_GYM_QUEST, 1
	goto_if_eq LUMBRIDGE_GYM_OUTSIDE_STATE_5
	setobjectxyperm 7, 15, 12
	setobjectxyperm 5, 36, 17
	setobjectxyperm 6, 12, 18
	return

LUMBRIDGE_GYM_OUTSIDE_STATE_2:
	setobjectxyperm 2, 21, 24
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN_UP_AND_RIGHT
	setobjectxyperm 4, 21, 25
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN_UP_AND_RIGHT
	setobjectxyperm 1, 24, 24
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN_UP_AND_LEFT
	setobjectxyperm 10, 21, 27
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_DOWN_UP_AND_RIGHT
	setobjectxyperm 11, 24, 26
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_DOWN_UP_AND_LEFT
	setobjectxyperm 3, 24, 23
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN_UP_AND_LEFT
	return

LUMBRIDGE_GYM_OUTSIDE_STATE_5:
	setobjectxyperm 7, 14, 8
	return


TryHideHans::
	map_script_2 VAR_TEMP_1, 0, HideHans2
	return


HideHans2::
	compare VAR_POKESCAPE_COOKS_ASSISTANT_QUEST_STATE, 0
	goto_if_eq HideHans2_1
	return

HideHans2_1:
	removeobject 9
	setflag FLAG_TEMP_1
	return


Lumbridge_Castle_Hans::
	lock
	faceplayer
	namebox Lumbridge_Castle_Hans_Text_0
	msgbox Lumbridge_Castle_Hans_Text_1
	hidenamebox
	release
	end


Lumbridge_Castle_NPC1::
	lock
	faceplayer
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 1
	goto_if_eq Lumbridge_Castle_NPC1_2
	msgbox Lumbridge_Castle_NPC1_Text_1
Lumbridge_Castle_NPC1_1:
	release
	end

Lumbridge_Castle_NPC1_2:
	msgbox Lumbridge_Castle_NPC1_Text_0
	goto Lumbridge_Castle_NPC1_1


Lumbridge_Castle_NPC2::
	lock
	faceplayer
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 1
	goto_if_eq Lumbridge_Castle_NPC2_2
	msgbox Lumbridge_Castle_NPC2_Text_1
Lumbridge_Castle_NPC2_1:
	release
	end

Lumbridge_Castle_NPC2_2:
	msgbox Lumbridge_Castle_NPC2_Text_0
	goto Lumbridge_Castle_NPC2_1


Lumbridge_Castle_NPC3::
	lock
	faceplayer
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 1
	goto_if_eq Lumbridge_Castle_NPC3_2
	msgbox Lumbridge_Castle_NPC3_Text_1
Lumbridge_Castle_NPC3_1:
	release
	end

Lumbridge_Castle_NPC3_2:
	msgbox Lumbridge_Castle_NPC3_Text_0
	goto Lumbridge_Castle_NPC3_1


Lumbridge_Castle_NPC4::
	lock
	faceplayer
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 1
	goto_if_eq Lumbridge_Castle_NPC4_2
	msgbox Lumbridge_Castle_NPC4_Text_1
Lumbridge_Castle_NPC4_1:
	release
	end

Lumbridge_Castle_NPC4_2:
	msgbox Lumbridge_Castle_NPC4_Text_0
	goto Lumbridge_Castle_NPC4_1


Lumbridge_Castle_NPC5::
	lock
	faceplayer
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 1
	goto_if_eq Lumbridge_Castle_NPC5_2
	msgbox Lumbridge_Castle_NPC5_Text_1
Lumbridge_Castle_NPC5_1:
	release
	end

Lumbridge_Castle_NPC5_2:
	msgbox Lumbridge_Castle_NPC5_Text_0
	goto Lumbridge_Castle_NPC5_1


Lumbridge_Castle_NPC6::
	lock
	faceplayer
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 1
	goto_if_eq Lumbridge_Castle_NPC6_2
	msgbox Lumbridge_Castle_NPC6_Text_1
Lumbridge_Castle_NPC6_1:
	release
	end

Lumbridge_Castle_NPC6_2:
	msgbox Lumbridge_Castle_NPC6_Text_0
	goto Lumbridge_Castle_NPC6_1


Hans::
	msgbox Hans_Text_0
	release
	return


Man1LumbridgeCastle::
	msgbox Man1LumbridgeCastle_Text_0
	release
	return


Woman1LumbridgeCastle::
	msgbox Woman1LumbridgeCastle_Text_0
	release
	return


ImpBattleLumbridge::
	setwildbattle SPECIES_IMP, 5, ITEM_NONE
	msgbox ImpBattleLumbridge_Text_0
	dowildbattle
	removeobject VAR_LAST_TALKED
	release
	return


LUMBRIDGE_GYM_TRAINER_1::
	trainerbattle_single TRAINER_LUMBRIDGE_GYM1, LUMBRIDGE_GYM_TRAINER_1_Text_0, LUMBRIDGE_GYM_TRAINER_1_Text_1
	switch VAR_POKESCAPE_LUMBRIDGE_GYM_QUEST
	case 1, LUMBRIDGE_GYM_TRAINER_1_2
	case 2, LUMBRIDGE_GYM_TRAINER_1_3
	return

LUMBRIDGE_GYM_TRAINER_1_2:
	lock
	faceplayer
	namebox LUMBRIDGE_GYM_TRAINER_1_Text_2
	msgbox LUMBRIDGE_GYM_TRAINER_1_Text_3
	hidenamebox
	release
	end

LUMBRIDGE_GYM_TRAINER_1_3:
	lock
	faceplayer
	namebox LUMBRIDGE_GYM_TRAINER_1_Text_2
	msgbox LUMBRIDGE_GYM_TRAINER_1_Text_4
	hidenamebox
	release
	end


LUMBRIDGE_GYM_TRAINER_2::
	trainerbattle_single TRAINER_LUMBRIDGE_GYM2, LUMBRIDGE_GYM_TRAINER_2_Text_0, LUMBRIDGE_GYM_TRAINER_2_Text_1
	switch VAR_POKESCAPE_LUMBRIDGE_GYM_QUEST
	case 1, LUMBRIDGE_GYM_TRAINER_2_2
	case 2, LUMBRIDGE_GYM_TRAINER_2_3
	return

LUMBRIDGE_GYM_TRAINER_2_2:
	lock
	faceplayer
	namebox LUMBRIDGE_GYM_TRAINER_2_Text_2
	msgbox LUMBRIDGE_GYM_TRAINER_2_Text_3
	hidenamebox
	release
	end

LUMBRIDGE_GYM_TRAINER_2_3:
	lock
	faceplayer
	namebox LUMBRIDGE_GYM_TRAINER_2_Text_2
	msgbox LUMBRIDGE_GYM_TRAINER_2_Text_4
	hidenamebox
	release
	end


LUMBRIDGE_GYM_TRAINER_3::
	trainerbattle_single TRAINER_LUMBRIDGE_GYM3, LUMBRIDGE_GYM_TRAINER_3_Text_0, LUMBRIDGE_GYM_TRAINER_3_Text_1
	switch VAR_POKESCAPE_LUMBRIDGE_GYM_QUEST
	case 1, LUMBRIDGE_GYM_TRAINER_3_2
	case 2, LUMBRIDGE_GYM_TRAINER_3_3
	return

LUMBRIDGE_GYM_TRAINER_3_2:
	lock
	faceplayer
	namebox LUMBRIDGE_GYM_TRAINER_3_Text_2
	msgbox LUMBRIDGE_GYM_TRAINER_3_Text_3
	hidenamebox
	release
	end

LUMBRIDGE_GYM_TRAINER_3_3:
	lock
	faceplayer
	namebox LUMBRIDGE_GYM_TRAINER_3_Text_2
	msgbox LUMBRIDGE_GYM_TRAINER_3_Text_4
	hidenamebox
	release
	end


LUMBRIDGE_GYM_TRAINER_4::
	trainerbattle_single TRAINER_LUMBRIDGE_GYM4, LUMBRIDGE_GYM_TRAINER_4_Text_0, LUMBRIDGE_GYM_TRAINER_4_Text_1
	switch VAR_POKESCAPE_LUMBRIDGE_GYM_QUEST
	case 1, LUMBRIDGE_GYM_TRAINER_4_2
	case 2, LUMBRIDGE_GYM_TRAINER_4_3
	return

LUMBRIDGE_GYM_TRAINER_4_2:
	lock
	faceplayer
	namebox LUMBRIDGE_GYM_TRAINER_4_Text_2
	msgbox LUMBRIDGE_GYM_TRAINER_4_Text_3
	hidenamebox
	release
	end

LUMBRIDGE_GYM_TRAINER_4_3:
	lock
	faceplayer
	namebox LUMBRIDGE_GYM_TRAINER_4_Text_2
	msgbox LUMBRIDGE_GYM_TRAINER_4_Text_4
	hidenamebox
	release
	end


Lumbridge_Castle_Hans_Text_0:
	.string "Hans$"

Lumbridge_Castle_Hans_Text_1:
	.string "I've been patrolling this castle for\n"
	.string "years!\p"
	.string "I've seen many things in my life time.$"

Lumbridge_Castle_NPC1_Text_0:
	.string "Prof.Normal Tree is a famous monster\n"
	.string "researcher.\p"
	.string "They say he knows everything about\n"
	.string "every monster!$"

Lumbridge_Castle_NPC1_Text_1:
	.string "There is no way to avoid combat in a\n"
	.string "battle.\p"
	.string "But you can run from wild battles.$"

Lumbridge_Castle_NPC2_Text_0:
	.string "Guthix, Saradomin, Zamorak…\p"
	.string "Which one do I choose?$"

Lumbridge_Castle_NPC2_Text_1:
	.string "You need money for more pouches?\p"
	.string "Sorry I am not doubling money.$"

Lumbridge_Castle_NPC3_Text_0:
	.string "What do you mean the monsters are all\n"
	.string "birds?!\p"
	.string "I don't get it.$"

Lumbridge_Castle_NPC3_Text_1:
	.string "The Duke holds power over Lumbridge.\p"
	.string "But personally I dont think he is that\n"
	.string "good of a ruler.$"

Lumbridge_Castle_NPC4_Text_0:
	.string "My friend over in Kandarin apparently\n"
	.string "got a different monster from the\l"
	.string "professor.$"

Lumbridge_Castle_NPC4_Text_1:
	.string "The best way to find your enemies type\n"
	.string "is to just use moves.\p"
	.string "Identify their weakness!$"

Lumbridge_Castle_NPC5_Text_0:
	.string "I got my very own Bestiary!\p"
	.string "But yikes!\p"
	.string "I don't think I am ever going to be able\n"
	.string "to fill this out.$"

Lumbridge_Castle_NPC5_Text_1:
	.string "I need flour from the mill but it is such\n"
	.string "a long trip.$"

Lumbridge_Castle_NPC6_Text_0:
	.string "Pouches, huh?\p"
	.string "I never knew we could trap monsters\n"
	.string "within those.$"

Lumbridge_Castle_NPC6_Text_1:
	.string "The Duke is sort of like the regional\n"
	.string "champion around here.\p"
	.string "Better stay on his good side.$"

Hans_Text_0:
	.string "Cupholder$"

Man1LumbridgeCastle_Text_0:
	.string "I love the castle!$"

Woman1LumbridgeCastle_Text_0:
	.string "I don't remember why I came here$"

ImpBattleLumbridge_Text_0:
	.string "EEEEE$"

LUMBRIDGE_GYM_TRAINER_1_Text_0:
	.string "You think you are ready to face the\n"
	.string "Duke?\p"
	.string "Well I do not think so!$"

LUMBRIDGE_GYM_TRAINER_1_Text_1:
	.string "You are ready to face the duke after\n"
	.string "all it seems.$"

LUMBRIDGE_GYM_TRAINER_1_Text_2:
	.string "Anabell$"

LUMBRIDGE_GYM_TRAINER_1_Text_3:
	.string "You fought well.\p"
	.string "I should train harder.$"

LUMBRIDGE_GYM_TRAINER_1_Text_4:
	.string "I cannot believe you beat the Duke as\n"
	.string "well!\p"
	.string "You are like a champion in the making!$"

LUMBRIDGE_GYM_TRAINER_2_Text_0:
	.string "Feast your eyes upon pure cuteness!$"

LUMBRIDGE_GYM_TRAINER_2_Text_1:
	.string "I may have lost but have you ever seen\n"
	.string "something so cute?$"

LUMBRIDGE_GYM_TRAINER_2_Text_2:
	.string "Gideon$"

LUMBRIDGE_GYM_TRAINER_2_Text_3:
	.string "Do you agree on how cute my rabbit is?$"

LUMBRIDGE_GYM_TRAINER_2_Text_4:
	.string "You have some pretty cute monsters,\n"
	.string "but my rabbit is cuter!$"

LUMBRIDGE_GYM_TRAINER_3_Text_0:
	.string "Oh you are a Gym Challenger?\p"
	.string "Sorry but this way is blocked off.$"

LUMBRIDGE_GYM_TRAINER_3_Text_1:
	.string "You'll have to go around if you want to\n"
	.string "get to the top of the Castle.$"

LUMBRIDGE_GYM_TRAINER_3_Text_2:
	.string "Jesse$"

LUMBRIDGE_GYM_TRAINER_3_Text_3:
	.string "You will have to go around if you want\n"
	.string "to get to the top of the Castle.$"

LUMBRIDGE_GYM_TRAINER_3_Text_4:
	.string "I wish I had someone to help me clean\n"
	.string "this mess up.$"

LUMBRIDGE_GYM_TRAINER_4_Text_0:
	.string "Ready to face the Duke himself? Let us\n"
	.string "check.$"

LUMBRIDGE_GYM_TRAINER_4_Text_1:
	.string "Sure.\n"
	.string "You barely pass.$"

LUMBRIDGE_GYM_TRAINER_4_Text_2:
	.string "Jericho$"

LUMBRIDGE_GYM_TRAINER_4_Text_3:
	.string "It was a close fight.$"

LUMBRIDGE_GYM_TRAINER_4_Text_4:
	.string "I guess you were ready to face the\n"
	.string "duke.$"
