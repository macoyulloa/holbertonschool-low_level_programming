#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - funtion.
 * @haystack: pointer
 * @needle: pointer
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, c, count;

	for (count = 0; needle[count] != '\0'; count++)
	{
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (c = 0; haystack[i + c] == needle[c]; c++)
			{
				if (c == (count - 1))
				{
					return (haystack + i);
				}
			}
		}
	}
	return (0);
}
