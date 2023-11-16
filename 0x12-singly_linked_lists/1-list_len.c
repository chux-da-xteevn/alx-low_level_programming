#include "lists.h"

/**
 * list_len - Returns the number of elements in this linked list.
 * @h: Points to the head of the list.
 *
 * Return: Total number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
