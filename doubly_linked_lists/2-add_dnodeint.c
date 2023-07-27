# include "lists.h"

dlistint_t
*add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->prev = (*head) - 1;
	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
