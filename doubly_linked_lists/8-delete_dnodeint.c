# include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (current->next)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	while (current && i < index)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	if (current->prev)
		current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
