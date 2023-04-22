#include "main.h"

int output_octal(va_list arg) 
{
    unsigned int uint;
    int i, count;
    char octal_str[20];
    int octal_len;
    
    uint = va_arg(arg, unsigned int);
    i = 0;
    count = 0;
    octal_len = 0;
    
    /*Convert the unsigned int argument to an octal string*/
    do {
        octal_str[octal_len++] = '0' + (uint % 8);
        uint /= 8;
    } while (uint != 0);
    
    /*Print the octal string in reverse order*/
    for (i = octal_len - 1; i >= 0; i--) {
        writeout(octal_str[i]);
        count++;
    }
    
    return count;
}

