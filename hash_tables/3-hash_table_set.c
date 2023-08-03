# include "hash_tables.h"

int
hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *curr;
	int idx = hash_djb2(key);

	if (!ht)
		return (0);

	new_node = (hash_node_t *) malloc(sizeof(hash_node_t));
	(new_node)->key = malloc(strlen(key) + 1);
	(new_node)->value = malloc(strlen(value) + 1);

	if (!(new_node)->key || !(new_node)->value)
		return (0);

	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	curr = (ht)->array[idx];

	if (!curr)
		(ht)->array[idx] = new_node;
	else
	{
		if (strcmp((curr)->key, key))
		{
			strcpy((ht)->array[idx]->value, value);
		}
	}

	return (1);
}
