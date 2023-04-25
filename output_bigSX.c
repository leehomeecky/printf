#include "main.h"
/**
 * output_bigSX - A helper function
 * @X: argument
 * Return: characters count
 */
int output_bigSX(char X)
{
    unsigned int a[8];
    unsigned int m = 268435456, n, sum = 0;
    char diff;
    int counter, i;

/*    n = va_arg(X, unsigned int);*/

    n = (unsigned int)X;
    for (i = 0; i < 8; i++)
    {
        a[i] = (n / m) % 16;
        m /= 16;
    }

    for (i = 0; i < 8; i++)
    {
        sum += a[i];
        if (sum || i == 7)
        {
            diff = a[i] < 10 ? '0' : 'A' - 10;
            my_putchar(a[i] + diff);
            counter++;
        }
    }

    return (counter);
}
