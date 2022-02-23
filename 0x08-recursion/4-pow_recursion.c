#include "main.h"

/**
 * _pow_recursion - calculates the power of a number using recursion
 * @x: number to power
 * @y: number of times
 *
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
