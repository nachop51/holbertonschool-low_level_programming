#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the space in memory of a struct
 * @d: struct to free
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
