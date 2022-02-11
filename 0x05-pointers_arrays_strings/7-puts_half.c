#include <string.h>
#include "main.h"

/**
 * puts_half - prints the half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int i, j = (_strlen(str) - 1);

	for (i = (j / 2) + 1; i <= j; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
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
