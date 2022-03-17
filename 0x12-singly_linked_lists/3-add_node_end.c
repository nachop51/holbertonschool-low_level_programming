#include "lists.h"

/**
 * add_node_end - adds an element at the end of a list
 * @head: address
 * @str: string
 *
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = _strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	last = *head;
	if (head == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;

	return (new);
}

/**
 * _strdup - strdup C function
 * @str: string to duplicate
 *
 * Return: str
 */
char *_strdup(const char *str)
{
	int i, n = 0;
	char *strcopy;

	if (str == NULL)
		return (NULL);
	do {
		n++;
	} while (str[n - 1]);
	strcopy = malloc(sizeof(char) * n);
	if (strcopy == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		strcopy[i] = str[i];
	}

	return (strcopy);
}

/**
 * _strlen - string length
 * @s: string
 *
 * Return: the length of a string
 */
int _strlen(const char *s)
{
	int i = 0;
	
	while (s[i])
		i++;
	
	return (i);
}
