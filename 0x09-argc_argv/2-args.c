#include "holberton.h"
#include <stdio.h>

/**
 * main - function.
 * @argc: input
 * @argv: array
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
