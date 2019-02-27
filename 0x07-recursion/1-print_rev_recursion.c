#include "holberton.h"
#include <stdio.h>

/**
 * _puts_recursion - it is the funtion
 * @s: pointer
 *
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
void _print_rev_recursion(char *s)
{
	if ( *s != '\0')
	{
		s++;
		_print_rev_recursion(s);
	}
	else 
	{
		final(s);
	}	
	
}
