#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: no error
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc == 3)
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", n);
		return (0);
	}

	printf("Error\n");
	return (1);
}
