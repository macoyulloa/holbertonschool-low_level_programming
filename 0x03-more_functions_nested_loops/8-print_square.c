#include "holberton.h"

/**
 * print_square - exercises uses the loops
 * @size: input
 *
 * Return: always 0.
 */

void print_square(int size)
{
	int d, s;

	if (size > 0)
	{
		for (d = 0; d < size; d++)
		{
			for (s = 0; s < size; s++)
			{
				_putchar ('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
