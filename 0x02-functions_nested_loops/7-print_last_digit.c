#include "holberton.h"

/**
 * print_last_digit - funtion main of the indicated point
 * @n: The character to print
 *
 * Return: always return 0.
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		n = n % 10;
		_putchar (n + '0');
		return (n);
	}
	else
	{
		n = n * -1;
		n = n % 10;
		_putchar (n + '0');
		return (n);
	}
}
