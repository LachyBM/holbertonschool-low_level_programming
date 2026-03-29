#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile- reads text file
 * @filename: filename
 * @letter: num of letters
 * Return: letters printed or error
 */

ssize_t read_textfile(const char *filename, size_t letter)
{
	int fd;
	char *buffer;
	ssize_t r;
	ssize_t w;

	if (!filename || (letter == 0))
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letter);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	r = read(fd, buffer, letter);
	if (r == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1 || w != r)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (w);
}

