#include "main.h"
#include <stdarg.h>
int output_r(va_list arg)
{
int i = 0, j;
	char *s = va_arg(arg, char *);

	/*(void)f;*/
//	if (!s)
//		s = "(null)";

	while (s[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		writeout(s[j]);

	return (i);
}
