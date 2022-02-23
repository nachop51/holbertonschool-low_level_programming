#include "main.h"

/**
 * _sqrt_recursion - calculates a square root
 * @n: number
 *
 * Return: the square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (calculateSquare(n, 1));
}

/**
 * calculateSquare - calculates a square root
 * @n: number
 * @i: number
 *
 * Return: the square root
 */
int calculateSquare(int n, int i)
{
	if (i <= n)
	{
		if (i * i == n)
			return (i);
		else
			return (calculateSquare(n, i + 1));
	}
	else
		return (-1);
}
