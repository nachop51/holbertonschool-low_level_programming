#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints out a value depending on the number
 *
 * Return: no error
 */
int main(void)
{
	srand(time(NULL));
	int r = rand();
	int r2 = rand() % 10;

	if (r2 >= 5)
	{
		r = (r * -1);
	}

	if (r > 0)
	{
		printf("%d is positive\n", r);
	}
	else if (r == 0)
	{
		printf("%d is zero\n", r);
	}
	else
	{
		printf("%d is negative\n", r);
	}
	return (0);
}
