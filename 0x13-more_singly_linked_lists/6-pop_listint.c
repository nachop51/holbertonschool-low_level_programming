#include "lists.h"

/**
 * pop_listint - deletes the head node of a list, and returns the node data
 * @head: the list
 *
 * Return: the data of the list
 */
int pop_listint(listint_t **head)
{
	listint_t *aux;
	int intaux;

	if (!*head)
		return (0);
	aux = *head;
	intaux = aux->n;
	*head = aux->next;
	free(aux);
	return (intaux);
}
