#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string
 *
 * Return: return a reversed string
 */
void rev_string(char *s)
{
	char str;
	int i = 0, j = strlen(s) - 1;

	for (i = 0; i < j; i++)
	{
		str = s[j];
		s[j] = s[i];
		s[i] = str;
		j--;
	}
}
