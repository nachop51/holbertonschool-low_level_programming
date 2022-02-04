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
		printf("%d is positive", r);
	}
	else if (r == 0)
	{
		printf("%d is zero", r)
	}
	else
	{
		printf("%d is negative", r)
	}
}
