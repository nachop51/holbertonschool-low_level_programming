#include "hash_tables.h"

/**
 * shash_table_create - Creates a Hash Table
 *
 * @size: Size of the array
 * Return: A pointer to the Hash Table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new;

	if (size == 0)
		return (NULL);
	new = malloc(sizeof(shash_table_t));
	if (!new)
		return (NULL);

	new->size = size;
	new->shead = NULL;
	new->stail = NULL;
	new->array = calloc(new->size, sizeof(shash_node_t *));
	if (!new->array)
		return (NULL);

	return (new);
}

/**
 * hash_table_set - Sets an item in a hash table
 *
 * @ht: Hash Table
 * @key: Key
 * @value: Value
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
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
 * add_to_list - Inserts a node in the beginning of a list
 *
 * @list: List
 * @k: Key to insert
 * @v: Value to insert
 * Return: A pointer to the head of the list
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
