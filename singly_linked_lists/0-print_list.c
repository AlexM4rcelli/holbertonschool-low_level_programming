# include "lists.h"

/**
 * print_list - print all elements of a linked list
 * @h: the linked list
 *
 * Return: The numbers of nodes
 */

size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		size++;
	}
	return (size);
}
