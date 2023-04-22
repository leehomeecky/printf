#include <stdio.h>
#include <unistd.h>
#include "main.h"

int writeout(char ch)
{
	static char buffer[BUFF_SIZE];
int buffpos;

buffpos = 0;

buffer[buffpos++] = ch;
		buffer[buffpos] = '\0';

	return(write(1, &buffer[0], 1));
}
