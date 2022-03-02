#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, n;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	do {
		i++;
	} while (s1[i - 1]);
	do {
		j++;
	} while (s2[j - 1]);
	str = malloc(sizeof(char) * (i - 1 + j));
	if (str == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < i; n++)
	{
		str[n] = s1[n];
	}
	for (n = 0; n < j; n++)
	{
		str[n + i - 1] = s2[n];
	}
	return (str);
}
