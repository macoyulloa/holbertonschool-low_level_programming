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

	if (c != '\0')
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			for (caracter = 32; caracter != s[i]; caracter++)
			{
			}
		if (caracter == c)
			return (s + i);
		}
	}
	else if (c == '\0')
	{
		return (s);
	}
	return (0);
}
