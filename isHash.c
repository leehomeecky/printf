#include "main.h"
#include <string.h>

const char * isHash(const char *c, char sp, va_list arg)
{
	int test;

	test = 0;
	test = va_arg(arg, int);
	if (test > 0)
	{
	}
	while (*c == '#')
	{
		c++;
	}
	
	/* Add a prefix for octal and hexadecimal numbers*/
	if (sp == 'o') 
	{
		writeout('0');
	}
	else if (sp == 'x') 
	{
		writeout('0');
		writeout('x');
	} 
	else if  (sp == 'X')
	{
		writeout('0');
		writeout('X');
	}
return (c);
}

