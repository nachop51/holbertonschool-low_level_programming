#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Random password generator
 *
 * Return: no error
 */
int main(void)
{
	int num;

	srand(time(NULL));
	num = rand();
	return (num);
}
