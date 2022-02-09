#include "main.h"

/**
 * _isdigit - prints out if it is a digit or not
 * @digit: digit to check
 *
 * Return: 1 or 0
 */
int _isdigit(int digit)
{
	if (digit >= 48 && digit <= 57)
	{
		return (1);
	}
	return (0);
}
