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
	int a[12];
	long int j = 1, m = 100000000000, n, sum = 0, counter = 0;

	while (*s != '\0')
		s++;

	n = va_arg(arg, int);
	if (n < 0)
	{
		n *= -1;
		my_putchar('-');
		counter++;
	}
	a[0] = n / m;

	for (; j < 12; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}

	for (j = 0; j < 12; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 12)
		{
			my_putchar('0' + a[j]);
			counter++;
		}
	}
	return (counter);
}
