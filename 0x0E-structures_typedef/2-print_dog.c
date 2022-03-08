#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints out all dog info
 * @d: pointer to the struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		return;
	printf("Name: %s\n", d->name);
	if (!d->age)
		return;
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		return;
	printf("Owner: %s\n", d->owner);

}
