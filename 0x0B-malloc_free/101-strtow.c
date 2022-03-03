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
	int i = 0, j = 0, n = 0, x = 0, a = 0, flag = 0;
	char **s;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			flag = 1;
			n++;
		}
	}
	if (flag == 0)
		return (NULL);
	s = malloc(sizeof(char *) * (n + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i] && x < n; i++)
	{
		if (str[i] != ' ')
			j++;
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			s[x] = malloc(sizeof(char) * (j + 1));
			for (a = 0; a < j; a++)
			{
				s[x][a] = str[a + i + 1 - j];
			}
			s[x][j + 1] = '\0';
			x++;
			j = 0;
		}
	}
	s[x] = NULL;
	return (s);
}
