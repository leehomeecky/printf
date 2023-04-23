#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
<<<<<<< HEAD
#include <string.h>
=======
#include <stdarg.h>

>>>>>>> 5c0d0daab36636a4681d0105f17b7f68c57bd012
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

<<<<<<< HEAD
int output_percent(va_list arg, const char *k);
int (*output)(va_list arg, const char *f);
int my_putchar(char c);
const char *cfmt(const char *s);
int output_alpha(va_list arg, const char *f);
int output_char(va_list arg, const char *f);
int _printf(const char *format, ...);
int (*select_output(char c))(va_list, const char *f);
=======

int my_putchar(const char c);
int writeout(char ch);
int output_alpha(const char *, va_list arg);
int output_char(const char *, va_list arg);
int _printf(const char *format, ...);int output_ints(va_list arg);
>>>>>>> 5c0d0daab36636a4681d0105f17b7f68c57bd012

#endif
