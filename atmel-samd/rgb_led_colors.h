#define BLACK   0x000000
#define GREEN   0x000100 // #define GREEN   0x001000
#define BLUE    0x000001 // #define BLUE    0x000010
#define CYAN    0x000101 // #define CYAN    0x001010
#define RED     0x010000 // #define RED     0x100000
#define ORANGE  0x100800
#define YELLOW  0x101000
#define PURPLE  0x010001 // #define PURPLE  0x100010
#define WHITE   0x010101 // #define WHITE   0x101010

#define BOOT_RUNNING BLUE
#define MAIN_RUNNING GREEN
#define SAFE_MODE    YELLOW
#define ALL_DONE     GREEN
#define REPL_RUNNING BLUE  // #define REPL_RUNNING WHITE

#define ACTIVE_WRITE 0x200000

#define ALL_GOOD_CYCLE_MS 2000u

#define LINE_NUMBER_TOGGLE_LENGTH 300u
#define EXCEPTION_TYPE_LENGTH_MS 1000u

#define THOUSANDS WHITE
#define HUNDREDS  BLUE
#define TENS      YELLOW
#define ONES      CYAN

#define INDENTATION_ERROR GREEN
#define SYNTAX_ERROR      CYAN
#define NAME_ERROR        WHITE
#define OS_ERROR          ORANGE
#define VALUE_ERROR       PURPLE
#define OTHER_ERROR       YELLOW
// p x Fri Jul 14 17:59:19 UTC 2017