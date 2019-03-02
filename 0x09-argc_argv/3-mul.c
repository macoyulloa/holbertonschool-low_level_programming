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
	int mul = 0;

	if (argc > 2 && argc < 4)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
