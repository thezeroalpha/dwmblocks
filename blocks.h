//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
  /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
  {"", "dwmblock-battery", 5, 3},
  {"☀ ", "dwmblock-brightness", 0, 1},
  {"", "date '+%b %d (%a) %I:%M%p'", 60, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
