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
	int a[16];
	long int j = 1, n, m = 1000000000000000, sum = 0, counter = 0;

	while (*s != 'd')
		s++;

	n = va_arg(arg, long int);
	if (n < 0)
	{
		n *= -1;
		my_putchar('-');
		counter++;
	}
	a[0] = n / m;

	for (; j < 16; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}

	for (j = 0; j < 16; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 16)
		{
			my_putchar('0' + a[j]);
			counter++;
		}
	}
	return (counter);
}
