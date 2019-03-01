#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - check the code for Holberton School students.
 * @dest: pointer
 * @src: pointer
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	char *destino;
	char *fuente;

	destino = dest;
	fuente = src;
	for (; *destino != '\0'; destino++)
	{
	}
	for (; *fuente != '\0'; fuente++, destino++)
	*destino = *fuente;
	return (dest);
}
