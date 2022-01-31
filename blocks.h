//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/                                     /*Update Interval*/ /*Update Signal*/
	{"",      "~/.local/bin/nowplaying",                      0,                  1 },
	{"",      "~/.local/bin/battery",                         31,                 0 },
	{"",      "~/.local/bin/volume",                          0,                  2 },
	{" ",    "date '+%d.%m.%Y %H:%M'",                       5,                  0 },

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
