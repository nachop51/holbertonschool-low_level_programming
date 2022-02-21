#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: chars to match
 *
 * Return: numbers of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, n = 0;

	while (accept[j])
		j++;

	for (i = 0; s[i] != '\0';)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				i++;
				break;
			}
			if (n == j - 1)
				return (i);
		}
	}
	return (i);
}
