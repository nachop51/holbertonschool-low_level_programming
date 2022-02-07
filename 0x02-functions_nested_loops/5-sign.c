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
		return (1);
	}
	else if (number == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
