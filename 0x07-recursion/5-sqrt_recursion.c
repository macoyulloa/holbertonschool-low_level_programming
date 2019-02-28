#include "holberton.h"
#include <stdio.h>

/**
 * iteracion - it is a funtion to print
 * @n1: input
 * @i: input
 * Return: dependes on the recusion case
 */
int iteracion(int i, int n1)
{
	if (n1 == (i * i))
		return (i);
	else if (i > n1)
		return (-1);
	else if (n1 != (i * i))
		return (iteracion(i + 1, n1));
	return (-1);
}
/**
 * _sqrt_recursion - it is a funtion to print
 * @n: input
 * Return: dependes on the recusion case
 */
int _sqrt_recursion(int n)
{
	int frec;

	frec = iteracion(1, n);
	if (n == (frec * frec))
		return (frec);
	return (-1);
}
