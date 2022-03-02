#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - splits a string into words
 * @str: string
 *
 * Return: an array of strings
 */
char **strtow(char *str)
{
	int i = 0, j = 0, n = 0, x = 0, a;
	char **s;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			n++;
	}
	s = malloc(sizeof(char *) * n);
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
			j++;
		if (str[i] == ' ')
		{
			s[x] = malloc(sizeof(char) * j);
			for (a = 0; a <= j; a++)
			{
				s[x][a] = str[a + i - j];
			}
			x++;
			j = 0;
			continue;
		}
	}
	return (s);
}
