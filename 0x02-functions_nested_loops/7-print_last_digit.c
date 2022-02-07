#include "main.h"

/**
 * print_last_digit - check the code
 * @number: to check
 *
 * Return: Always 0.
 */
int print_last_digit(int number)
{
	if (number < 0)
	{
		number = number * (-1);
	}
	int last_digit = number % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
