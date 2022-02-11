#include <string.h>
#include "main.h"

/**
 * puts_half - prints the half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int i, j = (strlen(str) - 1);

	for (i = (j / 2) + 1; i <= j; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
