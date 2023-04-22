#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdarg.h>

const char * isZerocustom(const char * c1, char sp1, va_list arg1)
{
	if (sp1 == 'd' || sp1 == 'i')
	{
return(isZeroint(c1, sp1, va_arg(arg1, int)));
	}
	else if (sp1 == 's')
	{
		return(isZerostr(c1, sp1, va_arg(arg1, char*)));
	}

	else if (sp1 == 'f')                {                                           return(isZeroflot(c1, sp1, va_arg(arg1, double)));
	}

	return (c1);
}

const char * isZeroflot(const char * c, char sp, double arg)
{
	int len, i = 0, k, n, zeros_to_print;
	int j = i + 1;
	int int_part, frac_int;
	int spaces_to_print;
	char frac_str[16];
	int zero_padding = 0;
	int left_justify = 0;
	int width = 0;
	char int_str[100];
	double value, frac_part;

	if (sp == 'f')
	{
		width = 0;
	}

		c--;
		len = strlen(c);
		while (j < len && !isalpha(c[j]))
		{
			if (c[j] == '0')
				zero_padding = 1;
			else if (c[j] == '0')
				left_justify = 0;
			else if (isdigit(c[j]))
				width = width * 10 + c[j] - '0';
			j++;
		}
		c+=j;
		c++;
    value = arg;

    /* Convert the floating-point value to a string with two decimal places*/
    int_part = (int)value;
    frac_part = value - int_part;

    /*Handle negative numbers*/
    if (int_part < 0) {
        int_part = -int_part;
        frac_part = -frac_part;
        writeout('-');
    }

    /* Convert the integer part to a string*/
    i = 0;
    do {
        int_str[i++] = int_part % 10 + '0';
        int_part /= 10;
    } while (int_part > 0);
    for (j = i - 1; j >= 0; j--)
        writeout(int_str[j]);

    /* Print the decimal point*/
    writeout('.');

    /*Convert the fractional part to a string with two decimal places*/
    frac_int = (int)(frac_part * 100 + 0.5);
    i = 0;
    do {
        frac_str[i++] = frac_int % 10 + '0';
        frac_int /= 10;
    } while (frac_int > 0);
    for (j = i - 1; j >= 0; j--)
        writeout(frac_str[j]);

    /*Handle zero-padding and left justification*/
    n = strlen(int_str) + 3;  /* Add 3 for the decimal point and two decimal places*/
    if (zero_padding && width > n)
    {
	    zeros_to_print = width - n;
        for (k = 0; k < zeros_to_print; k++)
            writeout('0');
    }
    if (left_justify && width > n)
    {
	    writeout('P');
	    spaces_to_print = width - n;
        for (k = 0; k < spaces_to_print; k++)
            writeout(' ');
    }


return (c);
}


const char * isZerostr(const char * c, char sp, char* arg)
{
	int len, i = 0, k, n, zeros_to_print;
	int j = i + 1;
	int spaces_to_print;
	int zero_padding = 0;
	int left_justify = 0;
	int width = 0;
	char* value;

	if (sp == 's')
	{
		value = arg;
		c--;
		len = strlen(c);
		while (j < len && !isalpha(c[j]))
		{
			if (c[j] == '0')
				zero_padding = 1;
			else if (c[j] == '-')
				left_justify = 1;
			else if (isdigit(c[j]))
				width = width * 10 + c[j] - '0';
			j++;
		}
		c+=j;
		c++;
		n = strlen(value);
		if (zero_padding && width > n)
		{
			zeros_to_print = width - n;
			for (k = 0; k < zeros_to_print; k++)
            writeout('0');
		}

    /*Output the string using putchar*/
    for (i = 0; i < n; i++)
    {
        writeout(value[i]);
    }
    if (left_justify && width > n)
    {
	    spaces_to_print = width - n;
        for (k = 0; k < spaces_to_print; k++)
            writeout(' ');
    }
}
return (c);
}

const char * isZeroint(const char * c, char sp, int arg)
{
	int len, i = 0, k, tmp, value, n, num_digits, zeros_to_print;
        int j = i + 1;
	int arr[49];
	int spaces_to_print;
	int flgPlus;
        int zero_padding = 0;
        int left_justify = 0;
        int width = 0;

	/* lets go one step back*/
c--;
	len = strlen(c);
        while (j < len && !isalpha(c[j]))
        {
            if (c[j] == '0')
                zero_padding = 1;
	    else if (c[j] == '+')
		    flgPlus = 1;
            else if (c[j] == '-')
                left_justify = 1;
            else if (isdigit(c[j]))
                width = width * 10 + c[j] - '0';
            j++;
        }
	c+=j;
	c++;

      /*  char specifier = c[j];*/
        if (sp == 'd' || sp == 'i')
        {
		value = arg;
            n = 0;
            if (value == 0) 
	    {
                writeout('0');
                n = 1;
            } else 
	    {
                if (value < 0) {
                    writeout('-');
                    value = -value;
                    n++;
                }
		num_digits = 0;
		tmp = value;
                while (tmp > 0) {
                    num_digits++;
                    tmp /= 10;
                }
                n += num_digits;
		/* print 0*/
if (flgPlus == 1)
	writeout('+');

                if (zero_padding && width > n)
		{
			zeros_to_print = width - n;
                    for (k = 0; k < zeros_to_print; k++) {
                        writeout('0');
                    }
                }
             /*   int arr[num_digits];*/
                for (k = 0; k < num_digits; k++) {
                    arr[k] = value % 10;
                    value /= 10;
                }
                for (k = num_digits - 1; k >= 0; k--) {
                    writeout(arr[k] + '0');
                }
                if (left_justify && width > n) {
                    spaces_to_print = width - n;
                    for (k = 0; k < spaces_to_print; k++) {
                        writeout(' ');
                    }
                }
            }
        }

/* d / i is taken care of */

return (c);
}

