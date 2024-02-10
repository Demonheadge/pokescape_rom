Route51_MapScripts::
	.byte 0


BATTLE_ROUTE_51_EFFIGY::
	trainerbattle_single TRAINER_ROUTE_51_EFFIGY, BATTLE_ROUTE_51_EFFIGY_Text_0, BATTLE_ROUTE_51_EFFIGY_Text_1
	namebox BATTLE_ROUTE_51_EFFIGY_Text_2
	msgbox BATTLE_ROUTE_51_EFFIGY_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE_51_GUNS::
	trainerbattle_single TRAINER_ROUTE_51_GUNS, BATTLE_ROUTE_51_GUNS_Text_0, BATTLE_ROUTE_51_GUNS_Text_1
	namebox BATTLE_ROUTE_51_GUNS_Text_2
	msgbox BATTLE_ROUTE_51_GUNS_Text_1
	hidenamebox
	release
	end


ROUTE51_BUILDER_1::
	faceplayer
	namebox ROUTE51_BUILDER_1_Text_0
	msgbox ROUTE51_BUILDER_1_Text_1
	closemessage
	hidenamebox
	release
	end


ROUTE51_BUILDER_2::
	faceplayer
	namebox ROUTE51_BUILDER_2_Text_0
	msgbox ROUTE51_BUILDER_2_Text_1
	closemessage
	hidenamebox
	release
	end


ROUTE51_BUILDER_3::
	faceplayer
	namebox ROUTE51_BUILDER_3_Text_0
	msgbox ROUTE51_BUILDER_3_Text_1
	closemessage
	hidenamebox
	release
	end


ROUTE51_BUILDER_4::
	faceplayer
	namebox ROUTE51_BUILDER_4_Text_0
	msgbox ROUTE51_BUILDER_4_Text_1
	closemessage
	hidenamebox
	release
	end


BATTLE_ROUTE_51_EFFIGY_Text_0:
	.string "This building will change the world.\p"
	.string "I simply can't let you ruin it for me!$"

BATTLE_ROUTE_51_EFFIGY_Text_1:
	.string "Maybe you're powerful enough to\n"
	.string "control the Homunculus..$"

BATTLE_ROUTE_51_EFFIGY_Text_2:
	.string "Effigy$"

BATTLE_ROUTE_51_GUNS_Text_0:
	.string "8,999\p"
	.string "9,000\p"
	.string "9,001\p"
	.string "...\p"
	.string "9,002..13?\p"
	.string "Argh! You made me lose count! I'll beat\n"
	.string "you to...urghh...a pulp!$"

BATTLE_ROUTE_51_GUNS_Text_1:
	.string "I could really do with a good kebab and\n"
	.string "a cold beer down the pub right about\l"
	.string "now.$"

BATTLE_ROUTE_51_GUNS_Text_2:
	.string "'The Guns'$"

ROUTE51_BUILDER_1_Text_0:
	.string "Bonafido$"

ROUTE51_BUILDER_1_Text_1:
	.string "A'up, mate, how's it gowin'?\p"
	.string "Oh, we already finished workin' on the\n"
	.string "tower and need a new job.\p"
	.string "But til then, we figured we may as well\n"
	.string "wait ta see what else would turns up.$"

ROUTE51_BUILDER_2_Text_0:
	.string "'Black-eye'$"

ROUTE51_BUILDER_2_Text_1:
	.string "This 'ere tower is lookin' good ain't it?\p"
	.string "Us? Just having a little tea break,\n"
	.string "naturally.$"

ROUTE51_BUILDER_3_Text_0:
	.string "'Gummy'$"

ROUTE51_BUILDER_3_Text_1:
	.string "We're playing 'Rock, Paper, Scissors'.\n"
	.string "Can't you tell?\p"
	.string "It's team building!$"

ROUTE51_BUILDER_4_Text_0:
	.string "'No fingers'$"

ROUTE51_BUILDER_4_Text_1:
	.string "Don't suppose you've seen any boots\n"
	.string "around here? Size nine, steel toed,\l"
	.string "brown leather...\p"
	.string "I think some adventurer mighta nicked\n"
	.string "'em!$"
