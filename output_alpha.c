#include "main.h"

/**
 * output_alpha - a function to print out the character and count the numbers,
 * of printable characters
 *
 * @arg: variable value argument
 *
 * Return: numbers of printed characters || -1
 */

int output_alpha(va_list arg)
{
	char *str = va_arg(arg, char *);

	/*(void)f; */
	int count_alpha;

	count_alpha = 0;
	if (str == NULL)
		str = "(nil)";
	if (!str)
	{
	return (0);
	}

	while (*str != '\0')
	{

	/*if (*str >= 32 && *str < 127)*/
	/*{*/
	/*printable character*/
	count_alpha += my_putchar(*str);

	/*}*/
	/*else*/
	/*{*/
	/*non-printable character*/
/*	my_putchar(*str);*/
	/*my_putchar('\\');*/
	/*my_putchar('x');*/
	/*my_putchar((*str / 16) < 10 ? ('0' + (*str / 16)) : */
	 /* ('A' + (*str / 16 - 10)));*/
	/*my_putchar((*str % 16) < 10 ? ('0' + (*str % 16)) : */
	 /* ('A' + (*str % 16 - 10)));*/
	/*}*/
	str++;
	}
	if (!str)
		return (-1);

	return (count_alpha);
}
