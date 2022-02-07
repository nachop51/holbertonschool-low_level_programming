#include "main.h"

/**
 * jack_bauer - prints out all the hours and minutes
 *
 * Return: no error
 */
void jack_bauer(void)
{
	int hours;
	int minutes = 0;

	for (hours = 0; hours <= 23; hours++)
	{
		if (hours < 10)
		{
			_putchar('0');
			_putchar(hours + '0');
		}
		else
		{
			_putchar(hours / 10 + '0');
			_putchar(hours % 10 + '0');
		}
		_putchar(':');

		for (minutes = 0; minutes <= 59; minutes++)
		{
			if (minutes < 10)
			{
				_putchar('0');
				_putchar(minutes + '0');
			}
			else
			{
				_putchar(minutes / 10 + '0');
				_putchar(minutes % 10 + '0');
			}
			_putchar('\n');
		}

		_putchar('\n');

	}
}
