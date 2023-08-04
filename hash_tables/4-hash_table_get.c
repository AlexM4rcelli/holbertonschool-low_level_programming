# include "hash_tables.h"

char
*hash_table_get(const hash_table_t *ht, const char *key)
{
	int idx;
	hash_node_t *curr;

	if (!ht || (strlen(key)) == 0)
		return (NULL);

	idx = key_index((unsigned const char *)key, (ht)->size);
	curr = (ht)->array[idx];

	if (curr)
	{
		if (curr->next)
		{
			while (curr->next)
			{
				if ((strcmp(curr->key, key)) == 0)
					return (curr->value);
				curr = curr->next;
			}
		} else if ((strcmp(curr->key, key) == 0))
			return (curr->value);
	}

	return (NULL);
}
