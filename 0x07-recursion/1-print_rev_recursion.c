#include "holberton.h"
#include <stdio.h>

/**
 * final - it is a funtion to print
 * @s1: pointer
 * Return: dependes on the recusion case
 */
void final(char *s1)
{
	if (*s1 != '\n')
	{
		s1--;
		_putchar(*s1);
		final(s1);
	}
}
/**
 * _print_rev_recursion - it is a funtion to print
 * @s: pointer
 * Return: dependes on the recusion case
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
	}
	else
	{
		final(s);
	}
}
