#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a node into a doubly linked list
 * @h: Head of the linked list
 * @idx: Index of the list
 * @n: Element to add
 * Return: A pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0, l = 0;
	dlistint_t *node = *h, *new;

	l = dlistint_len(*h) - 1;
	if (idx > l)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		if (*h)
			new->next = *h;
		else
			new->next = NULL;
		return (new);
	}
	while (i != idx - 1)
	{
		node = node->next;
		i++;
	}
	new->prev = node;
	if (node->next == NULL)
		new->next == NULL;
	else
		new->next = node->next;
	node->next = new;
	return (new);
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
