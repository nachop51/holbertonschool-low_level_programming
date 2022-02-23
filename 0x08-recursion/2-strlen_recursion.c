#include <stdio.h>

/**
 * _strlen_recursion - function strlen with recursion
 * @s: string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return (i);

	return (_strlen_recursion(s + 1) + 1);
}
