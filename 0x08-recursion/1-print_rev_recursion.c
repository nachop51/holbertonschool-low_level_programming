#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\n')
	{
		_putchar(10);
		return;
	}
	_putchar(s[i]);
	s--;
	_print_rev_recursion(s);
}
