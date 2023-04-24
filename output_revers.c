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
	int i, j = 0;
	char *s = va_arg(arg, char *), t;

	while (*str != 'r')
		str++;

	while (s[j])
		j++;
	j--;
	for (i = 0; i < j; i++)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
		j--;
	}
	for (i = 0; s[i] != '\0'; i++)
		my_putchar(s[i]);
	return (i);

}
