enum {
  // nl_NL
  LAYER_NL_NL_HET   = 13,
  LAYER_NL_NL_IS    = 14,
  LAYER_NL_NL_VIJF  = 15,
  LAYER_NL_NL_TIEN  = 16,
  LAYER_NL_NL_KWART = 17,
  LAYER_NL_NL_HALF  = 18,
  LAYER_NL_NL_OVER  = 19,
  LAYER_NL_NL_VOOR  = 20,
  LAYER_NL_NL_UUR   = 21,

  LAYER_FILLER = 27
};

/**
 * Array of array of word_t structs required to create all the phrases for designating time.
 *
 */
static const word_t words[54] = {
  // Hours 1-12
  [1]  = { 3, 9, "ÉÉN",    "één"    },
  [2]  = { 6, 1, "TWEE",   "twee"   },
  [3]  = { 4, 8, "DRIE",   "drie"   },
  [4]  = { 6, 7, "VIER",   "vier"   },
  [5]  = { 5, 7, "VIJF",   "vijf"   },
  [6]  = { 3, 5, "ZES",    "zes"    },
  [7]  = { 5, 0, "ZEVEN",  "zeven"  },
  [8]  = { 8, 0, "ACHT",   "acht"   },
  [9]  = { 7, 5, "NEGEN",  "negen"  },
  [10] = { 8, 4, "TIEN",   "tien"   },
  [11] = { 7, 0, "ELF",    "elf"    },
  [12] = { 4, 1, "TWAALF", "twaalf" },

  // Minutes before/after the hour
  [LAYER_NL_NL_VIJF]  = { 0, 7, "VIJF",  "vijf"  },
  [LAYER_NL_NL_TIEN]  = { 1, 8, "TIEN",  "tien"  },
  [LAYER_NL_NL_KWART] = { 1, 1, "KWART", "kwart" },
  [LAYER_NL_NL_HALF]  = { 3, 0, "HALF",  "half"  },

  // Relative
  [LAYER_NL_NL_HET]  = { 0, 0, "HET",  "het"  },
  [LAYER_NL_NL_IS]   = { 0, 4, "IS",   "is"   },
  [LAYER_NL_NL_OVER] = { 2, 6, "OVER", "over" },
  [LAYER_NL_NL_VOOR] = { 2, 0, "VOOR", "voor" },
  [LAYER_NL_NL_UUR]  = { 8, 9, "UUR",  "uur"  },

  // Extra, "random" characters used to fill in empty spaces between words
  [LAYER_FILLER] =
    { 0,  3, "R", "r" },
    { 0,  6, "J", "j" },
    { 0, 11, "Z", "z" },
    { 1,  0, "O", "o" },
    { 1,  6, "P", "p" },
    { 1,  7, "L", "l" },
    { 2,  4, "X", "x" },
    { 2,  5, "A", "a" },
    { 2, 10, "K", "k" },
    { 2, 11, "A", "a" },
    { 3,  4, "P", "p" },
    { 3,  8, "U", "u" },
    { 4,  0, "R", "r" },
    { 4,  7, "M", "m" },
    { 5,  5, "O", "o" },
    { 5,  6, "G", "g" },
    { 5, 11, "X", "x" },
    { 6,  0, "C", "c" },
    { 6,  5, "Q", "q" },
    { 6,  6, "B", "b" },
    { 6, 11, "W", "w" },
    { 7,  3, "J", "j" },
    { 7,  4, "U", "u" },
    { 7, 10, "K", "k" },
    { 7, 11, "D", "d" },
    { 8,  8, "O", "o" }
};

static const uint8_t intervals[13][5] = {
  // Always on
  { 0, LAYER_NL_NL_HET, LAYER_NL_NL_IS, 0, 0 },
  // XX:00 - XX:04
  { 0, LAYER_NL_NL_UUR, 0, 0, 0 },
  // XX:05 - XX:09
  { 0, LAYER_NL_NL_VIJF, LAYER_NL_NL_OVER, 0, 0 },
  // XX:10 - XX:14
  { 0, LAYER_NL_NL_TIEN, LAYER_NL_NL_OVER, 0, 0 },
  // XX:15 - XX:19
  { 0, LAYER_NL_NL_KWART, LAYER_NL_NL_OVER, 0, 0 },
  // XX:20 - XX:24
  { 1, LAYER_NL_NL_TIEN, LAYER_NL_NL_VOOR, LAYER_NL_NL_HALF, 0 },
  // XX:25 - XX:29
  { 1, LAYER_NL_NL_VIJF, LAYER_NL_NL_VOOR, LAYER_NL_NL_HALF, 0 },
  // XX:30 - XX:34
  { 1, LAYER_NL_NL_HALF, 0, 0, 0 },
  // XX:35 - XX:39
  { 1, LAYER_NL_NL_VIJF, LAYER_NL_NL_OVER, LAYER_NL_NL_HALF, 0 },
  // XX:40 - XX:44
  { 1, LAYER_NL_NL_TIEN, LAYER_NL_NL_OVER, LAYER_NL_NL_HALF, 0 },
  // XX:45 - XX:49
  { 1, LAYER_NL_NL_KWART, LAYER_NL_NL_VOOR, 0, 0 },
  // XX:50 - XX:54
  { 1, LAYER_NL_NL_TIEN, LAYER_NL_NL_VOOR, 0, 0 },
  // XX:55 - XX:59
  { 1, LAYER_NL_NL_VIJF, LAYER_NL_NL_VOOR, 0, 0 },
};

