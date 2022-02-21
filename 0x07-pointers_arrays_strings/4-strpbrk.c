#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: chars to match
 *
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, found = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found++;
				break;
			}
		}
		if (found == 1)
			break;
	}
	return (s + i);
}
