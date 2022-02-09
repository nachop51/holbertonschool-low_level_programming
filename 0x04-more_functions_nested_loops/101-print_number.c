#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to print
 */
void print_number(int n)
{
	int count = 0, var = 1;
	unsigned int out, test;

	if (n < 0)
	{
		_putchar('-');
		out = n * -1;
	}
	else
		out = n;
	test = out;
	while (test != 0)
	{
		test /= 10;
		count++;
	}
	count--;
	while (count > 0)
	{
		var = power(10, count);
		_putchar((out / var) % 10 + '0');
		count--;
	}
	_putchar(out % 10 + '0');
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
