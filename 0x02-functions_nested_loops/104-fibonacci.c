#include <stdio.h>
#include <stdlib.h>

/**
*main - prints fibo first 98
*Return: always 0
*/
int main(void)
{
	int i = 3;
	unsigned long sum = 0, num1 = 1, num2 = 2;

	printf("%ld, %ld, ", num1, num2);
	for (; i <= 97; i++)
	{
		sum = num1 + num2;
		printf("%lu", sum);
		num1 = num2;
		num2 = sum;

		if (i < 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
