
// -- STD libraries
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


// -- Pyr libraries
#include "game.h"


int main(int argc, char** argv)
{
	int init_status = init();

    if(init_status == 0)
        run();

    end();

	return EXIT_SUCCESS;
}
