# include "lists.h"

dlistint_t
*add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->prev = NULL;
	new->n = n;
	new->next = *head;

	new = *head;
	(*head)->prev = new;
	*head = new;
	
	return (new);
}
