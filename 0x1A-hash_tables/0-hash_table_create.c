#include "hash_tables.h"

/**
 * hash_table_create - Creates a Hash Table
 *
 * @size: Size of the array
 * Return: A pointer to the Hash Table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	if (size == 0)
		return (NULL);
	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);

	new->size = size;
	new->array = calloc(new->size, sizeof(hash_node_t *));
	if (!new->array)
		return (NULL);

	return (new);
}
