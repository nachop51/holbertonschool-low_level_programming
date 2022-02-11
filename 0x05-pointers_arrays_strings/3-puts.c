#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 * @str: string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i < _strlen(str) - 1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
