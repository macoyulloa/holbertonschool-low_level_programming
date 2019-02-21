#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - check the code for Holberton School students.
 * @s1: pointer
 * @s2: pointer
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	char *prim;
	char *seg;
	int i, j;

	prim = s1;
	seg = s2;
	for (i = 0; prim[i] != '\0'; i++)
	{
	}
	for (j = 0; seg[j] != '\0'; j++)
	{
	}
	if (i == j)
	return (0);
	else if (i < j)
	return (-15);
	else
	return (15);
}
