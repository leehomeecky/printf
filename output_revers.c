#include "main.h"

/**
 * output_revers - a function to output the reverse of a string
 *
 * @arg: variable argument value
 * @str: string delimeter
 *
 * Return: number of value printed
 */


int output_revers(const char *str, va_list arg)
{
	int j = 0;
	char *s = va_arg(arg, char *);

	while (*str != 'r')
		str++;

	while (s[j])
		j++;
	
	for (--j; j >= 0; j--)
		my_putchar(s[j]);
	return (j);

}
