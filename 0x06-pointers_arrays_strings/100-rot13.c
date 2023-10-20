#include "main.h"

/**
 * rot13 - Encodes a string into ROT13.
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

char *rot13(char *str)
{
	int i = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i])
	{
		int j = 0;
		int found = 0;

		while (in[j])
		{
			if (str[i] == in[j])
			{
				str[i] = out[j];
				found = 1;
				break;
			}
			j++;
		}

		if (found == 0)
		{
			str[i] = str[i];
		}

		i++;
	}

	return (str);
}
