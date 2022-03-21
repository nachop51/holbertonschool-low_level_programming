#include "lists.h"

/**
 * listint_len -  function that returns the number of elements in a linked list
 * @h: list
 *
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
