# include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;
	unsigned int max = 0;

	while (curr)
	{
		curr = curr->next;
		max++;
	}

	if (index <= max)
		return ((head + index));
	else
		return (NULL);
}
