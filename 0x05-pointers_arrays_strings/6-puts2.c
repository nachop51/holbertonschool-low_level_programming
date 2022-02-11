#include <string.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @s: string
 */
void puts2(char *s)
{
	int i, j = strlen(s) - 1;

	for (i = 0; i <= j; i = i + 2)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
