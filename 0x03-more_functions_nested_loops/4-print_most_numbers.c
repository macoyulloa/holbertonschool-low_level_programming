#include "holberton.h"

/**
 * print_most_numbers - exercises uses the loops
 *
 *
 * Return: always 0.
 */

void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
		if (a != 4 && a != 2)
		{
			_putchar (a + '0');
		}
			_putchar ('\n');
}
