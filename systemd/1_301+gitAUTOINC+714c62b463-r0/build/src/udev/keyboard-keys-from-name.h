/* ANSI-C code produced by gperf version 3.0.4 */
/* Command-line: gperf -L ANSI-C -t -N keyboard_lookup_key -H hash_key_name -p -C  */
/* Computed positions: -k'1-3,5,12,16,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

struct key { const char* name; unsigned short id; };

#define TOTAL_KEYWORDS 441
#define MIN_WORD_LENGTH 1
#define MAX_WORD_LENGTH 24
#define MIN_HASH_VALUE 1
#define MAX_HASH_VALUE 1655
/* maximum key range = 1655, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash_key_name (register const char *str, register unsigned int len)
{
  static const unsigned short asso_values[] =
    {
      1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656,
      1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656,
      1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656,
      1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656,
      1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656,  115,  230,
       155,  405,   70,  280,  180,  175,  260,  325,   10, 1656,
      1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656,
      1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656,
      1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656,
      1656, 1656, 1656, 1656, 1656,   35,  410,   10,  290,   20,
       135,    5,  395,  275,  195,  125,  150,  300,  250,  130,
        35,   15,  145,  400,   25,   75,    0,   40,  385,  435,
       170,   65,  220, 1656, 1656, 1656, 1656, 1656, 1656, 1656,
      1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656,
      1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656,
      1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656,
      1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656,
      1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656,
      1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656,
      1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656,
      1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656,
      1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656,
      1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656,
      1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656,
      1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656, 1656,
      1656, 1656, 1656, 1656, 1656, 1656, 1656
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[15]];
      /*FALLTHROUGH*/
      case 15:
      case 14:
      case 13:
      case 12:
        hval += asso_values[(unsigned char)str[11]];
      /*FALLTHROUGH*/
      case 11:
      case 10:
      case 9:
      case 8:
      case 7:
      case 6:
      case 5:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
      case 3:
        hval += asso_values[(unsigned char)str[2]+1];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

