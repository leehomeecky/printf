#include "main.h"

/**
 * flag_plus - checks all flag + available
 *
 * @str: pointer to string
 *
 * Return: 1 if true else 0
 */

int flag_plus(const char **str)
{
	int i = 0;

	for (; **s == '+'; (*s)++)
		i = 1;
	return (i);
}


/**
 * flag_hash - checks all flag # available
 *
 * @str: pointer to string
 *
 * Return: 1 if true else 0
 */

int flag_hash(const char **str)
{
	int i = 0;

	for (; **s == '#'; (*s)++)
		i = 1;
	return (i);
}

/**
 * flag_space - checks all empty space available
 *
 * @str: pointer to string
 *
 * Return: 1 if true else 0
 */

int flag_space(const char **str)
{
	int i = 0;

	for (; **s == ' '; (*s)++)
		i = 1;
	return (i);
}
