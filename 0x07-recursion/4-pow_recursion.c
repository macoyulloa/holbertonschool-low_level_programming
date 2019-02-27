#include "holberton.h"
#include <stdio.h>

/**
 * _pow_recursion - it is a funtion to print
 * @x: input
 * @y: input
 * Return: dependes on the recusion case
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
