# include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *curr = *h;
	unsigned int index = 0;

	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (!new)
		return  (NULL);

	while (curr)
	{
		if (index == idx)
		{
			new->prev = curr->prev;
			new->n = n;
			new->next = curr->next;
		}
		curr = curr->next;
		index++;
	}

	return (NULL);
}
