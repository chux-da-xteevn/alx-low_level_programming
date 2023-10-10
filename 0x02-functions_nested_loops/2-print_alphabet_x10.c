#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet 10 times
 */
void print_alphabet_x10(void)
{
    char c;
    int i;

    for (i = 0; i < 10; i++) {  // Loop to print the alphabet 10 times
        c = 'a';
        while (c <= 'z') {
            _putchar(c);
            c++;
        }
        _putchar('\n');
    }
}
