#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array
 * @min: minimum number
 * @max: maximum number
 * 
 * Return: an array
 */
int *array_range(int min, int max)
{
	int i;
	int *a;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
	{
		a[i] = min + i;
	}
	return (a);
}
