


#include "main.h"
#include <limits.h>
/**
 * output_decimal - handle d
 * Description: integer convertion
 * @arg: arguments
 * @s: ###########
 * Return: count of digits
 */
int output_decimal(const char *s, va_list arg)
{
	int len, i, num, print_nums;
	char result[1024];
	const char *t = s;

	print_nums = 0;
	num = va_arg(arg, int);

	if (num == 0)
	{
		my_putchar('0');
		return (1);
	}
	len = 0;
	if (num < 0)
	{
		print_nums += my_putchar('-');
		num *= -1;
	}
	do {
		result[len++] = num % 10 + '0';
		num /= 10;
	} while (num != 0);
	for (i = len - 1; i >= 0; i--)
	{
		print_nums += my_putchar(result[i]);
	}
	while (*t != 'd')
		t++;

	return (print_nums);
}
