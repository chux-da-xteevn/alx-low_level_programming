#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * clear_bit - sets the value of a bit to 0 at an index
 * @n: pointer to the number
 * @index: the index of the bit to clear
 *
 * Return: 1 upon success, or -1 upon failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
