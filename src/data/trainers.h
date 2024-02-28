const struct Trainer gTrainers[] =
	{
    [TRAINER_NONE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = 0,
        .party = {.NoItemDefaultMoves = NULL},
        .scaling = FALSE,
    },

    [TRAINER_MAGGIE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_WITCH,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_maggie,
        .trainerName = _("MAGGIE"),
        .items = {ITEM_BREAD, ITEM_BREAD, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_Maggie),
        .party = {.NoItemDefaultMoves = sParty_Maggie},
    },

    [TRAINER_GOBLIN_1_ROUTE1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("WARTFOOT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_Goblin1_Route1),
        .party = {.NoItemDefaultMoves = sParty_Goblin1_Route1},
    },

    [TRAINER_GOBLIN_2_ROUTE1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("FROGFACE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_Goblin2_Route1),
        .party = {.NoItemDefaultMoves = sParty_Goblin2_Route1},
    },

    [TRAINER_RSN_ROUTE1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_NOOB,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_noob_default,
        .trainerName = _("BOB"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_Trainer1_Route1),
        .party = {.NoItemDefaultMoves = sParty_Trainer1_Route1},
    },

    [TRAINER_GOBLIN_3_ROUTE1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("MUDBEARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_Goblin3),
        .party = {.NoItemDefaultMoves = sParty_Goblin3},
    },

    [TRAINER_GOBLIN_4_ROUTE1] = 
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("FEETFINGERS"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE1_Goblin4),
        .party = {.ItemDefaultMoves = sParty_ROUTE1_Goblin4},
        .scaling = FALSE,
    },

//----------------------------------------------------------------------------------------------------------------------
//MILL LANE MILL----------------------------------------------------------------------------------------------------------------------
    [TRAINER_TRAINER1_MILLLANEMILL] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_HUNTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_hunter_f,
        .trainerName = _("KEBBIE"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_TRAINER1_MILLLANEMILL),
        .party = {.ItemDefaultMoves = sParty_TRAINER1_MILLLANEMILL},
        .scaling = FALSE,
    },
    [TRAINER_TRAINER2_MILLLANEMILL] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_FARMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_farmer,
        .trainerName = _("HOPS"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_TRAINER2_MILLLANEMILL),
        .party = {.ItemDefaultMoves = sParty_TRAINER2_MILLLANEMILL},
        .scaling = FALSE,
    },
    [TRAINER_TRAINER3_MILLLANEMILL] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_MILLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miller,
        .trainerName = _("CASSIDY"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_TRAINER3_MILLLANEMILL),
        .party = {.ItemDefaultMoves = sParty_TRAINER3_MILLLANEMILL},
        .scaling = FALSE,
    },
    [TRAINER_TRAINER4_MILLLANEMILL] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_MILLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miller,
        .trainerName = _("DIXIE"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_TRAINER4_MILLLANEMILL),
        .party = {.ItemDefaultMoves = sParty_TRAINER4_MILLLANEMILL},
        .scaling = FALSE,
    },
    [TRAINER_MILLIE_MILLER_MILLLANEMILL] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_MILLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miller,
        .trainerName = _("MILLIE"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_MILLIE_MILLER_MILLLANEMILL),
        .party = {.ItemDefaultMoves = sParty_MILLIE_MILLER_MILLLANEMILL},
        .scaling = FALSE,
    },
//----------------------------------------------------------------------------------------------------------------------

    [TRAINER_FARMER_ROUTE1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FARMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_farmer,
        .trainerName = _("JOHN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_Farmer_Route1),
        .party = {.NoItemDefaultMoves = sParty_Farmer_Route1},
    },

    [TRAINER_MUGGER_ROUTE4] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_MUGGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mugger,
        .trainerName = _("MILES"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_Mugger_Route4),
        .party = {.ItemDefaultMoves = sParty_Mugger_Route4},
        .scaling = FALSE,
    },
    [TRAINER_FARMER_ROUTE4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_FARMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_farmer,
        .trainerName = _("LEEROY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_Farmer_Route4),
        .party = {.ItemDefaultMoves = sParty_Farmer_Route4},
    },

    [TRAINER_SCAMMER_ROUTE4] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_SCAMMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_scammer,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_Scammer_Route4),
        .party = {.ItemDefaultMoves = sParty_Scammer_Route4},
        .scaling = FALSE,
    },
    //route 6
    [TRAINER_MUGGER_ROUTE6] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_MUGGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mugger,
        .trainerName = _("LEO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_Mugger_Route6),
        .party = {.ItemDefaultMoves = sParty_Mugger_Route6},
    },

    [TRAINER_GOBLIN_4_ROUTE12] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("WORMTONGUE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_Goblin4),
        .party = {.NoItemDefaultMoves = sParty_Goblin4},
    },

    [TRAINER_GOBLIN_5_ROUTE12] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("FEETHANDS"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_Goblin5),
        .party = {.ItemDefaultMoves = sParty_Goblin5},
        .scaling = FALSE,
    },

    [TRAINER_GOBLIN_6_ROUTE12] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("EYEMONGER"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_Goblin6),
        .party = {.ItemDefaultMoves = sParty_Goblin6},
        .scaling = FALSE,
    },

    [TRAINER_GOBLIN_7_ROUTE12] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("SMELLYBACK"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_Goblin7),
        .party = {.ItemDefaultMoves = sParty_Goblin7},
        .scaling = FALSE,
    },

     [TRAINER_RSN_ROUTE12] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_NOOB,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_noob_default,
        .trainerName = _("NOTANOOB37"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_Rsn_Route12),
        .party = {.ItemDefaultMoves = sParty_Rsn_Route12},
        .scaling = FALSE,
    },



    //lumrbidge gym
    [TRAINER_LUMBRIDGE_GYM1] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_MILLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_miller,
        .trainerName = _("ANABELL"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_Lumbridge_Gym1),
        .party = {.ItemDefaultMoves = sParty_Lumbridge_Gym1},
        .scaling = FALSE,

    },
    [TRAINER_LUMBRIDGE_GYM2] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_FARMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_farmer,
        .trainerName = _("GIDEON"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_Lumbridge_Gym2),
        .party = {.ItemDefaultMoves = sParty_Lumbridge_Gym2},
        .scaling = FALSE,
    },
        [TRAINER_LUMBRIDGE_GYM3] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_MILLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_miller,
        .trainerName = _("JESSE"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_Lumbridge_Gym3),
        .party = {.ItemDefaultMoves = sParty_Lumbridge_Gym3},
        .scaling = FALSE,
    },
        [TRAINER_LUMBRIDGE_GYM4] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_FARMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_farmer,
        .trainerName = _("JERICHO"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_Lumbridge_Gym4),
        .party = {.ItemDefaultMoves = sParty_Lumbridge_Gym4},
        .scaling = FALSE,
    },

    

     [TRAINER_RSN_LUM_SWAMP] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("SLIMETHIGHS"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_Rsn_Lum_Swamp),
        .party = {.ItemDefaultMoves = sParty_Rsn_Lum_Swamp},
        .scaling = FALSE,
    },
    [TRAINER_MUGGER_LUM_SWAMP] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_MUGGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mugger,
        .trainerName = _("ROBIN"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_Mugger_Lum_Swamp),
        .party = {.ItemDefaultMoves = sParty_Mugger_Lum_Swamp},
        .scaling = FALSE,
    },
    [TRAINER_SKELETON_LUM_SWAMP] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("BRITTLEBONE"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_Skeleton_Lum_Swamp),
        .party = {.ItemDefaultMoves = sParty_Skeleton_Lum_Swamp},
        .scaling = FALSE,
    },
    [TRAINER_LUM_SWAMP_GRASSTEETH] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("GRASSTEETH"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_Lum_Swamp_GrassTeeth),
        .party = {.ItemDefaultMoves = sParty_Lum_Swamp_GrassTeeth},
        .scaling = FALSE,
    },
    //MITHRILMAN
    [TRAINER_MITHRILMAN1] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_MITHRILMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mithrilman,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_MITHRILMAN1),
        .party = {.ItemDefaultMoves = sParty_MITHRILMAN1},
        .scaling = FALSE,
    },
    [TRAINER_MITHRILMAN2] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_MITHRILMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mithrilman,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_MITHRILMAN2),
        .party = {.ItemDefaultMoves = sParty_MITHRILMAN2},
        .scaling = FALSE,
    },
    [TRAINER_MITHRILMAN3] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_MITHRILMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mithrilman,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_MITHRILMAN3),
        .party = {.ItemDefaultMoves = sParty_MITHRILMAN3},
        .scaling = FALSE,
    },
    [TRAINER_MITHRILMAN4] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_MITHRILMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mithrilman,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_MITHRILMAN4),
        .party = {.ItemDefaultMoves = sParty_MITHRILMAN4},
        .scaling = FALSE,
    },
    [TRAINER_MITHRILMAN5] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_MITHRILMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mithrilman,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_MITHRILMAN5),
        .party = {.ItemDefaultMoves = sParty_MITHRILMAN5},
        .scaling = FALSE,
    },
    [TRAINER_MITHRILMAN6] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_MITHRILMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mithrilman,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_MITHRILMAN6),
        .party = {.ItemDefaultMoves = sParty_MITHRILMAN6},
        .scaling = FALSE,
    },
    [TRAINER_MITHRILMAN7] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_MITHRILMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mithrilman,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_MITHRILMAN7),
        .party = {.ItemDefaultMoves = sParty_MITHRILMAN7},
        .scaling = FALSE,
    },
    [TRAINER_MITHRILMAN8] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_MITHRILMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mithrilman,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_MITHRILMAN8),
        .party = {.ItemDefaultMoves = sParty_MITHRILMAN8},
        .scaling = FALSE,
    },
    [TRAINER_MITHRILMAN9] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_MITHRILMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mithrilman,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_MITHRILMAN9),
        .party = {.ItemDefaultMoves = sParty_MITHRILMAN9},
        .scaling = FALSE,
    },
    [TRAINER_MITHRILMAN10] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_MITHRILMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mithrilman,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_MITHRILMAN10),
        .party = {.ItemDefaultMoves = sParty_MITHRILMAN10},
        .scaling = FALSE,
    },

