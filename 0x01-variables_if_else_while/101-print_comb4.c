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
	int n, num, segDig, primDig, terDig;

	for (n = 10; n < 800; n++)
	{
		num = n / 10;
		segDig = num % 10;
		primDig = n / 100;
		terDig = n % 10;
		if (segDig < terDig)
		{
			putchar(primDig + '0');
			putchar(segDig + '0');
			putchar(terDig + '0');
			if (n < 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
