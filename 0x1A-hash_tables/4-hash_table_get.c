#include "hash_tables.h"

/**
 * hash_table_get - Retrieves an element from the HashTable
 *
 * @ht: HashTable
 * @key: Key
 * Return: If the key exists returns the value, if not, null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	size_t key_value = 0;
	hash_node_t **h = NULL, *aux = NULL;

	if (!ht || !key)
		return (NULL);
	key_value = key_index((const unsigned char *)key, ht->size);
	if (check_key(&ht->array[key_value], (char *)key) == 0)
		return (NULL);
	h = &ht->array[key_value];
	aux = *h;
	while (aux && aux->next && aux->key != key)
	{
		aux = aux->next;
	}
	if (strcmp(aux->key, key) == 0)
		return (aux->value);
	return (NULL);
}
