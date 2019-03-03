#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function.
 * @argc: input
 * @argv: array
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;
	char *p;

	if (argc > 0)
	{
		for (i = 1; i < argc; i++)
		{
		p = argv[i];
			for (j = 0; p[j] != '\0'; j++)
			{
				if (isalpha(p[j]))
				{
					printf("Error\n");
					return (1);
				}
			}
		sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
