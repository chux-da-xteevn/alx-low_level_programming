#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * sum_listint - Returns the sum of all the
 * data (n) of the listint_t linked list.
 * @head: Points to the head of the list.
 *
 * Return: Returns The sum of all data, or 0 upon empty list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
