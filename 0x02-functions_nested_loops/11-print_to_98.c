#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - funtion main of the indicated point
 * @n: The character to print
 *
 * Return: always return 0.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 98 ; ++n)
		{
			if (n < 98)
			{
				printf("%d, ", n);
			}
			else if (n == 98)
			{
				printf("%d", n);
			}
		}
	printf("\n");
	}
	else if (n > 98)
	{
		for (n = n; n >= 98 ; n--)
		{
			if (n > 98)
			{
			printf("%d, ", n);
			}
			else if (n == 98)
			{
				printf("%d", n);
			}
		}
	printf("\n");
	}
	if (n == 98)
	{
		printf("%d", n);
		printf("\n");
	}
}
