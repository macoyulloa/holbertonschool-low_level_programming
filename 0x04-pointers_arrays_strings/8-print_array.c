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
	int count;

	for (count = 0; count < n; count++)
	{
		if (count == (n - 1))
			printf("%d", a[count]);
		else
			printf("%d, ", a[count]);
	}
	printf("\n");
}
