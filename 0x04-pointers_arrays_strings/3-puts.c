#include "holberton.h"

/**
 * _puts - code for Holberton School students.
 * @s: pointer
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar ('\n');
}
