#include "holberton.h"
#include <stdio.h>

/**
 * _strncpy - check the code for Holberton School students.
 * @dest: pointer
 * @src: pointer
 * @n: input
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	/**char *destino;
	char *fuente;**/
	int i = 0;

	/**destino = dest;
	fuente = src;**/
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
