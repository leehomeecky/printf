#include "main.h"

/**
 * output_octal - output unsingned int in octal value
 *
 * @arg: variable list argument
 * @str: pointer to modifier
 *
 * Return: number of printed value
 */

int output_octal(const char *str, va_list arg)
{
	unsigned int uint;
	int i, count, octal_len;
	char octal_str[20];

	/*
	* uint = va_arg(arg, unsigned int);
	*i = count = octal_len = 0;
	*while (*str != 'o')
	*	str++;
	*do {
	*	octal_str[octal_len++] = '0' + (uint % 8);
	*	uint /= 8;
	*} while (uint != 0);
	*for (i = octal_len - 1; i >= 0; i--)
	*	count += my_putchar(octal_str[i]);
	*/
	return (count);
}
