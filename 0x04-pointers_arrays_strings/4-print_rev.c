#include "holberton.h"

/**
 * print_rev - School students.
 * @s: pointer
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i, j;

	for (j = 0; s[j] != '\0'; j++)
	{
	}
	for (i = j; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar ('\n');
}
