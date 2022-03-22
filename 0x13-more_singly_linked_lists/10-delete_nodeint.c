#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a list
 * @head: head of a list
 * @index: index of the list
 *
 * Return: 1 if succeeded or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux, *tmp;
	unsigned int i = 0;

	aux = *head;
	if (index != 0)
	{
		for (i = 0; i < index - 1; i++)
		{
			aux = aux->next;
			if (aux == NULL)
				return (-1);
		}
		tmp = aux;
		aux = aux->next;
		aux = aux->next;
		free(tmp->next);
		tmp->next = aux;
	}
	else
	{
		if (aux == NULL)
			return (-1);
		*head = aux->next;
		free(aux);
	}

	return (1);
}
