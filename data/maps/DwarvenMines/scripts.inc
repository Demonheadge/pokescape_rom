DwarvenMines_MapScripts::
	.byte 0


NPC_DWARVENMINES_NPC1::
	lock
	faceplayer
	namebox NPC_DWARVENMINES_NPC1_Text_0
	msgbox NPC_DWARVENMINES_NPC1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_DWARVENMINES_NPC2::
	lock
	faceplayer
	msgbox NPC_DWARVENMINES_NPC2_Text_0
	closemessage
	release
	end


NPC_DWARVENMINES_NPC3::
	lock
	faceplayer
	msgbox NPC_DWARVENMINES_NPC3_Text_0
	closemessage
	release
	end


NPC_DWARVENMINES_NPC4::
	lock
	faceplayer
	msgbox NPC_DWARVENMINES_NPC4_Text_0
	closemessage
	release
	end


DWARVENMINES_SIGNPOST::
	msgbox DWARVENMINES_SIGNPOST_Text_0
	closemessage
	end


NPC_DWARVENMINES_NPC1_Text_0:
	.string "Dwarven Apprentice$"

NPC_DWARVENMINES_NPC1_Text_1:
	.string "Inside here is Nulodion's multicannon\n"
	.string "store!\p"
	.string "The only place in Gielinor that you can\n"
	.string "find the esteemed dwarf multicannon\l"
	.string "for sale\p"
	.string "Don't tell him I told you this, but it's\n"
	.string "actually cheaper if you buy the full\l"
	.string "set from him instead of individual\l"
	.string "parts!\p"
	.string "{PAUSE 15}Maybe you could spare some of the\n"
	.string "extra coin you save for me..?.$"

NPC_DWARVENMINES_NPC2_Text_0:
	.string "Ho-hiiii, ho-hiiii.\p"
	.string "Off to work, let's try not to die!{PAUSE 15}\p"
	.string "Oh, uh, you didn't hear me singing just\n"
	.string "now, did you?$"

NPC_DWARVENMINES_NPC3_Text_0:
	.string "The landslides have been getting worse\n"
	.string "recently.\p"
	.string "Now they're causing damage even as far\n"
	.string "south of the mountain as this.\p"
	.string "What could be causing them?$"

NPC_DWARVENMINES_NPC4_Text_0:
	.string "Ores!\p"
	.string "Get 'yer ores here!{PAUSE 15}\p"
	.string "Hmm, maybe I need a new slogan as that\n"
	.string "sounds a lot like we're selling\l"
	.string "something else!\p"
	.string "Maybe that would be more profitable\n"
	.string "though..$"

DWARVENMINES_SIGNPOST_Text_0:
	.string "WEST to Crafting Guild.\p"
	.string "SOUTH to Rimmington.\p"
	.string "EAST to FALADOR.$"
