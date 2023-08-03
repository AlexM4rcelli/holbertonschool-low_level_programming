# include "hash_tables.h"

hash_node_t
*add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new;

	new = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);

	(new)->key = malloc(strlen(key) + 1);
	(new)->value = malloc(strlen(value) + 1);

	if (!(new)->key || !(new)->value)
		return (NULL);

	strcpy(new->key, key);
	strcpy(new->value, value);
	(new)->next = *head;

	return (new);
}

int
hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = add_node((ht)->array, key, value);
	int idx = key_index((const unsigned char *)key, ht->size);

	if (!ht || strlen(key) == 0 || strlen(value) == 0)
		return (0);

	if (!(new_node)->key || !(new_node)->value)
		return (0);

	if (!(ht)->array[idx])
		(ht)->array[idx] = new_node;
	else
	{
		(new_node)->next = (ht)->array[idx];
		(ht)->array[idx] = new_node;
	}

	return (1);
}
