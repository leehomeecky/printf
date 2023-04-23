#include "main.h"
/**
 * is_flag - function to check for flags
 *
 * @s: string to check
 *
 * Return: true || false
 */

int is_flag(const char s)
{
	char flags[] = {'-', '#', '0', 'l', 'h', '.', '+', ' ', '\0'};
	int i;

	if (s >= '0' && s <= '9')
		return (1);
	for (i = 0; flags[i] != '\0'; i++)
		if (s == flags[i])
			return (1);
	return (0);
}


/**
 * cfmt - check for specifier
 * @s: format
 *
 * Return: format specifier function
 */
int (*cfmt(const char **s))(const char *, va_list)
{
	int i, len = 2;
	PrtFmt prt_fmt[] = {
				{"s", output_alpha},
				{"c", output_char}
			};

	while (is_flag(**s))
		(*s)++;
	for (i = 0; i < len; i++)
		if (**s == *((prt_fmt + i)->spec))
		return ((prt_fmt + i)->selectprint);
	return (NULL);
}
/**
 * _printf - Printf function
 * @format: format.
 * Return: fomatted
 */
int _printf(const char *format, ...)
{
	const char *check1, *check2;
	int p_length = 0;
	va_list args;
	int (*output)(const char *, va_list arg);

	check1 = check2 = format;

	va_start(args, format);
	if (!format)
		return (-1);

	while (*check1 != '\0')
	{
		if (*check1 == '%')
		{
			check2 = check1 + 1;
			output = cfmt(&check2);
			if (output)
			{
			p_length += output(check1, args);
			check1 = check2;
			}
			else
			{
			my_putchar(*check1);
			p_length++;
			}
		}
		else
		{
		my_putchar(*check1);
		p_length++;
		}
		check1++;
	}
	va_end(args);
	return (p_length);
}
