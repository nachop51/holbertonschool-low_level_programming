#include <stdlib.h>

/**
 * _realloc - reallocates memory
 * @ptr: pointer
 * @old_size: old value of memory
 * @new_size: new value of memory
 *
 * Return: a pointer to a new space in memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < new_size && i < old_size; i++)
	{
		((char *)p)[i] = ((char *)ptr)[i];
	}

	free(ptr);
	return (p);
}
