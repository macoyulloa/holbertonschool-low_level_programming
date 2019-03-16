#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - suma de los argumentos.
 * @n: argumentos.
 * @separator: argumentos.
 * Return: int.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numeros;
	unsigned int count;

	va_start(numeros, n);
	if (separator == NULL)
		for (count = 0; count < n; count++)
			printf("%d", va_arg(numeros, int));
	else
		for (count = 0; count < n; count++)
			if (count < (n - 1))
				printf("%d%s", va_arg(numeros, int), separator);
			else
				printf("%d", va_arg(numeros, int));
	va_end(numeros);
	printf("\n");
}
