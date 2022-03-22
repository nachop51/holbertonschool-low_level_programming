#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in the index
 * @head: list
 * @idx: index of the list
 * @n: number
 *
 * Return: the list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux, *new;
	unsigned int i = 1;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	aux = *head;
	if (idx == 0)
	{
		aux->next = *head;
		aux = new;
		return (aux);
	}
	for (i = 1; i < idx && aux->next; i++)
	{
		aux = aux->next;
		if (aux == NULL)
			return (NULL);
	}
	new->next = aux->next;
	aux->next = new;
	return (aux);
}
