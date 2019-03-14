#include <stdio.h>
#include <stdlib.h>

/**
 * main - description.
 * @argc: input
 * @argv: input
 * Return: nothing.
**/
void main(int argc, char *argv[])
{
	int x = atoi(argv[1]);

	if (x <= 0)
	{
		printf("Error\n");
		exit(2);
	}
	else if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	printf("%0x\n", x);
}
