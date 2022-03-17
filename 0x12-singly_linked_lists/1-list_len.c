#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: linked list
 * 
 * Return: the length of the linked list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}