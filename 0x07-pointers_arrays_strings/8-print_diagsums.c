#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals of a squeare matrix
 * @a: array of numbers
 * @size: of the array
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[i + (j * size)];
		j++;
	}
	j = size - 1;
	for (i = 0; i < size; i++)
	{
		d2 += a[i + (j * size)];
		j--;
	}

	printf("%d, %d\n", d1, d2);
}