//----------------------------------------------------------------------------------------------------------------------

    [TRAINER_KARAMJAVOLCANO_HAM_ADMIN_PATTY] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_HAM_BOSS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HAM,
        .trainerPic = TRAINER_PIC_ham_grunt_f,
        .trainerName = _("PATTY"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_KaramjaVolcano_HAM_ADMIN_PATTY),
        .party = {.ItemDefaultMoves = sParty_KaramjaVolcano_HAM_ADMIN_PATTY},
        .scaling = FALSE,
    },


    [TRAINER_KARAMJAVOLCANO_HAM_GRUNT_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_HAM_GRUNT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HAM,
        .trainerPic = TRAINER_PIC_ham_grunt_f,
        .trainerName = _("GRUNT"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_KaramjaVolcano_HAM_GRUNT_1),
        .party = {.ItemDefaultMoves = sParty_KaramjaVolcano_HAM_GRUNT_1},
        .scaling = FALSE,
    },

    [TRAINER_KARAMJAVOLCANO_HAM_GRUNT_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_HAM_GRUNT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HAM,
        .trainerPic = TRAINER_PIC_ham_grunt_f,
        .trainerName = _("GRUNT"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_KaramjaVolcano_HAM_GRUNT_2),
        .party = {.ItemDefaultMoves = sParty_KaramjaVolcano_HAM_GRUNT_2},
        .scaling = FALSE,
    },

    [TRAINER_KARAMJAVOLCANO_HAM_GRUNT_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_HAM_GRUNT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HAM,
        .trainerPic = TRAINER_PIC_ham_grunt_f,
        .trainerName = _("GRUNT"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_KaramjaVolcano_HAM_GRUNT_3),
        .party = {.ItemDefaultMoves = sParty_KaramjaVolcano_HAM_GRUNT_3},
        .scaling = FALSE,
    },

    [TRAINER_KARAMJAVOLCANO_HAM_GRUNT_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_HAM_GRUNT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HAM,
        .trainerPic = TRAINER_PIC_ham_grunt_f,
        .trainerName = _("GRUNT"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_KaramjaVolcano_HAM_GRUNT_4),
        .party = {.ItemDefaultMoves = sParty_KaramjaVolcano_HAM_GRUNT_4},
        .scaling = FALSE,
    },

    [TRAINER_KARAMJAVOLCANO_HAM_GRUNT_5] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_HAM_GRUNT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HAM,
        .trainerPic = TRAINER_PIC_ham_grunt_f,
        .trainerName = _("GRUNT"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_KaramjaVolcano_HAM_GRUNT_5),
        .party = {.ItemDefaultMoves = sParty_KaramjaVolcano_HAM_GRUNT_5},
        .scaling = FALSE,
    },

    [TRAINER_KARAMJAVOLCANO_HAM_GRUNT_6] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_HAM_GRUNT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HAM,
        .trainerPic = TRAINER_PIC_ham_grunt_f,
        .trainerName = _("GRUNT"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_KaramjaVolcano_HAM_GRUNT_6),
        .party = {.ItemDefaultMoves = sParty_KaramjaVolcano_HAM_GRUNT_6},
        .scaling = FALSE,
    },

    [TRAINER_KARAMJAVOLCANO_SKELETON_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Humurus"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_KaramjaVolcano_SKELETON_1),
        .party = {.ItemDefaultMoves = sParty_KaramjaVolcano_SKELETON_1},
        .scaling = FALSE,
    },

//------------------------------------- DRAYNOR MANOR
    [TRAINER_DRAYNOR_MANOR_COUNT_DRAYNOR] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_COUNT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_count_draynor,
        .trainerName = _("DRAYNOR"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_DRAYNOR_MANOR_COUNT_DRAYNOR),
        .party = {.ItemDefaultMoves = sParty_DRAYNOR_MANOR_COUNT_DRAYNOR},
        .scaling = FALSE,
    },

    [TRAINER_DRAYNOR_MANOR_SKELETON_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("VERTEBRAE"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_DRAYNOR_MANOR_SKELETON_1),
        .party = {.ItemDefaultMoves = sParty_DRAYNOR_MANOR_SKELETON_1},
        .scaling = FALSE,
    },

    [TRAINER_DRAYNOR_MANOR_SKELETON_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("MCBONEFACE"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_DRAYNOR_MANOR_SKELETON_2),
        .party = {.ItemDefaultMoves = sParty_DRAYNOR_MANOR_SKELETON_2},
        .scaling = FALSE,
    },

    [TRAINER_DRAYNOR_MANOR_TRAINER_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_DARK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("WIZARD"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_DRAYNOR_MANOR_TRAINER_3),
        .party = {.ItemDefaultMoves = sParty_DRAYNOR_MANOR_TRAINER_3},
        .scaling = FALSE,
    },

    [TRAINER_DRAYNOR_MANOR_SKELETON_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("TARSUS"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_DRAYNOR_MANOR_SKELETON_4),
        .party = {.ItemDefaultMoves = sParty_DRAYNOR_MANOR_SKELETON_4},
        .scaling = FALSE,
    },

    [TRAINER_DRAYNOR_MANOR_SKELETON_5] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("STERNUM"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_DRAYNOR_MANOR_SKELETON_5),
        .party = {.ItemDefaultMoves = sParty_DRAYNOR_MANOR_SKELETON_5},
        .scaling = FALSE,
    },

    [TRAINER_DRAYNOR_MANOR_SKELETON_6] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("COLLAR"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_DRAYNOR_MANOR_SKELETON_6),
        .party = {.ItemDefaultMoves = sParty_DRAYNOR_MANOR_SKELETON_6},
        .scaling = FALSE,
    },

    [TRAINER_DRAYNOR_MANOR_SKELETON_7] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("PELVIS"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_DRAYNOR_MANOR_SKELETON_7),
        .party = {.ItemDefaultMoves = sParty_DRAYNOR_MANOR_SKELETON_7},
        .scaling = FALSE,
    },

    [TRAINER_DRAYNOR_MANOR_SKELETON_8] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("RIBS"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_DRAYNOR_MANOR_SKELETON_8),
        .party = {.ItemDefaultMoves = sParty_DRAYNOR_MANOR_SKELETON_8},
        .scaling = FALSE,
    },

//-----------ROUTE 2

    [TRAINER_ROUTE2_TRAINER_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_SKILLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skiller,
        .trainerName = _("HOW2TYPE"),
        .items = {ITEM_BREAD, ITEM_BREAD, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE2_TRAINER_1),
        .party = {.ItemDefaultMoves = sParty_ROUTE2_TRAINER_1},
        .scaling = FALSE,
    },

    [TRAINER_ROUTE2_TRAINER_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_wizard_m,
        .trainerName = _("TAM MCGRUB"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE2_TRAINER_2),
        .party = {.ItemDefaultMoves = sParty_ROUTE2_TRAINER_2},
        .scaling = FALSE,
    },

    [TRAINER_ROUTE2_TRAINER_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_FISHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_fisher,
        .trainerName = _("CAKEBAWS"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE2_TRAINER_3),
        .party = {.ItemDefaultMoves = sParty_ROUTE2_TRAINER_3},
        .scaling = FALSE,
    },

    [TRAINER_ROUTE2_TRAINER_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_FISHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_fisher,
        .trainerName = _("SLIMYTEM"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE2_TRAINER_4),
        .party = {.ItemDefaultMoves = sParty_ROUTE2_TRAINER_4},
        .scaling = FALSE,
    },

    [TRAINER_ROUTE2_TRAINER_5] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_DARK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("WIZARD"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE2_TRAINER_5),
        .party = {.ItemDefaultMoves = sParty_ROUTE2_TRAINER_5},
        .scaling = FALSE,
    },

    [TRAINER_ROUTE2_TRAINER_6] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_DARK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("WIZARD"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE2_TRAINER_6),
        .party = {.ItemDefaultMoves = sParty_ROUTE2_TRAINER_6},
        .scaling = FALSE,
    },

    [TRAINER_ROUTE2_TRAINER_7] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_BOT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_bot_woodcutting,
        .trainerName = _("WOODCUTTING"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE2_TRAINER_7),
        .party = {.ItemDefaultMoves = sParty_ROUTE2_TRAINER_7},
        .scaling = FALSE,
    },

