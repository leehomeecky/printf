#include "main.h"
/**
 * output_ints - d & i
 * Description: integer convertion
 * @arg: arguments
 * Return: count of digits
 */
int output_ints(va_list arg)
{
	int len, i, num, print_nums;
	char buffer[16];

	print_nums = 0;
	num = va_arg(arg, int);
	len = 0;
	if (num < 0)
	{
		my_putchar('-');
		print_nums++;
		num = -num;
	}
	do {
		buffer[len++] = num % 10 + '0';
		num /= 10;
	} while (num != 0);
	for (i = len - 1; i >= 0; i--)
	{
		my_putchar(buffer[i]);
		print_nums++;
	}
	return (print_nums);
}

