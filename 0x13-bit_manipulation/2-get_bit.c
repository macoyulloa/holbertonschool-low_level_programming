#include <stdio.h>
#include "holberton.h"
/**
 * get_bit - return value of a bite.
 * @n: number.
 * @index: point to the index.
 * Return: void.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 64)
		return ((n >> index) & 1);
	return (-1);
}
