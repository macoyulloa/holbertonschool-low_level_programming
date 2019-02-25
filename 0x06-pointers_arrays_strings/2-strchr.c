#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - funtion.
 * @s: pointer
 * @c: input
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int i, caracter;

	for (i = 0; s[0] != '\0'; i++, s++)
	{
		for (caracter = 32; caracter != s[0]; caracter++)
		{
		}
	if (caracter == c)
		return (s);
	}
	return ('\0');
}
