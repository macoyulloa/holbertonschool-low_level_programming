#include <stdio.h>

/**
 * main - Entry point
 * function_name - Short description, single line
 * Description: Longer description of the function)?
 * section header: Section description)
 *
 * Return: always 0
 */
int main(void)
{
	char l, U;

	for (l = 'a' ; l <= 'z' ; l++)
	{
		putchar(l);
	}
	for (U = 'A' ; U <= 'Z' ; U++)
	{
		putchar(U);
	}
	putchar('\n');
	return (0);
}
