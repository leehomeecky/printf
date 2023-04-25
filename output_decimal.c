#include "main.h"
/**
 * output_decimal - handle d
 * Description: integer convertion
 * @arg: arguments
 * @s: ###########
 * Return: c/ount of digits
 */
int output_decimal(const char *s, va_list arg)
{
	int sum, num, j, print_nums;
	int  result[10];
	int m; 
	
	m = 1000000000;
	print_nums = 0;
	j = 1;
	(void)s;
	num = va_arg(arg, int);


	if (num < 0)
	{
		print_nums += my_putchar('-');
		num *= -1;
	}
	result[0] = num / m;

	for (; j < 10; j++)
	{
		m /= 10;
		result[j] = (num / m) % 10;
	}

	for (j = 0; j < 10; j++)
	{
		sum += result[j];
		if (sum != 0 || j == 9)
		{
			my_putchar('0' + result[j]);
			print_nums++;
		}
	}

	return (print_nums);
}
