#include "main.h"
#include <stdarg.h>
int output_unsignedint(va_list arg)
{
	unsigned int uint;
	int i;
	int count;
	char uint_str[20];
	int uint_len;

	uint = va_arg(arg, unsigned int);
	i = 0;
	count = 0;
                    /*convert the unsigned int argument to a string */
        uint_len = 0;
                    do
		    {
                        uint_str[uint_len++] = '0' + (uint % 10);
                        uint /= 10;
                    } while (uint != 0);
                    /*print the unsigned int argument in reverse order*/
                    for (i = uint_len - 1; i >= 0; i--)
		    {
                        writeout(uint_str[i]);
			count++;
                    }
		    return (count);
}
