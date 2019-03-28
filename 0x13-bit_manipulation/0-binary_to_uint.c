#include <stdio.h>
#include "holberton.h"
/**
 * myAtoi - first point.
 * @str: string.
 * Return: unsigned int.
 */
unsigned int myAtoi(const char *str)
{
	unsigned int res = 0, i = 0;

	for (; str[i] != '\0'; ++i)
		res = (res * 10) + str[i] - '0';
	return (res);
}
/**
 * binary_to_uint - first point.
 * @b: pointer to a string.
 * Return: decimal.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int last_digit = 0, n;
	unsigned int dec_value = 0, base = 1;

	if (b == NULL)
		return (0);
	n = myAtoi(b);
	while (n)
	{
		last_digit = n % 10;
		if (last_digit != 0 && last_digit != 1)
			return (0);
		n = n / 10;
		dec_value += last_digit * base;
		base = base * 2;
	}
	return (dec_value);
}
