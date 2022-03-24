#include "main.h"
#include <stdio.h>

/**
 * power - elevates a to the power of b
 * @a: first parameter
 * @b: second parameter
 *
 * Return: an integer
 */
unsigned int power(int a, int b)
{
	unsigned int result = 1;

	for (; b > 0; b--)
	{
		result = result * a;
	}
	return (result);
}

/**
 * print_binary - prints out a binary number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	unsigned long int j = 0, i = 0;

	while (n)
	{
		while (n > j)
			j = power(2, i), i++;
		j = power(2, i - 1);
		if ((n & j) == 1)
			_putchar('1');
		else
			_putchar('0');
		n = n >> 1;
	}
}
