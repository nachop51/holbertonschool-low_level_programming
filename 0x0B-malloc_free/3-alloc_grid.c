#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - creates a two dimensional array
 * @width: width of the array
 * @height: height of the array
 *
 * Return: a pointer to a two dimensional array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int) * (width * height));
	if (array == NULL)
		return(NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[j + (i * height)] = 0;
			printf("j:%d\n", j);
		}
		printf("sali del segundo for, i es:%d\n", i);
	}

	return (array);
}
