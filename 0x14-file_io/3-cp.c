#include "holberton.h"
/**
 * main - copies the content of a file to another file.
 * @ac: number of arguments
 * @av: array
 * Return: success.
 */
int main(int ac, char **av)
{
	int file_from, file_to;

	if (ac != 3)
	{
		file_from = open(av[1], O_RDONLY);
		if (file_from == -1)
		{
			write(file_from, "Error: Can't read from file NAME_OF_THE_FILE\n", 45);
			exit(98);
		}
		file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
		if (file_to == -1)
		{
			write(file_to, "Error: Can't close fd FD_VALUE, followed by a new line, on the POSIX\n", 69);
			exit(100);
		}
	}
	return (1);
}
