#include "holberton.h"

/**
 * print_numbers - exercises uses the loops
 *
 *
 * Return: always 0.
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	_putchar (a + '0');
	_putchar ('\n');
}
