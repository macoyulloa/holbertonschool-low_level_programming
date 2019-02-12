#include "holberton.h"

/**
 * main - funtion main of the indicated point
 * @c: The character to print
 *
 * Return: always return 0.
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = n * -1;
		return (n);
	}
}
