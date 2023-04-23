#include "main.h"
const char *cfmt(const char *s);
/**
 * cfmt - check for specifier
 * Description: check specifier
 * @s: format
 * Return: format
 */
const char *cfmt(const char *s)
{
	while (1)
	{
		if (*s == 's' || *s == 'd' || *s == 'i' ||
*s == 'x' || *s == 'X' || *s == 'o' || *s == 'f' || *s == 'c')
			break;

		s++;
	}

return (s);
}
/**
 * _printf - Printf function
 * Description: custom _print
 * @format: format.
 * Return: fomatted
 */
int _printf(const char *format, ...)
{
	int isp,  p_length = 0;
	va_list args;
	const char *f;

	va_start(args, format);
	if (format == NULL)
		return (-1);

	while (format != NULL && *format != '\0')
	{
		if (*format == '%')
		{
		format++;
 /* fls = fltype(*format);*/
f = format;
		output = select_output(*(cfmt(f)));
if (output)
{
/*	va_start(args, format);*/
isp += output(args, format);
if (isp > 0)
	format = cfmt(f);

p_length += isp;
if (isp <= 0)
	return (-1);
}
else
{
	p_length += my_putchar(*format);
}
}
else
{
	p_length += my_putchar(*format);
}
format++;
	}
	va_end(args);
	return (p_length);
}
