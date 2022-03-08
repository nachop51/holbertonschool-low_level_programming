#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: a dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	if (name == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}
	d->name = strdup(name);
	d->age = age;
	if (owner == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}
	d->owner = strdup(owner);

	return (d);
}
