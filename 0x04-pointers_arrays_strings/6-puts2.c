#include "holberton.h"

/**
 * puts2 - code for Holberton School students.
 * @str: pointer
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar ('\n');
}
