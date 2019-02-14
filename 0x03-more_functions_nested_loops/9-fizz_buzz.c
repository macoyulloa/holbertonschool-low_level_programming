#include <stdio.h>

/**
 * main - exercises uses the loops
 *
 *
 * Return: always 0.
 */

int main(void)
{
	int d;

	for (d = 1; d <= 100; d++)
	{
		if ((d % 3 == 0) && (d % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (d % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (d % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (d == 100)
		{
			printf("%d", d);
		}
		else
		{
			printf("%d ", d);
		}
	}
	printf("\n");
	return (0);
}
