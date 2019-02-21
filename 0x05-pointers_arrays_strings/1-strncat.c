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
	int i, j;

	destino = dest;
	fuente = src;
	for (j = 0; destino[j] != '\0'; j++)
	{
	}
	for (i = 0; i < n && fuente[i] != '\0'; i++)
	{
		destino[j + i] = fuente[i];
	}
	for (; i < n; i++)
	*destino = '\0';
	return (dest);
}
