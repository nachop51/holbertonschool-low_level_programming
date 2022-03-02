#include <stdlib.h>

/**
 * _strdup - strdup C function
 * @str: string to duplicate
 *
 * Return: str
 */
char *_strdup(char *str)
{
	int i, n = 0;
	char *strcopy;

	if (str == NULL)
		return (NULL);
	do {
		n++;
	} while (str[n - 1]);
	strcopy = malloc(sizeof(char) * n);
	if (strcopy == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		strcopy[i] = str[i];
	}

	return (strcopy);
}
