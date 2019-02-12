#include "holberton.h"

/**
 * print_alphabet_x10 - funtion main of the indicated point
 *
 * Return: always return 0.
 */
void print_alphabet_x10(void)
{
	int cont = 1;
	char l;

	for (cont = 1 ; cont <= 10 ; cont++)
	{
		for (l = 'a' ; l <= 'z' ; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
