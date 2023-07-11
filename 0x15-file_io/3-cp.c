#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>

char *buffer(char *ptr);
void close_fd(int fd);

/**
 * buffer - creates space in memory to store the copied content
 * @ptr: pointer to file
 * Return: 0 when successful
 */

char *create_buffer(char *ptr)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", ptr);
		exit(99);
	}
	return (buffer);
}

/**
 * close_fd - closes file descriptors
 * @fd: file descriptor to be closed
 * Return: 0 when successful
 */

void close_fd(int fd)
{
	int m = 0;

	if (m == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fD %d\n", fd);
		exit(100);
	}
}

/**
 * main - main entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0when successful
 */

int main(int argc, char *argv[])
{
	int to, from, w, r;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}
	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (r == -1 || from == -1)
		{
			dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buffer);
	close_fd(from);
	close_fd(to);

	return (0);
}
