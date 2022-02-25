#include <stdio.h>

/**
 * main - displays the name of the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: no error
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
