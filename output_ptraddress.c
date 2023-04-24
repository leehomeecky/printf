#include "main.h"
#include <stdarg.h>

int output_ptraddress(const char *s, va_list arg)
{
    void *ptr;
    unsigned long int  address;
    char hex_str[20];
    int count;
    int i, digit;

    count = 0;
    ptr = va_arg(arg, void *);
    address = (unsigned long int)ptr;
    /* Convert the address to a hexadecimal string */
    do 
    {
	    digit = address % 16;
        if (digit < 10) {
            hex_str[count++] = digit + '0';
        } 
	else 
	{
            hex_str[count++] = 'a' + digit - 10;
        }
        address /= 16;
    } while (address != 0);

    /* Add the "0x" prefix to the output string */
    my_putchar('0');
    my_putchar('x');

    /* Print the address string in reverse order */
    for (i = count - 1; i >= 0; i--) {
        my_putchar(hex_str[i]);
	count++;
    }
    while (*s != 'p')
	    s++;

    /* Return the number of characters in the address string, plus 2 for the "0x" prefix */
    return (count + 2);
}

