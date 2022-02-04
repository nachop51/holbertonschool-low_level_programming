#include <stdio.h>
#include <time.h>

/**
 * main - prints out a value depending on the number
 *
 * Return: no error
 */
int main(void)
{
	srand(time(NULL));
	int r = rand();

	if (r > 0)
	{
		printf("%d is positive\n", r);
	}
	else if (r == 0)
	{
		printf("%d is zero\n", r)
	}
	else
	{
		printf("%d is negative\n", r)
	}
}
