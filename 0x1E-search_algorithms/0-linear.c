#include "search_algos.h"

/**
 * linear_search - Searchs an item in an array using linear searching
 * @array: Array to search
 * @size: Size of the array
 * @value: Value to search
 *
 * Return: If fails -1, else the index of the value in the array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
