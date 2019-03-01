#include "holberton.h"

/**
 * _isdigit - exercises uses the loops
 *
 * @c: input
 * Return: always 0.
 */

int _isdigit(int c)
{
	int digit;

	digit = c >= '0' && c <= '9' ? 1 : 0;
	return (digit);
}
