#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct myOutputs - This struct will be used to filter which print
 * function for i,c,s,d,x,g,f......
 * * @spec: % format specifier to use
 * @selectprint: function pointer to select the correct printer
 */
typedef struct myOutputs
{
	char spec;
	int (*selectprint)(va_list arg);
} OUTS;


int (*output)(va_list arg);
int my_putchar(char c);
char cfmt(const char *s);
int output_alpha(va_list arg);
/*int output_handle(va_list arg);*/
int output_char(va_list arg);
int _printf(const char *format, ...);
int (*select_output(char c))(va_list);

#endif
