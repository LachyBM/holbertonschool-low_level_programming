#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog- grid
 * @d: dog
 * Return: if grid NULL
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
