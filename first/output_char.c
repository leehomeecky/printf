#include "main.h"
/**
 * cfmt2 - =======
 * @s: ===
 * Return: --===
 */

const char *cfmt2(const char *s)
{
	while ((*s >= '0' && *s <= '9') ||
			*s == '#' || *s == '+' || *s == '-' || *s == ' ' || *s == '#')
	{
		s++;
	}
	return (s);
}

/**
 * output_char - displays a character
 * @arg: arguements
 * @s: format
 * Return: number of char printed
 */
int output_char(va_list arg, const char *s)
{
	int count = 0;
	const char *f;
	char c = va_arg(arg, int);

	if (!c)
		return (0);

	while (*s != '\0' && *s != 'c')
	{
		f = cfmt2(s);
		if (*f == 'c')
			break;

		s = f;
		count += my_putchar(*s);
		s++;
	}
		count += my_putchar(c);
	return (count);
}
