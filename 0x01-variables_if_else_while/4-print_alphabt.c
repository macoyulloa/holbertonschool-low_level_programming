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
	char l;

	for (l = 'a' ; l <= 'z' ; l++)
	{
		if (l != 'e' && l != 'q')
		{
			putchar(l);
		}
	}
	putchar('\n');
	return (0);
}
