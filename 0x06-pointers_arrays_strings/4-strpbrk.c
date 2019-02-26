#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - funtion.
 * @s: pointer
 * @accept: pointer
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, c;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (c = 0; accept[c] != '\0'; c++)
		{
			if (accept[c] == s[i])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
