# include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *curr;

	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = *head;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	curr = *head;
	while (curr->next)
		curr = curr->next;

	curr->next = new;
	new->prev = curr;

	return (new);
}
