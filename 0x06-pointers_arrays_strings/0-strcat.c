#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string
 */
char *_strcat(char *dest, const char *src)
{
    int dest_len = 0;
    int i;

    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }

    for (i = 0; src[i] != '\0'; i++)
    {
        dest[dest_len + i] = src[i];
    }
    dest[dest_len + i] = '\0';

    return dest;
}
