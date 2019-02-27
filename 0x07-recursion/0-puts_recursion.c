#include "holberton.h"
#include <stdio.h>

/**
 * _puts_recursion - it is the funtion
 * @s: pointer
 *
 * Return: dependes on the recusion case
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
