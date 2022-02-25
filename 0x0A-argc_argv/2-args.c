#include <stdio.h>

/**
 * main - displays the arguments passed
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: no error
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
