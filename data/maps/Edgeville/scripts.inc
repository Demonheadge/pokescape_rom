Edgeville_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Edgeville_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Edgeville_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 15
	return


ITEM_EDGEVILLE_1::
	finditem ITEM_PURPLE_SWEETS
	end


NPC_EDGEVILLE_1::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_1_Text_0
	msgbox NPC_EDGEVILLE_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_2::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_2_Text_0
	msgbox NPC_EDGEVILLE_2_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_3::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_3_Text_0
	msgbox NPC_EDGEVILLE_3_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_4::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_4_Text_0
	msgbox NPC_EDGEVILLE_4_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_5::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_5_Text_0
	msgbox NPC_EDGEVILLE_5_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_6::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_6_Text_0
	msgbox NPC_EDGEVILLE_6_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_7::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_4_Text_0
	msgbox NPC_EDGEVILLE_7_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_8::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_8_Text_0
	msgbox NPC_EDGEVILLE_8_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_9::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_9_Text_0
	msgbox NPC_EDGEVILLE_9_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_10::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_9_Text_0
	msgbox NPC_EDGEVILLE_10_Text_0
	closemessage
	hidenamebox
	release
	end


EDGEVILLE_SIGN_1::
	lock
	faceplayer
	msgbox EDGEVILLE_SIGN_1_Text_0
	release
	end


EDGEVILLE_SIGN_2::
	lock
	faceplayer
	msgbox EDGEVILLE_SIGN_2_Text_0
	release
	end


NPC_EDGEVILLE_1_Text_0:
	.string "Mugger$"

NPC_EDGEVILLE_1_Text_1:
	.string "Beyond here is the Wilderness.\p"
	.string "I'd suggest steering clear of it if I\n"
	.string "were you.\p"
	.string "Someone might mug you and take your\n"
	.string "stuff..$"

NPC_EDGEVILLE_2_Text_0:
	.string "Fisherman$"

NPC_EDGEVILLE_2_Text_1:
	.string "There's this crazy person in that house\n"
	.string "who lives with his mum.\p"
	.string "If you listen really carefully,\n"
	.string "sometimes you can hear his mum shout\l"
	.string "that he needs a bath, and you can hear\l"
	.string "him yell 'BUT I SMELL POSITIVELY\l"
	.string "EEEVIIILLLL'$"

NPC_EDGEVILLE_3_Text_0:
	.string "Choob$"

NPC_EDGEVILLE_3_Text_1:
	.string "Welcome to Edgeville.\p"
	.string "Are you looking for Vannaka? He's just\n"
	.string "south of here.. in that creepy dungeon!$"

NPC_EDGEVILLE_4_Text_0:
	.string "PVMer$"

NPC_EDGEVILLE_4_Text_1:
	.string "If you go south into the dungeon you\n"
	.string "can face a bunch of monsters.\p"
	.string "Adventurers come from all over Gielinor\n"
	.string "to murder hill giants there for their\l"
	.string "bones.\p"
	.string "It's quite fun actually.$"

NPC_EDGEVILLE_5_Text_0:
	.string "SkillSpecs$"

NPC_EDGEVILLE_5_Text_1:
	.string "Argh! I nearly smited an AGS but the guy\n"
	.string "I was fighting tele'd away..\p"
	.string "I'm going to restock and then head\n"
	.string "north again.\p"
	.string "I better not find you up in the\n"
	.string "Wilderness without your most\l"
	.string "expensive items..$"

NPC_EDGEVILLE_6_Text_0:
	.string "Hanannie$"

NPC_EDGEVILLE_6_Text_1:
	.string "Hey, this is my yew tree! Go get your\n"
	.string "own!$"

NPC_EDGEVILLE_7_Text_0:
	.string "I hear some monsters only evolve in\n"
	.string "certain areas.\p"
	.string "For instance, one of my chickens\n"
	.string "evolved differently while I was on\l"
	.string "Karamja!$"

NPC_EDGEVILLE_8_Text_0:
	.string "Man$"

NPC_EDGEVILLE_8_Text_1:
	.string "Edgeville was recently rebuilt.\p"
	.string "But with all these adventurers\n"
	.string "constantly using the place it almost\l"
	.string "feels well lived.$"

NPC_EDGEVILLE_9_Text_0:
	.string "Jailer$"

NPC_EDGEVILLE_9_Text_1:
	.string "Edgeville doesn't really have a monarch\n"
	.string "of its own, so we abide by the King of\l"
	.string "Misthalin.\p"
	.string "It makes things easier when you can\n"
	.string "just follow orders without thinking\l"
	.string "too much about it.$"

NPC_EDGEVILLE_10_Text_0:
	.string "Let this be a fair warning. If you cause\n"
	.string "any trouble, we will lock you up and\l"
	.string "only feed you bread and water.$"

EDGEVILLE_SIGN_1_Text_0:
	.string "North to Edgeville.\p"
	.string "West to the Monastery and Dwarven\n"
	.string "Mountain.$"

EDGEVILLE_SIGN_2_Text_0:
	.string "COMING SOON: a route to the Grand\n"
	.string "Exchange.\p"
	.string "Courtesy of King Roald III of Varrock.$"
