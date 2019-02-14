#include "holberton.h"

/**
 * print_diagonal - exercises uses the loops
 * @n: input
 *
 * Return: always 0.
 */

void print_diagonal(int n)
{
	int d, s;

	if (n > 0)
	{
		for (d = 0; d < n; d++)
		{
			for (s = 0; s < d; s++)
			{
				_putchar (' ');
			}
			_putchar ('\\');
			_putchar ('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
