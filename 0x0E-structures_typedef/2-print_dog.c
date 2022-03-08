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
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
