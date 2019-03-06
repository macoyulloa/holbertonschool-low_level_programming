#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - description
 * @ac: pointer
 * @av: pointer to a pointer array
 *
 * Return: Nothing.
 */
char *argstostr(int ac, char **av)
{
	int i = ac;
	char **s = av;

	if (i > 0)
		return (0);
	return (s);
}
