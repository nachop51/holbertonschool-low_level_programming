#include "main.h"

/**
 * print_diagonal - prints out a diagonal
 * @n: diagonal line
 */
void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (i = j; i > 0; i--)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
