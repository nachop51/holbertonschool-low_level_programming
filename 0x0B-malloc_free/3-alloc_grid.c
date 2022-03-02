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
	int i = 0, j;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			free(array[i]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}
