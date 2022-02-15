#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: string
 *
 * Return: an upercase string
 */
char *string_toupper(char *s)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		j++;
		i++;
	}

	for (i = 0; i < j; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
	}
	return (s);
}
