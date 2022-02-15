#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 *
 * Return: a capitalized string
 */
char *cap_string(char *s)
{
	int i = 0, j = 0, sep = 0;

	while (s[i] != '\0')
	{
		j++;
		i++;
	}
	for (i = 0; i < j; i++)
	{
		if (s[i] == '\n' || s[i] == '\t' || s[i] == ' ' || s[i] == ',')
			sep++;
		if (s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?')
			sep++;
		if (s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{')
			sep++;
		if (s[i] == '}')
			sep++;
		if (sep == 1)
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] = s[i + 1] - 32;
			}
			sep = 0;
		}
	}
	return (s);
}