#ifdef __GNUC__
__inline
#if defined __GNUC_STDC_INLINE__ || defined __GNUC_GNU_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const struct key *
keyboard_lookup_key (register const char *str, register unsigned int len)
{
  static const struct key wordlist[] =
    {
      {(char*)0},
      {"t", KEY_T},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"e", KEY_E},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"a", KEY_A},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"o", KEY_O},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"c", KEY_C},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"restart", KEY_RESTART},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"r", KEY_R},
      {(char*)0}, {(char*)0},
      {"redo", KEY_REDO},
      {(char*)0}, {(char*)0},
      {"ro", KEY_RO},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"connect", KEY_CONNECT},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"n", KEY_N},
      {(char*)0}, {(char*)0},
      {"text", KEY_TEXT},
      {"radio", KEY_RADIO},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"u", KEY_U},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"audio", KEY_AUDIO},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"comma", KEY_COMMA},
      {(char*)0},
      {"compose", KEY_COMPOSE},
      {(char*)0},
      {"undo", KEY_UNDO},
      {"audio_desc", KEY_AUDIO_DESC},
      {"camera_left", KEY_CAMERA_LEFT},
      {"camera_right", KEY_CAMERA_RIGHT},
      {"cut", KEY_CUT},
      {(char*)0}, {(char*)0},
      {"camera", KEY_CAMERA},
      {(char*)0}, {(char*)0},
      {"next", KEY_NEXT},
      {"tuner", KEY_TUNER},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"camera_zoomout", KEY_CAMERA_ZOOMOUT},
      {(char*)0},
      {"unmute", KEY_UNMUTE},
      {(char*)0},
      {"yen", KEY_YEN},
      {(char*)0}, {(char*)0},
      {"attendant_toggle", KEY_ATTENDANT_TOGGLE},
      {(char*)0},
      {"sat", KEY_SAT},
      {(char*)0}, {(char*)0},
      {"y", KEY_Y},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"enter", KEY_ENTER},
      {"camera_down", KEY_CAMERA_DOWN},
      {(char*)0}, {(char*)0},
      {"euro", KEY_EURO},
      {(char*)0},
      {"4", KEY_4},
      {(char*)0},
      {"computer", KEY_COMPUTER},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"context_menu", KEY_CONTEXT_MENU},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"s", KEY_S},
      {(char*)0}, {(char*)0},
      {"numeric_a", KEY_NUMERIC_A},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"next_favorite", KEY_NEXT_FAVORITE},
      {"mode", KEY_MODE},
      {(char*)0}, {(char*)0},
      {"media_repeat", KEY_MEDIA_REPEAT},
      {(char*)0},
      {"numeric_c", KEY_NUMERIC_C},
      {"media", KEY_MEDIA},
      {(char*)0},
      {"attendant_on", KEY_ATTENDANT_ON},
      {(char*)0},
      {"time", KEY_TIME},
      {"paste", KEY_PASTE},
      {(char*)0}, {(char*)0},
      {"red", KEY_RED},
      {"messenger", KEY_MESSENGER},
      {(char*)0},
      {"taskmanager", KEY_TASKMANAGER},
      {(char*)0}, {(char*)0},
      {"semicolon", KEY_SEMICOLON},
      {"title", KEY_TITLE},
      {(char*)0}, {(char*)0},
      {"end", KEY_END},
      {"calc", KEY_CALC},
      {(char*)0}, {(char*)0},
      {"pc", KEY_PC},
      {(char*)0},
      {"memo", KEY_MEMO},
      {(char*)0},
      {"insert", KEY_INSERT},
      {(char*)0},
      {"dot", KEY_DOT},
      {"menu", KEY_MENU},
      {(char*)0}, {(char*)0},
      {"numeric_star", KEY_NUMERIC_STAR},
      {"reserved", KEY_RESERVED},
      {"data", KEY_DATA},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"media_top_menu", KEY_MEDIA_TOP_MENU},
      {(char*)0},
      {"screensaver", KEY_SCREENSAVER},
      {(char*)0}, {(char*)0},
      {"numeric_4", KEY_NUMERIC_4},
      {(char*)0},
      {"screen", KEY_SCREEN},
      {(char*)0}, {(char*)0},
      {"mute", KEY_MUTE},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"calendar", KEY_CALENDAR},
      {(char*)0}, {(char*)0},
      {"0", KEY_0},
      {(char*)0}, {(char*)0},
      {"send", KEY_SEND},
      {(char*)0},
      {"select", KEY_SELECT},
      {(char*)0},
      {"esc", KEY_ESC},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"camera_up", KEY_CAMERA_UP},
      {"hanja", KEY_HANJA},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"i", KEY_I},
      {"camera_focus", KEY_CAMERA_FOCUS},
      {(char*)0},
      {"home", KEY_HOME},
      {"angle", KEY_ANGLE},
      {"option", KEY_OPTION},
      {(char*)0}, {(char*)0},
      {"numeric_0", KEY_NUMERIC_0},
      {(char*)0},
      {"m", KEY_M},
      {"suspend", KEY_SUSPEND},
      {"camera_zoomin", KEY_CAMERA_ZOOMIN},
      {"last", KEY_LAST},
      {(char*)0},
      {"henkan", KEY_HENKAN},
      {(char*)0}, {(char*)0},
      {"root_menu", KEY_ROOT_MENU},
      {(char*)0},
      {"d", KEY_D},
      {(char*)0},
      {"subtitle", KEY_SUBTITLE},
      {(char*)0},
      {"als_toggle", KEY_ALS_TOGGLE},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"numeric_d", KEY_NUMERIC_D},
      {(char*)0},
      {"delete", KEY_DELETE},
      {(char*)0}, {(char*)0},
      {"sat2", KEY_SAT2},
      {"deletefile", KEY_DELETEFILE},
      {(char*)0}, {(char*)0},
      {"aux", KEY_AUX},
      {"news", KEY_NEWS},
      {(char*)0},
      {"p", KEY_P},
      {"cd", KEY_CD},
      {(char*)0},
      {"edit", KEY_EDIT},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"numeric_2", KEY_NUMERIC_2},
      {"numeric_12", KEY_NUMERIC_12},
      {"j", KEY_J},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"cancel", KEY_CANCEL},
      {"archive", KEY_ARCHIVE},
      {(char*)0}, {(char*)0},
      {"macro", KEY_MACRO},
      {"2", KEY_2},
      {(char*)0}, {(char*)0},
      {"zenkakuhankaku", KEY_ZENKAKUHANKAKU},
      {"apostrophe", KEY_APOSTROPHE},
      {"spreadsheet", KEY_SPREADSHEET},
      {(char*)0},
      {"numeric_pound", KEY_NUMERIC_POUND},
      {"numeric_7", KEY_NUMERIC_7},
      {(char*)0},
      {"dollar", KEY_DOLLAR},
      {(char*)0},
      {"tab", KEY_TAB},
      {"numeric_6", KEY_NUMERIC_6},
      {"print", KEY_PRINT},
      {"coffee", KEY_COFFEE},
      {(char*)0},
      {"language", KEY_LANGUAGE},
      {"exit", KEY_EXIT},
      {(char*)0},
      {"record", KEY_RECORD},
      {"up", KEY_UP},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"editor", KEY_EDITOR},
      {(char*)0},
      {"alterase", KEY_ALTERASE},
      {(char*)0}, {(char*)0},
      {"x", KEY_X},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"goto", KEY_GOTO},
      {"right", KEY_RIGHT},
      {"7", KEY_7},
      {(char*)0},
      {"rightalt", KEY_RIGHTALT},
      {(char*)0},
      {"rightshift", KEY_RIGHTSHIFT},
      {(char*)0},
      {"del_eos", KEY_DEL_EOS},
      {(char*)0},
      {"down", KEY_DOWN},
      {"rightbrace", KEY_RIGHTBRACE},
      {"6", KEY_6},
      {(char*)0},
      {"iso", KEY_ISO},
      {"rightmeta", KEY_RIGHTMETA},
      {"msdos", KEY_MSDOS},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"stop", KEY_STOP},
      {"sport", KEY_SPORT},
      {(char*)0}, {(char*)0},
      {"muhenkan", KEY_MUHENKAN},
      {"numeric_1", KEY_NUMERIC_1},
      {"numeric_11", KEY_NUMERIC_11},
      {"rewind", KEY_REWIND},
      {(char*)0}, {(char*)0},
      {"list", KEY_LIST},
      {(char*)0},
      {"stopcd", KEY_STOPCD},
      {"unknown", KEY_UNKNOWN},
      {(char*)0}, {(char*)0},
      {"power", KEY_POWER},
      {(char*)0},
      {"cyclewindows", KEY_CYCLEWINDOWS},
      {(char*)0}, {(char*)0},
      {"right_down", KEY_RIGHT_DOWN},
      {"h", KEY_H},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"direction", KEY_DIRECTION},
      {"scale", KEY_SCALE},
      {"stop_record", KEY_STOP_RECORD},
      {"zoomout", KEY_ZOOMOUT},
      {"homepage", KEY_HOMEPAGE},
      {"numeric_8", KEY_NUMERIC_8},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"rotate_display", KEY_ROTATE_DISPLAY},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"zoomreset", KEY_ZOOMRESET},
      {"setup", KEY_SETUP},
      {(char*)0},
      {"battery", KEY_BATTERY},
      {(char*)0},
      {"tape", KEY_TAPE},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"ins_line", KEY_INS_LINE},
      {"numeric_5", KEY_NUMERIC_5},
      {"minus", KEY_MINUS},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"directory", KEY_DIRECTORY},
      {"close", KEY_CLOSE},
      {(char*)0},
      {"numlock", KEY_NUMLOCK},
      {(char*)0},
      {"numeric_b", KEY_NUMERIC_B},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"teen", KEY_TEEN},
      {(char*)0},
      {"z", KEY_Z},
      {"micmute", KEY_MICMUTE},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"fastreverse", KEY_FASTREVERSE},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"vendor", KEY_VENDOR},
      {(char*)0}, {(char*)0},
      {"info", KEY_INFO},
      {"kpdot", KEY_KPDOT},
      {"config", KEY_CONFIG},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"prog4", KEY_PROG4},
      {"1", KEY_1},
      {(char*)0},
      {"nextsong", KEY_NEXTSONG},
      {(char*)0},
      {"scrolldown", KEY_SCROLLDOWN},
      {"addressbook", KEY_ADDRESSBOOK},
      {"fn", KEY_FN},
      {(char*)0},
      {"numeric_9", KEY_NUMERIC_9},
      {"props", KEY_PROPS},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"games", KEY_GAMES},
      {(char*)0},
      {"program", KEY_PROGRAM},
      {(char*)0},
      {"help", KEY_HELP},
      {(char*)0}, {(char*)0},
      {"hangeul", KEY_HANGEUL},
      {(char*)0}, {(char*)0},
      {"screenlock", KEY_SCREENLOCK},
      {(char*)0},
      {"hp", KEY_HP},
      {"database", KEY_DATABASE},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"right_up", KEY_RIGHT_UP},
      {"documents", KEY_DOCUMENTS},
      {"phone", KEY_PHONE},
      {"l", KEY_L},
      {(char*)0},
      {"sendfile", KEY_SENDFILE},
      {"copy", KEY_COPY},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"vcr", KEY_VCR},
      {"chat", KEY_CHAT},
      {(char*)0},
      {"slowreverse", KEY_SLOWREVERSE},
      {"refresh", KEY_REFRESH},
      {(char*)0},
      {"zoom", KEY_ZOOM},
      {(char*)0},
      {"power2", KEY_POWER2},
      {"hanguel", KEY_HANGUEL},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"8", KEY_8},
      {(char*)0}, {(char*)0},
      {"backspace", KEY_BACKSPACE},
      {"space", KEY_SPACE},
      {(char*)0}, {(char*)0},
      {"pagedown", KEY_PAGEDOWN},
      {"save", KEY_SAVE},
      {(char*)0}, {(char*)0},
      {"del_eol", KEY_DEL_EOL},
      {"del_line", KEY_DEL_LINE},
      {"left", KEY_LEFT},
      {(char*)0},
      {"digits", KEY_DIGITS},
      {"f4", KEY_F4},
      {(char*)0}, {(char*)0},
      {"video_next", KEY_VIDEO_NEXT},
      {"pageup", KEY_PAGEUP},
      {(char*)0},
      {"vod", KEY_VOD},
      {"mail", KEY_MAIL},
      {"videophone", KEY_VIDEOPHONE},
      {"zoomin", KEY_ZOOMIN},
      {"leftalt", KEY_LEFTALT},
      {(char*)0},
      {"numeric_3", KEY_NUMERIC_3},
      {"video", KEY_VIDEO},
      {"g", KEY_G},
      {(char*)0}, {(char*)0},
      {"10channelsdown", KEY_10CHANNELSDOWN},
      {"pause", KEY_PAUSE},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"5", KEY_5},
      {"closecd", KEY_CLOSECD},
      {(char*)0},
      {"shop", KEY_SHOP},
      {"reply", KEY_REPLY},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"appselect", KEY_APPSELECT},
      {"front", KEY_FRONT},
      {(char*)0}, {(char*)0},
      {"scrollup", KEY_SCROLLUP},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"dashboard", KEY_DASHBOARD},
      {(char*)0},
      {"b", KEY_B},
      {"finance", KEY_FINANCE},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"channeldown", KEY_CHANNELDOWN},
      {"controlpanel", KEY_CONTROLPANEL},
      {(char*)0},
      {"move", KEY_MOVE},
      {(char*)0},
      {"search", KEY_SEARCH},
      {"ab", KEY_AB},
      {(char*)0},
      {"open", KEY_OPEN},
      {(char*)0}, {(char*)0},
      {"kpminus", KEY_KPMINUS},
      {(char*)0},
      {"bassboost", KEY_BASSBOOST},
      {"first", KEY_FIRST},
      {"k", KEY_K},
      {(char*)0}, {(char*)0},
      {"rightctrl", KEY_RIGHTCTRL},
      {"grave", KEY_GRAVE},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"left_down", KEY_LEFT_DOWN},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"leftshift", KEY_LEFTSHIFT},
      {(char*)0}, {(char*)0},
      {"ok", KEY_OK},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"epg", KEY_EPG},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
      {"prog2", KEY_PROG2},
      {"images", KEY_IMAGES},
      {(char*)0},
      {"pvr", KEY_PVR},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"forward", KEY_FORWARD},
      {(char*)0},
      {"vcr2", KEY_VCR2},
      {(char*)0},
      {"touchpad_on", KEY_TOUCHPAD_ON},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
      {"new", KEY_NEW},
      {(char*)0},
      {"again", KEY_AGAIN},
      {"9", KEY_9},
      {"presentation", KEY_PRESENTATION},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"yellow", KEY_YELLOW},
      {"kpslash", KEY_KPSLASH},
      {"brl_dot4", KEY_BRL_DOT4},
      {"file", KEY_FILE},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"dvd", KEY_DVD},
      {"bookmarks", KEY_BOOKMARKS},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"katakana", KEY_KATAKANA},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"find", KEY_FIND},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"leftmeta", KEY_LEFTMETA},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"keyboard", KEY_KEYBOARD},
      {(char*)0},
      {"min_interesting", KEY_MIN_INTERESTING},
      {(char*)0},
      {"pausecd", KEY_PAUSECD},
      {"hiragana", KEY_HIRAGANA},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"ejectcd", KEY_EJECTCD},
      {(char*)0},
      {"channelup", KEY_CHANNELUP},
      {(char*)0},
      {"katakanahiragana", KEY_KATAKANAHIRAGANA},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"brightness_auto", KEY_BRIGHTNESS_AUTO},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"brl_dot10", KEY_BRL_DOT10},
      {"volumedown", KEY_VOLUMEDOWN},
      {"brightness_cycle", KEY_BRIGHTNESS_CYCLE},
      {"f2", KEY_F2},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
      {"backslash", KEY_BACKSLASH},
      {(char*)0}, {(char*)0},
      {"left_up", KEY_LEFT_UP},
      {(char*)0}, {(char*)0},
      {"clear", KEY_CLEAR},
      {"player", KEY_PLAYER},
      {(char*)0},
      {"wordprocessor", KEY_WORDPROCESSOR},
      {"brightnessdown", KEY_BRIGHTNESSDOWN},
      {(char*)0}, {(char*)0},
      {"kpcomma", KEY_KPCOMMA},
      {(char*)0}, {(char*)0},
      {"scrolllock", KEY_SCROLLLOCK},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"back", KEY_BACK},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"brl_dot2", KEY_BRL_DOT2},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"f7", KEY_F7},
      {(char*)0}, {(char*)0},
      {"sound", KEY_SOUND},
      {(char*)0}, {(char*)0},
      {"mp3", KEY_MP3},
      {"play", KEY_PLAY},
      {(char*)0},
      {"forwardmail", KEY_FORWARDMAIL},
      {"f6", KEY_F6},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"brl_dot7", KEY_BRL_DOT7},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"brl_dot6", KEY_BRL_DOT6},
      {(char*)0},
      {"green", KEY_GREEN},
      {"v", KEY_V},
      {"tv", KEY_TV},
      {"previous", KEY_PREVIOUS},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"displaytoggle", KEY_DISPLAYTOGGLE},
      {(char*)0},
      {"prog1", KEY_PROG1},
      {(char*)0}, {(char*)0},
      {"kp9", KEY_KP9},
      {"kpjpcomma", KEY_KPJPCOMMA},
      {(char*)0},
      {"kbdinputassist_accept", KEY_KBDINPUTASSIST_ACCEPT},
      {(char*)0},
      {"uwb", KEY_UWB},
      {(char*)0}, {(char*)0},
      {"f", KEY_F},
      {"10channelsup", KEY_10CHANNELSUP},
      {"kp0", KEY_KP0},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"channel", KEY_CHANNEL},
      {"kp4", KEY_KP4},
      {(char*)0}, {(char*)0},
      {"q", KEY_Q},
      {(char*)0},
      {"kp6", KEY_KP6},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"leftctrl", KEY_LEFTCTRL},
      {"kbdinputassist_next", KEY_KBDINPUTASSIST_NEXT},
      {(char*)0},
      {"3", KEY_3},
      {(char*)0},
      {"volumeup", KEY_VOLUMEUP},
      {"voicemail", KEY_VOICEMAIL},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"brl_dot1", KEY_BRL_DOT1},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"graphicseditor", KEY_GRAPHICSEDITOR},
      {(char*)0}, {(char*)0},
      {"pause_record", KEY_PAUSE_RECORD},
      {(char*)0}, {(char*)0},
      {"switchvideomode", KEY_SWITCHVIDEOMODE},
      {(char*)0},
      {"ejectclosecd", KEY_EJECTCLOSECD},
      {"kp1", KEY_KP1},
      {"leftbrace", KEY_LEFTBRACE},
      {(char*)0}, {(char*)0},
      {"voicecommand", KEY_VOICECOMMAND},
      {"lights_toggle", KEY_LIGHTS_TOGGLE},
      {"brightness_min", KEY_BRIGHTNESS_MIN},
      {(char*)0}, {(char*)0},
      {"journal", KEY_JOURNAL},
      {(char*)0},
      {"playpause", KEY_PLAYPAUSE},
      {(char*)0},
      {"playcd", KEY_PLAYCD},
      {(char*)0},
      {"brl_dot8", KEY_BRL_DOT8},
      {"fn_e", KEY_FN_E},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"f1", KEY_F1},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
      {"brl_dot5", KEY_BRL_DOT5},
      {"twen", KEY_TWEN},
      {(char*)0},
      {"w", KEY_W},
      {"kpenter", KEY_KPENTER},
      {"mhp", KEY_MHP},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"kprightparen", KEY_KPRIGHTPAREN},
      {"question", KEY_QUESTION},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"kp7", KEY_KP7},
      {(char*)0}, {(char*)0},
      {"wakeup", KEY_WAKEUP},
      {(char*)0},
      {"attendant_off", KEY_ATTENDANT_OFF},
      {(char*)0},
      {"touchpad_toggle", KEY_TOUCHPAD_TOGGLE},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"f20", KEY_F20},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"f24", KEY_F24},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"kp5", KEY_KP5},
      {"slow", KEY_SLOW},
      {"brightness_zero", KEY_BRIGHTNESS_ZERO},
      {(char*)0}, {(char*)0},
      {"brl_dot9", KEY_BRL_DOT9},
      {(char*)0},
      {"wps_button", KEY_WPS_BUTTON},
      {"display_off", KEY_DISPLAY_OFF},
      {"f8", KEY_F8},
      {(char*)0},
      {"fn_s", KEY_FN_S},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"kp3", KEY_KP3},
      {(char*)0},
      {"video_prev", KEY_VIDEO_PREV},
      {(char*)0},
      {"kbdillumdown", KEY_KBDILLUMDOWN},
      {"linefeed", KEY_LINEFEED},
      {(char*)0},
      {"email", KEY_EMAIL},
      {(char*)0},
      {"brightness_toggle", KEY_BRIGHTNESS_TOGGLE},
      {(char*)0},
      {"blue", KEY_BLUE},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"f21", KEY_F21},
      {(char*)0},
      {"wimax", KEY_WIMAX},
      {"fn_esc", KEY_FN_ESC},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"sysrq", KEY_SYSRQ},
      {"fastforward", KEY_FASTFORWARD},
      {"buttonconfig", KEY_BUTTONCONFIG},
      {"tv2", KEY_TV2},
      {"favorites", KEY_FAVORITES},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"f5", KEY_F5},
      {(char*)0},
      {"kbdinputassist_nextgroup", KEY_KBDINPUTASSIST_NEXTGROUP},
      {(char*)0}, {(char*)0},
      {"brightnessup", KEY_BRIGHTNESSUP},
      {"f19", KEY_F19},
      {(char*)0}, {(char*)0},
      {"kpplus", KEY_KPPLUS},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"kpplusminus", KEY_KPPLUSMINUS},
      {(char*)0},
      {"f10", KEY_F10},
      {"brightness_max", KEY_BRIGHTNESS_MAX},
      {(char*)0}, {(char*)0},
      {"3d_mode", KEY_3D_MODE},
      {"f14", KEY_F14},
      {"fn_d", KEY_FN_D},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"f16", KEY_F16},
      {(char*)0},
      {"fn_f4", KEY_FN_F4},
      {(char*)0}, {(char*)0},
      {"capslock", KEY_CAPSLOCK},
      {"xfer", KEY_XFER},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"brl_dot3", KEY_BRL_DOT3},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"frameforward", KEY_FRAMEFORWARD},
      {(char*)0},
      {"fn_2", KEY_FN_2},
      {"kbdillumup", KEY_KBDILLUMUP},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"kp2", KEY_KP2},
      {(char*)0},
      {"slash", KEY_SLASH},
      {(char*)0}, {(char*)0},
      {"f11", KEY_F11},
      {"wlan", KEY_WLAN},
      {"sleep", KEY_SLEEP},
      {"kpleftparen", KEY_KPLEFTPAREN},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"frameback", KEY_FRAMEBACK},
      {"102nd", KEY_102ND},
      {(char*)0}, {(char*)0},
      {"f23", KEY_F23},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"kp8", KEY_KP8},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"kpasterisk", KEY_KPASTERISK},
      {"kbdinputassist_cancel", KEY_KBDINPUTASSIST_CANCEL},
      {"f9", KEY_F9},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
      {"shuffle", KEY_SHUFFLE},
      {"f17", KEY_F17},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"kbdinputassist_prevgroup", KEY_KBDINPUTASSIST_PREVGROUP},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"fn_1", KEY_FN_1},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"f15", KEY_F15},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
      {"f13", KEY_F13},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"f22", KEY_F22},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"bluetooth", KEY_BLUETOOTH},
      {"prog3", KEY_PROG3},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"fn_b", KEY_FN_B},
      {(char*)0}, {(char*)0},
      {"kpequal", KEY_KPEQUAL},
      {(char*)0},
      {"kbdillumtoggle", KEY_KBDILLUMTOGGLE},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"fn_f2", KEY_FN_F2},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"spellcheck", KEY_SPELLCHECK},
      {"rfkill", KEY_RFKILL},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"f12", KEY_F12},
      {(char*)0}, {(char*)0},
      {"fn_f10", KEY_FN_F10},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"fn_f7", KEY_FN_F7},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"wwan", KEY_WWAN},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"fn_f6", KEY_FN_F6},
      {(char*)0},
      {"f3", KEY_F3},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"f18", KEY_F18},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"fn_f12", KEY_FN_F12},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"fn_f", KEY_FN_F},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"previoussong", KEY_PREVIOUSSONG},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"logoff", KEY_LOGOFF},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
      {"equal", KEY_EQUAL},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"kbdinputassist_prev", KEY_KBDINPUTASSIST_PREV},
      {"fn_f1", KEY_FN_F1},
      {"fn_f11", KEY_FN_F11},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"break", KEY_BREAK},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"fn_f8", KEY_FN_F8},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"touchpad_off", KEY_TOUCHPAD_OFF},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"fn_f5", KEY_FN_F5},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"www", KEY_WWW},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"fn_f9", KEY_FN_F9},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"fn_f3", KEY_FN_F3}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash_key_name (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (s && *str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
