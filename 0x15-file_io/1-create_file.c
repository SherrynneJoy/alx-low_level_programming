#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: null terminated string to write to the file
 * Return: 1 if successful and -1 if not
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int w;
	int length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
	for (length = 0; text_content[length]; length++);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	w = write(fd, text_content, length);
	if (fd == 1)
		return (-1);
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
