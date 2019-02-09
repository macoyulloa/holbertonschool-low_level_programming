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
	int n, o, p, q;

	for (n = '0'; n <= '9'; n++)
	{
		for (o = '0'; o <= '9'; o++)
		{
			for (p = '0'; p <= '9'; p++)
			{
				for (q = '0'; q <= '9'; q++)
				{
					if (o < q)
					{
						putchar(n);
						putchar(o);
						putchar(' ');
						putchar(p);
						putchar(q);
						if (n == '9' && o == '8' && p == '9' && q == '9')
						{
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
