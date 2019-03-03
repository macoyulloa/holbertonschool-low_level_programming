#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function.
 * @argc: input
 * @argv: array
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
