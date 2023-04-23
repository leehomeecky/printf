#include "main.h"
/**
 * output_percent - =======
 * @s: ======
 * @arg: #########
 * Return: --===
 */

int output_percent(va_list arg, const char *s)
{
	char h= va_arg(arg, int);
        (void)h;
	char fn;
	char bk;
	int count = 0;
	
	bk= *(s - 1);
	fn  = *s;

	if (fn == '%' && bk == '%')
	{
		count += my_putchar(*s);
	}
if (*s++)
{
	s++;
}
else
{
	return (count);
}

while (fn == '%' && bk == '%' && *s++)
	{
		if (*(s + 1)== '%' && *s== '%')
		{
		fn = *(s + 1);
		bk = *s;
		count += my_putchar(fn);
		s++;
		continue;
		}
		else
		{
		break;
		}
	my_putchar(*s);
		s++;
	}


        return (count);
}
