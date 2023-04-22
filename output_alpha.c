#include "main.h"

int output_alpha(va_list arg)
{
	char *str = va_arg(arg, char *);

	/*(void)f; */
	int count_alpha;

	count_alpha = 0;
	if (!str)
	{
			return (0);
	}

	while (*str != '\0') 
	{

        if (*str >= 32 && *str < 127)
	{
            /*printable character*/
count_alpha += writeout(*str);

        } 
	else 
	{
            /*non-printable character*/
        count_alpha += writeout('\\');
        count_alpha += writeout('x');
	count_alpha += writeout((*str / 16) < 10 ? ('0' + (*str / 16)) : ('A' + (*str / 16 - 10)));
         count_alpha += writeout((*str % 16) < 10 ? ('0' + (*str % 16)) : ('A' + (*str % 16 - 10)));
	}
str++;		
	}
	return (count_alpha);
}
