
// -- STD libraries
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
// -- NCurses library
#include <ncurses.h>

// -- Pyr libraries
#include "game.h"

WINDOW* main_wnd;

int init()
{
	main_wnd = initscr();
	cbreak();
	noecho();
	clear();
	refresh();

	return EXIT_SUCCESS;
}

void run()
{
	printw(" --- PYR --- ");

	refresh();

	//loop
	getch();
}

void end()
{
	endwin();
}
