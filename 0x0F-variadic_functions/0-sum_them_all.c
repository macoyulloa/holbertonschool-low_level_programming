#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - suma de los argumentos.
 * @n: argumentos.
 * Return: int.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int i = 0, j;

	if (n == 0)
		return (0);
	va_start(sum, n);
	for (j = 0; j <= n; j++)
		i = i + va_arg(sum, int);
	va_end(sum);
	return (i);
}
