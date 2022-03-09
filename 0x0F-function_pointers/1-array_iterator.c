#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: Array
 * @size: size of the array
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	if (!action)
		return;
	if (!array)
		return;
	if (size <= 0)
		return;
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
