#include "main.h"

/**
 * print_line - prints out a line
 * @n: number of lines
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
		_putchar('\n');
}
