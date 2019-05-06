#include "holberton.h"

/**
 * _isupper - exercises uses the loops
 *
 * @c: input
 * Return: always 0.
 */

int _isupper(int c)
{
	int upper;

	upper = c >= 'A' && c <= 'Z' ? 1 : 0;
	return (upper);
}
