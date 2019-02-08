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
	int n, p, s;

	for (n = 0; n < 100; n++)
	{
		p = n / 10;
		s = n % 10;
		if (p<s)
		{
			putchar(p + '0');
			putchar(s + '0');
			if (n < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
