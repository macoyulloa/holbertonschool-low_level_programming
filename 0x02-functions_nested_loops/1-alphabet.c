#include "holberton.h"

/**
 * print_alphabet - funtion main of the indicated point
 *
 * Description - Lilphabet description of the function
 *
 * Return: Description of the returned value
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