//--- WIZARDS TOWER

        [TRAINER_WIZARDSTOWER_TRAINER_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_wizard_m,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_WIZARDSTOWER_TRAINER_1),
        .party = {.ItemDefaultMoves = sParty_WIZARDSTOWER_TRAINER_1},
        .scaling = FALSE,
    },

        [TRAINER_WIZARDSTOWER_TRAINER_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_wizard_m,
        .trainerName = _("GOLDBERG"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_WIZARDSTOWER_TRAINER_2),
        .party = {.ItemDefaultMoves = sParty_WIZARDSTOWER_TRAINER_2},
        .scaling = FALSE,
    },

        [TRAINER_WIZARDSTOWER_TRAINER_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_wizard_m,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_WIZARDSTOWER_TRAINER_3),
        .party = {.ItemDefaultMoves = sParty_WIZARDSTOWER_TRAINER_3},
        .scaling = FALSE,
    },

        [TRAINER_WIZARDSTOWER_TRAINER_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_wizard_m,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_WIZARDSTOWER_TRAINER_4),
        .party = {.ItemDefaultMoves = sParty_WIZARDSTOWER_TRAINER_4},
        .scaling = FALSE,
    },

        [TRAINER_WIZARDSTOWER_TRAINER_MYRTLE] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_wizard_f,
        .trainerName = _("MYRTLE"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_WIZARDSTOWER_TRAINER_MYRTLE),
        .party = {.ItemDefaultMoves = sParty_WIZARDSTOWER_TRAINER_MYRTLE},
        .scaling = FALSE,
    },



    //ROUTE 3

    [TRAINER_ROUTE3_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SKILLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skiller,
        .trainerName = _("IPWNSKILLS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE3_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE3_TRAINER_1},
    },

    [TRAINER_ROUTE5_CAPTAINTOCK] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PIRATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_pirate,
        .trainerName = _("CPT. TOCK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE5_CAPTIANTOCK),
        .party = {.NoItemDefaultMoves = sParty_ROUTE5_CAPTIANTOCK},
    },

    [TRAINER_ROUTE5_WOODCUTTER] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_WOODCUTTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_woodcutter,
        .trainerName = _("CHOPSALOT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE5_WOODCUTTER),
        .party = {.ItemDefaultMoves = sParty_ROUTE5_WOODCUTTER},
    },

    [TRAINER_ROUTE10_MONK] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MONK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_monk,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE10_MONK),
        .party = {.NoItemDefaultMoves = sParty_ROUTE10_MONK},
    },

    [TRAINER_ROUTE10_GOBLIN_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("FEETSTOMPER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE10_GOBLIN_1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE10_GOBLIN_1},
    },

    [TRAINER_ROUTE10_GOBLIN_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("WINDBURSTER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE10_GOBLIN_2),
        .party = {.ItemDefaultMoves = sParty_ROUTE10_GOBLIN_2},
    },

    [TRAINER_ROUTE8_THIEF] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_SCAMMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_scammer,
        .trainerName = _("Jonny"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE8_THIEF),
        .party = {.ItemDefaultMoves = sParty_ROUTE8_THIEF},
        .scaling = FALSE,
    },

    [TRAINER_ROUTE8_NOOB] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_NOOB,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_noob_default,
        .trainerName = _("Fr0gg3r"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE8_NOOB),
        .party = {.ItemDefaultMoves = sParty_ROUTE8_NOOB},
        .scaling = FALSE,
    },

    [TRAINER_ROUTE8_DnD] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_DnDer,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_dnd,
        .trainerName = _("NootGurl"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE8_DnD),
        .party = {.ItemDefaultMoves = sParty_ROUTE8_DnD},
        .scaling = FALSE,
    },

    [TRAINER_ROUTE8_MINER_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _("TakeUrPick"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE8_MINER_1),
        .party = {.ItemDefaultMoves = sParty_ROUTE8_MINER_1},
        .scaling = FALSE,
    },

    [TRAINER_ROUTE8_WOODCUTTER] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_WOODCUTTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_woodcutter,
        .trainerName = _("Axe El"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE8_WOODCUTTER),
        .party = {.ItemDefaultMoves = sParty_ROUTE8_WOODCUTTER},
        .scaling = FALSE,
    },

    [TRAINER_ROUTE8_MINER_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _("OreUOK"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE8_MINER_2),
        .party = {.ItemDefaultMoves = sParty_ROUTE8_MINER_2},
        .scaling = FALSE,
    },

    [TRAINER_ROUTE8_WIZARD_AIR] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("AIR"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE8_WIZARD_AIR),
        .party = {.ItemDefaultMoves = sParty_ROUTE8_WIZARD_AIR},
        .scaling = FALSE,
    },

    [TRAINER_ROUTE8_WIZARD_WATER] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("WATER"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE8_WIZARD_WATER),
        .party = {.ItemDefaultMoves = sParty_ROUTE8_WIZARD_WATER},
        .scaling = FALSE,
    },

    [TRAINER_ROUTE8_WIZARD_EARTH] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("EARTH"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE8_WIZARD_EARTH),
        .party = {.ItemDefaultMoves = sParty_ROUTE8_WIZARD_EARTH},
        .scaling = FALSE,
    },

    [TRAINER_ROUTE8_WIZARD_FIRE] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("FIRE"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE8_WIZARD_FIRE),
        .party = {.ItemDefaultMoves = sParty_ROUTE8_WIZARD_FIRE},
        .scaling = FALSE,
    },

    [TRAINER_ROUTE8_WIZARD_MALIGNIUS_MORTIFER] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("MALIGNIUS"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE8_WIZARD_MALIGNIUS_MORTIFER),
        .party = {.ItemDefaultMoves = sParty_ROUTE8_WIZARD_MALIGNIUS_MORTIFER},
        .scaling = FALSE,
    },

    //ROUTE 9
    [TRAINER_ROUTE9_GOBLIN_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("HOBS"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE9_GOBLIN_1),
        .party = {.ItemDefaultMoves = sParty_ROUTE9_GOBLIN_1},
        .scaling = FALSE,
    },

    [TRAINER_ROUTE9_GOBLIN_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE9_GOBLIN_2),
        .party = {.ItemDefaultMoves = sParty_ROUTE9_GOBLIN_2},
        .scaling = FALSE,
    },

    [TRAINER_ROUTE9_GOBLIN_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("SNOWTOES"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE9_GOBLIN_3),
        .party = {.ItemDefaultMoves = sParty_ROUTE9_GOBLIN_3},
        .scaling = FALSE,
    },

    [TRAINER_ROUTE9_GOBLIN_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE9_GOBLIN_4),
        .party = {.ItemDefaultMoves = sParty_ROUTE9_GOBLIN_4},
        .scaling = FALSE,
    },

    [TRAINER_ROUTE9_CHEF] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_CHEF,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_cook,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE9_CHEF),
        .party = {.ItemDefaultMoves = sParty_ROUTE9_CHEF},
        .scaling = FALSE,
    },

    [TRAINER_ROUTE9_MUGGER] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_MUGGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mugger,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE9_MUGGER),
        .party = {.ItemDefaultMoves = sParty_ROUTE9_MUGGER},
        .scaling = FALSE,
    },

    [TRAINER_ROUTE9_GUTHIX_WIZARD] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_guthix_wizard,
        .trainerName = _("GUTHIX"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE9_GUTHIX_WIZARD),
        .party = {.ItemDefaultMoves = sParty_ROUTE9_GUTHIX_WIZARD},
        .scaling = FALSE,
    },

    [TRAINER_ROUTE9_MINER_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE9_MINER_1),
        .party = {.ItemDefaultMoves = sParty_ROUTE9_MINER_1},
        .scaling = FALSE,
    },

    [TRAINER_ROUTE9_MINER_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE9_MINER_2),
        .party = {.ItemDefaultMoves = sParty_ROUTE9_MINER_2},
        .scaling = FALSE,
    },
    //route 11

    [TRAINER_ROUTE11_QUESTER] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_QUESTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_quester,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE11_QUESTER),
        .party = {.NoItemDefaultMoves = sParty_ROUTE11_QUESTER},
    },

    [TRAINER_ROUTE11_PIRATE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PIRATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_pirate,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE11_PIRATE),
        .party = {.NoItemDefaultMoves = sParty_ROUTE11_PIRATE},
    },

    [TRAINER_ROUTE11_SAILOR] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_sailor,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE11_SAILOR),
        .party = {.NoItemDefaultMoves = sParty_ROUTE11_SAILOR},
    },

    [TRAINER_ROUTE11_PvMer] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SLAYER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_slayer,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE11_PvMer),
        .party = {.NoItemDefaultMoves = sParty_ROUTE11_PvMer},
    },

    [TRAINER_ROUTE11_GRACEFUL] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_AGILE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_SKILLER,
        .trainerPic = TRAINER_PIC_graceful,
        .trainerName = _("ERKEE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE11_GRACEFUL),
        .party = {.NoItemDefaultMoves = sParty_ROUTE11_GRACEFUL},
    },

    [TRAINER_FALADOR_MODTIMBO] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_JMOD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HAM,
        .trainerPic = TRAINER_PIC_jmod_m,
        .trainerName = _("TIMBO"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_FALADOR_MODTIMBO),
        .party = {.ItemDefaultMoves = sParty_FALADOR_MODTIMBO},
        .scaling = FALSE,
    },

//LUMBRIDGE SWAMP CAVES
    [TRAINER_LUMBRIDGESWAMPCAVE_FISHERMAN_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_FISHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_fisher,
        .trainerName = _("EELFROG330"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_LUMBRIDGESWAMPCAVE_FISHERMAN_1),
        .party = {.ItemDefaultMoves = sParty_LUMBRIDGESWAMPCAVE_FISHERMAN_1},
        .scaling = FALSE,
    },

    [TRAINER_LUMBRIDGESWAMPCAVE_SKELETON_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("CRISPYBONES"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_LUMBRIDGESWAMPCAVE_SKELETON_1),
        .party = {.ItemDefaultMoves = sParty_LUMBRIDGESWAMPCAVE_SKELETON_1},
        .scaling = FALSE,
    },

    [TRAINER_LUMBRIDGESWAMPCAVE_PVMER_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_SLAYER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_slayer,
        .trainerName = _("B 0 0 M E R"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_LUMBRIDGESWAMPCAVE_PVMER_1),
        .party = {.ItemDefaultMoves = sParty_LUMBRIDGESWAMPCAVE_PVMER_1},
        .scaling = FALSE,
    },

    [TRAINER_DRAYNORSEWERS_SKELETON_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("SKULLY"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_DRAYNORSEWERS_SKELETON_1),
        .party = {.ItemDefaultMoves = sParty_DRAYNORSEWERS_SKELETON_1},
        .scaling = FALSE,
    },

    [TRAINER_DRAYNORSEWERS_SKELETON_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("TIBIA"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_DRAYNORSEWERS_SKELETON_2),
        .party = {.ItemDefaultMoves = sParty_DRAYNORSEWERS_SKELETON_2},
        .scaling = FALSE,
    },

    [TRAINER_ROUTE6_FIREMAKER] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_FIREMAKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_firemaking,
        .trainerName = _("Ash"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE6_FIREMAKER),
        .party = {.ItemDefaultMoves = sParty_ROUTE6_FIREMAKER},
        .scaling = FALSE,
    },
//ASGANIRNA DUNGEON
    [TRAINER_AsgarnianDungeon_MUGGER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MUGGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mugger,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_AsgarnianDungeon_MUGGER_1),
        .party = {.ItemDefaultMoves = sParty_AsgarnianDungeon_MUGGER_1},
    },

    [TRAINER_AsgarnianDungeon_PIRATE_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PIRATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_pirate,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_AsgarnianDungeon_PIRATE_1),
        .party = {.ItemDefaultMoves = sParty_AsgarnianDungeon_PIRATE_1},
    },

    [TRAINER_AsgarnianDungeon_PIRATE_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PIRATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_pirate,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_AsgarnianDungeon_PIRATE_2),
        .party = {.ItemDefaultMoves = sParty_AsgarnianDungeon_PIRATE_2},
    },

    [TRAINER_AsgarnianDungeon_PIRATE_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PIRATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_pirate,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_AsgarnianDungeon_PIRATE_3),
        .party = {.ItemDefaultMoves = sParty_AsgarnianDungeon_PIRATE_3},
    },

    [TRAINER_AsgarnianDungeon_PIRATE_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PIRATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_pirate,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_AsgarnianDungeon_PIRATE_4),
        .party = {.ItemDefaultMoves = sParty_AsgarnianDungeon_PIRATE_4},
    },

    [TRAINER_AsgarnianDungeon_GOBLIN_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("GRUNTKNEE"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_AsgarnianDungeon_GOBLIN_1),
        .party = {.ItemDefaultMoves = sParty_AsgarnianDungeon_GOBLIN_1},
        .scaling = FALSE,
    },

    [TRAINER_AsgarnianDungeon_GOBLIN_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("SHIVERKNEES"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_AsgarnianDungeon_GOBLIN_2),
        .party = {.ItemDefaultMoves = sParty_AsgarnianDungeon_GOBLIN_2},
        .scaling = FALSE,
    },

    [TRAINER_AsgarnianDungeon_QUESTER] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_QUESTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_quester,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_AsgarnianDungeon_QUESTER),
        .party = {.ItemDefaultMoves = sParty_AsgarnianDungeon_QUESTER},
        .scaling = FALSE,
    },

    [TRAINER_AsgarnianDungeon_PVM_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_SLAYER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_slayer,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_AsgarnianDungeon_PVM_1),
        .party = {.ItemDefaultMoves = sParty_AsgarnianDungeon_PVM_1},
        .scaling = FALSE,
    },

    [TRAINER_AsgarnianDungeon_PVM_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_SLAYER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_slayer,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_AsgarnianDungeon_PVM_2),
        .party = {.ItemDefaultMoves = sParty_AsgarnianDungeon_PVM_2},
        .scaling = FALSE,
    },

    [TRAINER_ROUTE6_GUARD_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_guard_falador,
        .trainerName = _("Jones"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE6_GUARD_1),
        .party = {.ItemDefaultMoves = sParty_ROUTE6_GUARD_1},
        .scaling = FALSE,
    },
