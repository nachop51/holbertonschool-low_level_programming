#include "lists.h"

/**
 * print_dlistint - Prints out the elements of a linked list
 * @h: Head of the linked list
 * Return: Length value
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;

	while (h)
	{
		printf("%d\n", h->n);
		length++;
		h = h->next;
	}
	return (length);
}
