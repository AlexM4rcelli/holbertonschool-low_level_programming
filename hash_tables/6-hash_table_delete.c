#include "hash_tables.h"

void
hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *curr = NULL, *temp = NULL;

	if (ht && ht->size && ht->array)
	{
		for (; idx < ht->size; idx++)
		{
			curr = ht->array[idx];

			if (curr)
			{
				if (curr->next)
				{
					curr = curr->next;
					while (curr)
					{
						temp = curr;
						curr = curr->next;
						free(temp->key);
						free(temp->value);
						free(temp);
					}
				}

				curr = ht->array[idx];
				if (curr->key && curr->value)
				{
					free(curr->key);
					free(curr->value);
				}
			}

			free(curr);
		}

		free(ht->array);
		free(ht);
	}
}
