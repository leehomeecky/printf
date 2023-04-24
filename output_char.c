#include <stdarg.h>
#include "main.h"
#include <stdio.h>

/**
 * output_char - displays a character
 * @arg: va_list arguments from _printf
 * @s: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int output_char(const char *s, va_list arg)
{
	/*writeout(va_arg(arg, int));*/
	const char *t = s;
	int value = va_arg(arg, int);

	while (*t != 'c')
		t++;
	if (value >= 32 && value < 127)
	my_putchar(value);
	return (1);
}
