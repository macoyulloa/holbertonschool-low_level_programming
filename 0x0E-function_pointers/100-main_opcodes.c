#include <stdio.h>
#include <stdlib.h>

/**
 * main - description.
 * @argc: input
 * @argv: input
 * Return: nothing.
**/
int main(int argc, char *argv[])
{
	if (atoi(argv[1]) <= 0)
	{
		printf("Error\n");
		exit(2);
	}
	else if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	return (0);
}
