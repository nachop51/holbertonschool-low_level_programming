#include "3-calc.h"

/**
 * main - program that performs simple operations
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: no error
 */
int main(int argc, char *argv[])
{
	int result, i, j;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][0] != 37 && argv[2][0] != 47 && argv[2][0] != 43 &&
	argv[2][0] != 45 && argv[2][0] != 42)
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);

	result = (*get_op_func(argv[2]))(i, j);

	printf("%d\n", result);
	return (0);
}
