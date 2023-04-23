#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct myOutputs - This struct will be used to filter which print
 * function for i,c,s,d,x,g,f......
 * * @spec: % format specifier to use
 * @selectprint: function pointer to select the correct printer
 */
typedef struct myOutputs
{
	char spec;
	int (*selectprint)(va_list arg, const char *f);
} OUTS;

int output_percent(va_list arg, const char *k);
int (*output)(va_list arg, const char *f);
int my_putchar(char c);
const char *cfmt(const char *s);
int output_alpha(va_list arg, const char *f);
int output_char(va_list arg, const char *f);
int _printf(const char *format, ...);
int (*select_output(char c))(va_list, const char *f);

#endif
