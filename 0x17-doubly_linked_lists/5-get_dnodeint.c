#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a list
 * @head: Head of the linked list
 * @index: Index of the list
 * Return: The nth node of a list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0, l = 0;
	dlistint_t *node;

	l = dlistint_len(head) - 1;
	if (index > l)
		return (NULL);
	while (i < l)
	{
		node = node->next;
		i++;
	}
	return (node);
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
