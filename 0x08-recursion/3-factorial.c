#include "main.h"

/**
 * factorial - calculates the factorial of a number given
 * @n: number
 *
 * Return: the result of the factorial sum
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));

}
