# include "lists.h"

list_t
*add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0, aux;
	char *newStr;

	new = (list_t *) malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	while (str[len] != '\0')
		len++;
	newStr = malloc(len + 1);

	if (!newStr)
	{
		free(new);
		return (NULL);
	}
	for (aux = 0; aux <= len; aux++)
		newStr[aux] = str[aux];

	new->len = len;
	new->str = newStr;
	new->next = *head;
	*head = new;

	return (new);
}
