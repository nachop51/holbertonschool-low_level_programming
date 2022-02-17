#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 *
 * Return: an encoded string
 */
char *leet(char *s)
{
	int i = 0, j = 0;
	char target[] = "aAeEoOtTlL";
	char replace[] = "43071";

	while (s[i] != '\0')
	{
		while (target[j] != '\0')
		{
			if (s[i] == target[j])
			{
				s[i] = replace[j / 2];
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
