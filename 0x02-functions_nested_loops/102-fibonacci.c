#include <stdio.h>

/**
 * main - funtion main of the indicated point
 *
 * Return: always return 0.
 */
int main(void)
{
	int n = 0;
	int b = 1;

	printf("%d, ", n);
	for (b = 1 ; b < 50 ; b++)
	{
		n = n + b;
		if (b != 49)
		{
			printf("%d, ", n);
		}
		else if (b == 49)
		{
			printf("%d", n);
		}
	}
	printf("\n");
	return (0);
}
