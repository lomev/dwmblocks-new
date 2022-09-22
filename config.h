//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"", "sb-clock",   60,    25},
	{"", "sb-battery", 30,    23},
	{"", "sb-volume",  0,     22},
	{"", "sb-cpu",     10,    17},
	{"", "sb-memory",  10,    20},
	{"", "sb-pkgs",    1800,  15},
	{"", "sb-mail",    900,   16},
	{"", "sb-music",   0,     18},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "  ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
