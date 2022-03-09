#include "3-calc.h"

int main(int argc, char *argv[])
{
	int result, i, j;
	char p[] = {'+', '-', '*', '%', '/'};

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 0; i < 5; i++)
		if (argv[2][0] == p[i])
			break;
	if (i == 5)
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
	return 0;
}
