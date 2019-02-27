#include "holberton.h"
#include <stdio.h>

/**
 * factorial - it is a funtion to print
 * @n: pointer
 * Return: dependes on the recusion case
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n < 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
