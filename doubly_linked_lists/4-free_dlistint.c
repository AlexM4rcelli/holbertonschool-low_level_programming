# include "lists.h"

/**
 * free_dlistint - free all elements of a linked list
 * @head: the linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	dlistint_t *next;

	while (curr)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}
