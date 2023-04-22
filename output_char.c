#include <stdarg.h>
#include "main.h"
#include <stdio.h>

/**
 * output_char - displays a character
 * @arg: arguements
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int output_char(va_list arg)
{
	/*writeout(va_arg(arg, int));*/

	my_putchar(va_arg(arg, int));
	return (1);
}
