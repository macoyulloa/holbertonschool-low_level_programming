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
	d->name = malloc(sizeof(char *));
		d->name = name;
	d->age = age;
	d->owner = malloc(sizeof(char *));
		d->owner = owner;
	return (d);
}
