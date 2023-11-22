#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointing to the head of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *current, *temp;

	if (head == NULL)
		return;

	current = head;
	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
