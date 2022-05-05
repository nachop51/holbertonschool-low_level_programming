#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: Linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
