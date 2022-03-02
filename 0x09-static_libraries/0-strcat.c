#include "main.h"
#include <stdio.h>
/**
 * _strcat - Concatenates two strings
 * @dest: string1
 * @src: string2
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, n = 0;

	while (src[i] != '\0')
	{
		j++;
		i++;
	}
	i = 0;
	while (dest[i] != '\0')
	{
		n++;
		i++;
	}
	for (i = 0; i < j; i++)
	{
		if (dest[n + i] == '\0')
		{
			dest[n + i] = src[i];
		}
		else
		{
			dest[n + i] = src[i];
		}
	}
	dest[j + n] = '\0';
	return (dest);
}
