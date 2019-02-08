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
	int n, o, p;

	for (n = '0'; n <= '7'; n++)
	{
		for (o = '1'; o <= '9'; o++)
		{
			for (p = '2'; p <= '9'; p++)
			{
				if (n < o && o < p)
				{
					putchar(n);
					putchar(o);
					putchar(p);
					if (n == '7' && o == '8' && p == '9')
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
	putchar('\n');
	return (0);
}
