#include <stdio.h>
#include "holberton.h"
/**
 * count - return count of bites.
 * @n: number.
 * Return: count.
 */
unsigned long int count(unsigned long int n)
{
	unsigned long int count = 0;

	while (n)
	{
		count = count + (n & 1);
		n >>= 1;
	}
	return (count);
}
/**
 * flip_bits - return the number of bits you would need to flip.
 * @n: number.
 * @m: flip the bits.
 * Return: void.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count(n ^ m));
}
