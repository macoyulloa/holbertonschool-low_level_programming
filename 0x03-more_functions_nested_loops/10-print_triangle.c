#include "holberton.h"

/**
 * print_triangle - exercises uses the loops
 * @size: input
 *
 * Return: always 0.
 */

void print_triangle(int size)
{
	int d, s, m;

	if (size > 0)
	{
		for (d = 0; d <= size; d++)
		{
			if (d > 0)
			for (m = (size - d); m > 0; m--)
			{
				_putchar (' ');
			}
			for (s = 0; s < d; s++)
			{
				_putchar ('#');
			}
			if (d > 0)
			_putchar ('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
