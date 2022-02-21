#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to compare
 * @needle: substring to be searched
 *
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, c = 0, n = 0, count = 0, flag = 0;

	while (needle[n])
		n++;
	while (haystack[c])
		c++;

	for (i = 0; i < c; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (needle[j] == haystack[i])
				flag = 1;
			else
				flag = 0;
			if (flag == 1)
			{
				if ()
				count++;
			}
		}
		if (i == c - 1)
			break;
	}

	return (haystack + i);
}
