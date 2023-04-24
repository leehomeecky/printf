#include "main.h"
#include <ctype.h>

/**
 * output_alpha - a function to print out the character and count the numbers,
 * of printable characters
 *
 * @arg: variable value argument
 * @s: pointer to the formart specifier
 *
 * Return: numbers of printed characters || -1
 */

int output_alpha(const char *s, va_list arg)
{
	unsigned char *str = va_arg(arg, unsigned char *);
	const char *t = s;
	int count_alpha;

	count_alpha = 0;
	if (str == NULL)
	str = "(null)";
	if (!str)
	return (0);
	while (*t != 's')
		t++;

	while (*str != '\0')
	{
	/*if (*str >= 0 && *str < 127)*/
	if (isprint(*str))
	count_alpha += my_putchar(*str);
	else
	count_alpha += my_putchar(*str);
	str++;
	}
	return (count_alpha);
}
