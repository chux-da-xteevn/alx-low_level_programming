#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * get_bit - returns value of a bit at an index
 * @n: the number to extract the bit from
 * @index: the index of the bit to be extracted
 *
 * Return: in case of failure
 * The value of the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
