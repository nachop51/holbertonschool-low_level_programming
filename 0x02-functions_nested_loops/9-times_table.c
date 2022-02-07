#include "main.h"

/**
 * times_table - prints the tables
 *
 * Return: no error
 */
void times_table(void)
{
	int x;
	int y;
	int result;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			result = x * y;
			_putchar(result + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
