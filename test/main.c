#include <stdio.h>
#include "../main.h"                                               
int main() {
    char str[] = "Hello, world!";
    char c = 'X';

//  printf("%\n");                            // _printf("%\n");
_printf("%5s", "gg");    
    
    // Test case for %s specifier
    printf("Test case for %%s specifier:\n");
    printf("String: %s\n", str);
    printf("Empty string: %s\n", "");
   

    // Test case for %c specifier
    printf("\nTest case for %%c specifier:\n");
    printf("Character: %c\n", c);
    printf("Escape character: %c\n", '\n');
    printf("ASCII code: %c\n", 65);


    // Test case for %s specifier
    _printf("Test case for %%s specifier:\n");
    _printf("String: %s\n", str);
    _printf("Empty string: %s\n", "");
    _printf("Null pointer: %s\n", NULL);

    // Test case for %c specifier
    _printf("\nTest case for %%c specifier:\n");
    _printf("Character: %c\n", c);
    _printf("Escape character: %c\n", '\n');
    _printf("ASCII code: %c\n", 65);

    

    return 0;
}