//DWARVEN MINES
    [TRAINER_DWARVENMINES_BLACKKNIGHT] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_BLACK_KNIGHT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_black_knight_m,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_DWARVENMINES_BLACKKNIGHT),
        .party = {.ItemDefaultMoves = sParty_DWARVENMINES_BLACKKNIGHT},
        .scaling = FALSE,
    },
    [TRAINER_DWARVENMINES_HAM] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_HAM_GRUNT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_ham_grunt_m,
        .trainerName = _("GRUNT"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_DWARVENMINES_HAM),
        .party = {.ItemDefaultMoves = sParty_DWARVENMINES_HAM},
        .scaling = FALSE,
    },
    [TRAINER_DWARVENMINES_SKILLER] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_SKILLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skiller,
        .trainerName = _("TREET0PS"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_DWARVENMINES_SKILLER),
        .party = {.ItemDefaultMoves = sParty_DWARVENMINES_SKILLER},
        .scaling = FALSE,
    },
    [TRAINER_DWARVENMINES_MINER] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _("D33PD1V3"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_DWARVENMINES_MINER),
        .party = {.ItemDefaultMoves = sParty_DWARVENMINES_MINER},
        .scaling = FALSE,
    },
    [TRAINER_DWARVENMINES_DWARF_1] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_DWARF,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_dwarf_m,
        .trainerName = _("SVERRE"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_DWARVENMINES_DWARF_1),
        .party = {.ItemDefaultMoves = sParty_DWARVENMINES_DWARF_1},
        .scaling = FALSE,
    },
    [TRAINER_DWARVENMINES_DWARF_2] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_DWARF,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_dwarf_m,
        .trainerName = _("STEINAR"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_DWARVENMINES_DWARF_2),
        .party = {.ItemDefaultMoves = sParty_DWARVENMINES_DWARF_2},
        .scaling = FALSE,
    },
    [TRAINER_DWARVENMINES_DWARF_3] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_DWARF,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_dwarf_m,
        .trainerName = _("VALDEMAR"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_DWARVENMINES_DWARF_3),
        .party = {.ItemDefaultMoves = sParty_DWARVENMINES_DWARF_3},
        .scaling = FALSE,
    },
    [TRAINER_DWARVENMINES_DWARF_4] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_DWARF,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_dwarf_m,
        .trainerName = _("DROBAK"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_DWARVENMINES_DWARF_4),
        .party = {.ItemDefaultMoves = sParty_DWARVENMINES_DWARF_4},
        .scaling = FALSE,
    },

///FALADOR GYM
    [TRAINER_FALADOR_GYM_1] = 
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_WHITE_KNIGHT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_white_knight_m,
        .trainerName = _("SIR THEO"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_FALADOR_GYM_1),
        .party = {.ItemDefaultMoves = sParty_FALADOR_GYM_1},
        .scaling = FALSE,
    },

    [TRAINER_FALADOR_GYM_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_WHITE_KNIGHT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_white_knight_m,
        .trainerName = _("SIR EMONY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_FALADOR_GYM_2),
        .party = {.ItemDefaultMoves = sParty_FALADOR_GYM_2},
    },

    [TRAINER_FALADOR_GYM_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_WHITE_KNIGHT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_white_knight_m,
        .trainerName = _("SIR PRYCE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_FALADOR_GYM_3),
        .party = {.NoItemDefaultMoves = sParty_FALADOR_GYM_3},
    },

    [TRAINER_FALADOR_GYM_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_WHITE_KNIGHT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_white_knight_m,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_FALADOR_GYM_4),
        .party = {.NoItemDefaultMoves = sParty_FALADOR_GYM_4},
    },

    [TRAINER_FALADOR_GYM_AMIKVARZE] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_sir_amik_varze,
        .trainerName = _("AMIK VARZE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_FALADOR_GYM_AMIKVARZE),
        .party = {.NoItemCustomMoves = sParty_FALADOR_GYM_AMIKVARZE},
    },

    [TRAINER_FALADOR_HAIRDRESSER] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEGEND,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_hairdresser,
        .trainerName = _("HAIRDRESSER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_FALADOR_HAIRDRESSER),
        .party = {.ItemCustomMoves = sParty_FALADOR_HAIRDRESSER},
    },

    [TRAINER_ROUTE24_MUGGER] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MUGGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mugger,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE24_MUGGER),
        .party = {.NoItemDefaultMoves = sParty_ROUTE24_MUGGER},
    },

    [TRAINER_ROUTE24_WOODCUTTER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_WOODCUTTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_woodcutter,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE24_WOODCUTTER_1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE24_WOODCUTTER_1},
    },

    [TRAINER_ROUTE24_WOODCUTTER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_WOODCUTTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_woodcutter,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE24_WOODCUTTER_2),
        .party = {.NoItemDefaultMoves = sParty_ROUTE24_WOODCUTTER_2},
    },

    [TRAINER_ROUTE24_GOBLIN_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE24_GOBLIN_1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE24_GOBLIN_1},
    },

    [TRAINER_ROUTE24_GOBLIN_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE24_GOBLIN_2),
        .party = {.NoItemDefaultMoves = sParty_ROUTE24_GOBLIN_2},
    },

    [TRAINER_ROUTE24_GOBLIN_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE24_GOBLIN_3),
        .party = {.NoItemDefaultMoves = sParty_ROUTE24_GOBLIN_3},
    },

    [TRAINER_ROUTE24_GOBLIN_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE24_GOBLIN_4),
        .party = {.NoItemDefaultMoves = sParty_ROUTE24_GOBLIN_4},
    },

    //MUDSKIPPER POINT
    [TRAINER_MUDSKIPPERPOINT_SLAYER] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SLAYER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_slayer,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_MUDSKIPPERPOINT_SLAYER),
        .party = {.NoItemDefaultMoves = sParty_MUDSKIPPERPOINT_SLAYER},
    },
    [TRAINER_MUDSKIPPERPOINT_FISHERMAN_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_fisher,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_MUDSKIPPERPOINT_FISHERMAN_1),
        .party = {.NoItemDefaultMoves = sParty_MUDSKIPPERPOINT_FISHERMAN_1},
    },
    [TRAINER_MUDSKIPPERPOINT_FISHERMAN_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_fisher,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_MUDSKIPPERPOINT_FISHERMAN_2),
        .party = {.NoItemDefaultMoves = sParty_MUDSKIPPERPOINT_FISHERMAN_2},
    },
    [TRAINER_DEMONHEADGE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_demonheadge,
        .trainerName = _("DEMONHEADGE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_Demonheadge),
        .party = {.NoItemDefaultMoves = sParty_Demonheadge},
    },

    [TRAINER_ROUTE40_DIVINER] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_DIVINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_divination,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE40_DIVINER),
        .party = {.NoItemDefaultMoves = sParty_ROUTE40_DIVINER},
    },

    [TRAINER_PUB_SARIM_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PIRATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_pirate,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_PUB_SARIM_1),
        .party = {.NoItemDefaultMoves = sParty_PUB_SARIM_1},
    },

    [TRAINER_PUB_SARIM_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PIRATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_pirate,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_PUB_SARIM_2),
        .party = {.NoItemDefaultMoves = sParty_PUB_SARIM_2},
    },

    [TRAINER_PUB_SARIM_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_DWARF,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_dwarf_m,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_PUB_SARIM_3),
        .party = {.NoItemDefaultMoves = sParty_PUB_SARIM_3},
    },

    [TRAINER_RimmingtonMines_Miner] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_RimmingtonMines_Miner),
        .party = {.NoItemDefaultMoves = sParty_RimmingtonMines_Miner},
    },

    [TRAINER_RimmingtonMines_Ironman] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_IRONMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_ironman,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_RimmingtonMines_Ironman),
        .party = {.NoItemDefaultMoves = sParty_RimmingtonMines_Ironman},
    },

    [TRAINER_RimmingtonMines_Slayer] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SLAYER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_slayer,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_RimmingtonMines_Slayer),
        .party = {.NoItemDefaultMoves = sParty_RimmingtonMines_Slayer},
    },

    [TRAINER_ROUTE23_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_DWARF,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_dwarf_m,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE23_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE23_TRAINER_1},
    },

    [TRAINER_ROUTE23_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BARBARIAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_barbarian_m,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE23_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_ROUTE23_TRAINER_2},
    },

    [TRAINER_ROUTE23_TRAINER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BARBARIAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_barbarian_f,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE23_TRAINER_3),
        .party = {.NoItemDefaultMoves = sParty_ROUTE23_TRAINER_3},
    },

    [TRAINER_ROUTE23_TRAINER_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKer,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_pk_rusher,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE23_TRAINER_4),
        .party = {.NoItemDefaultMoves = sParty_ROUTE23_TRAINER_4},
    },

    [TRAINER_ROUTE23_TRAINER_COUPLE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_DUO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_barbarian_duo,
        .trainerName = _("SARA & TREV"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE23_TRAINER_COUPLE),
        .party = {.NoItemDefaultMoves = sParty_ROUTE23_TRAINER_COUPLE},
    },

//POLISH  BELOW NEEDED ---------------------------------------------------------------------------
     [TRAINER_RimmingtonMines_DRAGONBOT_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BOT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_bot_dragon_slayer,
        .trainerName = _("ajkshgu7"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_RimmingtonMines_DRAGONBOT_1),
        .party = {.NoItemDefaultMoves = sParty_RimmingtonMines_DRAGONBOT_1},
    },
     [TRAINER_RimmingtonMines_DRAGONBOT_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BOT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_bot_dragon_slayer,
        .trainerName = _("uysyt162"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_RimmingtonMines_DRAGONBOT_2),
        .party = {.NoItemDefaultMoves = sParty_RimmingtonMines_DRAGONBOT_2},
    },

     [TRAINER_RimmingtonMines_Slayer_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SLAYER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_slayer,
        .trainerName = _("Slay4Fun"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_RimmingtonMines_Slayer_1),
        .party = {.NoItemDefaultMoves = sParty_RimmingtonMines_Slayer_1},
    },

    [TRAINER_Varrock_Max] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SLAYER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_slayer,
        .trainerName = _("MAX"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_Varrock_Max),
        .party = {.NoItemDefaultMoves = sParty_Varrock_Max},
    },

    [TRAINER_Soffan_and_Quo] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("SOFAN & QUO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_Soffan_and_Quo),
        .party = {.NoItemDefaultMoves = sParty_Soffan_and_Quo},
    },

