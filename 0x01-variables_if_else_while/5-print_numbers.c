#include <stdio.h>

/**
 * main - prints out all numbers of base 10
 *
 * Return: no error
 */
int main(void)
{
	int integer;

	for (integer = 0; integer < 10; integer++)
	{
		printf("%d", integer);
		if (integer == 9)
		{
			printf("\n");
		}
	}
	return (0);
}
