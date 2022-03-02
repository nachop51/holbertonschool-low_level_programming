#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: size of the array
 * @c: specific char
 *
 * Return: no error
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc(sizeof(char *) * size);
	if (size <= 0)
		return (0);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