//ROUTE 18
    [TRAINER_ROUTE18_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_AGILE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_SKILLER,
        .trainerPic = TRAINER_PIC_graceful,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE18_TRAINER1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE18_TRAINER1},
    },
    [TRAINER_ROUTE18_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_DnDer,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_canada_grrl,
        .trainerName = _("Canada Grrl"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE18_TRAINER2),
        .party = {.NoItemDefaultMoves = sParty_ROUTE18_TRAINER2},
    },
    [TRAINER_ROUTE18_TRAINER_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_WOODCUTTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_woodcutter,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE18_TRAINER4),
        .party = {.NoItemDefaultMoves = sParty_ROUTE18_TRAINER4},
    },
    [TRAINER_ROUTE18_TRAINER_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_WOODCUTTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_woodcutter,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE18_TRAINER5),
        .party = {.NoItemDefaultMoves = sParty_ROUTE18_TRAINER5},
    },
    [TRAINER_ROUTE18_TRAINER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BOT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_noob_default,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE18_TRAINER3),
        .party = {.NoItemDefaultMoves = sParty_ROUTE18_TRAINER3},
    },
    [TRAINER_ROUTE18_TRAINER_6] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE18_TRAINER6),
        .party = {.NoItemDefaultMoves = sParty_ROUTE18_TRAINER6},
    },
    [TRAINER_ROUTE18_TRAINER_7] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_guard_varrock,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE18_TRAINER7),
        .party = {.NoItemDefaultMoves = sParty_ROUTE18_TRAINER7},
    },
//ROUTE20
    [TRAINER_ROUTE20_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_fisher,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE20_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE20_TRAINER_1},
    },

    [TRAINER_ROUTE20_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_fisher,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE20_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_ROUTE20_TRAINER_2},
    },

    [TRAINER_ROUTE20_TRAINER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_fisher,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE20_TRAINER_3),
        .party = {.NoItemDefaultMoves = sParty_ROUTE20_TRAINER_3},
    },

    [TRAINER_ROUTE20_TRAINER_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SKILLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skiller,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE20_TRAINER_4),
        .party = {.NoItemDefaultMoves = sParty_ROUTE20_TRAINER_4},
    },

    [TRAINER_ROUTE20_DUO] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_DUO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_cook_fm_duo,
        .trainerName = _("FM & COOK"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE20_DUO),
        .party = {.NoItemDefaultMoves = sParty_ROUTE20_DUO},
    },

    [TRAINER_ROUTE19_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CHEF,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_cook,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE19_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE19_TRAINER_1},
    },
//BARBARIAN GYM
    [TRAINER_BARBARIAN_GYM_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BARBARIAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_barbarian_m,
        .trainerName = _("ATLAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_BARBARIAN_GYM_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_BARBARIAN_GYM_TRAINER_1},
    },

    [TRAINER_BARBARIAN_GYM_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BARBARIAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_barbarian_f,
        .trainerName = _("LITARA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_BARBARIAN_GYM_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_BARBARIAN_GYM_TRAINER_2},
    },

    [TRAINER_BARBARIAN_GYM_TRAINER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BARBARIAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_barbarian_m,
        .trainerName = _("HAAKON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_BARBARIAN_GYM_TRAINER_3),
        .party = {.NoItemDefaultMoves = sParty_BARBARIAN_GYM_TRAINER_3},
    },


    [TRAINER_BARBARIAN_GYM_GUNTHOR] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_gunthor,
        .trainerName = _("GUNTHOR"),
        .items = {ITEM_BREAD, ITEM_CAKE, ITEM_BLUEBERRY_SPECIAL, ITEM_POTION_ATT},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_BARBARIAN_GYM_GUNTHOR),
        .party = {.NoItemCustomMoves = sParty_BARBARIAN_GYM_GUNTHOR},
    },
//ROUTE13

    [TRAINER_ROUTE13_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_DARK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("WIZARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE13_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE13_TRAINER_1},
    },

    [TRAINER_ROUTE13_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_DARK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("WIZARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE13_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_ROUTE13_TRAINER_2},
    },

    [TRAINER_ROUTE13_TRAINER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_DARK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("WIZARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE13_TRAINER_3),
        .party = {.NoItemDefaultMoves = sParty_ROUTE13_TRAINER_3},
    },

    [TRAINER_ROUTE13_TRAINER_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_DARK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("WIZARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE13_TRAINER_4),
        .party = {.NoItemDefaultMoves = sParty_ROUTE13_TRAINER_4},
    },

    [TRAINER_ROUTE13_TRAINER_5] = //FINAL WIZARD, EVENT WITH DELRITH?
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_DARK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("WIZARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE13_TRAINER_5),
        .party = {.NoItemDefaultMoves = sParty_ROUTE13_TRAINER_5},
    },

    [TRAINER_ROUTE13_TRAINER_6] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_NOOB,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_noob_default,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE13_TRAINER_6),
        .party = {.NoItemDefaultMoves = sParty_ROUTE13_TRAINER_6},
    },

    [TRAINER_ROUTE13_TRAINER_7] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_AGILE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_SKILLER,
        .trainerPic = TRAINER_PIC_graceful,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE13_TRAINER_7),
        .party = {.NoItemDefaultMoves = sParty_ROUTE13_TRAINER_7},
    },

    [TRAINER_ROUTE13_TRAINER_8] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FARMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_farmer,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE13_TRAINER_8),
        .party = {.NoItemDefaultMoves = sParty_ROUTE13_TRAINER_8},
    },

    [TRAINER_ROUTE13_TRAINER_9] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_QUESTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_quester,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE13_TRAINER_9),
        .party = {.NoItemDefaultMoves = sParty_ROUTE13_TRAINER_9},
    },

//ROUTE14
    [TRAINER_ROUTE14_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE14_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE14_TRAINER_1},
    },

    [TRAINER_ROUTE14_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE14_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_ROUTE14_TRAINER_2},
    },
//

//ROUTE16
    [TRAINER_ROUTE16_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_WOODCUTTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_woodcutter,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE16_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE16_TRAINER_1},
    },

    [TRAINER_ROUTE16_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_guard_varrock,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE16_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_ROUTE16_TRAINER_2},
    },

    [TRAINER_ROUTE16_TRAINER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_ARCHAEOLOGIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_Archaeologist,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE16_TRAINER_3),
        .party = {.NoItemDefaultMoves = sParty_ROUTE16_TRAINER_3},
    },

    [TRAINER_ROUTE16_TRAINER_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_DIVINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_divination,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE16_TRAINER_4),
        .party = {.NoItemDefaultMoves = sParty_ROUTE16_TRAINER_4},
    },

    [TRAINER_ROUTE16_TRAINER_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_AGILE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_SKILLER,
        .trainerPic = TRAINER_PIC_graceful,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE16_TRAINER_5),
        .party = {.NoItemDefaultMoves = sParty_ROUTE16_TRAINER_5},
    },

    [TRAINER_ROUTE16_TRAINER_6] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MUGGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_mugger,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE16_TRAINER_6),
        .party = {.NoItemDefaultMoves = sParty_ROUTE16_TRAINER_6},
    },

    [TRAINER_ROUTE17_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_WOODCUTTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_woodcutter_alt,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE17_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE17_TRAINER_1},
    },

    [TRAINER_ROUTE17_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SKILLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skiller,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE17_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_ROUTE17_TRAINER_2},
    },

    [TRAINER_PREZLEEK] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PLAYER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_prezleek,
        .trainerName = _("Prezleek"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_Prezleek),
        .party = {.NoItemDefaultMoves = sParty_Prezleek},
    },

    [TRAINER_NYCHANNEL] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_WOODCUTTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_woodcutter,
        .trainerName = _("NYCHANNEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_NYCHANNEL),
        .party = {.NoItemDefaultMoves = sParty_NYCHANNEL},
    },

    [TRAINER_GERTRUDE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_gertrude,
        .trainerName = _("GERTRUDE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_GERTRUDE),
        .party = {.NoItemDefaultMoves = sParty_GERTRUDE},
    },
//LUMBRIDGE FOREST
    [TRAINER_LUMBRIDGEFOREST_WOODCUTTER1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_WOODCUTTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_woodcutter,
        .trainerName = _("Ch0ppa1"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_LUMBRIDGEFOREST_WOODCUTTER1),
        .party = {.NoItemDefaultMoves = sParty_LUMBRIDGEFOREST_WOODCUTTER1},
    },
    [TRAINER_LUMBRIDGEFOREST_BOT1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BOT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_noob_default,
        .trainerName = _("WOODCUTTING"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_LUMBRIDGEFOREST_BOT1),
        .party = {.NoItemDefaultMoves = sParty_LUMBRIDGEFOREST_BOT1},
    },

    [TRAINER_SINKHOLE_NPC_FORGOTTENWARRIOR_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_DARK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("WARRIOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_SINKHOLE_NPC_FORGOTTENWARRIOR_1),
        .party = {.NoItemDefaultMoves = sParty_SINKHOLE_NPC_FORGOTTENWARRIOR_1},
    },

    [TRAINER_LUMBRIDGEFOREST_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MUGGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_mugger,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_LUMBRIDGEFOREST_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_LUMBRIDGEFOREST_TRAINER_1},
    },
    [TRAINER_LUMBRIDGEFOREST_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("Foulblood"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_LUMBRIDGEFOREST_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_LUMBRIDGEFOREST_TRAINER_2},
    },
    [TRAINER_LUMBRIDGEFOREST_TRAINER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("Toadtoes"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_LUMBRIDGEFOREST_TRAINER_3),
        .party = {.NoItemDefaultMoves = sParty_LUMBRIDGEFOREST_TRAINER_3},
    },


//Route28
    [TRAINER_ROUTE28_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_guard_alkhaird,
        .trainerName = _("AL KHARID"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE28_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE28_TRAINER_1},
    },
    [TRAINER_ROUTE28_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_NOOB,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_lukien,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE28_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_ROUTE28_TRAINER_2},
    },
    [TRAINER_ROUTE28_TRAINER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_guard_alkhaird,
        .trainerName = _("AL KHARID"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE28_TRAINER_3),
        .party = {.NoItemDefaultMoves = sParty_ROUTE28_TRAINER_3},
    },
    [TRAINER_ROUTE28_TRAINER_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_ARCHAEOLOGIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_SKILLER,
        .trainerPic = TRAINER_PIC_Archaeologist,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE28_TRAINER_4),
        .party = {.NoItemDefaultMoves = sParty_ROUTE28_TRAINER_4},
    },
    [TRAINER_ROUTE28_TRAINER_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKer,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_pk_rusher,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE28_TRAINER_5),
        .party = {.NoItemDefaultMoves = sParty_ROUTE28_TRAINER_5},
    },
