#include "main.h"

int output_alpha(va_list arg)
{
	char *str = va_arg(arg, char *);

	/*(void)f; */
	int count_alpha;

	count_alpha = 0;
	if (!str)
	{
			return (-1);
	}

	while (*str != '\0') 
	{

        if (*str >= 32 && *str < 127)
	{
            /*printable character*/
count_alpha += _putchar(*str);

        } 
	else 
	{
            /*non-printable character*/
        count_alpha += _putchar('\\');
        count_alpha += _putchar('x');
	count_alpha += _putchar((*str / 16) < 10 ? ('0' + (*str / 16)) : ('A' + (*str / 16 - 10)));
         count_alpha += _putchar((*str % 16) < 10 ? ('0' + (*str % 16)) : ('A' + (*str % 16 - 10)));
	}
str++;		
	}
	return (count_alpha);
}
