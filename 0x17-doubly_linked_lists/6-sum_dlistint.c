#include "lists.h"

/**
 * sum_dlistint - Sum all elements of a linked list
 * @head: Head of the linked list
 * Return: Returns the sum of the elements
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0, i = 0;

	for (i = 0; head; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
