#include <stdio.h>

/**
 * main - displays the arguments passed to the program
 * @argc: argument count
 * @argv: arguments vector
 *
 * Return: no error
 */
int main(int argc, char *argv[])
{
	argv[0] = argv[0];
	printf("%d\n", argc - 1);
	return (0);
}
