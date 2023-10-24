#include "main.h"


/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search.
 * @accept: The characters to compare the prefix against.
 *
 * Return: The number of bytes in the initial segment of s which consist only
 *         of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		int found = 0;

		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				found = 1;
				break;
			}
			accept++;
		}

		if (found)
		{
			count++;
		} else
		{
			break;
		}

		s++;
	}

	return (count);
}
