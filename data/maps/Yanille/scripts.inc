Yanille_MapScripts::
	.byte 0


NPC_YANILLE_1::
	lock
	faceplayer
	namebox NPC_YANILLE_1_Text_0
	msgbox NPC_YANILLE_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_YANILLE_2::
	lock
	faceplayer
	namebox NPC_YANILLE_2_Text_0
	msgbox NPC_YANILLE_2_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_YANILLE_3::
	lock
	faceplayer
	namebox NPC_YANILLE_3_Text_0
	msgbox NPC_YANILLE_3_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_YANILLE_4::
	lock
	faceplayer
	namebox NPC_YANILLE_4_Text_0
	msgbox NPC_YANILLE_4_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_YANILLE_5::
	lock
	faceplayer
	namebox NPC_YANILLE_5_Text_0
	msgbox NPC_YANILLE_5_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_YANILLE_6::
	lock
	faceplayer
	namebox NPC_YANILLE_6_Text_0
	msgbox NPC_YANILLE_6_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_YANILLE_7::
	lock
	faceplayer
	namebox NPC_YANILLE_3_Text_0
	msgbox NPC_YANILLE_3_Text_1
	closemessage
	hidenamebox
	release
	end


YANILLE_DOG::
	lock
	msgbox YANILLE_DOG_Text_0
	release
	end


ITEM_YANILLE_PRAYER_POTION::
	finditem ITEM_PRAYER_POTION
	end


NPC_YANILLE_1_Text_0:
	.string "Colonel Radick$"

NPC_YANILLE_1_Text_1:
	.string "Beyond here are the Feldip Hills which\n"
	.string "is major Ogre territory!\p"
	.string "Do not leave these walls unless you can\n"
	.string "defend yourself, as we will be unable to\l"
	.string "rescue you should anything happen!$"

NPC_YANILLE_2_Text_0:
	.string "Guard Frederick$"

NPC_YANILLE_2_Text_1:
	.string "Ugh, the Guard Captain didn't show up\n"
	.string "for duty.\p"
	.string "I bet he's in the pub drinking.. again!$"

NPC_YANILLE_3_Text_0:
	.string "Cupholder$"

NPC_YANILLE_3_Text_1:
	.string "I am a Cupholder.$"

NPC_YANILLE_4_Text_0:
	.string "Zavistic Rarve$"

NPC_YANILLE_4_Text_1:
	.string "Oh bother, someone rang the bell while I\n"
	.string "was in the middle of practicing some\l"
	.string "spells and I've dropped my staff!\p"
	.string "It must around here somewhere, but I\n"
	.string "can't seem to find it..$"

NPC_YANILLE_5_Text_0:
	.string "Pillory Guard$"

NPC_YANILLE_5_Text_1:
	.string "Report to me for punishment!\p"
	.string "Sorry, force of habit. I'm sure there's\n"
	.string "some rotten tomatoes somewhere you\l"
	.string "can throw at this delinquent if you'd\l"
	.string "like.$"

NPC_YANILLE_6_Text_0:
	.string "N00b1234$"

NPC_YANILLE_6_Text_1:
	.string "I got teleported here but the locks are\n"
	.string "spinning too quickly!\p"
	.string "I don't know which one is right, and I\n"
	.string "can't get out.$"

YANILLE_DOG_Text_0:
	.string "You give the dog a gentle pet while it\n"
	.string "dozes in the sun. He's a good doggy!$"
