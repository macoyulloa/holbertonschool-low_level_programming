#include <stdio.h>

/**
 * main - funtion main of the indicated point
 *
 * Return: always return 0.
 */
int main(void)
{
	int n = 0;
	int b;

	for (b = 1 ; b < 1024 ; b++)
	{
		n = n + b;
		if (b % 3 == 0 || b % 5 == 0)
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	return (0);
}
