#include "main.h"

/**
 * _memset - work as memset
 * @s: string
 * @b: byte
 * @n: bytes of memory
 *
 * Return: a char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
