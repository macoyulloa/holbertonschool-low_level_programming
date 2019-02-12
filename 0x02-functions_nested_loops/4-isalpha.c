#include "holberton.h"

/**
 * _isalpha - funtion main of the indicated point
 * @c: The character to print
 *
 * Return: always return 0.
 */
int _isalpha(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	if (c > 'A' && c < 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
