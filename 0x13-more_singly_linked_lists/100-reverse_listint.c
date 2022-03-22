#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: head of the list
 *
 * Return: a reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *aux = *head, *tmp;

	if (!*head)
		return (NULL);
	if (!head)
		return (NULL);
	*head = (*head)->next;
	aux->next = NULL;
	tmp = *head;
	while (*head != NULL)
	{
		(*head) = (*head)->next;
		tmp->next = aux;
		aux = tmp;
		tmp = *head;
	}
	*head = aux;
	return (*head);
}