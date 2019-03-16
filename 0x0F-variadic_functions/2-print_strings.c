#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - suma de los argumentos.
 * @n: argumentos.
 * @separator: argumentos.
 * Return: int.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list letras;
	unsigned int count;
	char *p;

	va_start(letras, n);
	if (separator == NULL)
	{
		for (count = 0; count < n; count++)
		{
			p = va_arg(letras, char *);
			if (p == NULL)
				printf("(nil)");
			printf("%s", p);
		}
	}
	else
	{
		for (count = 0; count < n; count++)
		{
			p = va_arg(letras, char *);
			if (p == NULL)
				printf("(nil)");
			else if (count < (n - 1))
				printf("%s%s", p, separator);
			else
				printf("%s", p);
		}
	va_end(letras);
	}
	printf("\n");
}
