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
	int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (needle[j] != haystack[i + j])
			{
				break;
			}
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		i++;
	}
	return ('\0');
}
