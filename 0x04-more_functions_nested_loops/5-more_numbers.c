#include "main.h"

/**
 * more_numbers - prints out the numbers from 0 to 9, except 2 and 4
 */
void more_numbers(void)
{
	int n = 0;
	int i = 0;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
				_putchar(i % 10 + '0');
		}
	_putchar('\n');
	}
}
