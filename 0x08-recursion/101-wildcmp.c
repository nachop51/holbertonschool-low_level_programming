#include "main.h"

/**
 * wildcmp - determinates if two strings are identical
 * @s1: string1
 * @s2: string2
 *
 * Return: compare strings
 */
int wildcmp(char *s1, char *s2)
{
	int i = 0;

	if (s1[i] == 0)
	{
		if (s2[i] != 0)
		{
			if (s2[i] == '*')
				return (wildcmp(s1, s2 + 1));
		}
		else
		{
			return (s2[i] == '\0');
		}
	}
	if (s2[i] == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	if (s1[i] == s2[i])
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
