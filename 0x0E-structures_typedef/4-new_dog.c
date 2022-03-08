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
	int i = 0;
	char *namecpy = strcpy(namecpy, name);
	char *ownercpy = strcpy(ownercpy, owner);
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	if (name == NULL)
	{
		i++;
	}
	d->name = malloc(sizeof(namecpy));
	d->name = namecpy;
	if (age > 0)
	{
		d->age = age;
	}
	else
		i++;
	if (owner == NULL)
	{
		i++;
	}
	d->owner = malloc(sizeof(ownercpy));
	d->owner = ownercpy;

	if (i != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}
	return (d);
}
