#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	size_t ht_size = 0, flag = 0;
	hash_node_t *aux = NULL;

	if (!ht)
		return;
	putchar(123);

	while (ht_size < ht->size)
	{
		aux = ht->array[ht_size];
		if (aux && aux->key)
		{
			if (flag == 1)
				printf(", ");
			while (aux)
			{
				printf("'%s': '%s'", aux->key, aux->value);
				if (!aux->next)
					break;
				aux = aux->next;
			}
			if (flag == 0)
				flag++;
		}
		ht_size++;
	}
	putchar(125);
	putchar(10);
}