#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiply 2 numbers
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: no error
 */
int main(int argc, char const *argv[])
{
	int i = 0, j = 0, flag1 = 0, flag2 = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	while (argv[1])
	{
		i++;
		if (argv[1][i] >= 48 && argv[1][i] <= 57)
		{
			flag1++;
			break;
		}
	}
	while (argv[2])
	{
		j++;
		if (argv[2][j] >= 48 && argv[2][j] <= 57)
		{
			flag2++;
			break;
		}
	}
	if (flag1 == 1 || flag2 == 1)
	{
		printf("Error\n");
		exit(98);
	}

	return (0);
}
