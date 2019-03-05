#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - description
 * @size: the size of the array in bytes
 * @c: input
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size != 0)
	{
		p = malloc(sizeof(char) * size);
		if (p == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			p[i] = c;
			return (p);
		}
	}
	else
		return (NULL);
}
