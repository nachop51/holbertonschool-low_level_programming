#include "main.h"

/**
 * _puts - prints a string
 * @str: string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
 * _strlen - string length
 * @s: string
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int i;
	char a;

	for (i = 0; i > -1 ; i++)
	{
		a = s[i];
		if (a == '\0')
			break;
	}
	return (i);
}
