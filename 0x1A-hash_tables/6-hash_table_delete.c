#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
	size_t ht_size = 0;
	hash_node_t **h = NULL, *aux = NULL, *tmp = NULL;

	if (!ht)
		return;

	while (ht_size < ht->size)
	{
		h = &ht->array[ht_size];
		aux = *h;
		if (aux)
		{
			while (aux->next)
			{
				if (aux->key)
					free(aux->key);
				if (aux->value)
					free(aux->value);
				if (!aux->next)
					break;
				tmp = aux->next;
				free(aux);
				aux = tmp;
			}
			if (aux->key)
				free(aux->key);
			if (aux->value)
				free(aux->value);
			free(aux);
		}
		ht_size++;
	}
	free(ht->array);
	free(ht);
}