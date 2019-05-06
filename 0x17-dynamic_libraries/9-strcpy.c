#include "holberton.h"
#include <stdio.h>

/**
 * *_strcpy - code for Holberton School students.
 * @dest: pointer
 * @src: pointer
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	char *destino;
	char *fuente;

	destino = dest;
	fuente = src;
	while (*fuente != '\0')
	{
		*destino = *fuente;
		fuente++;
		destino++;
	}
	*destino = *fuente;
	return (dest);
}
