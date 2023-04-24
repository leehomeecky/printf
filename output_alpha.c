#include "main.h"

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
	char *str = va_arg(arg, char *);
	const char *t = s;
	/*(void)f; */
	int count_alpha;

	count_alpha = 0;
	if (!str )
	{
	my_putchar('(');
	my_putchar('n');
	my_putchar('u');
	my_putchar('l');
	my_putchar('l');
	my_putchar(')');
	return (6);
	}
	while (*t != 's')
		t++;

	while (*str != '\0')
	{

	if (*str >= 32 && *str < 127)
	{
	/*printable character*/
	count_alpha += my_putchar(*str);

	}
	else
	{
	/*non-printable character*/
	my_putchar(*str);
	/*
	*my_putchar('\\');
	*my_putchar('x');
*my_putchar((*str / 16) < 10 ? ('0' + (*str / 16)) : ('A' + (*str / 16 - 10)));
*my_putchar((*str % 16) < 10 ? ('0' + (*str % 16)) : ('A' + (*str % 16 - 10)));
	*/
	}
	str++;
	}
	return (count_alpha);
}
