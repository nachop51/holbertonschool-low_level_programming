#include <stdio.h>

/**
 * main - prints out all numbers of base 10
 *
 * Return: no error
 */
int main(void)
{
	int value;

	for (value = 0; value <= 9; value++)
	{
		putchar(value + '0');
		if (value == 9)
		{
			putchar('\n');
		}
	}
	return (0);
}
