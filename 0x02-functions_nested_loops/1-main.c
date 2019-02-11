#include "holberton.h"

/**
 * main - funtion main of the indicated point 
 * @c: The character to print
 *
 * Return: always return 0.
 */
void print_alphabet(void)
{
	char l;

	for (l = 'a' ; l <= 'z' ; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
