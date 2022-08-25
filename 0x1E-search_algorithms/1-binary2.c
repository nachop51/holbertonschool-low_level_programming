#include "search_algos.h"

/**
 * binary_search - Searchs a value in an array using binary searching
 * @array: Array to search
 * @size: Size of the array
 * @value: Value to search
 *
 * Return: -1 if fails, else the index of the value in the array
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, position = 0, new_size = (size / 2);

	if (!array)
		return (-1);
	new_size = new_size % 2 == 0 ? new_size + 1 : new_size; 
	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i != 0)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
	printf("Size: %lu\nNew_size: %lu\n", size, new_size);
	if (size == 1 && array[0] != value)
		return (-1);
	if (array[new_size] == value)
		return (position);
	else if (array[new_size] > value)
		position -= binary_search(array, new_size - 1, value);
	else
		position += binary_search(array + new_size, size / 2, value);
	return (position);
}
