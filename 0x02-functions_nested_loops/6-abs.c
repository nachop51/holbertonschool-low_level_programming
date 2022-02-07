#include "main.h"
#include <stdio.h>

/**
 * _abs - absolute value
 *
 * Return: no error
 */
int _abs(int number)
{
	if (number < 0)
	{
		number = number * (-1);
	}
	else if (number == 0)
	{
		return (number);
	}
	return (number);
}
