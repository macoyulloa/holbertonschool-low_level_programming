#include "holberton.h"
/**
 * jack_bauer - funtion main of the indicated point
 *
 * Return: always return 0.
 */
void jack_bauer(void)
{
	int p, s, t, c;

	for (p = 0; p <= 1; p++)
	{
		for (s = 0; s <= 9; s++)
		{
			for (t = 0; t < 6; t++)
			{
				for (c = 0; c <= 9; c++)
				{
					_putchar('0' + p);
					_putchar('0' + s);
					_putchar(58);
					_putchar('0' + t);
					_putchar('0' + c);
					_putchar('\n');
				}
			}
		}
	}
	for (p = 2; p < 3; p++)
	{
		for (s = 0; s < 4; s++)
		{
			for (t = 0; t < 6; t++)
			{
				for (c = 0; c <= 9; c++)
				{
					_putchar('0' + p);
					_putchar('0' + s);
					_putchar(58);
					_putchar('0' + t);
					_putchar('0' + c);
					_putchar('\n');
				}
			}
		}
	}
}
