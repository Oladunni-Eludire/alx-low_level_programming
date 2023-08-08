#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read a text file and prints it to STDOUT.
 * @filename: name of file to be read
 * @letters: letters to be read
 * Return: number of letters read and printed,
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fd);
	return (w);
}
