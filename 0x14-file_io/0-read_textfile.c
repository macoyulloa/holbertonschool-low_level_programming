#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * read_textfile - read a file.
 * @filename: name of the file
 * @letters: the number of letters it should read and print.
 * Return: the number of letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, res_read, res_write;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	file = open(filename, O_RDONLY);
	if (file == -1 || filename == NULL)
		return (0);
	res_read = read(file, buf, letters);
	if (res_read == -1)
		return (0);
	close(file);
	res_write = write(STDOUT_FILENO, buf, res_read);
	if (res_write == -1)
		return (0);
	return (res_read);
}
