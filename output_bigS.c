#include "main.h"
#include <stdlib.h>

/**
 * output_bigS - Non printable character
 * @S: arguement
 * @s: format
 * Return: int
 */
int output_bigS(const char *s, va_list S)
{
	unsigned int m = 0;
	int counter = 0;
	char *Nstr = va_arg(S, char *);

	while (*s != 'S')
		s++;
	
	if (Nstr == NULL)
		Nstr = "(null)";
	for (; Nstr[m]; m++)
	{
		if (Nstr[m] < 32 || Nstr[m] >= 127)
		{
			my_putchar('\\');
			my_putchar('x');
			counter += 2;
			counter += output_bigSX(Nstr[m]);
		}
		else
		{
			my_putchar(Nstr[m]);
			counter++;
		}
	}
	return (counter);
}

