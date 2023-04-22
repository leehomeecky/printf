#include "main.h"

int output_handle(va_list arg)
{
	(void)arg;
	/*8(void)f;*/
	my_putchar('%');
	return(1);
}
