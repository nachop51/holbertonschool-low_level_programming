#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: string dest
 * @src: string to cpy
 * @n: bytes
 *
 * Return: copy a string to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, a = 0;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
			a = 1;
		if (a == 0)
			dest[i] = src[i];
		else
		{
			dest[i] = '\0';
		}
	}

	return (dest);
}
