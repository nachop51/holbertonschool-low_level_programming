#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the space in memory of a struct
 * @d: struct to free
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
