#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * with a new line afterwards
 * Return: always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
