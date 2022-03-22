#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to the list
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
