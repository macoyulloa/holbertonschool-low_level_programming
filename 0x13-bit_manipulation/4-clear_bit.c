#include <stdio.h>
#include "holberton.h"
/**
 * clear_bit - return value of a bite.
 * @n: number.
 * @index: point to the index.
 * Return: void.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int masc = 1;

	if (index < 64)
	{
		masc = masc << index;
		*n = *n & (~masc);
		return (1);
	}
	return (-1);
}
