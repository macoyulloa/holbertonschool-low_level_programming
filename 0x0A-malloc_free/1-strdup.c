#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - description
 * @str: pointer
 *
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
	char *str1;
	int leng;

	str1 = str;
	if (str != NULL)
	{
		for (leng = 0; str1[leng] != '\0'; leng++)
		{
		}
		leng = leng + 1;
		str1 = malloc(sizeof(char) * leng);
		if (str1 == NULL)
		{
			return (NULL);
		}
		else
		{
			for (leng = 0; str[leng] != '\0'; leng++)
				str1[leng] = str[leng];
			return (str1);
		}
	}
	return (NULL);
}
