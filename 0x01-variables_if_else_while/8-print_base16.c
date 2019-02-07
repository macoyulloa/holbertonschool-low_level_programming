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
	int n;
	char c;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);	
	}
	putchar('\n');
	return (0);
}
