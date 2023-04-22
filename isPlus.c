#include "main.h"
#include <stdio.h>
#include <ctype.h>

const char * isPlus(const char * c, char sp, va_list arg)
{
	int n, test;

	test = va_arg(arg, int);
	if (test > 0)
	{
	}
if (sp == 'd' || sp == 'i')
{
	while (!isalpha(*c))
	{
if (*c == '+')
	n = n * 1;
if (*c == '-')
	n = n * -1;

		c++;
	}
	if (n < 0)
		writeout('-');
	else
		writeout('+');
}
return (c--);
}


