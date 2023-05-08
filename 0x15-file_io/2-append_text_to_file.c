#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: null terminates string to add at the end of the file
 * Return: 1 if successful and -1 if not
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int m;
	int w;
	int length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		length = 0;
		while (text_content[length])
			length++;
	}
	m = open(filename, O_WRONLY | O_APPEND);
	w = write(m, text_content, length);
	if (m == -1)
		return (-1);
	if (w == -1)
		return (-1);
	close(m);
	return (1);
}
