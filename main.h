#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct print_formart - This struct will be used to filter which print
 * function for i,c,s,d,x,X,o,p,u
 * @spec: % format specifier to use
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
 * @flag_opt: fuction for the flag operation
 */

typedef struct flag_function
{
	char *flag;
	int (*flag_opt)(const char **);
} FlagFunc;


int my_putchar(const char c);
int writeout(char ch);
int output_alpha(const char *, va_list arg);
int output_char(const char *, va_list arg);
int _printf(const char *format, ...);
int percent_handler(const char **s, va_list args, int no_perc);
int is_flag(const char s);

#endif
