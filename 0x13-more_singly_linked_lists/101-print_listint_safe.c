#include "lists.h"
#include <stdio.h>

/**
 * loopCheck - checks if there is a loop or not
 * @head: head of the list
 *
 * Return: 0 or 1, depending if there is a loop or not
 */
int loopCheck(const listint_t *head)
{
	const listint_t *slow_p = head, *fast_p = head;

	while (fast_p && fast_p->next)
	{
		slow_p = slow_p->next;
		fast_p = fast_p->next->next;
		if (slow_p == fast_p)
		{
			return (1);
		}
	}
	return (0);
}

/**
 * print_listint_safe - prints a linked list
 * @head: head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodeCount = 0;
	const listint_t *slow_p, *fast_p;

	if (!head)
		exit(98);
	slow_p = head;
	fast_p = head;
	if (loopCheck(head) == 1)
	{
		while (fast_p && fast_p->next)
		{
			printf("[%p] %d\n", (void *)slow_p, slow_p->n);
			slow_p = slow_p->next;
			fast_p = fast_p->next->next;
			nodeCount += 1;
			if (slow_p == fast_p)
			{
				slow_p = head;
				while (slow_p != fast_p)
				{
					printf("[%p] %d\n", (void *)fast_p, fast_p->n);
					slow_p = slow_p->next, fast_p = fast_p->next;
					nodeCount +=1;
				}
				printf("-> [%p] %d\n", (void *)slow_p, slow_p->n);
				return (nodeCount);
			}
		}
		exit(98);
	}
	else
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			nodeCount += 1;
		}
		return (nodeCount);
	}
}
