#include <stdio.h>
#include <stdlib.h>

/**
*main - prints fibo first 98
*Return: always 0
*/
int main(void)
{
	int i = 3;
	unsigned long temp = 0, num1 = 1, num2 = 2;

	printf("%ld, %ld, ", num1, num2);
	for (; i < 98; i++)
	{
		temp = num1 + num2;
		printf("%lu", temp);
		num1 = num2;
		num2 = temp;

		if (i < 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
