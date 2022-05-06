#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: list
 */
void free_listint2(listint_t **head)
{
	listint_t *aux, *tmp;

	if (!head)
		return;
	aux = *head;
	while (aux != NULL)
	{
		tmp = aux;
		aux = aux->next;
		free(tmp);
	}
	*head = NULL;
}
