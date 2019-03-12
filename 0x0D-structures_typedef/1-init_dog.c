#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - structure.
 * @d: struct dog
 * @name: string input
 * @age: number input
 * @owner: number input
 * Retrun: void.
**/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	if (name != NULL)
		(*d).name = name;
	if (age != age)
	{
	}
	else
		(*d).age = age;
	if (owner != NULL)
		(*d).owner = owner;
	}
}
