#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - check the code for Holberton School students.
 * @dest: pointer
 * @src: pointer
 * @n: input
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *destino;
	char *fuente;
	int i;

	destino = dest;
	fuente = src;
	for (; *destino != '\0'; destino++)
	{
	}
	for (i = 0; fuente[i] != '\0' && i < n; i++)
	{
		*destino = *fuente;
		destino++;
		fuente++;
		if (i < n)
		*destino = '\0';
	}
	return (dest);
}
