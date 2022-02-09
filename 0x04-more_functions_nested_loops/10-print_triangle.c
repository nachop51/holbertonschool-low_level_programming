#include "main.h"

/**
 * print_triangle - prints out a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i = 0;
	int j = 0;
	int x = 0;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = i; j <= size - 1; j++)
			{
				if (j != (size - 1))
				{
					_putchar(' ');
				}
			}
			for (x = i; x >= 0; x--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
