#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: head of the list
 * @n: number
 *
 * Return: a pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last, *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new;

	return (new);
}
