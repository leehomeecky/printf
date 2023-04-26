#include "main.h"
/**
 * print_recus
 *
 * @len: number of time to print the value
 * @value: value to print
 *
 * Return: number of value printed
 */

int print_recus(int len, char value)
{
	int i = 0;

	for (; i < len; i++)
		my_putchar(value);
	return (i);
}

/**
 * iflag_handler - handles flag for int
 *
 * @str: pointer to string
 * @len: lenght of str to print
 * @value: value to be printed
 *
 * Return: number of printed value
 */

int iflag_handler(const char **str, int len, int value)
{
	int i, count = 0,  plus = 0, dot, zero = 0, space, minus, width = 0;

	(value >= 0) ? (plus = flag_plus(str)) : (space = flag_space(str));
	dot = precision(*str, 'i');
	if (dot < 0 && **str == '0')
	zero = justify(str, 'i');
	(**str == '-') ? (minus = justify(str, 'i')) :
			(width = justify(str, 'i'));
	(value >= 0) ? (zero -= plus) : (zero--);
	if (dot >= 0)
	{
	(dot > len) ? (dot -= len) : (dot = 0);
	width -= dot;
	}
	else
	{
	(zero > len) ? (zero -= zero) : (zero = 0);
	width -= zero;
	}
	width -= len;
	if (value >= 0)
	{
	count += print_recus(width, ' ');
	count += print_recus(plus, '+');
	}
	else
	{
	count += print_recus((width -= 1), ' ');
	count += print_recus(1, '-');
	}
	if (dot > 0)
	count += print_recus(dot, '0');
	if (zero > 0)
	count += print_recus(zero, '0');
	return (count);
}


/**
 * output_integer - handle d
 * Description: integer convertion
 * @arg: arguments
 * @s: ###########
 * Return: count of digits
 */
int output_integer(const char *s, va_list arg)
{
	int a[18], h;
	long int j = 1, n, m = 100000000000000000;

	int counter = 0, sum = 0;

	h = hight(s, 'i');
	(h == 2) ? (n = va_arg(arg, long int)) : (n = va_arg(arg, int));
	if (h == 1)
		n = (short) n;
	if (n == 0)
		counter += my_putchar('0');
	if (n < 0)
	{
		n *= -1;
		my_putchar('-');
		counter++;
	}
	a[0] = n / m;

	for (; j < 18; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}

	for (j = 0; j < 18; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 18)
		{
			my_putchar('0' + a[j]);
			counter++;
		}
	}
	return (counter);
}
