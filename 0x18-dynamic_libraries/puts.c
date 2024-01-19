#include "main.h"

/**
 * _puts - Print a string to stdout.
 * @s: The string to be printed.
 */
void _puts(char *s)
{
    while (*s)
    {
        _putchar(*s);
        s++;
    }
}
