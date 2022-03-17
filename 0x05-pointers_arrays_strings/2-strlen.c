#include "main.h"

/**
 * _strlen - string length
 * @s: string
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int i = 0;
	
	while (s[i])
		i++;
	
	return (i);
}
