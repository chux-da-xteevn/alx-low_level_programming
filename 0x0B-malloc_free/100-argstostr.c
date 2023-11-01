#include <stdlib.h>

/**
 * argstostr - Concatenates all the
 * arguments of your program.
 * @ac: The argument count.
 * @av: An array of strings (arguments).
 *
 * Return: A pointer to the new
 * string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
    int i, j, total_len;
    char *str, *str_ptr;

    if (ac == 0 || av == NULL)
        return (NULL);

    total_len = 0;

    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
            total_len++;
        total_len++; /* Add space for newline character */
    }

    str = malloc(total_len + 1);
    if (str == NULL)
        return (NULL);

    str_ptr = str;

    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
            *str_ptr++ = av[i][j];
        *str_ptr++ = '\n'; /* Add newline character */
    }

    *str_ptr = '\0'; /* Null-terminate the string */

    return (str);
}
