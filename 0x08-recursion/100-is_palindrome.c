#include "main.h"

/**
 * is_palindrome - determinates if a string is palindrome
 * @s: string
 *
 * Return: if a string is palindrome or not
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len < 1)
		return (0);

	return (check(s, 0, len - 1));
}

/**
 * check - checks if a number is palindrome
 * @s: string
 * @start: of the string
 * @len: of the string
 *
 * Return: if a number is palindrome or not
 */
int check(char *s, int start, int len)
{
	if (start >= len)
	{
		if (s[start] == s[len])
			return (1);
		if (s[start - 1] == s[len + 1])
			return (1);
		return (0);
	}

	if (s[start] == s[len])
		return (check(s, start + 1, len - 1));
	if (s[start] != s[len])
		return (0);
	return (1);
}

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
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}
