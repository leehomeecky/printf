#include <stdarg.h>
#include "main.h"

int output_ROT13(va_list arg)
{

int i, count_rot, j;
char s1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char s2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
char *n = va_arg(arg, char *);

        /*(void)f; */
        count_rot = 0;
        if (!n)
	{
                        return (0);
        }

for (i = 0; n[i] != '\0'; i++)
{
for (j = 0; s1[j] != '\0'; j++)
{
if (n[i] == s1[j])
{
writeout(s2[j]);
count_rot++;
break;
}
}
}
return (count_rot);
}
