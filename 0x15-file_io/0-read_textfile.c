#include "main.h"

/**
 * read_textfile - reads a text file and prints its content to stdout
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 * Return: number of printed letters, or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
