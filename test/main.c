#include <stdio.h>
#include "main.h"                                                       /**                                 * main - Entry point                *                                   * Return: Always 0                  */

int main(void)
{
	int num = 273;


	_printf("%05d\n", 89);
        printf("%05d\n", 89);

_printf("%08d\n", 895);              printf("%08d\n", 879);

_printf("%05d\n", -89);              printf("%05d\n", -89);

_printf("%09s\n", "pascal");


	_printf("%#X\n", num);               printf("%#X\n", num);

	_printf("%014f\n", 67.87);
          printf("%014f\n", 67.87);
_printf("%+76d\n", 677);
printf("%+7d\n", 677);

printf("The octal representation of  %d is %#o\n", num, num);
_printf("The octal representation of  %d is %#o\n", num, num);

	return (0);
}
