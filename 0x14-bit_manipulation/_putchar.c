#include <unistd.h>

/**
 * _putchar - Writes a character to standard output
 * @c: The character to be written
 *
 * Return: Upon success, the number of characters written out.
 * Upon error, -1.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
