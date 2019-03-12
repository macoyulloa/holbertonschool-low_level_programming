#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * contar - cuenta los string.
 * @str: input
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
 * strcopy - cuenta los string.
 * @str: input
 * @ancho: ancho
 * Return: void.
**/
char *strcopy(char *str, int ancho)
{
	int leng;
	char *str1;

	str1 = malloc(sizeof(char) * ancho);
	if (str1 == NULL)
	{
		free(str1);
		return (NULL);
	}
	else
	{
		for (leng = 0; str[leng] != '\0'; leng++)
			str1[leng] = str[leng];
		return (str1);
	}
	return (NULL);
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

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc(sizeof(char) * contar(name));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	nombre = strcopy(name, contar(name));
	d->name = nombre;
	d->age = age;
	d->owner = malloc(sizeof(char) * contar(owner));
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}
	dueno = strcopy(owner, contar(owner));
	d->owner = dueno;
	return (d);
}
