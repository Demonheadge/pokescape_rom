Moderator_Lobby_MapScripts::
	.byte 0


ModeratorLobby_JMOD_0::
	lock
	faceplayer
	namebox ModeratorLobby_JMOD_0_Text_0
	msgbox ModeratorLobby_JMOD_0_Text_1
	hidenamebox
	release
	end


ModeratorLobby_JMOD_1::
	lock
	faceplayer
	namebox ModeratorLobby_JMOD_1_Text_0
	msgbox ModeratorLobby_JMOD_1_Text_1
	hidenamebox
	release
	end


ModeratorLobby_JMOD_2::
	lock
	faceplayer
	namebox ModeratorLobby_JMOD_2_Text_0
	msgbox ModeratorLobby_JMOD_2_Text_1
	hidenamebox
	release
	end


ModeratorLobby_JMOD_3::
	lock
	faceplayer
	namebox ModeratorLobby_JMOD_3_Text_0
	msgbox ModeratorLobby_JMOD_3_Text_1
	hidenamebox
	release
	end


ModeratorLobby_JMOD_4::
	lock
	faceplayer
	namebox ModeratorLobby_JMOD_4_Text_0
	msgbox ModeratorLobby_JMOD_4_Text_1
	hidenamebox
	release
	end


ModeratorLobby_JMOD_5::
	lock
	faceplayer
	namebox ModeratorLobby_JMOD_5_Text_0
	msgbox ModeratorLobby_JMOD_5_Text_1
	hidenamebox
	giveitem ITEM_ROTTEN_POTATO, 1
	namebox ModeratorLobby_JMOD_5_Text_0
	msgbox ModeratorLobby_JMOD_5_Text_2
	hidenamebox
	release
	end


ModeratorLobby_JMOD_6::
	lock
	faceplayer
	namebox ModeratorLobby_JMOD_6_Text_0
	msgbox ModeratorLobby_JMOD_6_Text_1
	hidenamebox
	release
	end


ModeratorLobby_JMOD_OWLY::
	lock
	faceplayer
	namebox ModeratorLobby_JMOD_OWLY_Text_0
	msgbox ModeratorLobby_JMOD_OWLY_Text_1
	hidenamebox
	goto_if_unset FLAG_UNUSED_0x93B, ModeratorLobby_JMOD_OWLY_2
ModeratorLobby_JMOD_OWLY_1:
	hidenamebox
	release
	end

ModeratorLobby_JMOD_OWLY_2:
	msgbox ModeratorLobby_JMOD_OWLY_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne ModeratorLobby_JMOD_OWLY_4
	goto ModeratorLobby_JMOD_OWLY_1

ModeratorLobby_JMOD_OWLY_4:
	hidenamebox
	setflag FLAG_UNUSED_0x93B
	trainerbattle_no_intro TRAINER_JMOD_OWLY, ModeratorLobby_JMOD_OWLY_Text_3
	namebox ModeratorLobby_JMOD_OWLY_Text_0
	msgbox ModeratorLobby_JMOD_OWLY_Text_4
	hidenamebox
	call GIVE_RANDOM_ITEM
	goto ModeratorLobby_JMOD_OWLY_1


ModeratorLobby_JMOD_0_Text_0:
	.string "Mod Meds$"

ModeratorLobby_JMOD_0_Text_1:
	.string "Welcome fellow Mods to The Lonch Battle\n"
	.string "Clob!\p"
	.string "…{PAUSE 15}…{PAUSE 15}Wait!\n"
	.string "You are not a mod!\p"
	.string "How did you get in here?!$"

ModeratorLobby_JMOD_1_Text_0:
	.string "Mod Chaose$"

ModeratorLobby_JMOD_1_Text_1:
	.string "I have painstackingly choosen the best\n"
	.string "monsters and EV trained them all to the\l"
	.string "maxiumum levels.$"

ModeratorLobby_JMOD_2_Text_0:
	.string "Mod Dolan$"

ModeratorLobby_JMOD_2_Text_1:
	.string "Has anyone seen my duck!?\p"
	.string "Where is my DUCK!\p"
	.string "I cannot battle without my duck!$"

ModeratorLobby_JMOD_3_Text_0:
	.string "Mod Spyro$"

ModeratorLobby_JMOD_3_Text_1:
	.string "ROOOOAR!\p"
	.string "…{PAUSE 15} Did I scare you?\p"
	.string "No?{PAUSE 15}\n"
	.string "What about that bug on you shoulder?$"

ModeratorLobby_JMOD_4_Text_0:
	.string "Mod Camel$"

ModeratorLobby_JMOD_4_Text_1:
	.string "My camels shall help me win this!\p"
	.string "We have a secret weapon!\p"
	.string "Ugthanki dung!\p"
	.string "Wait… now it isn't a secret…$"

ModeratorLobby_JMOD_5_Text_0:
	.string "Mod Daze$"

ModeratorLobby_JMOD_5_Text_1:
	.string "Muhahaha!\p"
	.string "I shall now spawn a rotten potato and\n"
	.string "become the champion!$"

ModeratorLobby_JMOD_5_Text_2:
	.string "Wait… Why didn't that work?\p"
	.string "Where is the potato!$"

ModeratorLobby_JMOD_6_Text_0:
	.string "Mod Shauny$"

ModeratorLobby_JMOD_6_Text_1:
	.string "For the last time it is not my birthday!$"

ModeratorLobby_JMOD_OWLY_Text_0:
	.string "Mod Owly$"

ModeratorLobby_JMOD_OWLY_Text_1:
	.string "Wooo are you?$"

ModeratorLobby_JMOD_OWLY_Text_2:
	.string "Do you wish to challenge them to a\n"
	.string "battle?$"

ModeratorLobby_JMOD_OWLY_Text_3:
	.string "…$"

ModeratorLobby_JMOD_OWLY_Text_4:
	.string "Here have this.$"
