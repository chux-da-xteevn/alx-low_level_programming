#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * with n bytes from s2
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes from s2 to concatenate
 *
 * Return: A pointer to the newly
 * allocated concatenated string
 * or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int s1_len = 0, s2_len = 0, i, length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len])
		s1_len++;

	while (s2[s2_len])
		s2_len++;

	if (n >= s2_len)
		n = s2_len;

	length = s1_len + n;

	concat = malloc(length + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		concat[i] = s1[i];

	for (i = 0; i < n; i++)
		concat[s1_len + i] = s2[i];

	concat[s1_len + n] = '\0';

	return (concat);
}
