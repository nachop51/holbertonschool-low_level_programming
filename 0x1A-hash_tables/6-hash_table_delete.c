#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
	size_t ht_size = 0;
	hash_node_t *aux = NULL, *tmp = NULL;

	if (!ht)
		return;

	while (ht_size < ht->size)
	{
		aux = ht->array[ht_size];
		while (aux)
		{
			tmp = aux;
			aux = aux->next;
			free(tmp->value);
			free(tmp->key);
			free(tmp);
		}
		ht_size++;
	}
	free(ht->array);
	free(ht);
}