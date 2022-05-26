#include "hash_tables.h"

/**
 * hash_table_set - Sets an item in a hash table
 *
 * @ht: Hash table
 * @key: Key
 * @value: Value
 * Returns: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	size_t key_value = 0;

	if (!ht || !key)
		return (0);
	key_value = key_index((const unsigned char *)key, ht->size);
	if (check_key(&ht->array[key_value], (char *)key) == 1)
	{
		free(ht->array[key_value]->value);
		ht->array[key_value]->value = strdup(value);
	}
	else
		add_to_list(&ht->array[key_value], key, value);
	return (1);
}

/**
 * add_node - adds a new node at the beginning of a list
 * @list: address
 * @str: string
 *
 * Return: the address of the new element
 */
hash_node_t *add_to_list(hash_node_t **list, const char *k, const char *v)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(k);
	new->value = strdup(v);
	new->next = *list;
	*list = new;

	return (new);
}

/**
 * check_key - Looks if there is a key inside a list or not
 *
 * @array: List
 * @key: key to check
 * Return: 0 If succeed or 1 if failed
 */
int check_key(hash_node_t **array, char *key)
{
	hash_node_t *ht = *array;

	while (ht)
	{
		if (strcmp(ht->key, key) == 0)
			return (1);
		ht = ht->next;
	}
	return (0);
}
