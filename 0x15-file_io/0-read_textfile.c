#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: a pointer
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);
	if (w == -1)
		return (0);
	close(fd);
	return (w);
}
