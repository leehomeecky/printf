#include "main.h"
/**
 * output_ptraddress - ===
 * @s: ===
 * @arg: ===
 * Return: ==
 */

int output_ptraddress(const char *s, va_list arg)
{
	void *ptr;
	unsigned long int  address;
	char hex_str[16];
	int count, i, digit;

	count = 0;
	ptr = va_arg(arg, void *);
	if (ptr == NULL)
	{
		my_putchar('(');
		my_putchar('n');
		my_putchar('i');
		my_putchar('l');
		my_putchar(')');
		return (5);
	}
	address = (unsigned long int)ptr;
	do {
		digit = address % 16;
		if (digit < 10)
		{
			hex_str[count++] = digit + '0';
		}
		else
		{
			hex_str[count++] = 'a' + digit - 10;
		}
		address /= 16;
	} while (address != 0);
	my_putchar('0');
	my_putchar('x');
	for (i = count - 1; i >= 0; i--)
	{
		my_putchar(hex_str[i]);
		count++;
	}
	while (*s != 'p')
		s++;

	return (count + 2);
}

