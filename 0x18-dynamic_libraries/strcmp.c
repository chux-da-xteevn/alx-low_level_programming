#include "main.h"

/**
 * _strcmp - Compare two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: 0 if the strings are equal,
 *         < 0 if s1 is less than s2,
 *         > 0 if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }

    return *(unsigned char *)s1 - *(unsigned char *)s2;
}
