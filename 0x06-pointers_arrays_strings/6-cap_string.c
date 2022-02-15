#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 *
 * Return: a capitalized string
 */
char *cap_string(char *s)
{
	int i = 0, j = 0, cap = 0, flag = 0, sep = 0;

	while (s[i] != '\0')
	{
		j++;
		i++;
	}
	for (i = 0; i < j; i++)
	{
		if (s[i] >= 65 && s[i] <= 90)
			cap++;
		switch (s[i])
			case ' ':
			case 11:
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				sep++;
				break;
		if (s[i] >= 97 && s[i] <= 122)
			flag++;
		if (cap == 1)
		{
			flag = 0;
		}
		if (flag == 1 && sep == 1)
		{
			s[i] += 32;
			sep = 0;
		}
	}
	return (s);
}
