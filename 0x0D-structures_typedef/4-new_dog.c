#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * contar - cuenta los string.
 * @str: input
 *
 * Return: void.
**/
int contar(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	;
	return (i + 1);
}

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
	char *nombre;
	char *dueno;

	nombre = name;
	dueno = owner;
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc(sizeof(char) * contar(name));
	if (d->name == NULL)
		return (NULL);
	d->name = nombre;
	d->age = age;
	d->owner = malloc(sizeof(char) * contar(owner));
	if (d->owner == NULL)
		return (NULL);
	d->owner = dueno;
	return (d);
}
