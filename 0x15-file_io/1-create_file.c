#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	int length;
	int w = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	w = write(fd, text_content, length);
	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
