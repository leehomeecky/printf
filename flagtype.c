#include "main.h"

const char* (*flagtype(char ch))(const char *c, char b, va_list arg)
{
	isflag flag_funcs[] = {
                {'+', isPlus},
		{' ', isSpace},
		{'#', isHash},
		{'0', isZerocustom}};
	int keys = 4;
	int j;

	for (j= 0; j < keys; j++)
		if (flag_funcs[j].flag == ch)
			return (flag_funcs[j].flagtype);
	return (NULL);
}
