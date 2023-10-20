#include "main.h"

/**
 * infinite_add - Adds two numbers stored as strings
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer to store the result
 * @size_r: The size of the buffer r
 *
 * Return: A pointer to the result or 0 if it cannot be stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = 0, len2 = 0, carry = 0, sum, i;

    while (n1[len1] != '\0')
        len1++;
    while (n2[len2] != '\0')
        len2++;

    if (len1 > size_r || len2 > size_r || len1 + 1 > size_r || len2 + 1 > size_r)
        return (0);

    len1--;
    len2--;

    for (i = 0; len1 >= 0 || len2 >= 0 || carry > 0; i++)
    {
        sum = carry;

        if (len1 >= 0)
            sum += n1[len1] - '0';
        if (len2 >= 0)
            sum += n2[len2] - '0';

        carry = sum / 10;
        r[i] = (sum % 10) + '0';

        if (len1 >= 0)
            len1--;
        if (len2 >= 0)
            len2--;
    }

    r[i] = '\0';

    for (i = 0, len1 = len2 = 0; r[len1] != '\0'; len1++)
    {
        if (r[len1] == '0')
            i++;
        else
            break;
    }

    if (i > 0)
    {
        for (len2 = 0; r[i] != '\0'; len2++, i++)
            r[len2] = r[i];
        r[len2] = '\0';
    }

    return (r);
}
