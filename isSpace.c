#include "main.h"
#include <stdarg.h>
const char * isSpace(const char * c, char sp, va_list arg)
{
	if (sp == 'd' || sp == 'i')
	{
	    if (va_arg(arg, int) > 0)
	    {
		    writeout(' ');
	    }
	}
   while(*c == ' ')
   {
	    c++;
   }

    return (c);
}
