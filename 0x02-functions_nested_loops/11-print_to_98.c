#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - funtion main of the indicated point
 *
 * Return: always return 0.
 */
void print_to_98(int n)
{
	if( n < 98)
	{
		for (n = n; n <= 98 ; n++)
		{
			if (n < 98)
			{
				printf("%d, ", n);
			}
			if (n == 98)
			{
				printf("%d", n);
			}
		}
		printf("\n");
	}
	if( n > 98)
	{
		for (n = n; n >= 98 ; n--)
		{
			if (n > 98)
			{
				printf("%d, ", n);
			}
			if (n == 98)
			{
				printf(" %d", n);
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
