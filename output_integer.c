#include "main.h"
/**
 * output_integer - handle d
 * Description: integer convertion
 * @arg: arguments
 * @s: ###########
 * Return: count of digits
 */
int output_integer(const char *s, va_list arg)
{
	int len, i, print_nums;
	char result[10];
	const char *t = s;

	print_nums = 0;
	unsigned int num = va_arg(arg, int);

	len = 0;

	if (num < 0)
	{
		print_nums += my_putchar('-');
		num = -num;
	}
	do {
		result[len++] = num % 10 + '0';
		num /= 10;
	} while (num != 0);
	for (i = len - 1; i >= 0; i--)
	{
		print_nums += my_putchar(result[i]);
	}
	while ((*t != 'i' && *(t - 1) != '%'))
	{
		t++;
	}

	return (print_nums);
}
