#include "main.h"

int output_bits(va_list arg) 
{
    unsigned int uint;
    int i, count;
    char binary_str[50];
    int binary_len;
    
    uint = va_arg(arg, unsigned int);
    i = 0;
    count = 0;
    binary_len = 0;
    
    /*Convert the unsigned int argument to a binary string*/
    do 
    {
        binary_str[binary_len++] = '0' + (uint % 2);
        uint /= 2;
    } while (uint != 0);
    
    /* Print the binary string in reverse order*/
    for (i = binary_len - 1; i >= 0; i--) 
    {
        writeout(binary_str[i]);
        count++;
    }
    
    return (count);
}
