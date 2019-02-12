#include "holberton.h"

/**
 * times_table - funtion main of the indicated point
 *
 * Return: always return 0.
 */
void times_table(void)
{
	int b, i, t;

	for (b = 0 ; b <= 9 ; b++)
	{
		for (i = 0 ; i <= 9 ; i++)
		{
			t = i * b;
			if (t <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(t + '0');
				_putchar(',');
			}
			else
			{
				_putchar(' ');
				_putchar(t / 10 + '0');
				_putchar(t % 10 + '0');
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
