#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 *
 * Return: a capitalized string
 */
char *cap_string(char *s)
{
	int i = 0;

	if (s[i] >= 97 && s[i] <= 122)
		s[i] = s[i] - 32;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			if (s[i - 1] == '\n' ||
				s[i - 1] == '\t' ||
				s[i - 1] == ' ' ||
				s[i - 1] == ',' ||
				s[i - 1] == ';' ||
				s[i - 1] == '.' ||
				s[i - 1] == '!' ||
				s[i - 1] == '?' ||
				s[i - 1] == '"' ||
				s[i - 1] == '(' ||
				s[i - 1] == ')' ||
				s[i - 1] == '{' ||
				s[i - 1] == '}')
			{
				s[i] = s[i] - 32;
			}
		}
		i++;
	}
	return (s);
}
