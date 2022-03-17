#include "lists.h"

/**
 * free_list -  frees a list
 * @head: list to free
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}