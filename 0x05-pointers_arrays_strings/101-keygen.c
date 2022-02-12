#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Random password generator
 *
 * Return: no error
 */
int main(void)
{
	int n = 0;
	int	i = 2772;

	srand(time(NULL));
	n = rand() % 98;
	while (i != 0)
	{
		putchar(n);
		i -= n;
		if (i <= 125 && i >= 33)
		{
			n = i;
		}
	}
	return (0);
}
