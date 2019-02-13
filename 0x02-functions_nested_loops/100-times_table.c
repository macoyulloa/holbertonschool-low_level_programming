#include "holberton.h"

/**
 * times_table - funtion main of the indicated point
 *
 * Return: always return 0.
 */
void print_times_table(int n)
{
	int b, i, t;

	if (n > 0 && n < 15)
	{
		for (b = 0 ; b <= n ; b++)
		{
			for (i = 0 ; i <= n ; i++)
			{
				t = i * b;
				if (t <= 9)
				{
					if (i > 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(t + '0');
					if (i != n)
						_putchar(',');
				}
				else if (t >= 10 && t <= 99)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(t / 10 + '0');
					_putchar(t % 10 + '0');
					if (i != n)
						_putchar(',');
				}
                                else
				{
					_putchar(' ');
					_putchar(t / 100 + '0');
					_putchar(((t / 10) % 10) + '0');
					_putchar(t % 10 + '0');
					if (i != n)
						_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
