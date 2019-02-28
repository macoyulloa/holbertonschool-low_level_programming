#include "holberton.h"
#include <stdio.h>

/**
 * prime - it is a funtion to print
 * @n1: input
 * @i: input
 * Return: dependes on the recusion case
 */
int prime(int i, int n1)
{
	if ((n1 == i) && (n1 % i == 0))
		return (1);
	else if (n1 % i == 0)
		return (0);
	else if (i < n1)
		return (prime(i + 1, n1));
	return (0);
}
/**
 * is_prime_number - it is a funtion to print
 * @n: input
 * Return: dependes on the recusion case
 */
int is_prime_number(int n)
{
	int validacion;

	validacion = prime(2, n);
	if (validacion == 1)
		return (validacion);
	return (0);
}
