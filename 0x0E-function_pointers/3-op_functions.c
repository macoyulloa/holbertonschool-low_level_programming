#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - operations
 * @a: input
 * @b: input
 * Return: result.
 */
int op_add(int a, int b)
{
	int c;

	if (a && b)
		c = a + b;
	return (c);
}
/**
 * op_sub - operations
 * @a: input
 * @b: input
 * Return: result.
 */
int op_sub(int a, int b)
{
	int c;

	if (a && b)
		c = a - b;
	return (c);
}
/**
 * op_mul - operations
 * @a: input
 * @b: input
 * Return: result.
 */
int op_mul(int a, int b)
{
	int c;

	if (a && b)
		c = a * b;
	return (c);
}
/**
 * op_div - operations
 * @a: input
 * @b: input
 * Return: result.
 */
int op_div(int a, int b)
{
	int c;

	if (a && b)
		c = a / b;
	return (c);
}
/**
 * op_mod - operations
 * @a: input
 * @b: input
 * Return: result.
 */
int op_mod(int a, int b)
{
	int c;

	if (a && b)
		c = a % b;
	return (c);
}
