#include "main.h"
#include <stdio.h>
                                     int output_ints(va_list arg)
{
	int len, i, num, print_nums;
	char buffer[12];

	print_nums = 0;
	num = va_arg(arg, int);
	len = 0;
	if (num < 0)
	{
		putchar('-');                        print_nums++;
		num = -num;
	}
	do
	{
		buffer[len++] = num % 10 + '0';
		num /= 10;
	} while (num != 0);
	for (i = len - 1; i >= 0; i--)
	{
        writeout(buffer[i]);
        print_nums++;
	}
	return (print_nums);
}

