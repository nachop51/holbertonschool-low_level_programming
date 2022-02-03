#include <stdio.h>

/**
 * main - Prints out some sizes
 *
 * Return: no error
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)", sizeof(long long int));
	printf("Size of a float: %ld byte(s)", sizeof(float));
	return (0);

}
