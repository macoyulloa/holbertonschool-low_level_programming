#include "holberton.h"
#include <stdio.h>

/**
 * print_array - code for Holberton School students.
 * @a: pointer
 * @n: variable
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int c;

	for(c = 0; c != n; c++)
	{
		if (c < n-1)
			printf("%d, ", a[c]);
		else
			printf("%d", a[c]);
	}
	printf("\n");
}
