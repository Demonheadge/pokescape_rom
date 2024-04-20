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
	call QUEST_FALADORCASTLE_EVENT_AFTER_GYM
	goto FALADORCASTLE_3F_STATE_1


QUEST_FALADORCASTLE_EVENT_AFTER_GYM::
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_0
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_1
	closemessage
	hidenamebox
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_2
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_3
	closemessage
	hidenamebox
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_0
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_4
	closemessage
	hidenamebox
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_5
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_6
	closemessage
	hidenamebox
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_0
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_7
	closemessage
	hidenamebox
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_0
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_8
	closemessage
	hidenamebox
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_5
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_9
	closemessage
	hidenamebox
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_0
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_10
	closemessage
	hidenamebox
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_0
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_11
	closemessage
	hidenamebox
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_12
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_13
	closemessage
	hidenamebox
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_0
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_14
	closemessage
	hidenamebox
	release
	end


QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_0:
	.string "Sir Owen$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_1:
	.string "Thanks for coming {PLAYER}.\p"
	.string "We have been hard at work interrogating\n"
	.string "the prisoners, but have run into a\l"
	.string "little problem.{PAUSE 15}Nothing they say makes\l"
	.string "any sense!\p"
	.string "Listen for yourself. The Black Knights\n"
	.string "are just complaining...$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_2:
	.string "Black Knight$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_3:
	.string "Did you know that Black Knights have\n"
	.string "twice the chance to get called in for\l"
	.string "an interrogation than any other type\l"
	.string "of knight???{PAUSE 15}I bet ironmen or\l"
	.string "mithrilmen don't get pulled over nearly\l"
	.string "as often by you White Knights!{PAUSE 15}These\l"
	.string "people are armourist, I tell you!\p"
	.string "ARMOURIST!!$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_4:
	.string "And don't get me started on the H.A.M\n"
	.string "members...$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_5:
	.string "H.A.M Grunt$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_6:
	.string "H.A.M are going to rid Gielinor of all the\n"
	.string "monsters.\p"
	.string "No more smelly goblins.\p"
	.string "No more grimy dwarves.\p"
	.string "No more wretched frogeels!{PAUSE 15}We'll\n"
	.string "probably leave the livestock though...\p"
	.string "We will still need to eat after all.\p"
	.string "All we needed to succeed was to finish\n"
	.string "the map.\p"
	.string "And locate the ultimate weapon to\n"
	.string "destroy every single monster in\l"
	.string "existence.$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_7:
	.string "See what I mean?\p"
	.string "They're talking nonsense about a map\n"
	.string "when all they had was a scrap of paper\l"
	.string "with a scrawl on it.\p"
	.string "It wasn't even worth picking up off the\n"
	.string "floor!\p"
	.string "They've clearly never seen a map\n"
	.string "before!\p"
	.string "{PAUSE 15}What do you mean that it's a fragment\n"
	.string "of a larger map?\p"
	.string "Oh, but you have all three of the pieces\n"
	.string "now?\p"
	.string "{PAUSE 15}Good, then they won't be able to go\n"
	.string "through with their plan!$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_8:
	.string "And what do you think you're laughing\n"
	.string "at?$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_9:
	.string "You might have taken this piece from\n"
	.string "us, but what you don't realise is that\l"
	.string "we'd already made a copy!\p"
	.string "Our colleague managed to sneak off\n"
	.string "with it through a tunnel in the mines\l"
	.string "before you got there.\p"
	.string "Blew it up behind them too so nobody\n"
	.string "could follow.\p"
	.string "Hahahahahahahahaha!\p"
	.string "Now who're the stupid ones!?$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_10:
	.string "Oh no!\p"
	.string "If they have even one piece of the map,\n"
	.string "we must move swiftly to stop them from\l"
	.string "locating this weapon!$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_11:
	.string "{PLAYER}, show Sir Tiffy the map!$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_12:
	.string "Sir Tiffy$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_13:
	.string "Now what do we have here, old\n"
	.string "bean?{PAUSE 15}Hmm...\p"
	.string "Let me think.\p"
	.string "We have dossiers on most of the islands\n"
	.string "on Gielinor.\p"
	.string "It pays to know what's happening\n"
	.string "across the other kingdoms.\p"
	.string "{PAUSE 15}You must be pulling on my leg!\p"
	.string "This is a map of Crandor.\p"
	.string "Around thirty years ago, it was a\n"
	.string "thriving community full of mages and\l"
	.string "adventurers.\p"
	.string "Many of them even became part of the\n"
	.string "Champions' Guild over in Varrock!\p"
	.string "However, one day one of their\n"
	.string "adventurers went too far and awoke a\l"
	.string "dragon that laid waste to the entire\l"
	.string "island.\p"
	.string "They say it's nothing but a wasteland\n"
	.string "now.\p"
	.string "That dragon must be the weapon they're\n"
	.string "looking for!\p"
	.string "{PAUSE 15}Now how to get there...\p"
	.string "You'd have to sail, of course, but no\n"
	.string "captain in his right mind would sail to\l"
	.string "that island...{PAUSE 15}There may be one, though.\p"
	.string "Ned.\p"
	.string "He's a veteran sailor who settled in\n"
	.string "Draynor Village when people stopped\l"
	.string "letting him sail.\p"
	.string "If anyone has the knowledge and\n"
	.string "experience to get there, it'll be him.\p"
	.string "Since you were strong enough to defeat\n"
	.string "even the best the White Knights had to\l"
	.string "offer, I trust you'll be up to the task\l"
	.string "of stopping H.A.M, old bean?\p"
	.string "I'll need to report this to the top\n"
	.string "brass so we can keep monitoring their\l"
	.string "activity here.\p"
	.string "Ta-ta for now.$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_14:
	.string "What are you waiting for {PLAYER}, go!\p"
	.string "Head to Draynor Village and talk to Ned!$"
