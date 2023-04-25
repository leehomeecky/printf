#include "main.h"

/**
 * hight - function to check for the hight
 *
 * @str: pointer to string
 * @s: delemeter to stop at
 *
 * Return: 1 if long, 2 if short, or 0
 */

int hight(const char *str, char s)
{
	int i, h = 0;

	for (i = 0; str[i] != s; i++)
	{
		if (str[i] == 'h')
			h = 1;
		if (str[i] == 'l')
			return (2);
	}
	return (h);
}

/**
 * precision - checks for the flag .
 *
 * @str: pointer to string
 * @s: delemeter to stop at
 *
 * Return: numbers after te . flag
 */

int precision(const char *str, char s)
{
	int i, dot = 0, len = 0;

	for (i = 0; str[i] != s; i++)
	{
		if (str[i] == '.')
			dot++;
		else if (dot > 0)
		{
			if (str[i] >= '0' && str[i] <= '9')
				len = (len * 10) + (str[i] - '0');
		}
	}
	return (len);
}