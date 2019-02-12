#include "holberton.h"

/**
 * print_last_digit - funtion main of the indicated point
 * @n: The character to print
 *
 * Return: always return 0.
 */
int print_last_digit(int n)
{
	int p;
	int n1;

	if (n >= 0)
	{
		p = n % 10;
		_putchar (p + '0');
		return (p);
	}
	else
	{
		n1 = n * -1;
		p = n1 % 10;
		_putchar (p + '0');
		return (p);
	}
}
