#include "holberton.h"
#include <stdio.h>

/**
 * _print_rev_recursion - it is a funtion to print
 * @s: pointer
 * Return: dependes on the recusion case
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
