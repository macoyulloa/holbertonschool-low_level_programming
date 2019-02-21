#include "holberton.h"
#include <stdio.h>

/**
 * _strncmp - check the code for Holberton School students.
 * @s1: pointer
 * @s2: pointer
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int r;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		r = s1[i] - s2[i];
		if ( r == 0)
		i++;
		else
		return (r);
	}
	return (r);
}
