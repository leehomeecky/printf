#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

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
int writeout(char ch);
char cfmt(const char *s);
int _printf(const char *format, ...);
int output_alpha(va_list arg);
int output_handle(va_list arg);
int output_hexlower(va_list arg);
int output_hexupper(va_list arg);
int output_ptraddress(va_list arg);
int output_char(va_list arg);
int output_bits(va_list arg);
int output_r(va_list arg);
int output_ROT13(va_list arg);
int output_octal(va_list arg);
int _printf(const char *format, ...);
int output_ints(va_list arg);
int (*select_output(char c))(va_list);
int output_unsignedint(va_list arg);

#endif
