#include <stdio.h>

/**
 * main - first 50 fibonacci numbers
 *
 * Return: no error
 */
int main(void)
{
	long n1 = 1;
	long n2 = 0;
	long sum = 0;
	long sum2 = 0;
	int count;

	for (count = 0; count <= 40 ; count++)
	{
		sum = n1 + n2;
		n2 = n1;
		n1 = sum;
		if (sum < 4000000)
		{
			if (sum % 2 == 0)
			{
				sum2 += sum;
			}
		}
	}
	printf("%ld\n", sum2);
	return (0);
}
