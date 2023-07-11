#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text at the end of the file
 * @filename: name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int p, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	p = open(filename, O_WRONLY | O_APPEND);
	w = write(p, text_content, length);

	if (p == -1 || w == -1)
		return (-1);

	close(p);

	return (1);
}
