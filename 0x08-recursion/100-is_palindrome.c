#include "main.h"
#include <string.h>

int is_palindrome_helper(char *s, int start, int end);

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The input string
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_helper(s, 0, len - 1));
}

/**
 * is_palindrome_helper - Recursive helper
 * function to check for palindrome
 * @s: The input string
 * @start: The index to check from the beginning
 * @end: The index to check from the end
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome_helper(s, start + 1, end - 1));
}
