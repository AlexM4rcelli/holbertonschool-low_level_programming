# include "hash_tables.h"

hash_node_t
*add_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);

	(new)->key = malloc(strlen(key) + 1);

	if (!(new)->key)
	{
		free(new);
		return (NULL);
	}
	(new)->value = malloc(strlen(value) + 1);

	if (!(new)->value)
	{
		free((new)->key);
		free(new);
		return (NULL);
	}
	strcpy(new->key, key);
	strcpy(new->value, value);
	(new)->next = NULL;

	return (new);
}

int
hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	int idx;

	if (!ht || strlen(key) == 0 || strlen(value) == 0)
		return (0);

	new_node = add_node(key, value);
	idx = key_index((const unsigned char *)key, ht->size);

	if (!(ht)->array[idx])
		(ht)->array[idx] = new_node;
	else
	{
		(ht)->array[idx] = new_node;
	}
	return (1);
}
