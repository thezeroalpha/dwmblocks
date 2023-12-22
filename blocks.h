//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
  /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
  {"", "dwmblock-emacs-org-clock", 10, 7},
  {"", "dwmblock-battery", 5, 1},
  {"", "dwmblock-doppler", 0, 10},
  {"", "dwmblock-cpu", 10, 2 },
  {"", "dwmblock-brightness", 0, 3},
  {"", "dwmblock-internet", 10, 5},
  {"", "dwmblock-nettraf", 10, 12},
  {"", "dwmblock-bluetooth", 10, 8},
  {"", "dwmblock-volume", 10, 6},
  {"", "dwmblock-kbselect", 0, 11},
  {"", "dwmblock-startbutton", 60, 13},
  {"", "date '+%b %d (%a) %I:%M%p'", 1, 4},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
