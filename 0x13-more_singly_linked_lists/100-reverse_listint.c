#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: head of the list
 *
 * Return: a reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *current = *head;

	if (head == NULL || *head == NULL)
		return (NULL);
	while (current->next != NULL)
	{
		next = current->next;
		current->next = next->next;
		next->next = *head;
		*head = next;
	}
	return (*head);
}
