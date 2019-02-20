#include "holberton.h"

/**
 * rev_string - School students.
 * @s: pointer
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, leng, a;

	for (leng = 0; s[leng] != '\0'; leng++)
	{
	}
	for (i = 0; i < leng / 2; i++)
	{
		a = s[i];
		s[i] = s[leng - i - 1];
		s[leng - i - 1] = a;
	}
}
