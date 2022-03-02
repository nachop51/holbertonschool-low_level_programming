#include "main.h"
#include <stdio.h>

/**
 * _strcmp - strcmp function
 * @s1: string 1
 * @s2: string 2
 *
 * Return: the different values
 */
int _strcmp(char *s1, char *s2)
{
	int i, ss1 = 0, ss2 = 0, result = 0;

	for (i = 0; i > -1; i++)
	{
		if (s1[i] != s2[i])
		{
			ss1 = s1[i];
			ss2 = s2[i];
			break;
		}
		else
		{
			if (s1[i] == '\0' || s2[i] == '\0')
				break;
		}
	}
	result = ss1 - ss2;
	return (result);
}
