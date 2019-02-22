#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - check the code for Holberton School students.
 * @s: pointer
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
	int j, i;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 'a'; i != 'z'; i++)
		{
			if (s[j] == i)
			s[j] = s[j] - 32;
		}
	}
	return (s);
}
