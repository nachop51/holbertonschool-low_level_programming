#include "main.h"

/**
 * main - check the code
 * @number: to check
 *
 * Return: Always 0.
 */
int print_last_digit(int number)
{
	int last_digit = number % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
