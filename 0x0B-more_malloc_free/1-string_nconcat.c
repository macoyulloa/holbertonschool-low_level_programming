#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function concatenar
 * @s1: pointer
 * @s2: pointer
 * @n: input
 * Return: depends on the case.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int leng1, leng2, count;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (leng1 = 0; s1[leng1] != '\0'; leng1++)
	;
	for (leng2 = 0; s2[leng2] != '\0'; leng2++)
	;
	if (leng2 < n)
		count = leng2;
	else
		count = n;
	s = malloc(sizeof(char) * (leng1 + count) + 1);
	if (s == NULL)
		return (NULL);
	for (leng1 = 0; s1[leng1] != '\0'; leng1++)
		s[leng1] = s1[leng1];
	for (leng2 = 0; leng2 < count; leng2++)
		s[leng2 + leng1] = s2[leng2];
	return (s);
}
