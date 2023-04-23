#include <stdio.h>
#include "../main.h"                                               
int main() {
    char c = 'X';
    char b = 'B';

    _printf("Character: %.-43we+2c\n", c);
_printf("Character: %.yachje%c\n", c, b);

    _printf("Escape character: %c\n", '\n');
    _printf("ASCII code: %c\n", 65);

    _printf("Character: .weejc\n");
    _printf("%829-+ #7s", "Character: .weejc\n");
    return 0;
}
