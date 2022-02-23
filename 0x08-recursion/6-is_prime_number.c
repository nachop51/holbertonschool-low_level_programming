#include "main.h"

/**
 * is_prime_number - calculates if it is prime or not
 * @n: number
 *
 * Return: if it's prime or not
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_prime_number2(n, n / 2));
}

/**
 * is_prime_number2 - 2 parameters
 * @n: number
 * @i: number
 *
 * Return: prime or not
 */
int is_prime_number2(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_number2(n, i - 1));
}
