#include "main.h"
const char *cfmt1(const char *s);
/**
 * cfmt1 - ======
 * @s: --====
 * Return: ====
 */
const char *cfmt1(const char *s)
{
	while (*s == '0' ||
			*s == '#' || *s == '+' || *s == '-' || *s == ' ' ||
*s == '#')
	{
		s++;
	}
return (s);
}
/**
 * output_alpha - ====,
 * of printable character
 * @arg: variable value argument
 * @b: ===
 * Return: numbers of printed characters
 */

int output_alpha(va_list arg, const char *b)
{
	const char *f;
char *str = va_arg(arg, char *);
	int count;

	count = 0;
	if (str == NULL)
		str = "(null)";

	if (!str)
	{
	return (0);
	}
while (*b != '\0' && *b != 's')
{
	f = cfmt1(b);
	if (*f == 's')
		break;
	b = f;
	count += my_putchar(*b);
	b++;
}
if (*b == 's')
{
	while (*str != '\0')
	{
	/*printable character*/
	count += my_putchar(*str);
	str++;
	}
}

	return (count);
}
