#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - reads 1024 byte at a time from a file
 * @file: file whose characters are stored by buffer
 * Return: address of new buffer
 */

char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buf);
}

/**
 * close_file - closes a file descriptor
 * @fd: a ile escriptor
 * Return: nothing
 */

void close_file(int fd)
{
	int m;

	m = close(fd);
	if (m == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies content from file_from to file_to
 * @argc: argument counter
 * @argv: argument vector
 * Return: copied content
 */

int main(int argc, char *argv[])
{
	int f_from;
	int f_to;
	int r;
	int w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
				"Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = create_buffer(argv[2]);
	f_from = open(argv[1], O_RDONLY);
	r = read(f_from, buf, 1024);
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
	if (f_from == -1)
	dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
	exit(98);
	if (r == -1)
	dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
	exit(98);
	} while
	(w = write(f_to, buf, r));
	if (f_to == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
	if (w == -1)
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
	exit(99);

	r = read(f_from, buf, 1024);
	f_to = open(argv[2], O_WRONLY | O_APPEND);
	}
	if (r > 0)
	close_file(f_from);
	close_file(f_to);
	return (0);
}
