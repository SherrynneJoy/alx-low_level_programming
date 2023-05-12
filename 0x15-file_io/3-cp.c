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
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - closes a file descriptor
 * @fd: a file descriptor
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
	int from;
	int to;
	int r;
	int w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
				"Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
	if (from == -1)
	{
	dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
	if (r == -1)
	dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}

	w = write(to, buffer, r);
	if (to == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
	if (w == -1)
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
	exit(99);
	}

	r = read(from, buffer, 1024);
	to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);
	close_file(from);
	close_file(to);

	return (0);
}