//Route29
    [TRAINER_ROUTE29_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SLAYER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_slayer,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE29_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE29_TRAINER_1},
    },
    [TRAINER_ROUTE29_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE29_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_ROUTE29_TRAINER_2},
    },
    [TRAINER_ROUTE29_TRAINER_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_NOOB,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_noob_default,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE29_TRAINER_4),
        .party = {.NoItemDefaultMoves = sParty_ROUTE29_TRAINER_4},
    },
    [TRAINER_ROUTE29_TRAINER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_ARCHAEOLOGIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_SKILLER,
        .trainerPic = TRAINER_PIC_Archaeologist,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE29_TRAINER_3),
        .party = {.NoItemDefaultMoves = sParty_ROUTE29_TRAINER_3},
    },
    [TRAINER_ROUTE29_TRAINER_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_guard_alkhaird_duo,
        .trainerName = _("Brothers"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE29_TRAINER_5),
        .party = {.NoItemDefaultMoves = sParty_ROUTE29_TRAINER_5},
    },
    //ROUTE33
    [TRAINER_ROUTE33_GOBLIN1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE33_GOBLIN1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE33_GOBLIN1},
    },
    [TRAINER_ROUTE33_GOBLIN2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE33_GOBLIN2),
        .party = {.NoItemDefaultMoves = sParty_ROUTE33_GOBLIN2},
    },
    [TRAINER_ROUTE33_ZAMORAK1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_DARK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("WIZARD"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE33_ZAMORAK1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE33_ZAMORAK1},
        .scaling = FALSE,
    },

//VARROCK GYM
    [TRAINER_VARROCK_GYM_KINGROALD] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_king_roald,
        .trainerName = _("KING ROALD"),
        .items = {ITEM_CHOCOLATE_CAKE, ITEM_CHOCOLATE_CAKE, ITEM_POTION_SPDEF, ITEM_BLUEBERRY_SPECIAL},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_VARROCK_GYM_KINGROALD),
        .party = {.NoItemCustomMoves = sParty_VARROCK_GYM_KINGROALD},
    },

    [TRAINER_VARROCK_GYM_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_guard_varrock,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_VARROCK_GYM_1),
        .party = {.NoItemDefaultMoves = sParty_VARROCK_GYM_1},
    },
    [TRAINER_VARROCK_GYM_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_guard_varrock,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_VARROCK_GYM_2),
        .party = {.NoItemDefaultMoves = sParty_VARROCK_GYM_2},
    },
    [TRAINER_VARROCK_GYM_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_guard_varrock,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_VARROCK_GYM_3),
        .party = {.NoItemDefaultMoves = sParty_VARROCK_GYM_3},
    },
    [TRAINER_VARROCK_GYM_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MONK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_monk,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_VARROCK_GYM_4),
        .party = {.NoItemDefaultMoves = sParty_VARROCK_GYM_4},
    },
    //ROUTE 15
    [TRAINER_ROUTE15_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE15_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE15_TRAINER_1},
    },
    [TRAINER_ROUTE15_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE15_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_ROUTE15_TRAINER_2},
    },
    [TRAINER_ROUTE15_TRAINER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE15_TRAINER_3),
        .party = {.NoItemDefaultMoves = sParty_ROUTE15_TRAINER_3},
    },
    [TRAINER_ROUTE15_TRAINER_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_WOODCUTTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_woodcutter,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE15_TRAINER_4),
        .party = {.NoItemDefaultMoves = sParty_ROUTE15_TRAINER_4},
    },
    [TRAINER_ROUTE15_TRAINER_5] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_NOOB,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_lukien,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE15_TRAINER_5),
        .party = {.NoItemDefaultMoves = sParty_ROUTE15_TRAINER_5},
    },
    [TRAINER_ROUTE15_TRAINER_6] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_WOODCUTTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_woodcutter,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE15_TRAINER_6),
        .party = {.NoItemDefaultMoves = sParty_ROUTE15_TRAINER_6},
    },

//Alkharid Gym
    [TRAINER_ALKHARID_GYM_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_guard_alkhaird_duo,
        .trainerName = _("Ali & Ali"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE29_TRAINER_5),
        .party = {.NoItemDefaultMoves = sParty_ROUTE29_TRAINER_5},
    },
    [TRAINER_ALKHARID_GYM_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_guard_alkhaird_duo,
        .trainerName = _("Ali & Ali"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE29_TRAINER_5),
        .party = {.NoItemDefaultMoves = sParty_ROUTE29_TRAINER_5},
    },
    [TRAINER_ALKHARID_GYM_TRAINER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_guard_alkhaird_duo,
        .trainerName = _("Ali & Ali"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE29_TRAINER_5),
        .party = {.NoItemDefaultMoves = sParty_ROUTE29_TRAINER_5},
    },
    [TRAINER_ALKHARID_GYM_TRAINER_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_guard_alkhaird_duo,
        .trainerName = _("Ali & Ali"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ROUTE29_TRAINER_5),
        .party = {.NoItemDefaultMoves = sParty_ROUTE29_TRAINER_5},
    },
    [TRAINER_ALKHARID_GYM_PRINCE_ALI] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_prince_ali,
        .trainerName = _("PRINCE ALI"),
        .items = {ITEM_CHOCOLATE_CAKE, ITEM_CHOCOLATE_CAKE, ITEM_POTION_SPDEF, ITEM_BLUEBERRY_SPECIAL},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ALKHARID_GYM_PRINCE_ALI),
        .party = {.NoItemCustomMoves = sParty_ALKHARID_GYM_PRINCE_ALI},
    },
    [TRAINER_BARROWS_GUTHAN] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_BARROWS_BROTHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_guthan_osrs,
        .trainerName = _("GUTHAN"),
        .items = {ITEM_CHOCOLATE_CAKE, ITEM_CHOCOLATE_CAKE, ITEM_POTION_SPDEF, ITEM_BLUEBERRY_SPECIAL},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_BARROWS_GUTHAN),
        .party = {.NoItemCustomMoves = sParty_BARROWS_GUTHAN},
    },
    [TRAINER_MOD_SARNIE] =
	{
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_JMOD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HAM,
        .trainerPic = TRAINER_PIC_jmod_m,
        .trainerName = _("SARNIE"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_MOD_SARNIE),
        .party = {.ItemDefaultMoves = sParty_MOD_SARNIE},
        .scaling = FALSE,
    },



///ROUTE27
    [TRAINER_ROUTE27_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE27_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE27_TRAINER_1},
    },
    [TRAINER_ROUTE27_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE27_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_ROUTE27_TRAINER_2},
    },
    [TRAINER_ROUTE27_TRAINER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE27_TRAINER_3),
        .party = {.NoItemDefaultMoves = sParty_ROUTE27_TRAINER_3},
    },
    [TRAINER_ROUTE27_TRAINER_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE27_TRAINER_4),
        .party = {.NoItemDefaultMoves = sParty_ROUTE27_TRAINER_4},
    },

    //route30
    [TRAINER_ROUTE30_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BLACK_KNIGHT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_black_knight_m,
        .trainerName = _("Mare"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE30_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE30_TRAINER_1},
    },
    [TRAINER_ROUTE30_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_pk_dh,
        .trainerName = _("Bonbloc"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE30_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_ROUTE30_TRAINER_2},
    },
    [TRAINER_ROUTE30_TRAINER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKer,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_pk_rusher,
        .trainerName = _("Youbleedred"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE30_TRAINER_3),
        .party = {.NoItemDefaultMoves = sParty_ROUTE30_TRAINER_3},
    },
    [TRAINER_ROUTE30_TRAINER_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE30_TRAINER_4),
        .party = {.NoItemDefaultMoves = sParty_ROUTE30_TRAINER_4},
    },
    
    //route25
    [TRAINER_ROUTE25_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE25_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE25_TRAINER_1},
    },
    [TRAINER_ROUTE25_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE25_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_ROUTE25_TRAINER_2},
    },
    [TRAINER_ROUTE25_TRAINER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE25_TRAINER_3),
        .party = {.NoItemDefaultMoves = sParty_ROUTE25_TRAINER_3},
    },
//route39
    [TRAINER_ROUTE39_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE39_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE39_TRAINER_1},
    },
    [TRAINER_ROUTE39_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE39_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_ROUTE39_TRAINER_2},
    },
    [TRAINER_ROUTE39_TRAINER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE39_TRAINER_3),
        .party = {.NoItemDefaultMoves = sParty_ROUTE39_TRAINER_3},
    },
    [TRAINER_ROUTE39_TRAINER_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE39_TRAINER_4),
        .party = {.NoItemDefaultMoves = sParty_ROUTE39_TRAINER_4},
    },
    [TRAINER_ROUTE39_TRAINER_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE39_TRAINER_5),
        .party = {.NoItemDefaultMoves = sParty_ROUTE39_TRAINER_5},
    },
    [TRAINER_ROUTE39_TRAINER_6] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE39_TRAINER_6),
        .party = {.NoItemDefaultMoves = sParty_ROUTE39_TRAINER_6},
    },
    [TRAINER_ROUTE39_TRAINER_7] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE39_TRAINER_7),
        .party = {.NoItemDefaultMoves = sParty_ROUTE39_TRAINER_7},
    },
    [TRAINER_ROUTE39_TRAINER_8] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE39_TRAINER_8),
        .party = {.NoItemDefaultMoves = sParty_ROUTE39_TRAINER_8},
    },
    //swamp cave
    [TRAINER_LUMBRIDGESWAMPCAVE_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_LUMBRIDGESWAMPCAVE_4),
        .party = {.NoItemDefaultMoves = sParty_LUMBRIDGESWAMPCAVE_4},
    },
    [TRAINER_LUMBRIDGESWAMPCAVE_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_LUMBRIDGESWAMPCAVE_5),
        .party = {.NoItemDefaultMoves = sParty_LUMBRIDGESWAMPCAVE_5},
    },
    [TRAINER_LUMBRIDGESWAMPCAVE_6] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_LUMBRIDGESWAMPCAVE_6),
        .party = {.NoItemDefaultMoves = sParty_LUMBRIDGESWAMPCAVE_6},
    },
    //musa point
    [TRAINER_MUSA_POINT_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_fisher,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_MUSA_POINT_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_MUSA_POINT_TRAINER_1},
    },
    [TRAINER_MUSA_POINT_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_fisher,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_MUSA_POINT_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_MUSA_POINT_TRAINER_2},
    },
    [TRAINER_MUSA_POINT_TRAINER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_fisher,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_MUSA_POINT_TRAINER_3),
        .party = {.NoItemDefaultMoves = sParty_MUSA_POINT_TRAINER_3},
    },
    [TRAINER_MUSA_POINT_TRAINER_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_NOOB,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_noob_default,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_MUSA_POINT_TRAINER_4),
        .party = {.NoItemDefaultMoves = sParty_MUSA_POINT_TRAINER_4},
    },

    [TRAINER_SCAPEINK] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKer,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_pk_rusher,
        .trainerName = _("SCAPEINK"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_SCAPEINK),
        .party = {.NoItemDefaultMoves = sParty_SCAPEINK},
    },

    [TRAINER_KOUREND_CATACOMBS_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HILL_GIANT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_hill_giant,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_KOUREND_CATACOMBS_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_KOUREND_CATACOMBS_TRAINER_1},
    },
    
    [TRAINER_KOUREND_CATACOMBS_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HILL_GIANT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_hill_giant,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_KOUREND_CATACOMBS_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_KOUREND_CATACOMBS_TRAINER_2},
    },
    [TRAINER_KOUREND_CATACOMBS_TRAINER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MOSS_GIANT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_moss_giant,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_KOUREND_CATACOMBS_TRAINER_3),
        .party = {.NoItemDefaultMoves = sParty_KOUREND_CATACOMBS_TRAINER_3},
    },
    [TRAINER_KOUREND_CATACOMBS_TRAINER_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MOSS_GIANT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_moss_giant,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_KOUREND_CATACOMBS_TRAINER_4),
        .party = {.NoItemDefaultMoves = sParty_KOUREND_CATACOMBS_TRAINER_4},
    },
    [TRAINER_KOUREND_CATACOMBS_TRAINER_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MOSS_GIANT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_moss_giant,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_KOUREND_CATACOMBS_TRAINER_5),
        .party = {.NoItemDefaultMoves = sParty_KOUREND_CATACOMBS_TRAINER_5},
    },
    [TRAINER_KOUREND_CATACOMBS_TRAINER_6] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FIRE_GIANT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_fire_giant,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_KOUREND_CATACOMBS_TRAINER_6),
        .party = {.NoItemDefaultMoves = sParty_KOUREND_CATACOMBS_TRAINER_6},
    },
    [TRAINER_KOUREND_CATACOMBS_TRAINER_7] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FIRE_GIANT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_fire_giant,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_KOUREND_CATACOMBS_TRAINER_7),
        .party = {.NoItemDefaultMoves = sParty_KOUREND_CATACOMBS_TRAINER_7},
    },
    [TRAINER_KOUREND_CATACOMBS_TRAINER_8] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_KOUREND_CATACOMBS_TRAINER_8),
        .party = {.NoItemDefaultMoves = sParty_KOUREND_CATACOMBS_TRAINER_8},
    },
    [TRAINER_KOUREND_CATACOMBS_TRAINER_9] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_KOUREND_CATACOMBS_TRAINER_9),
        .party = {.NoItemDefaultMoves = sParty_KOUREND_CATACOMBS_TRAINER_9},
    },
    [TRAINER_KOUREND_CATACOMBS_TRAINER_10] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_KOUREND_CATACOMBS_TRAINER_10),
        .party = {.NoItemDefaultMoves = sParty_KOUREND_CATACOMBS_TRAINER_10},
    },
    [TRAINER_KOUREND_CATACOMBS_TRAINER_11] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_KOUREND_CATACOMBS_TRAINER_11),
        .party = {.NoItemDefaultMoves = sParty_KOUREND_CATACOMBS_TRAINER_11},
    },






    //GYM LEADERS
    [TRAINER_LEADER_DUKE_1] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_duke_horacio,
        .trainerName = _("HORACIO"),
        .items = {ITEM_BREAD, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_LEADER_DUKE_1),
        .party = {.NoItemCustomMoves = sParty_LEADER_DUKE_1}, 
    },
    

