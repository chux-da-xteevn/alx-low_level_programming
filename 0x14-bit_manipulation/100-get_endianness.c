#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	return (*c);
}
