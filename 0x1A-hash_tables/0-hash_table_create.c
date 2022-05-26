#include "hash_tables.h"

/**
 * @brief
 *
 * @param size
 * @return hash_table_t*
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

	return (new);
}
