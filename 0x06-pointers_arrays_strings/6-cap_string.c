#include "main.h"

/**
 * is_separator - checks if a character is a separator
 * @c: character to check
 * Return: 1 if the character is a separator, 0 otherwise
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";

	for (int i = 0; separators[i]; i++)
	{
		if (separators[i] == c)
			return (1);
	}
	return (0);
}

/**
 * cap_string - capitalizes all words in the string
 * @str: input string
 * Return: referring to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;

	while (str[i] != '\0')
	{
		if (is_separator(str[i]) && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			str[i + 1] -= 32;
		i++;
	}

	return (str);
}
