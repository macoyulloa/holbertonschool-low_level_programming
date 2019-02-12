#include "holberton.h"

/**
 * main - funtion main of the indicated point
 * @c: The character to print
 *
 * Return: always return 0.
 */
void jack_bauer(void)
{
	int p, s, t, c;

	for (p = 0; p <= 2; p++)
	{
		for (s = 0; s <= 3; s++)
		{
			for (t = 0; t <= 5; t++)
			{
				for (c = 0; c <= 9; c++)
				{
					if (p == 2 && s == 3 && t == 5 && c == 9)
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
