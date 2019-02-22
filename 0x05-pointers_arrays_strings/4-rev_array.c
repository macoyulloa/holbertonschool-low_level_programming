#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - check the code for Holberton School students.
 * @a: pointer
 * @n: input
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i, count;
	int n2 = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		count = a[i];
		a[i] = a[n2 - i];
		a[n2 - i] = count;
	}
}
