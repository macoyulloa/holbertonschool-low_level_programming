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
	if (d->name == NULL)
		return (NULL);
	d->name = name;
	if (d->age != d->age)
	{
	}
	else
		d->age = age;
	d->owner = malloc(sizeof(char *));
	if (d->owner == NULL)
		return (NULL);
	d->owner = owner;
	return (d);
}
