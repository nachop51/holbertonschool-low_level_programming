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
	int i, found;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			found = 1;
		}
		if (found == 1)
		{
			s++;
		}
	}
	if (found == 1)
		return (s);
	return (0);
}