//Varrock Sewers (1F)
    [TRAINER_VARROCK_SEWERS_1F_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Shellullaby"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_VARROCK_SEWERS_2F_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_VARROCK_SEWERS_2F_TRAINER_1},
    },

    [TRAINER_VARROCK_SEWERS_1F_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SUMMONER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_summoner,
        .trainerName = _("Necrodancer"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_VARROCK_SEWERS_1F_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_VARROCK_SEWERS_1F_TRAINER_2},
    },

    [TRAINER_VARROCK_SEWERS_1F_TRAINER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_UNKNOWN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_jmod_f,
        .trainerName = _("cbow4lyf"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_VARROCK_SEWERS_1F_TRAINER_3),
        .party = {.NoItemDefaultMoves = sParty_VARROCK_SEWERS_1F_TRAINER_3},
    },

    [TRAINER_VARROCK_SEWERS_1F_TRAINER_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_wizard_m,
        .trainerName = _("IceBRG"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_VARROCK_SEWERS_1F_TRAINER_4),
        .party = {.NoItemDefaultMoves = sParty_VARROCK_SEWERS_1F_TRAINER_4},
    },

//Varrock Sewers (2F)
    [TRAINER_VARROCK_SEWERS_2F_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Skelly"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_VARROCK_SEWERS_2F_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_VARROCK_SEWERS_2F_TRAINER_1},
    },

    [TRAINER_VARROCK_SEWERS_2F_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SUMMONER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_summoner,
        .trainerName = _("D3dF1sh"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_VARROCK_SEWERS_2F_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_VARROCK_SEWERS_2F_TRAINER_2},
    },

    [TRAINER_VARROCK_SEWERS_2F_TRAINER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Ankledeep"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_VARROCK_SEWERS_2F_TRAINER_3),
        .party = {.NoItemDefaultMoves = sParty_VARROCK_SEWERS_2F_TRAINER_3},
    },

    [TRAINER_VARROCK_SEWERS_2F_TRAINER_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_IRONMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_ironman,
        .trainerName = _("4xedM4ng4"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_VARROCK_SEWERS_2F_TRAINER_4),
        .party = {.NoItemDefaultMoves = sParty_VARROCK_SEWERS_2F_TRAINER_4},
    },

    [TRAINER_VARROCK_SEWERS_2F_TRAINER_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SUMMONER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_summoner,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_VARROCK_SEWERS_2F_TRAINER_5),
        .party = {.NoItemDefaultMoves = sParty_VARROCK_SEWERS_2F_TRAINER_5},
    },

    [TRAINER_VARROCK_SEWERS_2F_TRAINER_6] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SLAYER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_slayer,
        .trainerName = _("B0nd M0n3y"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_VARROCK_SEWERS_2F_TRAINER_6),
        .party = {.NoItemDefaultMoves = sParty_VARROCK_SEWERS_2F_TRAINER_6},
    },

//Varrock Sewers (3F)
    [TRAINER_VARROCK_SEWERS_3F_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MOSS_GIANT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_moss_giant,
        .trainerName = _("Treesbee"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_VARROCK_SEWERS_3F_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_VARROCK_SEWERS_3F_TRAINER_1},
    },

    [TRAINER_VARROCK_SEWERS_3F_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MOSS_GIANT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_moss_giant,
        .trainerName = _("Yggdraugr"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_VARROCK_SEWERS_3F_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_VARROCK_SEWERS_3F_TRAINER_2},
    },

    [TRAINER_VARROCK_SEWERS_3F_TRAINER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MOSS_GIANT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_moss_giant,
        .trainerName = _("Barklee"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_VARROCK_SEWERS_3F_TRAINER_3),
        .party = {.NoItemDefaultMoves = sParty_VARROCK_SEWERS_3F_TRAINER_3},
    },

    [TRAINER_VARROCK_SEWERS_3F_TRAINER_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MUGGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mugger,
        .trainerName = _("Clinton"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_VARROCK_SEWERS_3F_TRAINER_4),
        .party = {.NoItemDefaultMoves = sParty_VARROCK_SEWERS_3F_TRAINER_4},
    },

    [TRAINER_VARROCK_SEWERS_3F_TRAINER_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Rattbrittle"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_VARROCK_SEWERS_3F_TRAINER_5),
        .party = {.NoItemDefaultMoves = sParty_VARROCK_SEWERS_3F_TRAINER_5},
    },


//TzHaar Caves 1
    [TRAINER_TZHAAR_CAVES_1_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_UNKNOWN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_tzhaar,
        .trainerName = _("Ket-Jeh"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_TZHAAR_CAVES_1_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_TZHAAR_CAVES_1_TRAINER_1},
    },

    [TRAINER_TZHAAR_CAVES_1_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_UNKNOWN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_tzhaar,
        .trainerName = _("Ket-Ak"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_TZHAAR_CAVES_1_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_TZHAAR_CAVES_1_TRAINER_2},
    },

    [TRAINER_TZHAAR_CAVES_1_TRAINER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_UNKNOWN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_tzhaar,
        .trainerName = _("Xil-Hok"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_TZHAAR_CAVES_1_TRAINER_3),
        .party = {.NoItemDefaultMoves = sParty_TZHAAR_CAVES_1_TRAINER_3},
    },

    [TRAINER_TZHAAR_CAVES_1_TRAINER_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_UNKNOWN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_tzhaar,
        .trainerName = _("Xil-Gek"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_TZHAAR_CAVES_1_TRAINER_4),
        .party = {.NoItemDefaultMoves = sParty_TZHAAR_CAVES_1_TRAINER_4},
    },

    [TRAINER_TZHAAR_CAVES_1_TRAINER_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_UNKNOWN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_tzhaar,
        .trainerName = _("Xil-Xox"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_TZHAAR_CAVES_1_TRAINER_5),
        .party = {.NoItemDefaultMoves = sParty_TZHAAR_CAVES_1_TRAINER_5},
    },

    [TRAINER_TZHAAR_CAVES_1_TRAINER_6] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_UNKNOWN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_tzhaar,
        .trainerName = _("Mej-Kal"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_TZHAAR_CAVES_1_TRAINER_6),
        .party = {.NoItemDefaultMoves = sParty_TZHAAR_CAVES_1_TRAINER_6},
    },

    [TRAINER_TZHAAR_CAVES_1_JAD] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_UNKNOWN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_tokhaar,
        .trainerName = _("Hok"),
        .items = {ITEM_CHOCOLATE_CAKE, ITEM_CHOCOLATE_CAKE, ITEM_BLUEBERRY_SPECIAL},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_TZHAAR_CAVES_1_TRAINER_JAD),
        .party = {.NoItemCustomMoves = sParty_TZHAAR_CAVES_1_TRAINER_JAD},
    },


//Route 35
    [TRAINER_ROUTE_35_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MONK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_monk,
        .trainerName = _("Jethro"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_35_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_35_TRAINER_1},
    },

    [TRAINER_ROUTE_35_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _("St4r Min3r"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_35_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_35_TRAINER_2},
    },

//Route 38
    [TRAINER_ROUTE_38_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_NOOB,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_noob_default,
        .trainerName = _("Wow4lyf"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_38_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_38_TRAINER_1},
    },

    [TRAINER_ROUTE_38_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_QUESTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_quester,
        .trainerName = _("Guide4lyf"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_38_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_38_TRAINER_2},
    },

    [TRAINER_ROUTE_38_TRAINER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_NOOB,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_noob_default,
        .trainerName = _("St4r Min3r"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_38_TRAINER_3),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_38_TRAINER_3},
    },

    [TRAINER_ROUTE_38_TRAINER_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _("Miner Leoh"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_38_TRAINER_4),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_38_TRAINER_4},
    },

    [TRAINER_ROUTE_38_TRAINER_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MONK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_monk,
        .trainerName = _("Bernard"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_38_TRAINER_5),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_38_TRAINER_5},
    },

