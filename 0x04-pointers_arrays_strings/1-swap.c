#include "holberton.h"

/**
 * swap_int - check the code for Holberton School students.
 * @a: pointer
 * @b: pointer
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
