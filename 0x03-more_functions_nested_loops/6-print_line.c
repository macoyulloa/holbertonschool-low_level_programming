#include "holberton.h"

/**
 * print_line - exercises uses the loops
 * @n: input
 *
 * Return: always 0.
 */

void print_line(int n)
{
	if (n > 0)
	{
		for (n = n; n > 0; n--)
		{
			_putchar ('_');
		}
		_putchar ('\n');
	}
	else
	{
		_putchar ('\n');
	}
}
