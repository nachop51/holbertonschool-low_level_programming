#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_array - prints an array
 * @a: the array
 * @n: size of the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
}
