#include "main.h"

int output_handle(va_list arg)
{	
	char h= va_arg(arg, int);
	if (h)
		return (0);
	/*8(void)f;*/
	my_putchar('%');
	return(1);
}
