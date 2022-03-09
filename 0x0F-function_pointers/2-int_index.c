#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array
 * @size: of the array
 * @cmp: function to compare
 *
 * Return: if the number matchs or not
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!cmp)
		return (-1);
	if (!array)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
