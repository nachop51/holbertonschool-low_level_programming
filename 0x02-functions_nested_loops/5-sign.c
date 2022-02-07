#include "main.h"

/**
 * print_sign - prints out if a number greater or lower than 0
 * @number: to check
 *
 * Return: no error
 */
int print_sign(int number)
{
	if (number > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (number == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
