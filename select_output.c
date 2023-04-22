#include "main.h"

int (*select_output(char ch))(va_list)
{
	OUTS output_funcs[] = {
		{'i', output_ints},
		{'s', output_alpha},
		{'S', output_alpha},
		{'c', output_char},
		{'d', output_ints},
		{'u', output_unsignedint}, 
		{'x', output_hexlower},
		{'X', output_hexupper},
		{'o', output_octal},
		{'r', output_r},
		{'R', output_ROT13},
		{'b', output_bits},
		{'p', output_ptraddress},
	     {'%', output_handle}};
		/*{'x', print_hex},*/
		/*{'X', print_hex_big},*/
		/*{'b', print_binary},*/
		/*{'o', print_octal},*/
		/*{'R', print_rot13},
		*//*{'r', print_rev},
		*//*{'S', print_bigS},*/
		/*{'p', print_address},*/
		/*{'%', output_handle}*/
		/*};*/
	int keys = 14;

	int j;

	for (j= 0; j < keys; j++)
		if (output_funcs[j].spec == ch)
			return (output_funcs[j].selectprint);

	return (NULL);
	}
