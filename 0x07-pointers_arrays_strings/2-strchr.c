#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: char to locate
 *
 * Return: a pointer to a char
 */
char *_strchr(char *s, char c)
{
	int i = 0, j = 0;

	while (s[j])
		j++;

	for (i = 0; s[i] != c; i++)
	{
		if (i == j - 1 || s[i] == '\0')
			return (0);
	}
	return (s + i);
}
