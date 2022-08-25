#include "search_algos.h"

int binary_helper(int *array, int value, int low, int high)
{
	int mid = low + (high - low) / 2, i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i != low)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");

	if (high >= low) {
		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return mid;
		if (array[mid] > value)
			return (binary_helper(array, value, low, mid - 1));
		return (binary_helper(array, value, mid + 1, high));
	}
	return (-1);
}

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
	if (!array)
		return (-1);
	return (binary_helper(array, value, 0, size - 1));
}
