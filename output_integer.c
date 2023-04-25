#include "main.h"
#include <stdlib.h>
/**
 * output_integer - handle d
 * Description: integer convertion
 * @arg: arguments
 * @s: ###########
 * Return: count of digits
 */
int output_integer(const char *s, va_list arg)
{
	int a[10];
	int j = 1, m = 1000000000, n, sum = 0, counter = 0;

	n = va_arg(arg, int);
	while (*s != 'i')
		s++;

	if (n < 0)
	{
		n *= -1;
		my_putchar('-');
		counter++;
	}
	a[0] = n / m;

	for (; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}

	for (j = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 9)
		{
			my_putchar('0' + a[j]);
			counter++;
		}
	}
	return (counter);
}
