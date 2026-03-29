#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"


/**
 * error-basic error pritner
 * @code: error code being printed
 * @msg: the message being printed
 * @file: the file
 */

void error(int code, char *msg, char *file)
{
	dprintf(STDERR_FILENO, msg, file);
	exit(code);
}

/**
 * error_file-error2 printer
 * @file: the file
 */

void error_file(int file)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
	exit(100);
}

/**
 * main- copies a file
 * @argc: arg count
 * @argv: arg vec
 * Return: Value
 */

int main(int argc, char **argv)
{
	int file_from, file_to;
	ssize_t w, r;
	char buf[1024];

	if (argc != 3)
		error(97, "Usage: cp file_from file_to\n", "");

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error(98, "Error: Can't read from file %s\n", argv[1]);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		error(99, "Error: Can't write to %s\n", argv[2]);

	while ((r = read(file_from, buf, 1024)) > 0)
	{
		w = write(file_to, buf, r);
		if (w == -1 || w != r)
			error(99, "Error: Can't write to %s\n", argv[2]);
	}

	if (r == -1)
		error(98, "Error: Can't read from file %s\n", argv[1]);

	if (close(file_from) == -1)
		error_file(file_from);

	if (close(file_to) == -1)
		error_file(file_to);

	return (0);
}
