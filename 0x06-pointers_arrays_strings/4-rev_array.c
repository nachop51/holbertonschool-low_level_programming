#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse an array
 * @a: income array
 * @n: size of the array
 */
void reverse_array(int *a, int n)
{
	int i, r = 0;

	for (i = 0; i < n; i++)
	{
		n--;
		r = a[n];
		a[n] = a[i];
		a[i] = r;
	}
}
