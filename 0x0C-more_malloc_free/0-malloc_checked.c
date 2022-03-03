#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory to allocate
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);
		if (p == NULL)
			return (98);
	return(p);
}