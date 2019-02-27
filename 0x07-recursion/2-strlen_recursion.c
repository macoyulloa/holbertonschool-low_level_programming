#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion - it is a funtion to print
 * @s: pointer
 * Return: dependes on the recusion case
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count++;
		return (count + _strlen_recursion(s + 1));
	}
	return (0);
}
