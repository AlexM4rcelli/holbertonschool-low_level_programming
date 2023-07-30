# include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *curr = *h;
	unsigned int index = 0;

	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (!new)
		return  (NULL);
	new->n = n;
	if (idx == 0 && curr == NULL)
	{
		new->prev = NULL;
		new->next = NULL;

		return (*h = new);
	}
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = curr;
		if (curr)
			curr->prev = new;
		*h = new;
		return (new);
	}
	while (curr)
	{
		if (index == idx)
		{
			new->prev = curr->prev;
			new->next = curr;

			if (curr->prev)
				curr->prev->next = new;

			curr->prev = new;
			return (new);
		}
		curr = curr->next;
		index++;
	}
	return (NULL);
}
