#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints out a value
 *
 * Return: no error
 */
int main(void)
{
	int n;

	n = rand() - RAND_MAX / 2;
	int r = n;
	/* r stands for random */

	/* rld stands for Random Last Digit*/
	int rld = r % 10;

	if (rld > 5)
	{
		printf("Last digit of %d is %d and is greater than 6\n", r, rld);
	}
	else if (rld == 0)
	{
		printf("Last digit of %d is %d and is 0\n", r, rld);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", r, rld);
	}
	return (0);
}
