#include "holberton.h"
#include <stdio.h>

/**
 * leet - check the code for Holberton School students.
 * @s: pointer
 * Return: Always 0.
 */
char *rot13(char *s)
{
	int len, temp;
	char letras[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char rot13[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (len = 0; s[len]; len++)
	{
		for (temp = 0; letras[temp]; temp++)
		{
			if (s[len] == letras[temp])
			{
				s[len] = rot13[temp];
				break;
			}
		}
	}
	return (s);
}
