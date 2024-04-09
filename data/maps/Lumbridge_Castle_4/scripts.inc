Lumbridge_Castle_4_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Lumbridge_Castle_4_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Lumbridge_Castle_4_MapScripts_MAP_SCRIPT_ON_LOAD:
	call LUMBRIDGE_GYM_MUSIC
	return


GYMLEADER_DUKE::
	lock
	faceplayer
	namebox GYMLEADER_DUKE_Text_0
	msgbox GYMLEADER_DUKE_Text_1
	hidenamebox
	trainerbattle_no_intro TRAINER_LEADER_DUKE_1, GYMLEADER_DUKE_Text_2
	goto GYMLEADER_DUKE_BATTLEWON
	release
	end


GYMLEADER_DUKE_BATTLEWON::
	lock
	faceplayer
	namebox GYMLEADER_DUKE_Text_0
	msgbox GYMLEADER_DUKE_BATTLEWON_Text_0
	hidenamebox
	playfanfare MUS_PS_QUEST_COMPLETE
	msgbox GYMLEADER_DUKE_BATTLEWON_Text_1
	waitmessage
	waitfanfare
	namebox GYMLEADER_DUKE_Text_0
	msgbox GYMLEADER_DUKE_BATTLEWON_Text_2
	hidenamebox
	giveitem ITEM_TM36, 1
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_ShowBagIsFull
	namebox GYMLEADER_DUKE_Text_0
	msgbox GYMLEADER_DUKE_BATTLEWON_Text_3
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq GYMLEADER_DUKE_BATTLEWON_2
GYMLEADER_DUKE_BATTLEWON_1:
	closemessage
	hidenamebox
	fadescreen FADE_TO_BLACK
	call SetGymTrainers_LUMBRIDGE
	removeobject 13
	setflag FLAG_BADGE01_GET
	addvar VAR_GAMEMODE_LEVEL_SCALING, 1
	setvar VAR_POKESCAPE_LUMBRIDGE_GYM_QUEST, 2
	fadescreen FADE_FROM_BLACK
	release
	end

GYMLEADER_DUKE_BATTLEWON_2:
	msgbox GYMLEADER_DUKE_BATTLEWON_Text_4
	closemessage
	hidenamebox
	giveitem ITEM_TALISMAN_MYSTERY, 1
	namebox GYMLEADER_DUKE_Text_0
	msgbox GYMLEADER_DUKE_BATTLEWON_Text_5
	closemessage
	hidenamebox
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 15
	startquest QUEST_RUNE_MYSTERIES
	goto GYMLEADER_DUKE_BATTLEWON_1


SetGymTrainers_LUMBRIDGE::
	settrainerflag TRAINER_LUMBRIDGE_GYM1
	settrainerflag TRAINER_LUMBRIDGE_GYM2
	settrainerflag TRAINER_LUMBRIDGE_GYM3
	settrainerflag TRAINER_LUMBRIDGE_GYM4
	return


GYMLEADER_DUKE_Text_0:
	.string "Duke Horacio$"

GYMLEADER_DUKE_Text_1:
	.string "So you've made it to the top!\n"
	.string "Congratulations!\p"
	.string "You wish to challenge me to a battle?\n"
	.string "So be it!\l"
	.string "May the best trainer win!$"

GYMLEADER_DUKE_Text_2:
	.string "You beat me…\p"
	.string "…Congratulations!$"

GYMLEADER_DUKE_BATTLEWON_Text_0:
	.string "Congratulations!\n"
	.string "You've managed to defeat me.\p"
	.string "Here is your official GYM BADGE, you've\n"
	.string "definitely earned it.$"

GYMLEADER_DUKE_BATTLEWON_Text_1:
	.string "{PLAYER} received the LUMBRIDGE\n"
	.string "BADGE from Duke Horacio.$"

GYMLEADER_DUKE_BATTLEWON_Text_2:
	.string "Also have this, it is my favourite move.$"

GYMLEADER_DUKE_BATTLEWON_Text_3:
	.string "That move is called Slack off, which is\n"
	.string "exactly what I love to do on my days\l"
	.string "off.\p"
	.string "Hopefully it will help you on your\n"
	.string "journey.$"

GYMLEADER_DUKE_BATTLEWON_Text_4:
	.string "Before you go, could you to do me a\n"
	.string "favour?\p"
	.string "Pop over to the Wizards' Tower and have\n"
	.string "the Archmage check out this\l"
	.string "mysterious Talisman for me.\p"
	.string "I would go myself but I have a Castle\n"
	.string "and Gym to run.$"

GYMLEADER_DUKE_BATTLEWON_Text_5:
	.string "Wizards' Tower is located south of\n"
	.string "Draynor Village.\p"
	.string "You can get there through Lumbridge\n"
	.string "Swamp to the south of here.\p"
	.string "Return to me once you've delivered the\n"
	.string "Talisman and I'll give you something\l"
	.string "for your troubles.\p"
	.string "Best of luck adventurer!$"
