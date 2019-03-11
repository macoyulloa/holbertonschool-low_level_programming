#include "dog.h"

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
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
