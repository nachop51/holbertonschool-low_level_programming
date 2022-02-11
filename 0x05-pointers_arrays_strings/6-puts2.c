#include <string.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @s: string
 */
void puts2(char *s)
{
	int i, j = _strlen(s) - 1;

	for (i = 0; i <= j; i = i + 2)
	{
		_putchar(s[i]);
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
