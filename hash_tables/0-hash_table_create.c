# include "hash_tables.h"

/**
 * hash_table_create - alloc in the memory a hash table
 *
 * @size: the size of the hash table
 * Return: a pointer to the created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);

	(table)->size = size;
	(table)->array = calloc(size, sizeof(hash_node_t *));

	if (!(table)->array)
		return (NULL);

	return (table);
}
