#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
va_list args;
const char *f;

/**
 * struct print_format - This struct will be used to filter which print
 * function for i,c,s,d,x,X,o,p,u
 * * @spec: % format specifier to use
 * @selectprint: function pointer to select the correct printer
 */
typedef struct print_formart
{
	char *spec;
	int (*selectprint)(const char *, va_list arg);
} PrtFmt;

/**
 * struct flag_function - a stucture to filter the approprate flag function
 *
 * @flag: the falg
 * @flag_opt - fuction for the flag operation
 */

typedef struct flag_function
{
	char *flag;
	int (*flag_opt)(const char **);
} FlagFunc;


int (*output)(const char *, va_list arg);
int my_putchar(const char c);
int writeout(char ch);
int output_alpha(const char *, va_list arg);
int output_handle(va_list arg);
int output_hexlower(va_list arg);
int output_hexupper(va_list arg);
int output_ptraddress(va_list arg);
int output_char(const char *, va_list arg);
int output_bits(va_list arg);
int output_r(va_list arg);
int output_ROT13(va_list arg);
int output_octal(va_list arg);
int _printf(const char *format, ...);int output_ints(va_list arg);
int (*select_output(char c))(va_list);
int output_unsignedint(va_list arg);

#endif
