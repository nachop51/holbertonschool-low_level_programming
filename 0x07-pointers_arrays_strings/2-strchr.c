#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: char to locate
 *
 * Return: a char
 */
char *_strchr(char *s, char c)
{
	int i = 0, j = 0;

	while (s[j])
		j++;

	for (i = 0; i > -1; i++)
	{
		if (s[i] == c)
		{
			s += i;
			break;
		}
		if (i == j - 1 || s[i] == '\0')
			return (0);
	}
	return (s);
}
