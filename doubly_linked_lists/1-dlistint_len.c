# include "lists.h"

/**
 * dlistint_len - count the nodes of a linked list
 * @h: the linked list
 *
 * Return: The numbers of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}
