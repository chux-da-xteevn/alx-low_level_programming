#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * pop_listint - Deletes the first node of the linked list.
 * @head: Points to the head of the list.
 *
 * Return: The first node’s data (n) or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
