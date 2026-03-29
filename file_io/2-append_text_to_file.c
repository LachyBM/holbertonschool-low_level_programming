#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file- Creates a file
 * @filename: name of file
 * @text_content: text wanted within file
 * Return: -1 if failure, 1 success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;
	size_t length = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}

	length = strlen(text_content);
	w = write(fd, text_content, length);
	if (w == -1 || (size_t)w != length)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
