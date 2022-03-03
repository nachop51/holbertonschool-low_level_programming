#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings in n bytes
 * @s1: String 1
 * @s2: String 2
 * @n: number of bytes
 *
 * Return: string concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, x;
	char *str;

	do {
		i++;
	} while (s1[i - 1]);
	do {
		j++;
	} while (s2[j - 1]);
	if (n >= j)
	{
		j = n;
		n = j;
	}
	str = malloc(sizeof(char) * (i + j - 1));
	if (str == NULL)
		return (NULL);

	for (x = 0; x < i - 1; x++)
		str[x] = s1[x];
	for (; x < n + i - 1; x++)
		str[x] = s2[x - i + 1];
	str[x] = '\0';
	return (str);
}
