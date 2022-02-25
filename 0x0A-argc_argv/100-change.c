#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints out the minimum number of coins to make change
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: no error
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; i > 0; j++)
	{
		if (i >= 25)
			i -= 25;
		else if (i >= 10)
			i -= 10;
		else if (i >= 5)
			i -= 5;
		else if (i >= 2)
			i -= 2;
		else
			i -= 1;
	}
	printf("%d\n", j);

	return (0);
}
