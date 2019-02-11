#include "holberton.h"

/**
 * main - funtion main of the indicated point 
 * @c: The character to print
 *
 * Return: always return 0.
 */
int _islower(int c)
{	
	if (c > 'a' && c < 'z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
	_putchar('\n');
}
