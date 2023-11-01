#include <stdlib.h>

/**
 * count_words - Count the number of words in a string.
 * @str: The input string.
 *
 * Return: Number of words.
 */
int count_words(char *str)
{
	int i, count, in_word;

	count = 0;
	in_word = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			count++;
			in_word = 1;
		}
	}

	return (count);
}

/**
 * copy_word - Copy a word from the source to a new string.
 * @source: The source string.
 * @dest: The destination string.
 *
 * Return: Length of the copied word.
 */
int copy_word(char *source, char *dest)
{
	int i;

	for (i = 0; source[i] != '\0' && source[i] != ' '; i++)
	{
		dest[i] = source[i];
	}
	dest[i] = '\0';

	return (i);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: Pointer to an array of
 * strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	int i, j, k, word_count;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);

	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0, k = 0; i < word_count; i++)
	{
		while (str[k] == ' ')
			k++;

		int word_len = 0;

		while (str[k + word_len] != ' ' && str[k + word_len] != '\0')
			word_len++;

		words[i] = malloc((word_len + 1) * sizeof(char));

		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}

		k += copy_word(str + k, words[i]);
	}

	words[word_count] = NULL;

	return (words);
}
