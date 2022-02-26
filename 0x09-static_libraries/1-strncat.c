#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: bytes size
 *
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, x = 0;

	while (src[i] != '\0')
	{
		j++;
		i++;
	}
	i = 0;
	while (dest[i] != '\0')
	{
		x++;
		i++;
	}
	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
			dest[x + i] = src[i];
		else
			break;
	}
	dest[x + n] = '\0';
	return (dest);
}
