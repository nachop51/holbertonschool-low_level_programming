#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s: string
 *
 * Return: an encoded string
 */
char *rot13(char *s)
{
	int i = 0, j;
	char target[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char replace[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		j = 0;
		while (j < 52)
		{
			if (s[i] == target[j])
			{
				s[i] = replace[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
