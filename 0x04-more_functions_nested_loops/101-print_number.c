#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to print
 */
void print_number(int n)
{
	int count = 0, test = n, var = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
		test *= -1;
	}
	while (test != 0)
	{
		test /= 10;
		count++;
	}

	count = count - 1;

	while (count > 0)
	{
		var = power(10, count);
		_putchar((n / var) % 10 + '0');
		count--;
	}
	_putchar(n % 10 + '0');
}

/**
 * power - sadsad
 * @a: first parameter
 * @b: second parameter
 *
 * Return: an integer
 */
int power(int a, int b)
{
	int result = 1;

	for (; b > 0; b--)
	{
		result = result * a;
	}
	return (result);
}
