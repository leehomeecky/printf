#include "main.h"
/**
 * cfmt - check for specifier
 * @s: format
 */
char cfmt(const char *s)
{
	int i = 0;

	while (1)
	{
		if (s[i] == 's' || s[i] == 'd' || s[i] == 'i' ||
s[i] == 'x' || s[i] == 'X' || s[i] == 'o' || s[i] == 'f')
		break;
i++;
}
return (s[i]);
}
/**
 * _printf - Printf function
 * @format: format.
 * Return: fomatted
 */
int _printf(const char *format, ...)
{
	int p_length = 0;

	va_start(args, format);
	if (!format)
		return (-1);

	while (*format != '\0')
	{
		if (*format == '%')
		{
		format++;
/**	
 * flags = flagtype(*format);
 * f = format;
 * while (flags)
 * {
 * format = flags(f, cfmt(f), args)
 * p_length++;
 * break;
 * }
 */

output = select_output(*format);
if (output)
{
	va_start(args, format);
p_length += output(args);
}
else
			{
		my_putchar(*format);
		p_length++;
			}
		}
		else
		{
		my_putchar(*format);
		p_length++;
		}
		format++;
	}
	va_end(args);
	my_putchar('\n');
	return (p_length);
}
