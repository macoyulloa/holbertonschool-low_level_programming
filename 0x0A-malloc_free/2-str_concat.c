#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - description
 * @s1: pointer
 * @s2: pointer
 *
 * Return: Nothing.
 */
char *str_concat(char *s1, char *s2)
{
	int leng1, leng2, leng;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (leng1 = 0; s1[leng1] != '\0'; leng1++)
	{
	}
	for (leng2 = 0; s2[leng2] != '\0'; leng2++)
	{
	}
	leng2 = leng2 + 1;
	leng = leng1 + leng2;
	s = malloc(leng * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		for (leng1 = 0; s1[leng1] != '\0'; leng1++)
			s[leng1] = s1[leng1];
		for (leng2 = 0; s2[leng2] != '\0'; leng2++)
			s[leng2 + leng1] = s2[leng2];
		return (s);
	}
	return (NULL);
}
