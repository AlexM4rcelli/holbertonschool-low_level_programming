# include "lists.h"

list_t
*add_node_end(list_t **head, const char *str)
{
	list_t *new, *curr;
	unsigned int len = 0, aux;
	char *newStr;

	new = (list_t *) malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	while (str[len] != '\0')
		len++;
	newStr = malloc(len + 1);

	if (!newStr)
		return (NULL);
	for (aux = 0; aux <= len; aux++)
		newStr[aux] = str[aux];

	new->len = len;
	new->str = newStr;
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

	return (new);
}
