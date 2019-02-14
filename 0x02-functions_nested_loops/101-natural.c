#include <stdio.h>

/**
 * times_table - funtion main of the indicated point
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
		if (n%3 == 0 || n%5 == 0)
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	return(0);
}
