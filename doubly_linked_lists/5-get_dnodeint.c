# include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;
	unsigned int i = 0;

	if (head)
		while (curr)
		{
			if (i == index)
				return (curr);

			curr = curr->next;
			i++;
		}

	return (NULL);
}