//Route 41
    [TRAINER_ROUTE_41_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BOT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_bot_dragon_slayer,
        .trainerName = _("jfgbs7645"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_41_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_41_TRAINER_1},
    },

    [TRAINER_ROUTE_41_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BOT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_bot_dragon_slayer,
        .trainerName = _("kzlys9278"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_41_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_41_TRAINER_2},
    },

    [TRAINER_ROUTE_41_TRAINER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SLAYER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_noob_rune,
        .trainerName = _("Wari0000"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_41_TRAINER_3),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_41_TRAINER_3},
    },

    [TRAINER_ROUTE_41_TRAINER_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_f,
        .trainerName = _("M4g3lit3"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_41_TRAINER_4),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_41_TRAINER_4},
    },

//Route 42
    [TRAINER_ROUTE_42_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKer,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_pk_dh,
        .trainerName = _("JustAPure46"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_42_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_42_TRAINER_1},
    },

    [TRAINER_ROUTE_42_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKer,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_pk_rusher,
        .trainerName = _("Frogre4l"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_42_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_42_TRAINER_2},
    },

    [TRAINER_ROUTE_42_TRAINER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_DARK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("B0nediddly"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_42_TRAINER_3),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_42_TRAINER_3},
    },

    [TRAINER_ROUTE_42_TRAINER_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Pecs"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_42_TRAINER_4),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_42_TRAINER_4},
    },

//Route 43
    [TRAINER_ROUTE_43_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Rattle"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_43_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_43_TRAINER_1},
    },

    [TRAINER_ROUTE_43_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_43_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_43_TRAINER_2},
    },

    [TRAINER_ROUTE_43_TRAINER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Tonton"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_43_TRAINER_3),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_43_TRAINER_3},
    },

    [TRAINER_ROUTE_43_TRAINER_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Funorb"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_43_TRAINER_4),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_43_TRAINER_4},
    },

//Route 44
    [TRAINER_ROUTE_44_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Fibulala"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_44_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_44_TRAINER_1},
    },

    [TRAINER_ROUTE_44_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKer,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_pk_rusher,
        .trainerName = _("C Specs"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_47_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_47_TRAINER_2},
    },

//Route 46
    [TRAINER_ROUTE_46_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_ARCHAEOLOGIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_Archaeologist,
        .trainerName = _("Stan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_46_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_46_TRAINER_1},
    },

    [TRAINER_ROUTE_46_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SLAYER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_slayer,
        .trainerName = _("Le Me"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_46_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_46_TRAINER_2},
    },

//Route 47
    [TRAINER_ROUTE_47_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_DARK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("Magnus"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_47_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_47_TRAINER_1},
    },

    [TRAINER_ROUTE_47_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_DARK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("Mognus"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_47_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_47_TRAINER_2},
    },

//Route 31
    [TRAINER_ROUTE_31_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _("Runitescape"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_31_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_31_TRAINER_1},
    },

    [TRAINER_ROUTE_31_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SCAMMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_scammer_and_victim,
        .trainerName = _("Skru & Eli"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_31_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_31_TRAINER_2},
    },

    [TRAINER_ROUTE_31_TRAINER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKer,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_pk_dh,
        .trainerName = _("Derrguun"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_31_TRAINER_3),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_31_TRAINER_3},
    },

    [TRAINER_ROUTE_31_TRAINER_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SKILLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skiller,
        .trainerName = _("Cb4inP2P"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_31_TRAINER_4),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_31_TRAINER_4},
    },

    [TRAINER_ROUTE_31_TRAINER_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SCAMMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_scammer,
        .trainerName = _("NoManSky"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_31_TRAINER_5),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_31_TRAINER_5},
    },

    [TRAINER_ROUTE_31_TRAINER_6] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SCAMMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_scammer,
        .trainerName = _("WarauSales"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_31_TRAINER_6),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_31_TRAINER_6},
    },

    [TRAINER_ROUTE_31_TRAINER_7] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Cranium"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_31_TRAINER_7),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_31_TRAINER_7},
    },

//LIGHTHOUSE
    [TRAINER_LIGHTHOUSE_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_guard_draynor,
        .trainerName = _("Dave"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_LIGHTHOUSE_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_LIGHTHOUSE_TRAINER_1},
    },

    [TRAINER_LIGHTHOUSE_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_guard_draynor,
        .trainerName = _("Darren"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_LIGHTHOUSE_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_LIGHTHOUSE_TRAINER_2},
    },

//LIGHTHOUSE 2F
    [TRAINER_LIGHTHOUSE_2F_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_guard_draynor,
        .trainerName = _("Lin & Den"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_LIGHTHOUSE_2F_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_LIGHTHOUSE_2F_TRAINER_1},
    },

    [TRAINER_LIGHTHOUSE_2F_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_guard_draynor,
        .trainerName = _("Lin & Den"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_LIGHTHOUSE_2F_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_LIGHTHOUSE_2F_TRAINER_2},
    },

//LIGHTHOUSE 3F
    [TRAINER_LIGHTHOUSE_3F_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HAM_GRUNT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_ham_grunt_m,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_LIGHTHOUSE_3F_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_LIGHTHOUSE_3F_TRAINER_1},
    },

//Route 50
    [TRAINER_ROUTE_50_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MONK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_monk,
        .trainerName = _("Androe"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_50_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_50_TRAINER_1},
    },

    [TRAINER_ROUTE_50_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MONK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_monk,
        .trainerName = _("Omad"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_50_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_50_TRAINER_2},
    },

    [TRAINER_ROUTE_50_TRAINER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_DnDer,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_dnd,
        .trainerName = _("Lady Pingu"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_50_TRAINER_3),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_50_TRAINER_3},
    },

    [TRAINER_ROUTE_50_TRAINER_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _("Tirith"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_50_TRAINER_4),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_50_TRAINER_4},
    },

    [TRAINER_ROUTE_50_TRAINER_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_QUESTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_quester,
        .trainerName = _("Slayrmusiq1"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_50_TRAINER_5),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_50_TRAINER_5},
    },

//Route 51
    [TRAINER_ROUTE_51_EFFIGY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SUMMONER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_summoner,
        .trainerName = _("Effigy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_51_EFFIGY),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_51_EFFIGY},
    },

    [TRAINER_ROUTE_51_GUNS] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_UNKNOWN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_woodcutter,
        .trainerName = _("'The Guns'"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_51_GUNS),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_51_GUNS},
    },

//Route 52
    [TRAINER_ROUTE_52_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _("C0alH3ad"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_52_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_52_TRAINER_1},
    },

    [TRAINER_ROUTE_52_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _("AfkL00t"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_52_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_52_TRAINER_2},
    },

    [TRAINER_ROUTE_52_TRAINER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HUNTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_hunter_m,
        .trainerName = _("Quaffle8"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_52_TRAINER_3),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_52_TRAINER_3},
    },

    [TRAINER_ROUTE_52_TRAINER_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HUNTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_hunter_f,
        .trainerName = _("dnops"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_52_TRAINER_4),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_52_TRAINER_4},
    },

//Route 53
    [TRAINER_ROUTE_53_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_WOODCUTTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_woodcutter,
        .trainerName = _("F0rstrGal"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_53_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_53_TRAINER_1},
    },

    [TRAINER_ROUTE_53_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_guard_khazard,
        .trainerName = _("Terrence"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_53_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_53_TRAINER_2},
    },

//Route 54
    [TRAINER_ROUTE_54_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_fisher,
        .trainerName = _("AnglerLyfe"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_54_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_54_TRAINER_1},
    },

    [TRAINER_ROUTE_54_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_NOOB,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_noob_default,
        .trainerName = _("AFK2MAXCB"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_54_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_54_TRAINER_2},
    },

//Route 55
    [TRAINER_ROUTE_55_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("Slimenose"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_55_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_55_TRAINER_1},
    },

    [TRAINER_ROUTE_55_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FARMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miller,
        .trainerName = _("Daisy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_55_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_55_TRAINER_2},
    },

    [TRAINER_ROUTE_55_TRAINER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FARMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_farmer,
        .trainerName = _("Jeremy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_ROUTE_55_TRAINER_3),
        .party = {.NoItemDefaultMoves = sParty_ROUTE_55_TRAINER_3},
    },

//Melzars Maze 1F
    [TRAINER_MELZARS_1F_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HAM_GRUNT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_ham_grunt_m,
        .trainerName = _("David"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_MELZARS_1F_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_MELZARS_1F_TRAINER_1},
    },

    [TRAINER_MELZARS_1F_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_necromancer,
        .trainerName = _("Nuxor"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_MELZARS_1F_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_MELZARS_1F_TRAINER_2},
    },

    [TRAINER_MELZARS_1F_TRAINER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Clavica"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_MELZARS_1F_TRAINER_3),
        .party = {.NoItemDefaultMoves = sParty_MELZARS_1F_TRAINER_3},
    },

//Melzars Maze 2F
    [TRAINER_MELZARS_2F_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Talus"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_MELZARS_2F_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_MELZARS_2F_TRAINER_1},
    },

    [TRAINER_MELZARS_2F_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Patella"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_MELZARS_2F_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_MELZARS_2F_TRAINER_2},
    },

    [TRAINER_MELZARS_2F_TRAINER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HAM_GRUNT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_ham_grunt_m,
        .trainerName = _("Diego"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_MELZARS_2F_TRAINER_3),
        .party = {.NoItemDefaultMoves = sParty_MELZARS_2F_TRAINER_3},
    },

    [TRAINER_MELZARS_2F_TRAINER_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_QUESTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_quester,
        .trainerName = _("Spe3dRunr"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_MELZARS_2F_TRAINER_4),
        .party = {.NoItemDefaultMoves = sParty_MELZARS_2F_TRAINER_4},
    },

    [TRAINER_MELZARS_2F_TRAINER_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HAM_GRUNT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_ham_grunt_m,
        .trainerName = _("Dominic"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_MELZARS_2F_TRAINER_5),
        .party = {.NoItemDefaultMoves = sParty_MELZARS_2F_TRAINER_5},
    },

    [TRAINER_MELZARS_2F_TRAINER_6] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_necromancer,
        .trainerName = _("Astelazar"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_MELZARS_2F_TRAINER_6),
        .party = {.NoItemDefaultMoves = sParty_MELZARS_2F_TRAINER_6},
    },

//Melzars Maze 3F
    [TRAINER_MELZARS_3F_TRAINER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_necromancer,
        .trainerName = _("Ichethik"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_MELZARS_3F_TRAINER_1),
        .party = {.NoItemDefaultMoves = sParty_MELZARS_3F_TRAINER_1},
    },

    [TRAINER_MELZARS_3F_TRAINER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Maxilla"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_MELZARS_3F_TRAINER_2),
        .party = {.NoItemDefaultMoves = sParty_MELZARS_3F_TRAINER_2},
    },

    [TRAINER_MELZARS_3F_TRAINER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HAM_GRUNT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_ham_grunt_f,
        .trainerName = _("Diana"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .partySize = ARRAY_COUNT(sParty_MELZARS_3F_TRAINER_3),
        .party = {.NoItemDefaultMoves = sParty_MELZARS_3F_TRAINER_3},
    },


};