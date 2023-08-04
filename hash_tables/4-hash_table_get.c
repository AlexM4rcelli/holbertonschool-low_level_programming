# include "hash_tables.h"

char
*hash_table_get(const hash_table_t *ht, const char *key)
{
	int idx = key_index((unsigned const char *)key, (ht)->size);

	if (!ht || (strlen(key)) == 0)
		return (NULL);

	if ((ht)->array[idx])
	{
		if ((strcmp((ht)->array[idx]->key, key) == 0))
			return ((ht)->array[idx]->value);
	}

	return (NULL);
}
