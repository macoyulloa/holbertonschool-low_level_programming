#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - check the code for Holberton School students.
 * @b: input
 * Return: depends of the case.
 */
void *malloc_checked(unsigned int b)
{
	void *s = malloc(b);

	if (s == NULL)
		exit(98);
	return (s);
}
