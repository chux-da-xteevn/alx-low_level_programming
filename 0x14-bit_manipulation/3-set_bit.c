#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * set_bit - sets the value of a bit to 1 at the given index
 * @n: pointer to the number
 * @index: the index of the bit to set
 *
 * Return: 1 upon success, or -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
