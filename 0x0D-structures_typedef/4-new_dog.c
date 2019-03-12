#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - structure.
 * @name: input
 * @age: input
 * @owner: input
 * Return: void.
**/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}