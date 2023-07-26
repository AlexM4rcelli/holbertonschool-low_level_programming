# include "lists.h"

/**
 * free_list - free all elements of a linked list
 * @head: the linked list
 */

void free_list(list_t *head)
{
	list_t *curr = head;
	list_t *next;
	while (curr)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}
