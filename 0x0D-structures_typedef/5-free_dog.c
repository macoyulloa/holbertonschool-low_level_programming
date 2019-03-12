#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - description.
 * @d: pointer to a struct
 *
 * Return: void function.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
	}
	else
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
