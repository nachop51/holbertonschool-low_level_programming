#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: dest
 * @src: source
 *
 * Return: a char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	
	return (dest);
}
