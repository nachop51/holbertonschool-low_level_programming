#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node in a doubly linked list
 * @head: Head of the linked list
 * @index: Index of the list
 * Return: 1 If succeed or -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node = *head, *aux;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}
	while (i < index - 1 && node != NULL)
	{
		node = node->next;
		i++;
	}
	if (node->next == NULL)
	{
		node->prev->next = NULL;
		free(node);
		return (1);
	}
	aux = node;
	node->next->prev = node->prev;
	aux->prev->next = aux->next;
	free(node);
	return (1);
}

/**
 * dlistint_len - Returns the length of a linked list
 * @h: Head of the linked list
 * Return: The length of the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
