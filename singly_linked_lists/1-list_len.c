# include "lists.h"

/**
 * list_len - count the nodes of a linked list
 * @h: the linked list
 *
 * Return: The numbers of nodes
 */

size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}
