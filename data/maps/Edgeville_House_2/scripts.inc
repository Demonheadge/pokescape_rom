Edgeville_House_2_MapScripts::
	.byte 0


NPC_EVIL_DAVE::
	lock
	faceplayer
	namebox NPC_EVIL_DAVE_Text_0
	msgbox NPC_EVIL_DAVE_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_DORIS::
	lock
	faceplayer
	namebox NPC_DORIS_Text_0
	msgbox NPC_DORIS_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EVIL_DAVE_Text_0:
	.string "Evil Dave$"

NPC_EVIL_DAVE_Text_1:
	.string "Hey! You're like TOTALLY EVIL right?\p"
	.string "Of course, I can tell just by looking at\n"
	.string "you!\p"
	.string "I'll let you in on a secret...\p"
	.string "I am going to summon DEMONS and\n"
	.string "totally, like, take over the world!\p"
	.string "So far though, I've only managed some\n"
	.string "hell-rats.\p"
	.string "If you want one of your own without all\n"
	.string "the blood magic, you can use a fire rune\l"
	.string "on a rat.\p"
	.string "If you train a cat while you've got one\n"
	.string "of these rats too, you might get an\l"
	.string "extra special surprise!\p"
	.string "Ah-ha-ha-ha-ha-haa!$"

NPC_DORIS_Text_0:
	.string "Doris$"

NPC_DORIS_Text_1:
	.string "Hello dearie, how are you doing?\p"
	.string "Dave? Oh, he's always been evil, I think.\p"
	.string "He used to want to go into Edgeville\n"
	.string "Dungeon and I thought he'd grow up to\l"
	.string "be a mighty adventurer and conquer the\l"
	.string "gym challenge there.\p"
	.string "But it turns out he didn't want to be a\n"
	.string "hero, he wanted to be a monster!{PAUSE 15}\p"
	.string "At least it keeps him happy.$"
