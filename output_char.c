#include <stdarg.h>
#include "main.h"
#include <stdio.h>

/**
 * output_char - displays a character
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int output_char(va_list arg)
{
	
	putchar(va_arg(arg, int));
	return (1);
}
