#include <stdio.h>

/**
 * main - finds the largest prime factor of 612852475143
 *
 * Return: no error
 */
int main(void)
{
	long int i = 2, j = 2;
	long int largestF = 0;
	long int number = 612852475143;

	for (i = 2; i < number; i++)
	{
		for (j = 2; j < i / 2; j++)
		{
			if (i % j == 0)
			{
				break;
			}
			else
			{
				largestF = i;
			}
		}
	}
	printf("%ld", largestF);
	return (0);
}
