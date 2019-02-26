#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - funtion.
 * @s: pointer
 * @accept: pointer
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, c;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (c = 0; accept[c] != '\0'; c++)
		{
			if (s[i] == accept[c])
				count++;
		}
		if ((i + 1) != count)
		{
			break;
		}
	}
	return (count);
}
