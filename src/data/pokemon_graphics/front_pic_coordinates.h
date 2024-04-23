// All Pokémon pics are 64x64, but this data table defines where in this 64x64 frame
// the sprite's non-transparent pixels actually are.
// .size is the dimensions of this drawn pixel area.
// .y_offset is the number of pixels between the drawn pixel area and the bottom edge.
const struct MonCoords gMonFrontPicCoords[] =
{
    [SPECIES_NONE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_BULBASAUR] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 14,
    },
    [SPECIES_IVYSAUR] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 10,
    },
    [SPECIES_VENUSAUR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_CHARMANDER] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_CHARMELEON] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_CHARIZARD] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_SQUIRTLE] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_WARTORTLE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_BLASTOISE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CATERPIE] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 16,
    },
    [SPECIES_METAPOD] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 20,
    },
    [SPECIES_BUTTERFREE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_WEEDLE] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 18,
    },
    [SPECIES_KAKUNA] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 14,
    },
    [SPECIES_BEEDRILL] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 9,
    },
    [SPECIES_PIDGEY] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_PIDGEOTTO] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 11,
    },
    [SPECIES_PIDGEOT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_RATTATA] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 16,
    },
    [SPECIES_RATICATE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_SPEAROW] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 15,
    },
    [SPECIES_FEAROW] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_EKANS] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_ARBOK] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_PIKACHU] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 9,
    },
    [SPECIES_RAICHU] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 4,
    },
    [SPECIES_SANDSHREW] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_SANDSLASH] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_NIDORAN_F] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 15,
    },
    [SPECIES_NIDORINA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_NIDOQUEEN] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_NIDORAN_M] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_NIDORINO] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_NIDOKING] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
    },
    [SPECIES_CLEFAIRY] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 16,
    },
    [SPECIES_CLEFABLE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_VULPIX] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_NINETALES] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_JIGGLYPUFF] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 16,
    },
    [SPECIES_WIGGLYTUFF] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 8,
    },
    [SPECIES_ZUBAT] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_GOLBAT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_ODDISH] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 15,
    },
    [SPECIES_GLOOM] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_VILEPLUME] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_PARAS] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_PARASECT] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_VENONAT] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_VENOMOTH] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_DIGLETT] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 18,
    },
    [SPECIES_DUGTRIO] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 13,
    },
    [SPECIES_MEOWTH] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_PERSIAN] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_PSYDUCK] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 9,
    },
    [SPECIES_GOLDUCK] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
    },
    [SPECIES_MANKEY] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 14,
    },
    [SPECIES_PRIMEAPE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_GROWLITHE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_ARCANINE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_POLIWAG] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 19,
    },
    [SPECIES_POLIWHIRL] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_POLIWRATH] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_ABRA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_KADABRA] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_ALAKAZAM] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_MACHOP] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_MACHOKE] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_MACHAMP] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_BELLSPROUT] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 15,
    },
    [SPECIES_WEEPINBELL] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_VICTREEBEL] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_TENTACOOL] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 9,
    },
    [SPECIES_TENTACRUEL] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_GEODUDE] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 18,
    },
    [SPECIES_GRAVELER] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_GOLEM] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_PONYTA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_RAPIDASH] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_SLOWPOKE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_SLOWBRO] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_MAGNEMITE] =
    {
        .size = MON_COORDS_SIZE(32, 24),
        .y_offset = 21,
    },
    [SPECIES_MAGNETON] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_FARFETCHD] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_DODUO] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 5,
    },
    [SPECIES_DODRIO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SEEL] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_DEWGONG] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_GRIMER] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_MUK] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_SHELLDER] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 16,
    },
    [SPECIES_CLOYSTER] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_GASTLY] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_HAUNTER] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_GENGAR] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_ONIX] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
    },
    [SPECIES_DROWZEE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_HYPNO] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_KRABBY] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_KINGLER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_VOLTORB] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 19,
    },
    [SPECIES_ELECTRODE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_EXEGGCUTE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_EXEGGUTOR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CUBONE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_MAROWAK] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 11,
    },
    [SPECIES_HITMONLEE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_HITMONCHAN] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 4,
    },
    [SPECIES_LICKITUNG] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_KOFFING] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_WEEZING] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_RHYHORN] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_RHYDON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_CHANSEY] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_TANGELA] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_KANGASKHAN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_HORSEA] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 15,
    },
    [SPECIES_SEADRA] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_GOLDEEN] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_SEAKING] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_STARYU] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_STARMIE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_MR_MIME] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_SCYTHER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_JYNX] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_ELECTABUZZ] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
    },
    [SPECIES_MAGMAR] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_PINSIR] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_TAUROS] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_MAGIKARP] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_GYARADOS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 8,
    },
    [SPECIES_LAPRAS] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 13,
    },
    [SPECIES_DITTO] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 17,
    },
    [SPECIES_EEVEE] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 9,
    },
    [SPECIES_VAPOREON] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_JOLTEON] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_FLAREON] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_PORYGON] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 13,
    },
    [SPECIES_OMANYTE] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 15,
    },
    [SPECIES_OMASTAR] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_KABUTO] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 17,
    },
    [SPECIES_KABUTOPS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_AERODACTYL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_SNORLAX] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_ARTICUNO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_ZAPDOS] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_MOLTRES] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_DRATINI] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 14,
    },
    [SPECIES_DRAGONAIR] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_DRAGONITE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_MEWTWO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_MEW] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 13,
    },
    [SPECIES_CHIKORITA] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 13,
    },
    [SPECIES_BAYLEEF] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_MEGANIUM] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CYNDAQUIL] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_QUILAVA] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_TYPHLOSION] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_TOTODILE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_CROCONAW] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_FERALIGATR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SENTRET] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 4,
    },
    [SPECIES_FURRET] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_HOOTHOOT] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 13,
    },
    [SPECIES_NOCTOWL] =
    {
        .size = MON_COORDS_SIZE(40, 64),
        .y_offset = 3,
    },
    [SPECIES_LEDYBA] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 12,
    },
    [SPECIES_LEDIAN] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 4,
    },
    [SPECIES_SPINARAK] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 19,
    },
    [SPECIES_ARIADOS] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_CROBAT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CHINCHOU] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 16,
    },
    [SPECIES_LANTURN] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 11,
    },
    [SPECIES_PICHU] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 12,
    },
    [SPECIES_CLEFFA] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 20,
    },
    [SPECIES_IGGLYBUFF] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 18,
    },
    [SPECIES_TOGEPI] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 20,
    },
    [SPECIES_TOGETIC] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 9,
    },
    [SPECIES_NATU] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 20,
    },
    [SPECIES_XATU] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 7,
    },
    [SPECIES_MAREEP] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 16,
    },
    [SPECIES_FLAAFFY] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 10,
    },
    [SPECIES_AMPHAROS] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_BELLOSSOM] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 14,
    },
    [SPECIES_MARILL] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 14,
    },
    [SPECIES_AZUMARILL] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_SUDOWOODO] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_POLITOED] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_HOPPIP] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_SKIPLOOM] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_JUMPLUFF] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_AIPOM] =
    {
        .size = MON_COORDS_SIZE(40, 64),
        .y_offset = 3,
    },
    [SPECIES_SUNKERN] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 16,
    },
    [SPECIES_SUNFLORA] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 8,
    },
    [SPECIES_YANMA] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_WOOPER] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 16,
    },
    [SPECIES_QUAGSIRE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_ESPEON] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_UMBREON] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 8,
    },
    [SPECIES_MURKROW] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_SLOWKING] =
    {
        .size = MON_COORDS_SIZE(40, 64),
        .y_offset = 1,
    },
    [SPECIES_MISDREAVUS] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_UNOWN] =
    {
        .size = MON_COORDS_SIZE(24, 40),
        .y_offset = 15,
    },
    [SPECIES_WOBBUFFET] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_GIRAFARIG] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_PINECO] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 10,
    },
    [SPECIES_FORRETRESS] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_DUNSPARCE] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 17,
    },
    [SPECIES_GLIGAR] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_STEELIX] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SNUBBULL] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 13,
    },
    [SPECIES_GRANBULL] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 6,
    },
    [SPECIES_QWILFISH] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 10,
    },
    [SPECIES_SCIZOR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SHUCKLE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_HERACROSS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_SNEASEL] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 5,
    },
    [SPECIES_TEDDIURSA] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 13,
    },
    [SPECIES_URSARING] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 1,
    },
    [SPECIES_SLUGMA] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 13,
    },
    [SPECIES_MAGCARGO] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 13,
    },
    [SPECIES_SWINUB] =
    {
        .size = MON_COORDS_SIZE(32, 24),
        .y_offset = 20,
    },
    [SPECIES_PILOSWINE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_CORSOLA] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_REMORAID] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_OCTILLERY] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_DELIBIRD] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 8,
    },
    [SPECIES_MANTINE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_SKARMORY] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_HOUNDOUR] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_HOUNDOOM] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_KINGDRA] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 4,
    },
    [SPECIES_PHANPY] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 16,
    },
    [SPECIES_DONPHAN] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_PORYGON2] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_STANTLER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SMEARGLE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_TYROGUE] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 9,
    },
    [SPECIES_HITMONTOP] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 5,
    },
    [SPECIES_SMOOCHUM] =
    {
        .size = MON_COORDS_SIZE(24, 40),
        .y_offset = 15,
    },
    [SPECIES_ELEKID] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_MAGBY] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 13,
    },
    [SPECIES_MILTANK] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_BLISSEY] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_RAIKOU] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ENTEI] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SUICUNE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_LARVITAR] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 9,
    },
    [SPECIES_PUPITAR] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 9,
    },
    [SPECIES_TYRANITAR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_LUGIA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_HO_OH] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CELEBI] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_OLD_UNOWN_B] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_C] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_D] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_E] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_F] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_G] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_H] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_I] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_J] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_K] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_L] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_M] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_N] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_O] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_P] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_Q] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_R] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_S] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_T] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_U] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_V] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_W] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_X] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_Y] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_Z] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_TREECKO] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_GROVYLE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_SCEPTILE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_TORCHIC] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 8,
    },
    [SPECIES_COMBUSKEN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_BLAZIKEN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_MUDKIP] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 12,
    },
    [SPECIES_MARSHTOMP] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_SWAMPERT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_POOCHYENA] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_MIGHTYENA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_ZIGZAGOON] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 15,
    },
    [SPECIES_LINOONE] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_WURMPLE] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 14,
    },
    [SPECIES_SILCOON] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 17,
    },
    [SPECIES_BEAUTIFLY] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 9,
    },
    [SPECIES_CASCOON] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 16,
    },
    [SPECIES_DUSTOX] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 15,
    },
    [SPECIES_LOTAD] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 14,
    },
    [SPECIES_LOMBRE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_LUDICOLO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SEEDOT] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 16,
    },
    [SPECIES_NUZLEAF] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 8,
    },
    [SPECIES_SHIFTRY] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_NINCADA] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 18,
    },
    [SPECIES_NINJASK] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_SHEDINJA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_TAILLOW] =
    {
        .size = MON_COORDS_SIZE(48, 32),
        .y_offset = 16,
    },
    [SPECIES_SWELLOW] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_SHROOMISH] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 16,
    },
    [SPECIES_BRELOOM] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_SPINDA] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 8,
    },
    [SPECIES_WINGULL] =
    {
        .size = MON_COORDS_SIZE(64, 32),
        .y_offset = 24,
    },
    [SPECIES_PELIPPER] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_SURSKIT] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 15,
    },
    [SPECIES_MASQUERAIN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_WAILMER] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 15,
    },
    [SPECIES_WAILORD] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 10,
    },
    [SPECIES_SKITTY] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_DELCATTY] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_KECLEON] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_BALTOY] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 16,
    },
    [SPECIES_CLAYDOL] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 6,
    },
    [SPECIES_NOSEPASS] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 12,
    },
    [SPECIES_TORKOAL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_SABLEYE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_BARBOACH] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 11,
    },
    [SPECIES_WHISCASH] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_LUVDISC] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 24,
    },
    [SPECIES_CORPHISH] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 12,
    },
    [SPECIES_CRAWDAUNT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_FEEBAS] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 13,
    },
    [SPECIES_MILOTIC] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CARVANHA] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_SHARPEDO] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_TRAPINCH] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 16,
    },
    [SPECIES_VIBRAVA] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 12,
    },
    [SPECIES_FLYGON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_MAKUHITA] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_HARIYAMA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_ELECTRIKE] =
    {
        .size = MON_COORDS_SIZE(48, 32),
        .y_offset = 18,
    },
    [SPECIES_MANECTRIC] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 4,
    },
    [SPECIES_NUMEL] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 15,
    },
    [SPECIES_CAMERUPT] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 9,
    },
    [SPECIES_SPHEAL] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 16,
    },
    [SPECIES_SEALEO] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_WALREIN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_CACNEA] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 16,
    },
    [SPECIES_CACTURNE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SNORUNT] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_GLALIE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_LUNATONE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_SOLROCK] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_AZURILL] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_SPOINK] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 9,
    },
    [SPECIES_GRUMPIG] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_PLUSLE] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 14,
    },
    [SPECIES_MINUN] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 12,
    },
    [SPECIES_MAWILE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_MEDITITE] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_MEDICHAM] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 1,
    },
    [SPECIES_SWABLU] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 17,
    },
    [SPECIES_ALTARIA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_WYNAUT] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_DUSKULL] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_DUSCLOPS] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_ROSELIA] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_SLAKOTH] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 18,
    },
    [SPECIES_VIGOROTH] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_SLAKING] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_GULPIN] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 18,
    },
    [SPECIES_SWALOT] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_TROPIUS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_WHISMUR] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_LOUDRED] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_EXPLOUD] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_CLAMPERL] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_HUNTAIL] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_GOREBYSS] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 11,
    },
    [SPECIES_ABSOL] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 0,
    },
    [SPECIES_SHUPPET] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 14,
    },
    [SPECIES_BANETTE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_SEVIPER] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 8,
    },
    [SPECIES_ZANGOOSE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_RELICANTH] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 11,
    },
    [SPECIES_ARON] =
    {
        .size = MON_COORDS_SIZE(32, 24),
        .y_offset = 20,
    },
    [SPECIES_LAIRON] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 13,
    },
    [SPECIES_AGGRON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CASTFORM] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 17,
    },
    [SPECIES_VOLBEAT] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_ILLUMISE] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 8,
    },
    [SPECIES_LILEEP] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_CRADILY] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_ANORITH] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_ARMALDO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_RALTS] =
    {
        .size = MON_COORDS_SIZE(24, 40),
        .y_offset = 15,
    },
    [SPECIES_KIRLIA] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 6,
    },
    [SPECIES_GARDEVOIR] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 1,
    },
    [SPECIES_BAGON] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_SHELGON] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_SALAMENCE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_BELDUM] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_METANG] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_METAGROSS] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_REGIROCK] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 4,
    },
    [SPECIES_REGICE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_REGISTEEL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_KYOGRE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_GROUDON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_RAYQUAZA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_LATIAS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_LATIOS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_JIRACHI] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 13,
    },
    [SPECIES_DEOXYS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_CHIMECHO] =
    {
        .size = MON_COORDS_SIZE(24, 56),
        .y_offset = 6,
    },
	
	//POKESCAPE START
		[SPECIES_GUTHLING] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GUTHBIRD] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GUTHRAPTOR] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ZAMLING] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ZAMBIRD] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ZAMOHAWK] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SARALING] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SARABIRD] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SARAOWL] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHICK] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHICKEN_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DREADFOWL] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHICKEN_VARROCK_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHICKEN_DIVING_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHICKEN_KARAMJA_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHICKEN_DEATH_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHICKEN_BANDOSIAN_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHICKEN_WAR_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ROOSTER_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ERNEST] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ROOSTER_KARAMJA_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_OOMLIE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ROOSTER_BANDOSIAN_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHICKEN_FAMINE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ROOSTER_VARROCK_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHICKEN_PESTILENCE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHICKEN_LIZARD_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHICKEN_UNDEAD_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHICKEN_MYSTERY_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_EVILCHICKEN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SWORDCHICK] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_NEWTROOST] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CALF] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_COW] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SUPER_COW] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_COW_DAIRY_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_COW_UNDEAD_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_COW_CHOCOLATE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_COW_STRAWBERRY_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_COW_VANILLA_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_COW_HARLEQUIN_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SKELETALOX_FEMALE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BULL] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BULL_ELDER_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SKELETALOX_MALE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TROJAN_COW] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_COW_PLAGUE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_MINOTAUR_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_MINOTAUR_RUNE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_UNICOW] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_RAT_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GIANT_RAT_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BRINE_RAT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GIANT_RAT_BLESSED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_RAT_HELL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GIANT_RAT_HELL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SHELL_RAT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_RAT_CRYPT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GIANT_RAT_CRYPT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_WARPED_RAT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ZOMBIE_RAT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GIANT_RAT_DUNGEON_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_RAT_KING_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GIANT_RAT_KING_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ALBINO_RAT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ANGRY_RAT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_EXPERIMENT_2_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_LAMB] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SHEEP_WHITE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SHEEP_PLAGUE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SHEEP_BLACK_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_RAM_FLUFFY_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_RAM_SHAGGY_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_RAM_GOLDEN_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SHEEP_PIRATE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GOAT_BILLY_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GOAT_DESERT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GOAT_MOUNTAIN_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GORAK] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SARDINE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_HERRING] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TROUT_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SWORDFISH] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TROUT_LEAPING_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_STURGEON] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TROUT_TROPICAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SAILFISH] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_THALLASUS] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BASS] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SALMON_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SHARK_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_FURY_SHARK] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SALMON_LEAPING_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SHARK_GREATWHITE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SHARK_TIGER_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_MACKEREL] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CATFISH] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SHARK_BARON_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TARPON] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SEERFISH] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DESERTSOLE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SILLAGO] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_WOBBEGONG] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KARAMBWANJ] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KARAMBWAN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_WHITEFISH] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BELTFISH] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_MANTA_RAY] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_COD] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_RAINBOW] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SHARK_GOLDEN_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PIKE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_MONKFISH_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ANGLERFISH] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GIANT_CARP] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_MONKFISH_FRESH_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_MONKFISH_GOLDEN_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GOBLINFISH] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PET_FISH] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GILBERT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CAVEFISH] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ROCKTAIL] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_EEL_SLIMY_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_EEL_CAVE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_EEL_SACRED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_EEL_LAVA_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_EEL_INFERNAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_EEL_MOTTLED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_EEL_SHORT_FINNED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_EEL_SALVE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_EEL_DUSK_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CAVE_MORAY] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_VILE_FISH] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PIGLET] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PIG] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PIGZILLA] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PUPPY_PUP_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PUPPY_MUTT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TERRIER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SHEEPDOG] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DALMATIAN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GREYHOUND] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BULLDOG] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_LABRADOR] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CORGI] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TERROR_DOG] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_STRAY_DOG] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_MUNCHER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_HELLPUPPY] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_HELLHOUND] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CERBERUS] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KITTEN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CAT_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CAT_OVERGROWN_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CAT_LAZY_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CAT_WILY_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CAT_PURPLE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CAT_HELL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CAT_POST_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CAT_SUNKEN_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BOB] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_EVIL_BOB] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PET_ROCK] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ROCK_POLISHED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PILLAR] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ROCK_SOUP] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SLAGILITH] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ROCK_STRANGE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ROCK_GOLDEN_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PARTY_ROCK] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_STRYKEWYRM_FREEZY_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_STRYKEWYRM_LEAFY_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_STRYKEWYRM_SANDY_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_STRYKEWYRM_WILDY_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SCORPLING] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SCORPION_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SCORPION_PIT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SCORPION_POISON_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SCORPION_KING_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SCORPION_GRAVE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SCORPION_CORRUPTED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SCORPION_REANIMATED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SCORPION_GAUNTLET_CRYSTALLINE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SCORPION_GAUNTLET_CORRUPTED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SCORPION_KHAZARD_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SCORPION_SPIRIT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SCORPIA] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DREADNIP] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PEEPLING] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SNEAKRPEEP] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_RUNTSTABLE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BASILISK] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BABY_MOLE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GIANT_MOLE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SQUIRREL] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_RAVENLING] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_RAVEN_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_RAVEN_NEVERMORE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_RAVEN_SPOOKY_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_RAVEN_CRYSTAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CROW] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_MAGPIE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHINCHOMPA_GREY_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHINCHOMPA_RED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHINCHOMPA_GOLD_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_VULTLING] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_VULTURE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PENGLING] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PENGUIN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PENGUIN_CLOCKWORK_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_THE_THING] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PING] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PONG] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PENGUIN_MCGRAW_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PENGUIN_SPY_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PENGUIN_AGENT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PENGUIN_DISGUISE_CACTUS_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PENGUIN_DISGUISE_ROCK_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PENGUIN_DISGUISE_BUSH_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PENGUIN_DISGUISE_BOX_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_EXEXPARROT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BROAV] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TOOTHS] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_RUNE_GUARDIAN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GNOMEY] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SPARKLES] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BAT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GIANT_BAT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_WARPED_BAT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ALBINO_BAT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BAT_BOX_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_FRUIT_BAT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_VAMPYREBAT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DEATHWING] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SHAIKAH] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GROWLER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PHOENLING_REBIRTH_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PHOENLING_REBORN_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PHOENIX_REBIRTH_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PHOENIX_REBORN_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PLANT_STRANGE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PLANT_STRANGER_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_EVILTURNIP] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CREATURE_CUTE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CREATURE_EVIL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BABY_YAK] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_YAK_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_YAK_PACK_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_YAK_SACRED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_YAK_CLUESCROLL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_YAK_UNDEAD_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_YAK_SNACK_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_MINITRICE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_COCKATRICE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GUTHATRICE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ZAMATRICE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SARATRICE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CORXATRICE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_VULATRICE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PENGATRICE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHOCATRICE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SPROUTLING_SUMMER_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SPROUTLING_SPRING_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SPROUTLING_WINTER_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SPROUTLING_AUTUMN_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_RUE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_MONTY] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ZYGOMITE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ABYSSALING] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ABYSSAL_MINION_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ABYSSAL_DEMON_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ABYSSAL_SIRE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ABYSSAL_LEECH_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ABYSSAL_PARASITE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ABYSSAL_LURKER_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ABYSSAL_WALKER_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ABYSSAL_TITAN_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TZ_KIH] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TZ_KEK] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TOK_XIL] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TZ_KIH_SPIRIT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KET_DILL] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KET_ZEK] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_YT_HURKOT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_YT_MEJKOT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TZREK_JAD] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TZTOK_JAD] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_JALTOK_JAD] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_JAL_MEJRAH] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_JAL_AK] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_JAL_XIL] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_JAL_NIB] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_JAL_IMKOT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_JAL_ZEK] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TZKAL_ZUK] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DUCKLING] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SWAN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DUCK_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_MEGA_DUCK] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DUCK_CART_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PLATYPODE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PLATYPUS] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_FLEDGLING] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DAGANNOTH_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DAGANNOTH_GUARDIAN_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DAGANNOTH_KING_RANGE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DAGANNOTH_KING_MAGIC_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DAGANNOTH_KING_MELEE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DAGANNOTH_KING_RANGE_MEGA_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DAGANNOTH_KING_MAGIC_MEGA_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DAGANNOTH_KING_MELEE_MEGA_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHAOS_ELE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHAOS_ELE_MEGA_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BANDLING] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BANDBIRD] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BANDEAGLE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ZAROLING] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ZAROBIRD] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ZARAVEN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SERELING] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SEREBIRD] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SEREPEA] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_FROGSPAWN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_FROG_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GIANT_FROG_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GIANT_FROG_ROYAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_FROG_BLOATED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_FROG_BALLOON_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TOAD_BARKER_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_FROGEEL] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SPIDERLING] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SPIDER_GIANT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SPIDER_DEADLYRED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SPIDER_JUNGLE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SPIDER_BLESSED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SPIDER_HUGE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SPIDER_NIGHT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SPIDER_ICE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SPIDER_SPIRIT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_EEK] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_MINSTRLWEB] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SARACHNIS] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_VENENATIS] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SPIDINE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CRAYFISH] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SHRIMP] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_LOBSTER_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_LOBSTER_GOLDEN_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_LOBSTER_GIANT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_LOBSTER_HEIM_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_LOBSTER_OBSIDIAN_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CRAB_RED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GIANT_CRAB_RED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CRAB_MOSS_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GIANT_CRAB_MOSS_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CRAB_RUMPUMPED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GIANT_CRAB_RUMPUMPED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CRAB_DARK_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GIANT_CRAB_DARK_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CRAB_GREY_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GIANT_CRAB_GREY_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KNIFE_CRAB] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_HEIM_CRAB] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_WEBSNIPPER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BLUE_CRAB] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CRABLET_FIRST_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CRABLET_SECOND_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CRABLET_THIRD_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CRABLET_FORTH_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CRABLET_FIFTH_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CRAWLER_CAVE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CRAWLER_CHASM_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CRAWLER_MONSTROUS_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_WINSTON] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TORTOISE_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TORTOISE_WARPED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TORTOISE_WAR_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_VALLUTA] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SEA_TURTLE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SEA_TURTLE_TREASURE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_HERBERT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_XINACHTO] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CAVE_SLIME] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_JELLY_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_JELLY_WARPED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_JELLY_SPIRIT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ABBYSPECTR] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SALAMANDER_GREEN_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SALAMANDER_ORANGE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SALAMANDER_RED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SALAMANDER_BLACK_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SALAMANDER_AUGMENTED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GECKO] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHAMELEON] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BLOODVELD] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BLOODVELD_INSATIABLE_PHYSICAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BLOODVELD_INSATIABLE_SPECIAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BLOODVELD_MUTATED_PHYSICAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BLOODVELD_MUTATED_SPECIAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_REAVER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ARMALING] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ARMABIRD] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ARMAFALCON] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_UNGODLING] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_UNGODBIRD] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_UNGODGEON] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TUMEKLING] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TUMEKBIRD] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TUMEKIBIS] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KERRIT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SNUFFLE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_POPOCA] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHOLOA] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DURZAG] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_YAKAMARU] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHOMPY] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_JUBBLY] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_JUBSTER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TERRORBIRD_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TERRORBIRD_WARPED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TERRORBIRD_SPIRIT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_WOLF_JUVENILE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_WOLF_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_WOLF_FENRIS_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_WOLF_WHITE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ROVER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_WOLF_DIRE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_WOLF_JUNGLE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_WOLF_SKOLL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_WOLF_DESERT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_WOLF_HATI_HATI] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_WOLF_SPIRIT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_FOX] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_INARI] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_HELWYR] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BIRD_NEST] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BIRDS_NEST_GOD_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PIGEON] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PHEASANT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ROCLING] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ROC] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_FOAL] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_UNICORN_WHITE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_UNICORN_STALLION_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_UNICORN_BLACK_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_UNICORN_ANGRY_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_UNICORN_REANIMATED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_STARLIGHT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PAWYA] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GRENWALL] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BEAR_CUB] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BEAR_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BEAR_REANIMATED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BEAR_GAUNTLET_CRYSTALLINE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CALLISTO] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_POLAR_BEAR_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_POLAR_BEAR_PBJ_AGENT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_POLAR_BEAR_ARCTIC_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_POLAR_BEAR_NANUQ_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BEAR_GRIZZLY_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KENDALL] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BEAR_GAUNTLET_CORRUPTED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BEAR_ANGRY_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GRAAHK_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GRAAHK_SPIRIT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DUST_DEVIL] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SMOKEDEVIL] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SMOKEDEVIL_NUCLEAR_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHOKEDEVIL] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SMOKEDEVIL_THERMONUCLEAR_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_HATCHLING] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DRAGONLING_GREEN_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DRAGON_GREEN_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DRAGON_BRUTAL_GREEN_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DRAGONLING_BLUE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DRAGON_BLUE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DRAGON_BRUTAL_BLUE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DRAGONLING_RED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DRAGON_RED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DRAGON_BRUTAL_RED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DRAGONLING_BLACK_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DRAGON_BLACK_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DRAGON_BRUTAL_BLACK_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DRAGON_THREEHEADED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ELVARG] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DRAGON_KING_BLACK_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DRAGON_QUEEN_BLACK_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_HAND_CREEPING_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_HAND_CRAWLING_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_HAND_SKELETAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_HAND_CRUSHING_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_HAND_ZOMBIE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TUROTH] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TUROTH_MIGHTIEST_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BIG_TUROTH] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SOCKROTH] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_LILRASK] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KURASK] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KURASK_KING_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KURASK_OVERLORD_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KEBBIT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KEBBIT_POLAR_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KEBBIT_SABRE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KEBBIT_SPOTTED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KEBBIT_DARK_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KEBBIT_DASHING_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KEBBIT_WILD_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KEBBIT_PRICKLY_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KEBBIT_RAZOR_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KEBBIT_BIG_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KEBBIT_DESERTDEVIL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KEBBIT_FELDIP_WEASEL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KEBBIT_BARBED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KEBBIT_DISEASED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KEBBIT_CHOCOLATE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_MONKEY_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_MONKEY_NINJA_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GORILLA_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_MONKEY_ZOMBIE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GORILLA_ANCIENT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_MONKEY_HARMLESS_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_MONKEY_GHOST_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GORILLA_AYUNI_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GORILLA_LEEUNI_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GORILLA_ERUNI_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_MONKEY_KARAMJA_BABY_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_MONKEY_KARAMJA_ADULT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_LARUPIA_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_LARUPIA_SPIRIT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KYATT_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KYATT_SPIRIT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CRABLING] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ROCK_CRAB_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ROCK_CRAB_GIANT_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ROCK_CRAB_AMMONITE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ROCK_CRAB_GIANT_AMMONITE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ROCK_CRAB_SAND_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ROCK_CRAB_GIANT_SAND_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ROCK_CRAB_SWAMP_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ROCK_CRAB_GIANT_SWAMP_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CRAB_GRANITE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_LOBSTER_GRANITE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_LOBSTER_ROCK_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_RABBIT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_WOLPERTING] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BUNYIP] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TALONBEAST_TALON_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TALONBEAST_NAIL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_FERRET] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TOY_MOUSE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TOY_DOLL] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TOY_SOLDIER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CAT_CLOCKWORK_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_MAGICARPET] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ANICHAIR] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_EXORAXE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SPOOKAXE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DOBBIN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_MARIONETTE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DRAGONKITE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ANIMOUR] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DEAD_TREE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_JADINKO] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KILLERWATT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_MACKERS] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TURKEY_FEMALE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TURKEY_MALE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TURKEY_PROTESTOR_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TOUCAN_TENACIOUS_MALE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TOUCAN_TENACIOUS_FEMALE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TOUCAN_TUAI_LEIT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_JELLYFISH_BLUBBER_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_JELLYFISH] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PURE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_RUNE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ESSENCE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SEAGULL_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PELICAN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ALBATROSS] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SEAGULL_HATTENKRAPPER_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SEAGULL_KOPPENPLOPPEN_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SEAGULL_STEVEN_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_IBIS] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DESERTWYRM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_WYRM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SNAKE_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_COBRA_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_COBRA_SPIRIT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_JUNA] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SNAKE_SEA_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BIG_SNAKE_SEA_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_THINGUMWUT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_EXPERIMENT_3_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CABBAGE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_UGHTANKI] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CAMEL] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CAMEL_WARRIOR_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BALANCEELE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KALPHITE_LARVA_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KALPHITE_WORKER_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KALPHITE_SOLDIER_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KALPHITE_SPIRIT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KALPHITE_GUARDIAN_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KALPHITE_QUEEN_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KALPHITE_QUEEN_MEGA_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KALPHITE_PARAGON_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KALPHITE_CORRUPTED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KALPHITE_MARAUDER_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KALPHITE_KING_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KALPHITE_DUNG_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KALPHITE_REANIMATED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ABYSSAL_DEMON_REANIMATED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BAT_GAUNTLET_CORRUPTED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BAT_GAUNTLET_CRYSTALLINE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BLOODVELD_REANIMATED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DARK_BEAST_GAUNTLET_CORRUPTED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DARK_BEAST_GAUNTLET_CRYSTALLINE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DARK_BEAST_PUP_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DARK_BEAST_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DARK_BEAST_SOTETSEG_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_EXPERIMENT_4_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_EXPERIMENT_5_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GANODERMIC_BEAST] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GRIFOLAPINE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GRIFOLAROO] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SPORAXE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_HEADLESS_BEAST] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BEHEMOTH_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BEHEMOTH_ADOLSCENT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SIEGE_BEAST] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BULWARK_BEAST] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BEHEMOTH_GLUTTONOUS_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BEHEMOTH_RUNEBOUND_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_STOMP] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_HOPE_DEVOURER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KARAMTHULU_OVERLORD] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_LIGHT_CREATURE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_MINOTAUR_REANIMATED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_MONKEY_REANIMATED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_RAT_GAUNTLET_CORRUPTED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_RAT_GAUNTLET_CRYSTALLINE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_RAT_FUNGAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SPARKY] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SPIDER_CORPSE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SPIDER_FEVER_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SPIDER_LAVA_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SPIDER_SHADOW_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_STALKER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SOULSEEKER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_STALKER_SENTINEL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_NIGHT_GAZER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PLANE_FREEZER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_WORLD_GORGER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_FLESH_MONGER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SHADOW_FORGER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_VEIL_RIPPER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_UNICORN_GAUNTLET_CORRUPTED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_UNICORN_GAUNTLET_CRYSTALLINE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_WOLF_CAVE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_WOLF_DRAGON_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SHADOW_HOUND] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BORDER_COLLIE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BLOODHOUND] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GUARD_DOG] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_LYCURGUS] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_YAK_MOORRISSEY_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_YAK_ROBIN_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_YAK_YAKTRICK_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CABBAGE_SISTER_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CABBAGE_CRISPY_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_STRYKEWYRM_MINI_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CROCODILE_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CROCODILE_MUTADILE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CROCODILE_ANKH_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CROCODILE_UKUNDUKA_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BLOODVELD_INSATIABLE_MUTATED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BLOODVELD_ACIDIC_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BLOODVELD_VAMPIRIC_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BLOODVELD_RS3_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BEAVER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GIANT_BEAVER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_RACOON] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_RALPH] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ROCKY] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_HONEY_BADGER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SQUIRREL_GIANT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SQUIRREL_AUSTRALIAN_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_JADE_VINE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KLIK] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_JACKALOPE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_IMP] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DEMON_LESSER_RS3_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DEMON_GREATER_RS3_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DEMON_KALGERION_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DEMON_THUNDEREOUS_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DEMON_RIPPER_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DEMON_LESSER_OSRS_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DEMON_GREATER_OSRS_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DEMON_TSTANON_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DEMON_TORMENTED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DELRITH] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DEMON_LESSER_TONGUE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DEMON_GREATER_TONGUE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DEMON_ZAKLN_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DEMON_PUMMELER_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DEMON_CHOCOLATE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DEMON_LESSER_BLACK_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DEMON_GREATER_BLACK_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DEMON_BALFRUG_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DEMON_JUNGLE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DEMON_RIFTSPLITTER_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SNOW_IMP] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DEMON_ICE_OSRS_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DEMON_ICE_RS3_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DEMON_BLOODCHILLER_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DEMON_REANIMATED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KRIL_TSUTSAROTH] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PYREFIEND] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PYRELORD] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_WATERFIEND] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_WATERLORD] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ICEFIEND] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ICELORD] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_IMPLING_BABY_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_IMPLING_MAGPIE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_IMPLING_DRAGON_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_IMPLING_KINGLY_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_IMPLING_LUCKY_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PENANCE_SPAWN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PENANCE_HEALER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PENANCE_RANGER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PENANCE_RUNNER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PENANCE_FIGHTER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PENANCE_QUEEN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PENANCE_KING] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_VOID_LEECH] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_VOID_TORCHER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_VOID_SHIFTER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_VOID_BRAWLER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_VOID_DEFILER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_VOID_SPLATTER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_VOID_RAVAGER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_VOID_SPINNER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_VOID_DRONE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_VOID_QUEEN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ANCHOVY] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ANCHOVY_PIZZA_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_RED_EYE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_FLATFISH] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BOULDABASS] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_MUDSKIPPER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BASILISK_BABY_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BASILISK_RS3_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BASILISK_OSRS_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BASILISK_KNIGHT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SPIDER_UNGAEL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SPIDER_CRYPT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SPIDER_TEMPLE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SPIDER_APEATOLL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CATABLEPON] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PROTOMASTYX] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TYRANNOMASTYX] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PIG_WAR_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PIG_PRAYER_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PIG_PACK_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_HERBIBOAR] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GOAT_CLAY_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GOAT_SACREDCLAY_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GOAT_PRIMORDIALCLAY_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SHADEEL] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GOLEM_TITAN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_MOSS_TITAN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_IRON_TITAN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_STEEL_TITAN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_LAVA_TITAN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_OBSIDIAN_GOLEM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SWAMP_TITAN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ICE_TITAN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_FIRE_TITAN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GEYSIR_TITAN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DARK_CORE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CORPOREAL_BEAST] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CORPOREAL_BEAST_ZANIK_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_COMPOST_MOUND] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ENT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DERWEN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_COCKROACH_DRONE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_COCKROACH_WORKER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_COCKROACH_SOLDIER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_COCKROACH_WARPED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_FIARA] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CAVE_BUG] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_MALCOLM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_MEERKATS] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ORIGAMI_BALLOON] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KRILL_BALLOON] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BALLOON_GOAT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DAGANNOTH_MOTHER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GELATINNOTH] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DAGANNOTH_DAUGHTER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DAGANNOTH_REANIMATED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DAGANNOTH_SPIRIT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_FLAMBEED] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_AGRITHNANA] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KARAMEL] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DESSOURT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SHARKIZARD] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BASSTOISE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_RAVENTZHAAR] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_WALL_BEAST] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_WALL_BEAST_MEGA_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SOURHOG] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_HAND_FARMHAND_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_HAND_STUFFED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_HAND_BROKENFINGERS_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_HAND_DEADHAND_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_HAND_DUNGEONEERING_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SNAKE_DESERT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SNAKE_POISON_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SNAKE_SWAMP_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ICXAN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SKELETAL_WYVERN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_WYVERN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_IMPLING_GOURMET_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_IMPLING_EARTH_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_IMPLING_YOUNG_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_IMPLING_PIRATE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_IMPLING_NINJA_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_IMPLING_ZOMBIE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_IMPLING_ECLECTIC_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_IMPLING_CRYSTAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_IMPLING_NATURE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_IMPLING_ESSENCE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_IMPLING_DIVINE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_IMPLING_SPIRIT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ARAXYTE_BABY] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ARAXYTE_ACIDIC] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ARAXYTE_MIRRORBACK] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ARAXYTE_PULSING] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ARAXXOR] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ARAXXI] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GLACOR_ENDURING_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GLACOR_SAPPING_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GLACOR_UNSTABLE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GLACOR] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GLACOR_ARCH_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_JADINKO_COMMON_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_JADINKO_MALE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_JADINKO_QUEEN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_RUBY_HARVEST] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SAPPHIRE_GLACIALIS] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SNOW_KNIGHT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BLACK_WARLOCK] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_FORGE_REGENT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GUTHIXIAN_BUTTERFLY] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHARMING_MOTH] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TREBORN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DRAUGEN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_MACAW] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_THE_ILLUSIVE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_DOUBT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_EVERLASTING] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_UNTOUCHABLE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_INADEQUANCY] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHINCHOMPA_BABY] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHINCHOMPA_GREY_BABY] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHINCHOMPA_RED_BABY] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHINCHOMPA_COBALT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHINCHOMPA_VIRIDIAN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHINCHOMPA_CRYSTAL] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHINCHOMPA_PLUTONIAL] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHINCHOMPA_MECHANIZED] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHINCHOMPA_CRIMSON] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHINCHOMPA_BLACK] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CHINCHOMPA_GIANT] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_VULTURE_RSHD_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_VULTURE_PINK_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_VULTURE_OSRS_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_VULTURE_RS3_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BEAGLE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PUG] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_HUSKIE] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SHIBA] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_POLAR_BEAR_PUNISHED] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_LOBSTROCITY] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SALAMANDER_YELLOW_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ABYSSAL_DEEPSEA_WALKER] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ABYSSAL_DEEPSEA_LEECH] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ABYSSAL_DEEPSEA_GUARDIAN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_KIPPLE_NANO] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CORAL_GUARDIAN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_REWARDS_GUARDIAN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BABOON_NORMAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BABOON_MAGE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BABOON_SHAMAN_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BABOON_THROWER_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BABOON_CURSED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BABOON_THRALL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BABOON_VOLATILE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_BABOON_BABA_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SCARAB_SPITTING_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SCARAB_SOLDIER_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SCARAB_ARCANE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SCARAB_KEPHRI_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CROCODILE_RED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ZEBAK] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_CAMEL_BANK_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SLIME_LILGLOOP] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SLIME_KING] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_GRAAHK_FORSAKEN_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ZYGOMITE_MAGICAL_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ZYGOMITE_ZANARIAN_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ZYGOMITE_ARCSPORE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ZYGOMITE_DAEMONCAP_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ZYGOMITE_ANCIENT_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ZULRAH_SERPENTINE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ZULRAH_MAGMA_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ZULRAH_TANZANITE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_PIG_SUMMONING_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TZTOK_JAD_HD_MEGA_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_TZTOK_JAD_RS3_MEGA_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_ABYSSAL_GUARDIAN] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SKOTIZO] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SCURRIUS_MELEE_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SCURRIUS_RANGED_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_SCURRIUS_MAGIC_FORM] =
	{
		.size = 0x0,
		.y_offset = 0,
	},
	[SPECIES_VORKATH] =
	{
		.size = 0x0,
		.y_offset = 0,
	},





	//POKESCAPE END	
	
    [SPECIES_EGG] =
    {
        .size = MON_COORDS_SIZE(24, 24),
        .y_offset = 20,
    },
    [SPECIES_UNOWN_B] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 16,
    },
    [SPECIES_UNOWN_C] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 16,
    },
    [SPECIES_UNOWN_D] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 16,
    },
    [SPECIES_UNOWN_E] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 17,
    },
    [SPECIES_UNOWN_F] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 17,
    },
    [SPECIES_UNOWN_G] =
    {
        .size = MON_COORDS_SIZE(24, 40),
        .y_offset = 14,
    },
    [SPECIES_UNOWN_H] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 16,
    },
    [SPECIES_UNOWN_I] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 16,
    },
    [SPECIES_UNOWN_J] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 17,
    },
    [SPECIES_UNOWN_K] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 17,
    },
    [SPECIES_UNOWN_L] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 19,
    },
    [SPECIES_UNOWN_M] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 19,
    },
    [SPECIES_UNOWN_N] =
    {
        .size = MON_COORDS_SIZE(32, 24),
        .y_offset = 20,
    },
    [SPECIES_UNOWN_O] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 16,
    },
    [SPECIES_UNOWN_P] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 19,
    },
    [SPECIES_UNOWN_Q] =
    {
        .size = MON_COORDS_SIZE(32, 24),
        .y_offset = 21,
    },
    [SPECIES_UNOWN_R] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 19,
    },
    [SPECIES_UNOWN_S] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 12,
    },
    [SPECIES_UNOWN_T] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 18,
    },
    [SPECIES_UNOWN_U] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 18,
    },
    [SPECIES_UNOWN_V] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 18,
    },
    [SPECIES_UNOWN_W] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 19,
    },
    [SPECIES_UNOWN_X] =
    {
        .size = MON_COORDS_SIZE(24, 24),
        .y_offset = 21,
    },
    [SPECIES_UNOWN_Y] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 17,
    },
    [SPECIES_UNOWN_Z] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 16,
    },
    [SPECIES_UNOWN_EMARK] =
    {
        .size = MON_COORDS_SIZE(24, 40),
        .y_offset = 15,
    },
    [SPECIES_UNOWN_QMARK] =
    {
        .size = MON_COORDS_SIZE(24, 40),
        .y_offset = 13,
    },
	


};
