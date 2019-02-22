#include "holberton.h"
#include <stdio.h>

/**
 * leet - check the code for Holberton School students.
 * @s: pointer
 * Return: Always 0.
 */
char *leet(char *s)
{
	int len, temp;
	char letras[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (len = 0; s[len]; len++)
	{
		for (temp = 0; letras[temp]; temp++)
		{
			if (s[len] == letras[temp])
			{
				s[len] = num[temp];
			}
		}
	}
	return (s);
}
