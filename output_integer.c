#include "main.h"
/**
 * iflag_handler - handles flag for int
 *
 * @str: pointer to string
 * @len: lenght of str to print
 * @value: value to be printed
 *
 * Return: number of printed value
 */

int iflag_handler(const char **str, int *arr, int len_arr, long int value)
{
	int count = 0, zero, minus = 0, width = 0, dot = precision(*str, 'i');
	int len = count_array(arr, len_arr), space = flag_space(str, value), plus = flag_plus(str);
	
	(dot < 0 && **str == '0') ? (zero = justify(str, 'i')) : (zero = 0);
	(**str == '-') ? (minus = justify(str, 'i')) : (width = justify(str, 'i'));
	(value >= 0) ? (zero -= plus) : (zero--);
	if (dot >= 0)
	{
	(dot > len) ? (dot -= len) : (dot = 0);
	width -= (dot + len);
	minus -= (dot + len);
	}
	else
	{
	(zero > len) ? (zero -= len) : (zero = 0);
	width -= (zero + len);
	minus -= (zero + len);
	}
	count += print_recus(space, ' ');
	if (value >= 0)
	{
	count += print_recus((width -= plus), ' ');
	count += print_recus(plus, '+');
	minus--;
	}
	else
	{
	count += print_recus((width -= 1), ' ');
	count += print_recus(1, '-');
	minus--;
	}
	count += print_recus(dot, '0');
	count += print_recus(zero, '0');
	count += print_array_val(arr, len_arr);
	count += print_recus(minus, ' ');
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
	long int j = 1, n, value, m = 100000000000000000;

	int counter = 0, sum = 0;

	h = hight(s, 'i');
	(h == 2) ? (n = va_arg(arg, long int)) : (n = va_arg(arg, int));
	if (h == 1)
		n = (short) n;
	value = n;
	if (n < 0)
		n *= -1;
	a[0] = n / m;

	for (; j < 18; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}
	counter += iflag_handler(&s, a, 18, value);
	if (n == 0)
		counter += my_putchar('0');
	return (counter);
}
