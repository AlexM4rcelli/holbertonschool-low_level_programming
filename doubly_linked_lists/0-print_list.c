# include "lists.h"

/**
 * print_dlistint - print all elements of a linked list
 * @h: the linked list
 *
 * Return: The numbers of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	while (h)
	{
		printf("[%i]\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
