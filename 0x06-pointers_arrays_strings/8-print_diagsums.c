#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - funtion.
 * @a: pointer
 * @size: input
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int k = 0;
	int sum = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum = sum + a[k];
			}
			if ((i + j) == (size - 1))
			{
				sum2 = sum2 + a[k];
			}
		k++;
		}
	}
	printf("%d, %d\n", sum, sum2);
}
