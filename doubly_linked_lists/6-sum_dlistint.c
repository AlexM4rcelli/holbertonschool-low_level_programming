# include "lists.h"
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	int sum = 0;

	if (head)
	{
		while (curr)
		{
			sum = sum + curr->n;
			curr = curr->next;
		}
	}

	return (sum);
}
