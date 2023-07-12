#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - main entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0when successful
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	openFile(argv[1], argv[2]);
	return (0);
}

/**
 * openFile - opens the file to copy content
 * @from_file: file to be read
 * @to_file: file in which content will be copied into
 * Return: 0 when successful
 */

void openFile(const char *from_file, const char *to_file)
{
	int fd1, fd2;
	char *buffer;
	int fd1_close, fd2_close;

	fd1 = open(from_file, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", from_file);
		exit(98);
	}
	fd2 = open(to_file, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", to_file);
		exit(99);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		close(fd1);
		close(fd2);
		return;
	}
	copyFile(fd1, fd2, from_file, to_file, buffer);
	fd1_close = close(fd1);
		if (fd1_close == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't close fd %d\n", fd1);
			exit(100);
		}
	fd2_close = close(fd2);
		if (fd2_close == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't close fd %d\n", fd2);
			exit(100);
		}
}

/**
 * copyFile - copies content from one file to another
 * @fd1: file descriptor one
 * @fd2: second file descriptor
 * @f1: first file
 * @f2: second file
 * @buffer: memory allocated for copied content
 * Return: 0 when successful
 */

void copyFile(int fd1, int fd2, const char *f1, const char *f2, char *buffer)
{
	int r = 1;
	int w = 1;

	while (r != 0)
	{
		r = read(fd1, buffer, 1024);
		if (r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", f1);
			free(buffer);
			exit(98);
		}
		w = write(fd2, buffer, r);
		{
			if (w == -1)
			{
				dprintf(STDERR_FILENO,
						"Error: Can't write to %s\n", f2);
				free(buffer);
				exit(99);
			}
		}
	}
}
